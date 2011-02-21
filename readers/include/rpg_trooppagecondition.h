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

#ifndef _RPG_TROOPPAGECONDITION_H_
#define _RPG_TROOPPAGECONDITION_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "reader.h"

///////////////////////////////////////////////////////////
/// RPG::TroopPageCondition class
////////////////////////////////////////////////////////////
namespace RPG {
	class TroopPageCondition {
	public:
		TroopPageCondition();
		
		bool switch_a;
		bool switch_b;
		bool variable;
		bool turn;
		bool fatigue;
		bool enemy_hp;
		bool actor_hp;
		int switch_a_id;
		int switch_b_id;
		int variable_id;
		int variable_value;
		int turn_a;
		int turn_b;
		int fatigue_min;
		int fatigue_max;
		int enemy_id;
		int enemy_hp_min;
		int enemy_hp_max;
		int actor_id;
		int actor_hp_min;
		int actor_hp_max;

		// RPG2003
		bool turn_enemy;
		bool turn_actor;
		bool command_actor;
		int turn_enemy_id;
		int turn_enemy_a;
		int turn_enemy_b;
		int turn_actor_id;
		int turn_actor_a;
		int turn_actor_b;
		int command_actor_id;
		int command_id;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(switch_a);
			ar & BOOST_SERIALIZATION_NVP(switch_b);
			ar & BOOST_SERIALIZATION_NVP(variable);
			ar & BOOST_SERIALIZATION_NVP(turn);
			ar & BOOST_SERIALIZATION_NVP(fatigue);
			ar & BOOST_SERIALIZATION_NVP(enemy_hp);
			ar & BOOST_SERIALIZATION_NVP(actor_hp);
			ar & BOOST_SERIALIZATION_NVP(switch_a_id);
			ar & BOOST_SERIALIZATION_NVP(switch_b_id);
			ar & BOOST_SERIALIZATION_NVP(variable_id);
			ar & BOOST_SERIALIZATION_NVP(variable_value);
			ar & BOOST_SERIALIZATION_NVP(turn_a);
			ar & BOOST_SERIALIZATION_NVP(turn_b);
			ar & BOOST_SERIALIZATION_NVP(fatigue_min);
			ar & BOOST_SERIALIZATION_NVP(fatigue_max);
			ar & BOOST_SERIALIZATION_NVP(enemy_id);
			ar & BOOST_SERIALIZATION_NVP(enemy_hp_min);
			ar & BOOST_SERIALIZATION_NVP(enemy_hp_max);
			ar & BOOST_SERIALIZATION_NVP(actor_id);
			ar & BOOST_SERIALIZATION_NVP(actor_hp_min);
			ar & BOOST_SERIALIZATION_NVP(actor_hp_max);

		// RPG2003
			ar & BOOST_SERIALIZATION_NVP(turn_enemy);
			ar & BOOST_SERIALIZATION_NVP(turn_actor);
			ar & BOOST_SERIALIZATION_NVP(command_actor);
			ar & BOOST_SERIALIZATION_NVP(turn_enemy_id);
			ar & BOOST_SERIALIZATION_NVP(turn_enemy_a);
			ar & BOOST_SERIALIZATION_NVP(turn_enemy_b);
			ar & BOOST_SERIALIZATION_NVP(turn_actor_id);
			ar & BOOST_SERIALIZATION_NVP(turn_actor_a);
			ar & BOOST_SERIALIZATION_NVP(turn_actor_b);
			ar & BOOST_SERIALIZATION_NVP(command_actor_id);
			ar & BOOST_SERIALIZATION_NVP(command_id);
		}
	};
}

#endif
