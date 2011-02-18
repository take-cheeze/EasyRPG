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

#ifndef _RPG_DATABASE_H_
#define _RPG_DATABASE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <vector>
#include <string>
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
/// RPG namespace
////////////////////////////////////////////////////////////
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
