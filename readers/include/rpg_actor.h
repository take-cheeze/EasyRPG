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

#ifndef _RPG_ACTOR_H_
#define _RPG_ACTOR_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "rpg_learning.h"
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::Actor class
////////////////////////////////////////////////////////////
namespace RPG {
	class Actor {
	public:
		Actor();
		
		int ID;
		std::string name;
		std::string title;
		std::string character_name;
		int character_index;
		bool transparent;
		int initial_level;
		int final_level;
		bool critical_hit;
		int critical_hit_chance;
		std::string face_name;
		int face_index;
		bool two_swords_style;
		bool fix_equipment;
		bool auto_battle;
		bool super_guard;
		std::vector<short> parameter_maxhp;
		std::vector<short> parameter_maxsp;
		std::vector<short> parameter_attack;
		std::vector<short> parameter_defense;
		std::vector<short> parameter_spirit;
		std::vector<short> parameter_agility;
		int exp_base;
		int exp_inflation;
		int exp_correction;
		int weapon_id;
		int shield_id;
		int armor_id;
		int helmet_id;
		int accessory_id;
		int unarmed_animation;
		std::vector<Learning> skills;
		std::vector<unsigned char> state_ranks;
		std::vector<unsigned char> attribute_ranks;
		// RPG Maker 2000
		bool rename_skill;
		std::string skill_name;
		
		// RPG Maker 2003
		int class_id;
		int battler_animation;
		std::vector<uint32_t> battle_commands;
		int battle_x;
		int battle_y;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(title);
			ar & BOOST_SERIALIZATION_NVP(character_name);
			ar & BOOST_SERIALIZATION_NVP(character_index);
			ar & BOOST_SERIALIZATION_NVP(transparent);
			ar & BOOST_SERIALIZATION_NVP(initial_level);
			ar & BOOST_SERIALIZATION_NVP(final_level);
			ar & BOOST_SERIALIZATION_NVP(critical_hit);
			ar & BOOST_SERIALIZATION_NVP(critical_hit_chance);
			ar & BOOST_SERIALIZATION_NVP(face_name);
			ar & BOOST_SERIALIZATION_NVP(face_index);
			ar & BOOST_SERIALIZATION_NVP(two_swords_style);
			ar & BOOST_SERIALIZATION_NVP(fix_equipment);
			ar & BOOST_SERIALIZATION_NVP(auto_battle);
			ar & BOOST_SERIALIZATION_NVP(super_guard);
			ar & BOOST_SERIALIZATION_NVP(parameter_maxhp);
			ar & BOOST_SERIALIZATION_NVP(parameter_maxsp);
			ar & BOOST_SERIALIZATION_NVP(parameter_attack);
			ar & BOOST_SERIALIZATION_NVP(parameter_defense);
			ar & BOOST_SERIALIZATION_NVP(parameter_spirit);
			ar & BOOST_SERIALIZATION_NVP(parameter_agility);
			ar & BOOST_SERIALIZATION_NVP(exp_base);
			ar & BOOST_SERIALIZATION_NVP(exp_inflation);
			ar & BOOST_SERIALIZATION_NVP(exp_correction);
			ar & BOOST_SERIALIZATION_NVP(weapon_id);
			ar & BOOST_SERIALIZATION_NVP(shield_id);
			ar & BOOST_SERIALIZATION_NVP(armor_id);
			ar & BOOST_SERIALIZATION_NVP(helmet_id);
			ar & BOOST_SERIALIZATION_NVP(accessory_id);
			ar & BOOST_SERIALIZATION_NVP(unarmed_animation);
			ar & BOOST_SERIALIZATION_NVP(skills);
			ar & BOOST_SERIALIZATION_NVP(state_ranks);
			ar & BOOST_SERIALIZATION_NVP(attribute_ranks);
			// RPG Maker 2000
			ar & BOOST_SERIALIZATION_NVP(rename_skill);
			ar & BOOST_SERIALIZATION_NVP(skill_name);
			
			// RPG Maker 2003
			ar & BOOST_SERIALIZATION_NVP(class_id);
			ar & BOOST_SERIALIZATION_NVP(battler_animation);
			ar & BOOST_SERIALIZATION_NVP(battle_commands);
			ar & BOOST_SERIALIZATION_NVP(battle_x);
			ar & BOOST_SERIALIZATION_NVP(battle_y);
		}
	};
}

#endif
