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

#ifndef _RPG_ITEM_H_
#define _RPG_ITEM_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "rpg_itemanimation.h"

////////////////////////////////////////////////////////////
/// RPG::Item class
////////////////////////////////////////////////////////////
namespace RPG {
	class Item {
	public:
		enum Type {
			Type_normal = 0,
			Type_weapon = 1,
			Type_shield = 2,
			Type_armor = 3,
			Type_helmet = 4,
			Type_accessory = 5,
			Type_medicine = 6,
			Type_book = 7,
			Type_material = 8,
			Type_special = 9,
			Type_switch = 10
		};

		Item();
		
		int ID;
		std::string name;
		std::string description;
		int type;
		int price;
		std::vector<bool> actor_set;
		std::vector<bool> class_set; // RPG2003
		int uses; // Consumables only

		// Equipable		
		int atk_points;
		int def_points;
		int spi_points;
		int agi_points;
		std::vector<bool> attribute_set;
		std::vector<bool> state_set;
		bool state_effect; // RPG2003
		int state_chance;
		bool cursed; // RPG2003
				
		// Weapon
		bool two_handed;
		int sp_cost;
		int hit;
		int critical_hit;
		int animation_id;
		bool preemptive;
		bool dual_attack;
		bool attack_all;
		bool ignore_evasion;
		int weapon_animation; // RPG2003
		bool use_skill; // RPG2003
		int ranged_trajectory; // RPG2003
		int ranged_target; // RPG2003
		
		// Shield Armor Head Other
		bool prevent_critical;
		bool raise_evasion;
		bool half_sp_cost;
		bool no_terrain_damage;
		
		// Medicine
		bool entire_party;
		int recover_hp;
		int recover_hp_rate;
		int recover_sp;
		int recover_sp_rate;
		bool ocassion_field; // Also used by Switch
		bool ko_only;
		
		// Book - Unique
		int skill_id;
		int using_message;
		
		// Material (See also Equipable *_points)
		int max_hp_points;
		int max_sp_points;
		
		// Switch
		int switch_id;
		bool ocassion_battle;

		std::vector<RPG::ItemAnimation> animation_data;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(description);
			ar & BOOST_SERIALIZATION_NVP(type);
			ar & BOOST_SERIALIZATION_NVP(price);
			ar & BOOST_SERIALIZATION_NVP(actor_set);
			ar & BOOST_SERIALIZATION_NVP(class_set); // RPG2003
			ar & BOOST_SERIALIZATION_NVP(uses); // Consumables only

		// Equipable		
			ar & BOOST_SERIALIZATION_NVP(atk_points);
			ar & BOOST_SERIALIZATION_NVP(def_points);
			ar & BOOST_SERIALIZATION_NVP(spi_points);
			ar & BOOST_SERIALIZATION_NVP(agi_points);
			ar & BOOST_SERIALIZATION_NVP(attribute_set);
			ar & BOOST_SERIALIZATION_NVP(state_set);
			ar & BOOST_SERIALIZATION_NVP(state_effect); // RPG2003
			ar & BOOST_SERIALIZATION_NVP(state_chance);
			ar & BOOST_SERIALIZATION_NVP(cursed); // RPG2003
				
		// Weapon
			ar & BOOST_SERIALIZATION_NVP(two_handed);
			ar & BOOST_SERIALIZATION_NVP(sp_cost);
			ar & BOOST_SERIALIZATION_NVP(hit);
			ar & BOOST_SERIALIZATION_NVP(critical_hit);
			ar & BOOST_SERIALIZATION_NVP(animation_id);
			ar & BOOST_SERIALIZATION_NVP(preemptive);
			ar & BOOST_SERIALIZATION_NVP(dual_attack);
			ar & BOOST_SERIALIZATION_NVP(attack_all);
			ar & BOOST_SERIALIZATION_NVP(ignore_evasion);
			ar & BOOST_SERIALIZATION_NVP(weapon_animation); // RPG2003
			ar & BOOST_SERIALIZATION_NVP(use_skill); // RPG2003
			ar & BOOST_SERIALIZATION_NVP(ranged_trajectory); // RPG2003
			ar & BOOST_SERIALIZATION_NVP(ranged_target); // RPG2003
		
		// Shield Armor Head Other
			ar & BOOST_SERIALIZATION_NVP(prevent_critical);
			ar & BOOST_SERIALIZATION_NVP(raise_evasion);
			ar & BOOST_SERIALIZATION_NVP(half_sp_cost);
			ar & BOOST_SERIALIZATION_NVP(no_terrain_damage);
		
		// Medicine
			ar & BOOST_SERIALIZATION_NVP(entire_party);
			ar & BOOST_SERIALIZATION_NVP(recover_hp);
			ar & BOOST_SERIALIZATION_NVP(recover_hp_rate);
			ar & BOOST_SERIALIZATION_NVP(recover_sp);
			ar & BOOST_SERIALIZATION_NVP(recover_sp_rate);
			ar & BOOST_SERIALIZATION_NVP(ocassion_field); // Also used by Switch
			ar & BOOST_SERIALIZATION_NVP(ko_only);
		
		// Book - Unique
			ar & BOOST_SERIALIZATION_NVP(skill_id);
			ar & BOOST_SERIALIZATION_NVP(using_message);
		
		// Material (See also Equipable *_points)
			ar & BOOST_SERIALIZATION_NVP(max_hp_points);
			ar & BOOST_SERIALIZATION_NVP(max_sp_points);
		
		// Switch
			ar & BOOST_SERIALIZATION_NVP(switch_id);
			ar & BOOST_SERIALIZATION_NVP(ocassion_battle);

			ar & BOOST_SERIALIZATION_NVP(animation_data);
		}
	};
}

#endif
