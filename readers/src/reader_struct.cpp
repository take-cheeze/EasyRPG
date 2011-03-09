/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
/// Headers
////////////////////////////////////////////////////////////
#include <cstring>
#include <iostream>
#include <iomanip>
#include <boost/mpl/for_each.hpp>

#include "ldb_reader.h"
#include "lmt_reader.h"
#include "lmu_reader.h"
#include "lsd_reader.h"
#include "reader_struct.h"

#include "detail/all_field_map.h"

/// Read/Write Struct

/*
template <class S>
void Struct<S>::MakeFieldMap() {
	if (!field_map.empty())
		return;
	for (int i = 0; fields[i] != NULL; i++)
		field_map[fields[i]->id] = fields[i];
}

template <class S>
void Struct<S>::MakeTagMap() {
	if (!tag_map.empty())
		return;
	for (int i = 0; fields[i] != NULL; i++)
		tag_map[fields[i]->name] = fields[i];
}
*/

namespace { namespace Lcf {
	template<class Obj>
	struct FieldMapReader {
		unsigned const id_;
		Obj& obj_;
		LcfReader& stream_;
		size_t const length_;
		bool result_;

		FieldMapReader(unsigned const id, Obj& obj, LcfReader& stream, size_t const length)
		: id_(id), obj_(obj), stream_(stream), length_(length), result_(false) {}

		template <class T> inline void operator()(T const&) {}

		template<size_t ID, class Second>
		inline void operator()(boost::mpl::pair<boost::mpl::size_t<ID>, Second> const&) {
			if(ID != id_) return;

			Second::ReadLcf(obj_, stream_, length_);
			result_ = true;
		}
	};
	template<class Obj>
	struct FieldMapWriter {
		Obj const& obj_;
		LcfWriter& stream_;
		static Obj const default_;

		FieldMapWriter(Obj const& obj, LcfWriter& stream)
		: obj_(obj), stream_(stream) {}

		template <class T> inline void operator()(T const&) {}

		template<size_t ID, class Second>
		inline void operator()(boost::mpl::pair<boost::mpl::size_t<ID>, Second> const&) {
			if (Second::IsDefault(obj_, default_)) return;

			stream_.WriteInt(ID);
			stream_.WriteInt(Second::LcfSize(obj_, stream_));
			Second::WriteLcf(obj_, stream_);
		}
	};
	template<class Obj>
	struct FieldMapSize {
		Obj const& obj_;
		LcfWriter& stream_;
		size_t result_;
		static Obj const default_;

		FieldMapSize(Obj const& obj, LcfWriter& stream)
		: obj_(obj), stream_(stream) {}

		template <class T> inline void operator()(T const&) {}

		template<size_t ID, class Second>
		inline void operator()(boost::mpl::pair<boost::mpl::size_t<ID>, Second> const&) {
			if (Second::IsDefault(obj_, default_)) return;

			result_ += LcfReader::IntSize(ID);
			size_t const size = Second::LcfSize(obj_, stream_);
			result_ += LcfReader::IntSize(size);
			result_ += size;
		}
	};
} }

template <class S>
void Struct<S>::ReadLcf(S& obj, LcfReader& stream) {
	LcfReader::Chunk chunk_info;

	ID_reader::type::ReadID(obj, stream);

	while (!stream.Eof()) {
		chunk_info.ID = stream.ReadInt();
		if (chunk_info.ID == 0)
			break;

		chunk_info.length = stream.ReadInt();
		if (chunk_info.length == 0)
			continue;

		Lcf::FieldMapReader<S> f(chunk_info.ID, obj, stream, chunk_info.length);
		boost::mpl::for_each<Struct<S>::field_map::type>(f);
		if(!f.result_) stream.Skip(chunk_info);

		/*
		typename field_map_type::const_iterator it = field_map.find(chunk_info.ID);
		if (it != field_map.end())
			it->second->ReadLcf(obj, stream, chunk_info.length);
		else
			stream.Skip(chunk_info);
		*/
	}
}

template <class S>
void Struct<S>::WriteLcf(const S& obj, LcfWriter& stream) {
	ID_reader::type::WriteID(obj, stream);

	Lcf::FieldMapWriter<S> f(obj, stream);
	boost::mpl::for_each<Struct<S>::field_map::type>(f);

	/*
	S ref = S();
	int last = -1;
	for (int i = 0; fields[i] != NULL; i++) {
		const Field<S>* field = fields[i];
		if (field->id < last)
			std::cerr << "field order mismatch: " << field->id
					  << " after " << last
					  << " in struct " << name
					  << std::endl;
		if (field->IsDefault(obj, ref))
			continue;
		stream.WriteInt(field->id);
		stream.WriteInt(field->LcfSize(obj, stream));
		field->WriteLcf(obj, stream);
	}
	*/

	stream.WriteInt(0);
}

template <class S>
int Struct<S>::LcfSize(const S& obj, LcfWriter& stream) {
	int result = ID_reader::type::IDSize(obj);

	Lcf::FieldMapSize<S> f(obj, stream);
	boost::mpl::for_each<Struct<S>::field_map::type>(f);
	result += f.result_;

	/*
	S ref = S();
	for (int i = 0; fields[i] != NULL; i++) {
		const Field<S>* field = fields[i];
		if (field->IsDefault(obj, ref))
			continue;
		result += LcfReader::IntSize(field->id);
		int size = field->LcfSize(obj, stream);
		result += LcfReader::IntSize(size);
		result += size;
	}
	*/

	result += LcfReader::IntSize(0);
	return result;
}

namespace { namespace XML {
	template<class Obj>
	struct StartElement {
		std::string const name_;
		Obj& obj_;
		XmlReader& stream_;

		StartElement(std::string const& name, Obj& obj, XmlReader& stream)
		: name_(name), obj_(obj), stream_(stream) {}

		template <class T> inline void operator()(T const&) {}

		template<class First, class Second>
		inline void operator()(boost::mpl::pair<String<First>, Second> const&) {
			if(name_ != boost::mpl::c_str<First>::value) return;

			Second::BeginXml(obj_, stream_);
		}
	};
	template<class Obj>
	struct CharacterData {
		std::string const name_;
		std::string const data_;
		Obj& obj_;

		CharacterData(std::string const& name, Obj& obj, std::string const& data)
		: name_(name), data_(data), obj_(obj) {}

		template <class T> inline void operator()(T const&) {}

		template<class First, class Second>
		inline void operator()(boost::mpl::pair<String<First>, Second> const&) {
			if(name_ != boost::mpl::c_str<First>::value) return;

			Second::ParseXml(obj_, data_);
		}
	};
	template<class Obj>
	struct FieldMapWriter {
		Obj const& obj_;
		XmlWriter& stream_;
		static Obj const default_;

		FieldMapWriter(Obj const& obj, XmlWriter& stream)
		: obj_(obj), stream_(stream) {}

		template <class T> inline void operator()(T const&) {}

		template<class First, class Second>
		inline void operator()(boost::mpl::pair<String<First>, Second> const&) {
			Second::WriteXml(obj_, stream_);
		}
	};
} }

template <class S>
void Struct<S>::WriteXml(const S& obj, XmlWriter& stream) {
	ID_reader::type::WriteXmlTag(obj, name, stream);

	XML::FieldMapWriter<S> f(obj, stream);
	boost::mpl::for_each<typename Struct<S>::field_map::type>(f);

	/*
	for (int i = 0; fields[i] != NULL; i++) {
		const Field<S>* field = fields[i];
		field->WriteXml(obj, stream);
	}
	*/

	stream.EndElement(name);
}

template <class S>
class StructXmlHandler : public XmlHandler {
public:
	StructXmlHandler(S& ref) : ref(ref) /* , field(NULL) */ {}

	void StartElement(XmlReader& stream, const char* name, const char** /* atts */) {
		XML::StartElement<S> f(name, ref, stream);
		boost::mpl::for_each<typename Struct<S>::field_map::type>(f);
		this->name_ = name;

		/*
		field = Struct<S>::tag_map[name];
		field->BeginXml(ref, stream);
		*/
	}

	void EndElement(XmlReader& /* stream */, const char* /* name */) {
		// field = NULL;
	}

	void CharacterData(XmlReader& /* stream */, const std::string& data) {
#if 0
		if (field != NULL)
			field->ParseXml(ref, data);
#endif
		XML::CharacterData<S> f(name_, ref, data);
		boost::mpl::for_each<typename Struct<S>::field_map::type>(f);
	}
private:
	S& ref;
	char const* name_;
	// const Field<S>* field;
};

template <class S>
class StructFieldXmlHandler : public XmlHandler {
public:
	StructFieldXmlHandler(S& ref) : ref(ref) {}

	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		if (strcmp(name, Struct<S>::name) != 0)
			stream.Error("Expecting %s but got %s", Struct<S>::name, name);
		Struct<S>::ID_reader::type::ReadIDXml(ref, atts);
		stream.SetHandler(new StructXmlHandler<S>(ref));
	}
private:
	S& ref;
};

template <class S>
void Struct<S>::BeginXml(S& obj, XmlReader& stream) {
	stream.SetHandler(new StructFieldXmlHandler<S>(obj));
}

/// Read/Write std::vector<Struct>

template <class S>
void Struct<S>::ReadLcf(std::vector<S>& vec, LcfReader& stream) {
	int count = stream.ReadInt();
	vec.resize(count);
	for (int i = 0; i < count; i++)
		TypeReader<S>::ReadLcf(vec[i], stream, 0);
}

template <class S>
void Struct<S>::WriteLcf(const std::vector<S>& vec, LcfWriter& stream) {
	int count = vec.size();
	stream.WriteInt(count);
	for (int i = 0; i < count; i++)
		TypeReader<S>::WriteLcf(vec[i], stream);
}

template <class S>
int Struct<S>::LcfSize(const std::vector<S>& vec, LcfWriter& stream) {
	int result = 0;
	int count = vec.size();
	result += LcfReader::IntSize(count);
	for (int i = 0; i < count; i++)
		result += TypeReader<S>::LcfSize(vec[i], stream);
	return result;
}

template <class S>
void Struct<S>::WriteXml(const std::vector<S>& vec, XmlWriter& stream) {
	int count = vec.size();
	for (int i = 0; i < count; i++)
		TypeReader<S>::WriteXml(vec[i], stream);
}

template <class S>
class StructVectorXmlHandler : public XmlHandler {
public:
	StructVectorXmlHandler(std::vector<S>& ref) : ref(ref) {}

	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		if (strcmp(name, Struct<S>::name) != 0)
			stream.Error("Expecting %s but got %s", Struct<S>::name, name);
		ref.resize(ref.size() + 1);
		S& obj = ref.back();
		Struct<S>::ID_reader::type::ReadIDXml(obj, atts);
		stream.SetHandler(new StructXmlHandler<S>(obj));
	}
private:
	std::vector<S>& ref;
};

template <class S>
void Struct<S>::BeginXml(std::vector<S>& obj, XmlReader& stream) {
	stream.SetHandler(new StructVectorXmlHandler<S>(obj));
}

/// Instantiate templates

template class Struct<RPG::Actor>;
template class Struct<RPG::Animation>;
template class Struct<RPG::AnimationCellData>;
template class Struct<RPG::AnimationFrame>;
template class Struct<RPG::AnimationTiming>;
template class Struct<RPG::Attribute>;
template class Struct<RPG::BattleCommand>;
template class Struct<RPG::BattleCommands>;
template class Struct<RPG::BattlerAnimation>;
template class Struct<RPG::BattlerAnimationData>;
template class Struct<RPG::BattlerAnimationExtension>;
template class Struct<RPG::Chipset>;
template class Struct<RPG::Class>;
template class Struct<RPG::CommonEvent>;
template class Struct<RPG::Database>;
template class Struct<RPG::Encounter>;
template class Struct<RPG::Enemy>;
template class Struct<RPG::EnemyAction>;
template class Struct<RPG::Event>;
template class Struct<RPG::EventPage>;
template class Struct<RPG::EventPageCondition>;
template class Struct<RPG::Item>;
template class Struct<RPG::ItemAnimation>;
template class Struct<RPG::Learning>;
template class Struct<RPG::Map>;
template class Struct<RPG::MapInfo>;
template class Struct<RPG::MoveRoute>;
template class Struct<RPG::Music>;
template class Struct<RPG::Save>;
template class Struct<RPG::SaveActor>;
template class Struct<RPG::SaveCommonEvent>;
template class Struct<RPG::SaveEventCommands>;
template class Struct<RPG::SaveEventData>;
template class Struct<RPG::SaveEvents>;
template class Struct<RPG::SaveInventory>;
template class Struct<RPG::SaveMapEvent>;
template class Struct<RPG::SaveMapInfo>;
template class Struct<RPG::SavePartyLocation>;
template class Struct<RPG::SavePicture>;
template class Struct<RPG::SaveScreen>;
template class Struct<RPG::SaveSystem>;
template class Struct<RPG::SaveTarget>;
template class Struct<RPG::SaveTitle>;
template class Struct<RPG::SaveVehicleLocation>;
template class Struct<RPG::Skill>;
template class Struct<RPG::Sound>;
template class Struct<RPG::Start>;
template class Struct<RPG::State>;
template class Struct<RPG::Switch>;
template class Struct<RPG::System>;
template class Struct<RPG::Terms>;
template class Struct<RPG::Terrain>;
template class Struct<RPG::TestBattler>;
template class Struct<RPG::Troop>;
template class Struct<RPG::TroopMember>;
template class Struct<RPG::TroopPage>;
template class Struct<RPG::TroopPageCondition>;
template class Struct<RPG::Variable>;
