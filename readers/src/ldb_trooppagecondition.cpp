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
// Headers
////////////////////////////////////////////////////////////
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read TroopPageCondition
////////////////////////////////////////////////////////////
template <>
struct TypeReader<RPG::TroopPageCondition::Flags> {
	static inline void ReadLcf(RPG::TroopPageCondition::Flags& ref, LcfReader& stream, uint32_t length) {
		assert(length >= 1 && length <= 2);
		uint8_t bitflag = stream.Read8();
		ref.switch_a		= (bitflag & 0x01) != 0;
		ref.switch_b		= (bitflag & 0x02) != 0;
		ref.variable		= (bitflag & 0x04) != 0;
		ref.turn			= (bitflag & 0x08) != 0;
		ref.fatigue			= (bitflag & 0x10) != 0;
		ref.enemy_hp		= (bitflag & 0x20) != 0;
		ref.actor_hp		= (bitflag & 0x40) != 0;
		ref.turn_enemy		= (bitflag & 0x80) != 0;
	
		if (length < 2)
			return;

		bitflag = stream.Read8();
		ref.turn_actor		= (bitflag & 0x01) != 0;
		ref.command_actor	= (bitflag & 0x02) != 0;
	}
	static inline void WriteLcf(const RPG::TroopPageCondition::Flags& ref, LcfWriter& stream) {
		uint8_t bitflag1 = 0;
		if (ref.switch_a	) bitflag1 |= 0x01;
		if (ref.switch_b	) bitflag1 |= 0x02;
		if (ref.variable	) bitflag1 |= 0x04;
		if (ref.turn		) bitflag1 |= 0x08;
		if (ref.fatigue		) bitflag1 |= 0x10;
		if (ref.enemy_hp	) bitflag1 |= 0x20;
		if (ref.actor_hp	) bitflag1 |= 0x40;
		if (ref.turn_enemy	) bitflag1 |= 0x80;
		stream.Write8(bitflag1);

		uint8_t bitflag2 = 0;
		if (ref.turn_actor		) bitflag2 |= 0x01;
		if (ref.command_actor	) bitflag2 |= 0x02;
		if (bitflag2 == 0)
			return;
		stream.Write8(bitflag2);
	}
	static inline int LcfSize(const RPG::TroopPageCondition::Flags& ref, LcfWriter& stream) {
		return (ref.turn_actor || ref.command_actor) ? 2 : 1;
	}
	static inline void WriteXml(const RPG::TroopPageCondition::Flags& ref, XmlWriter& stream) {
		stream.BeginElement("TroopPageCondition_Flags");
		stream.WriteNode<bool>("switch_a", ref.switch_a);
		stream.WriteNode<bool>("switch_b", ref.switch_b);
		stream.WriteNode<bool>("variable", ref.variable);
		stream.WriteNode<bool>("turn", ref.turn);
		stream.WriteNode<bool>("fatigue", ref.fatigue);
		stream.WriteNode<bool>("enemy_hp", ref.enemy_hp);
		stream.WriteNode<bool>("actor_hp", ref.actor_hp);
		stream.WriteNode<bool>("turn_enemy", ref.turn_enemy);
		stream.WriteNode<bool>("turn_actor", ref.turn_actor);
		stream.WriteNode<bool>("command_actor", ref.command_actor);
		stream.EndElement("TroopPageCondition_Flags");
	}

	class FlagsXmlHandler : public XmlHandler {
	private:
		RPG::TroopPageCondition::Flags& ref;
		bool* field;
	public:
		FlagsXmlHandler(RPG::TroopPageCondition::Flags& ref) : ref(ref), field(NULL) {}
		void StartElement(XmlReader& stream, const char* name, const char** atts) {
			if (strcmp(name, "switch_a") == 0)
				field = &ref.switch_a;
			else if (strcmp(name, "switch_b") == 0)
				field = &ref.switch_b;
			else if (strcmp(name, "variable") == 0)
				field = &ref.variable;
			else if (strcmp(name, "turn") == 0)
				field = &ref.turn;
			else if (strcmp(name, "fatigue") == 0)
				field = &ref.fatigue;
			else if (strcmp(name, "enemy_hp") == 0)
				field = &ref.enemy_hp;
			else if (strcmp(name, "actor_hp") == 0)
				field = &ref.actor_hp;
			else if (strcmp(name, "turn_enemy") == 0)
				field = &ref.turn_enemy;
			else if (strcmp(name, "turn_actor") == 0)
				field = &ref.turn_actor;
			else if (strcmp(name, "command_actor") == 0)
				field = &ref.command_actor;
			else {
				// error
			}
		}
		void CharacterData(XmlReader& stream, const char* s, int len) {
			XmlReader::Read<bool>(*field, std::string(s, len));
		}
	};

	static inline void BeginXml(RPG::TroopPageCondition::Flags& ref, XmlReader& stream) {
		stream.SetHandler(new WrapperXmlHandler("TroopPageCondition_Flags", new FlagsXmlHandler(ref)));
	}
	static void ParseXml(RPG::TroopPageCondition::Flags& ref, const std::string& data) {
	}
};

template <>
IDReader<RPG::TroopPageCondition>* Struct<RPG::TroopPageCondition>::ID_reader = new IDReaderT<RPG::TroopPageCondition, NoID>();

template <>
char const* const Struct<RPG::TroopPageCondition>::name("TroopPageCondition");

template <>
const Field<RPG::TroopPageCondition>* Struct<RPG::TroopPageCondition>::fields[] = {
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::switch_a_id,			LDB_Reader::ChunkTroopPageCondition::switch_a_id,		"switch_a_id"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::switch_b_id,			LDB_Reader::ChunkTroopPageCondition::switch_b_id,		"switch_b_id"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::variable_id,			LDB_Reader::ChunkTroopPageCondition::variable_id,		"variable_id"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::variable_value,		LDB_Reader::ChunkTroopPageCondition::variable_value,	"variable_value"	),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_a,				LDB_Reader::ChunkTroopPageCondition::turn_a,			"turn_a"			),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_b,				LDB_Reader::ChunkTroopPageCondition::turn_b,			"turn_b"			),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::fatigue_min,			LDB_Reader::ChunkTroopPageCondition::fatigue_min,		"fatigue_min"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::fatigue_max,			LDB_Reader::ChunkTroopPageCondition::fatigue_max,		"fatigue_max"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::enemy_id,			LDB_Reader::ChunkTroopPageCondition::enemy_id,			"enemy_id"			),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::enemy_hp_min,		LDB_Reader::ChunkTroopPageCondition::enemy_hp_min,		"enemy_hp_min"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::enemy_hp_max,		LDB_Reader::ChunkTroopPageCondition::enemy_hp_max,		"enemy_hp_max"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::actor_id,			LDB_Reader::ChunkTroopPageCondition::actor_id,			"actor_id"			),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::actor_hp_min,		LDB_Reader::ChunkTroopPageCondition::actor_hp_min,		"actor_hp_min"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::actor_hp_max,		LDB_Reader::ChunkTroopPageCondition::actor_hp_max,		"actor_hp_max"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_enemy_id,		LDB_Reader::ChunkTroopPageCondition::turn_enemy_id,		"turn_enemy_id"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_enemy_a,		LDB_Reader::ChunkTroopPageCondition::turn_enemy_a,		"turn_enemy_a"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_enemy_b,		LDB_Reader::ChunkTroopPageCondition::turn_enemy_b,		"turn_enemy_b"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_actor_id,		LDB_Reader::ChunkTroopPageCondition::turn_actor_id,		"turn_actor_id"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_actor_a,		LDB_Reader::ChunkTroopPageCondition::turn_actor_a,		"turn_actor_a"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_actor_b,		LDB_Reader::ChunkTroopPageCondition::turn_actor_b,		"turn_actor_b"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::command_actor_id,	LDB_Reader::ChunkTroopPageCondition::command_actor_id,	"command_actor_id"	),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::command_id,			LDB_Reader::ChunkTroopPageCondition::command_id,		"command_id"		),
	new TypedField<RPG::TroopPageCondition, RPG::TroopPageCondition::Flags>	(&RPG::TroopPageCondition::flags,	LDB_Reader::ChunkTroopPageCondition::flags,	"flags"				),
	NULL
};
