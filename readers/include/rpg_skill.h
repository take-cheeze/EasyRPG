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

#ifndef _RPG_SKILL_H_
#define _RPG_SKILL_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "rpg_battleranimationdata.h"
#include "rpg_sound.h"

////////////////////////////////////////////////////////////
/// RPG::Skill class
////////////////////////////////////////////////////////////
namespace RPG {
	class Skill {
	public:
		enum Type {
			Type_normal = 0,
			Type_teleport = 1,
			Type_escape = 2,
			Type_switch = 3
		};
		enum SpType {
			SpType_cost = 0,
			SpType_percent = 1
		};
		enum Scope {
			Scope_enemy = 0,
			Scope_enemies = 1,
			Scope_self = 2,
			Scope_ally = 3,
			Scope_party = 4
		};

		Skill();
		
		int ID;
		std::string name;
		int type;
		int sp_type; // RPG2003
		int sp_cost;
		int sp_percent; // RPG2003
		std::string description;
		
		// type == Normal
		int scope;
		int animation_id;
		std::string using_message1; // RPG2000
		std::string using_message2; // RPG2000
		int failure_message; // RPG2000
		int pdef_f;
		int mdef_f;
		int variance;
		int power;
		int hit;
		bool affect_hp;
		bool affect_sp;
		bool affect_attack;
		bool affect_defense;
		bool affect_spirit;
		bool affect_agility;
		bool absorb_damage;
		bool ignore_defense;
		bool state_effect; // RPG2003
		std::vector<bool> state_effects;
		std::vector<bool> attribute_effects;
		bool affect_attr_defence;
		int battler_animation; // RPG2003

		// type == Teleport/Escape
		RPG::Sound sound_effect;
		
		// type == Switch
		int switch_id;
		bool occasion_field;
		bool occasion_battle;

		std::vector<RPG::BattlerAnimationData> battler_animation_data; // RPG2003

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(type);
			ar & BOOST_SERIALIZATION_NVP(sp_type); // RPG2003
			ar & BOOST_SERIALIZATION_NVP(sp_cost);
			ar & BOOST_SERIALIZATION_NVP(sp_percent); // RPG2003
			ar & BOOST_SERIALIZATION_NVP(description);
		
		// type == Normal
			ar & BOOST_SERIALIZATION_NVP(scope);
			ar & BOOST_SERIALIZATION_NVP(animation_id);
			ar & BOOST_SERIALIZATION_NVP(using_message1); // RPG2000
			ar & BOOST_SERIALIZATION_NVP(using_message2); // RPG2000
			ar & BOOST_SERIALIZATION_NVP(failure_message); // RPG2000
			ar & BOOST_SERIALIZATION_NVP(pdef_f);
			ar & BOOST_SERIALIZATION_NVP(mdef_f);
			ar & BOOST_SERIALIZATION_NVP(variance);
			ar & BOOST_SERIALIZATION_NVP(power);
			ar & BOOST_SERIALIZATION_NVP(hit);
			ar & BOOST_SERIALIZATION_NVP(affect_hp);
			ar & BOOST_SERIALIZATION_NVP(affect_sp);
			ar & BOOST_SERIALIZATION_NVP(affect_attack);
			ar & BOOST_SERIALIZATION_NVP(affect_defense);
			ar & BOOST_SERIALIZATION_NVP(affect_spirit);
			ar & BOOST_SERIALIZATION_NVP(affect_agility);
			ar & BOOST_SERIALIZATION_NVP(absorb_damage);
			ar & BOOST_SERIALIZATION_NVP(ignore_defense);
			ar & BOOST_SERIALIZATION_NVP(state_effect); // RPG2003
			ar & BOOST_SERIALIZATION_NVP(state_effects);
			ar & BOOST_SERIALIZATION_NVP(attribute_effects);
			ar & BOOST_SERIALIZATION_NVP(affect_attr_defence);
			ar & BOOST_SERIALIZATION_NVP(battler_animation); // RPG2003

		// type == Teleport/Escape
			ar & BOOST_SERIALIZATION_NVP(sound_effect);
		
		// type == Switch
			ar & BOOST_SERIALIZATION_NVP(switch_id);
			ar & BOOST_SERIALIZATION_NVP(occasion_field);
			ar & BOOST_SERIALIZATION_NVP(occasion_battle);

			ar & BOOST_SERIALIZATION_NVP(battler_animation_data); // RPG2003
		}
	};
}

#endif
