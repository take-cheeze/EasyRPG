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

#ifndef _RPG_STATE_H_
#define _RPG_STATE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::State class
////////////////////////////////////////////////////////////
namespace RPG {
	class State {
	public:
		enum Type {
			Type_battle = 0,
			Type_map = 1
		};
		enum Restriction {
			Restriction_normal = 0,
			Restriction_do_nothing = 1,
			Restriction_attack_enemy = 2,
			Restriction_attack_ally = 3
		};
		enum AffectType {
			AffectType_nothing = 0,
			AffectType_doble = 1,
			AffectType_half = 2
		};
		enum ChangeType {
			ChangeType_nothing = 0,
			ChangeType_plus = 1,
			ChangeType_minus = 2
		};

		State();
		
		int ID;
		std::string name;
		int type;
		int color;
		int priority;
		int restriction;
		int a_rate;
		int b_rate;
		int c_rate;
		int d_rate;
		int e_rate;
		int hold_turn;
		int auto_release_prob;
		int release_by_damage;
		int affect_type;
		bool affect_attack;
		bool affect_defense;
		bool affect_spirit;
		bool affect_agility;
		int reduce_hit_ratio;
		bool avoid_attacks;
		bool reflect_magic;
		bool cursed;
		int battler_animation_id;
		bool restrict_skill;
		int restrict_skill_level;
		bool restrict_magic;
		int restrict_magic_level;
		int hp_change_type;
		int sp_change_type;
		std::string message_actor;
		std::string message_enemy;
		std::string message_already;
		std::string message_affected;
		std::string message_recovery;
		int hp_change_max;
		int hp_change_val;
		int hp_change_map_val;
		int hp_change_map_steps;
		int sp_change_max;
		int sp_change_val;
		int sp_change_map_val;
		int sp_change_map_steps;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(type);
			ar & BOOST_SERIALIZATION_NVP(color);
			ar & BOOST_SERIALIZATION_NVP(priority);
			ar & BOOST_SERIALIZATION_NVP(restriction);
			ar & BOOST_SERIALIZATION_NVP(a_rate);
			ar & BOOST_SERIALIZATION_NVP(b_rate);
			ar & BOOST_SERIALIZATION_NVP(c_rate);
			ar & BOOST_SERIALIZATION_NVP(d_rate);
			ar & BOOST_SERIALIZATION_NVP(e_rate);
			ar & BOOST_SERIALIZATION_NVP(hold_turn);
			ar & BOOST_SERIALIZATION_NVP(auto_release_prob);
			ar & BOOST_SERIALIZATION_NVP(release_by_damage);
			ar & BOOST_SERIALIZATION_NVP(affect_type);
			ar & BOOST_SERIALIZATION_NVP(affect_attack);
			ar & BOOST_SERIALIZATION_NVP(affect_defense);
			ar & BOOST_SERIALIZATION_NVP(affect_spirit);
			ar & BOOST_SERIALIZATION_NVP(affect_agility);
			ar & BOOST_SERIALIZATION_NVP(reduce_hit_ratio);
			ar & BOOST_SERIALIZATION_NVP(avoid_attacks);
			ar & BOOST_SERIALIZATION_NVP(reflect_magic);
			ar & BOOST_SERIALIZATION_NVP(cursed);
			ar & BOOST_SERIALIZATION_NVP(battler_animation_id);
			ar & BOOST_SERIALIZATION_NVP(restrict_skill);
			ar & BOOST_SERIALIZATION_NVP(restrict_skill_level);
			ar & BOOST_SERIALIZATION_NVP(restrict_magic);
			ar & BOOST_SERIALIZATION_NVP(restrict_magic_level);
			ar & BOOST_SERIALIZATION_NVP(hp_change_type);
			ar & BOOST_SERIALIZATION_NVP(sp_change_type);
			ar & BOOST_SERIALIZATION_NVP(message_actor);
			ar & BOOST_SERIALIZATION_NVP(message_enemy);
			ar & BOOST_SERIALIZATION_NVP(message_already);
			ar & BOOST_SERIALIZATION_NVP(message_affected);
			ar & BOOST_SERIALIZATION_NVP(message_recovery);
			ar & BOOST_SERIALIZATION_NVP(hp_change_max);
			ar & BOOST_SERIALIZATION_NVP(hp_change_val);
			ar & BOOST_SERIALIZATION_NVP(hp_change_map_val);
			ar & BOOST_SERIALIZATION_NVP(hp_change_map_steps);
			ar & BOOST_SERIALIZATION_NVP(sp_change_max);
			ar & BOOST_SERIALIZATION_NVP(sp_change_val);
			ar & BOOST_SERIALIZATION_NVP(sp_change_map_val);
			ar & BOOST_SERIALIZATION_NVP(sp_change_map_steps);
		}
	};
}

#endif
