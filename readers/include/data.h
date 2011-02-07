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

#ifndef _EASYRPG_READER_DATA_H_
#define _EASYRPG_READER_DATA_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <boost/ptr_container/ptr_vector.hpp>
#include "rpg_actor.h"
#include "rpg_skill.h"
#include "rpg_item.h"
#include "rpg_enemy.h"
#include "rpg_troop.h"
#include "rpg_attribute.h"
#include "rpg_state.h"
#include "rpg_terrain.h"
#include "rpg_animation.h"
#include "rpg_chipset.h"
#include "rpg_terms.h"
#include "rpg_system.h"
#include "rpg_commonevent.h"
#include "rpg_class.h"
#include "rpg_battlecommand.h"
#include "rpg_battleranimation.h"
#include "rpg_sound.h"
#include "rpg_music.h"
#include "rpg_eventcommand.h"
#include "rpg_treemap.h"

////////////////////////////////////////////////////////////
/// Data namespace
////////////////////////////////////////////////////////////
namespace Data {
	/// Database Data (ldb)
	//@{
	extern boost::ptr_vector<RPG::Actor> actors;
	extern boost::ptr_vector<RPG::Skill> skills;
	extern boost::ptr_vector<RPG::Item> items;
	extern boost::ptr_vector<RPG::Enemy> enemies;
	extern boost::ptr_vector<RPG::Troop> troops;
	extern boost::ptr_vector<RPG::Terrain> terrains;
	extern boost::ptr_vector<RPG::Attribute> attributes;
	extern boost::ptr_vector<RPG::State> states;
	extern boost::ptr_vector<RPG::Animation> animations;
	extern boost::ptr_vector<RPG::Chipset> chipsets;
	extern boost::ptr_vector<RPG::CommonEvent> commonevents;
	extern std::auto_ptr<RPG::BattleCommands> battlecommands;
	extern boost::ptr_vector<RPG::Class> classes;
	extern boost::ptr_vector<RPG::BattlerAnimation> battleranimations;
	extern std::auto_ptr<RPG::Terms> terms;
	extern std::auto_ptr<RPG::System> system;
	extern std::vector<std::string> switches;
	extern std::vector<std::string> variables;
	//@}

	/// TreeMap (lmt)
	extern std::auto_ptr<RPG::TreeMap> treemap;

	////////////////////////////////////////////////////////
	/// Clear all data.
	////////////////////////////////////////////////////////
	void Clear();
}

#endif
