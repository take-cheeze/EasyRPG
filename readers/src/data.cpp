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
#include "data.h"

////////////////////////////////////////////////////////////
namespace Data {
	// Database Data (ldb)
	boost::ptr_vector<RPG::Actor> actors;
	boost::ptr_vector<RPG::Skill> skills;
	boost::ptr_vector<RPG::Item> items;
	boost::ptr_vector<RPG::Enemy> enemies;
	boost::ptr_vector<RPG::Troop> troops;
	boost::ptr_vector<RPG::Terrain> terrains;
	boost::ptr_vector<RPG::Attribute> attributes;
	boost::ptr_vector<RPG::State> states;
	boost::ptr_vector<RPG::Animation> animations;
	boost::ptr_vector<RPG::Chipset> chipsets;
	boost::ptr_vector<RPG::CommonEvent> commonevents;
	std::auto_ptr<RPG::BattleCommands> battlecommands;
	boost::ptr_vector<RPG::Class> classes;
	boost::ptr_vector<RPG::BattlerAnimation> battleranimations;
	std::auto_ptr<RPG::Terms> terms;
	std::auto_ptr<RPG::System> system;
	std::vector<std::string> switches;
	std::vector<std::string> variables;

	// TreeMap (lmt)
	std::auto_ptr<RPG::TreeMap> treemap;
}

////////////////////////////////////////////////////////////
void Data::Clear() {
	actors.clear();
	skills.clear();
	items.clear();
	enemies.clear();
	troops.clear();
	terrains.clear();
	attributes.clear();
	states.clear();
	animations.clear();
	chipsets.clear();
	commonevents.clear();
	battlecommands.reset();
	classes.clear();
	battleranimations.clear();
	switches.clear();
	variables.clear();
}
