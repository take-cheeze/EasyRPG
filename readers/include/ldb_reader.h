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

#ifndef _LDB_READER_H_
#define _LDB_READER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader.h"
#include "rpg_actor.h"
#include "rpg_skill.h"
#include "rpg_item.h"
#include "rpg_enemy.h"
#include "rpg_troop.h"
#include "rpg_attribute.h"
#include "rpg_state.h"
#include "rpg_terrain.h"
#include "rpg_chipset.h"
#include "rpg_animation.h"
#include "rpg_terms.h"
#include "rpg_system.h"
#include "rpg_commonevent.h"
#include "rpg_music.h"
#include "rpg_sound.h"
#include "rpg_class.h"
#include "rpg_battlecommand.h"
#include "rpg_battleranimation.h"
#include "rpg_battleranimationdata.h"
#include "rpg_itemanimation.h"

////////////////////////////////////////////////////////////
/// LDB Reader namespace
////////////////////////////////////////////////////////////
namespace LDB_Reader {
	bool Load(const std::string &filename);
	void LoadChunks(Reader& stream);

	RPG::Actor ReadActor(Reader& stream);
	RPG::Learning ReadLearning(Reader& stream);
	RPG::Skill ReadSkill(Reader& stream);
	RPG::Item ReadItem(Reader& stream);
	RPG::Enemy ReadEnemy(Reader& stream);
	RPG::EnemyAction ReadEnemyAction(Reader& stream);
	RPG::Troop ReadTroop(Reader& stream);
	RPG::TroopMember ReadTroopMember(Reader& stream);
	RPG::TroopPage ReadTroopPage(Reader& stream);
	RPG::TroopPageCondition ReadTroopPageCondition(Reader& stream);
	RPG::Attribute ReadAttribute(Reader& stream);
	RPG::State ReadState(Reader& stream);
	RPG::Terrain ReadTerrain(Reader& stream);
	RPG::Chipset ReadChipset(Reader& stream);
	RPG::Animation ReadAnimation(Reader& stream);
	RPG::AnimationTiming ReadAnimationTiming(Reader& stream);
	RPG::AnimationFrame ReadAnimationFrame(Reader& stream);
	RPG::AnimationCellData ReadAnimationCellData(Reader& stream);
	RPG::Terms ReadTerms(Reader& stream);
	RPG::System ReadSystem(Reader& stream);
	RPG::CommonEvent ReadCommonEvent(Reader& stream);
	RPG::Sound ReadSound(Reader& stream);
	RPG::Music ReadMusic(Reader& stream);
	std::vector<std::string> ReadVariables(Reader& stream);
	std::vector<std::string> ReadSwitches(Reader& stream);
	RPG::TestBattler ReadTestBattler(Reader& stream);

	// 2003
	RPG::BattleCommands ReadBattleCommands(Reader& stream);
	RPG::BattleCommand ReadBattleCommand(Reader& stream);
	RPG::Class ReadClass(Reader& stream);
	RPG::BattlerAnimation ReadBattlerAnimation(Reader& stream);
	RPG::BattlerAnimationExtension ReadBattlerAnimationExtension(Reader& stream);
	RPG::BattlerAnimationData ReadBattlerAnimationData(Reader& stream);
	RPG::ItemAnimation ReadItemAnimation(Reader& stream);
}

namespace RPG {
	/// Database Data (ldb)
	struct Database {
		std::vector<Actor> actors;
		std::vector<Skill> skills;
		std::vector<Item> items;
		std::vector<Enemy> enemies;
		std::vector<Troop> troops;
		std::vector<Terrain> terrains;
		std::vector<Attribute> attributes;
		std::vector<State> states;
		std::vector<Animation> animations;
		std::vector<Chipset> chipsets;
		std::vector<CommonEvent> commonevents;
		BattleCommands battlecommands;
		std::vector<Class> classes;
		std::vector<BattlerAnimation> battleranimations;
		Terms terms;
		System system;
		std::vector<std::string> switches;
		std::vector<std::string> variables;

		void Clear();

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(actors);
			ar & BOOST_SERIALIZATION_NVP(skills);
			ar & BOOST_SERIALIZATION_NVP(items);
			ar & BOOST_SERIALIZATION_NVP(enemies);
			ar & BOOST_SERIALIZATION_NVP(troops);
			ar & BOOST_SERIALIZATION_NVP(terrains);
			ar & BOOST_SERIALIZATION_NVP(attributes);
			ar & BOOST_SERIALIZATION_NVP(states);
			ar & BOOST_SERIALIZATION_NVP(animations);
			ar & BOOST_SERIALIZATION_NVP(chipsets);
			ar & BOOST_SERIALIZATION_NVP(commonevents);
			ar & BOOST_SERIALIZATION_NVP(battlecommands);
			ar & BOOST_SERIALIZATION_NVP(classes);
			ar & BOOST_SERIALIZATION_NVP(battleranimations);
			ar & BOOST_SERIALIZATION_NVP(terms);
			ar & BOOST_SERIALIZATION_NVP(system);
			ar & BOOST_SERIALIZATION_NVP(switches);
			ar & BOOST_SERIALIZATION_NVP(variables);
		}
	};
}

#endif
