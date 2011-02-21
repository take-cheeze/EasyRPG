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

#ifndef _SERIALIZATION_NO_RTTI_
#define _SERIALIZATION_NO_RTTI_

#define PP_allRpgType(FUNC) \
	FUNC(TroopPageCondition) \
	FUNC(TroopPage) \
	FUNC(TroopMember) \
	FUNC(Troop) \
	FUNC(TreeMap) \
	FUNC(TestBattler) \
	FUNC(Terrain) \
	FUNC(Terms) \
	FUNC(System) \
	FUNC(State) \
	FUNC(Sound) \
	FUNC(Skill) \
	FUNC(SaveTitle) \
	FUNC(SaveSystem) \
	FUNC(SavePicture) \
	FUNC(SavePartyLocation) \
	FUNC(SaveVehicleLocation) \
	FUNC(SaveActor) \
	FUNC(SaveInventory) \
	FUNC(SaveEventCommands) \
	FUNC(SaveEventData) \
	FUNC(SaveMapEvent) \
	FUNC(SaveMapInfo) \
	FUNC(SaveScreen) \
	FUNC(SaveCommonEvent) \
	FUNC(SaveEvents) \
	FUNC(SaveTarget) \
	FUNC(Save) \
	FUNC(Music) \
	FUNC(MoveRoute) \
	FUNC(MoveCommand) \
	FUNC(MapInfo) \
	FUNC(Map) \
	FUNC(Learning) \
	FUNC(ItemAnimation) \
	FUNC(Item) \
	FUNC(EventPageCondition) \
	FUNC(EventPage) \
	FUNC(EventCommand) \
	FUNC(Event) \
	FUNC(EnemyAction) \
	FUNC(Enemy) \
	FUNC(Encounter) \
	FUNC(Database) \
	FUNC(CommonEvent) \
	FUNC(Class) \
	FUNC(Chipset) \
	FUNC(BattlerAnimationExtension) \
	FUNC(BattlerAnimationData) \
	FUNC(BattlerAnimation) \
	FUNC(BattleCommand) \
	FUNC(BattleCommands) \
	FUNC(Attribute) \
	FUNC(AnimationTiming) \
	FUNC(AnimationFrame) \
	FUNC(AnimationCellData) \
	FUNC(Animation) \
	FUNC(Actor) \

namespace RPG {
	#define PP_fwddecClass(NAME) class NAME;
	PP_allRpgType(PP_fwddecClass)
	#undef PP_fwddecClass
}

#include <boost/throw_exception.hpp>
#include <boost/serialization/access.hpp>
#include <boost/serialization/nvp.hpp>

#include <boost/serialization/export.hpp>
#include <boost/serialization/extended_type_info.hpp>
#include <boost/serialization/extended_type_info_no_rtti.hpp>
#include <boost/serialization/type_info_implementation.hpp>

#include <boost/serialization/string.hpp>
#include <boost/serialization/vector.hpp>
#include <string>
#include <vector>

#define PP_exportWithKey(NAME, KEY) \
	BOOST_CLASS_EXPORT_KEY2(NAME, KEY) \
	BOOST_CLASS_TYPE_INFO( \
						  NAME, \
						  boost::serialization::extended_type_info_no_rtti<NAME> \
						  ) \

#define PP_rpgNoRTTI(NAME) \
	PP_exportWithKey(RPG::NAME, BOOST_PP_STRINGIZE(NAME)) \
	PP_exportWithKey(std::vector<RPG::NAME>, BOOST_PP_STRINGIZE(vector__ ## NAME)) \

PP_allRpgType(PP_rpgNoRTTI)

#undef PP_rpgNoRTTI

PP_exportWithKey(std::vector<std::string>, "vector__string")
PP_exportWithKey(std::vector<unsigned int>, "vector__unsigned_int")
PP_exportWithKey(std::vector<unsigned char>, "vector__unsigned_char")
PP_exportWithKey(std::vector<int>, "vector__int")
PP_exportWithKey(std::vector<short>, "vector__short")
PP_exportWithKey(std::vector<bool>, "vector__bool")

#undef PP_exportWithKey

// #undef PP_allRpgType

#define RPG_SERIALIZE() \
	private: \
		friend class boost::serialization::access; \
		template<class Archive> \
		void serialize(Archive &ar, unsigned int const /* file_version */) \

// public: const char* get_key() const;

#endif
