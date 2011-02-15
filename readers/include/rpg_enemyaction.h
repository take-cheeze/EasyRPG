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

#ifndef _RPG_ENEMYACTION_H_
#define _RPG_ENEMYACTION_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::EnemyAction class
////////////////////////////////////////////////////////////
namespace RPG {
	class EnemyAction {
	public:
		enum Kind {
			Kind_basic = 0,
			Kind_skill = 1,
			Kind_transformation = 2
		};
		enum Basic {
			Basic_attack = 0,
			Basic_dual_attack = 1,
			Basic_defense = 2,
			Basic_observe = 3,
			Basic_charge = 4,
			Basic_autodestruction = 5,
			Basic_nothing = 6
		};
		enum ConditionType {
			ConditionType_always = 0,
			ConditionType_switch = 1,
			ConditionType_turn = 2,
			ConditionType_actors = 3,
			ConditionType_hp = 4,
			ConditionType_sp = 5,
			ConditionType_party_lvl = 6,
			ConditionType_party_fatigue = 7
		};

		EnemyAction();
		
		int kind;
		int basic;
		int skill_id;
		int enemy_id;
		int condition_type;
		int condition_param1;
		int condition_param2;
		int switch_id;
		bool switch_on;
		int switch_on_id;
		bool switch_off;
		int switch_off_id;
		int rating;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(kind);
			ar & BOOST_SERIALIZATION_NVP(basic);
			ar & BOOST_SERIALIZATION_NVP(skill_id);
			ar & BOOST_SERIALIZATION_NVP(enemy_id);
			ar & BOOST_SERIALIZATION_NVP(condition_type);
			ar & BOOST_SERIALIZATION_NVP(condition_param1);
			ar & BOOST_SERIALIZATION_NVP(condition_param2);
			ar & BOOST_SERIALIZATION_NVP(switch_id);
			ar & BOOST_SERIALIZATION_NVP(switch_on);
			ar & BOOST_SERIALIZATION_NVP(switch_on_id);
			ar & BOOST_SERIALIZATION_NVP(switch_off);
			ar & BOOST_SERIALIZATION_NVP(switch_off_id);
			ar & BOOST_SERIALIZATION_NVP(rating);
		}
	};
}

#endif
