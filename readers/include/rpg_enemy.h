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

#ifndef _RPG_ENEMY_H_
#define _RPG_ENEMY_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader.h"
#include "rpg_enemyaction.h"

////////////////////////////////////////////////////////////
/// RPG::Enemy class
////////////////////////////////////////////////////////////
namespace RPG {
	class Enemy {
	public:
		Enemy();
		
		int ID;
		std::string name;
		std::string battler_name;
		int battler_hue;
		int max_hp;
		int max_sp;
		int attack;
		int defense;
		int spirit;
		int agility;
		bool transparent;
		int exp;
		int gold;
		int drop_id;
		int drop_prob;
		bool critical_hit;
		int critical_hit_chance;
		bool miss;
		bool levitate;
		std::vector<unsigned char> state_ranks;
		std::vector<unsigned char> attribute_ranks;
		std::vector<EnemyAction> actions;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(battler_name);
			ar & BOOST_SERIALIZATION_NVP(battler_hue);
			ar & BOOST_SERIALIZATION_NVP(max_hp);
			ar & BOOST_SERIALIZATION_NVP(max_sp);
			ar & BOOST_SERIALIZATION_NVP(attack);
			ar & BOOST_SERIALIZATION_NVP(defense);
			ar & BOOST_SERIALIZATION_NVP(spirit);
			ar & BOOST_SERIALIZATION_NVP(agility);
			ar & BOOST_SERIALIZATION_NVP(transparent);
			ar & BOOST_SERIALIZATION_NVP(exp);
			ar & BOOST_SERIALIZATION_NVP(gold);
			ar & BOOST_SERIALIZATION_NVP(drop_id);
			ar & BOOST_SERIALIZATION_NVP(drop_prob);
			ar & BOOST_SERIALIZATION_NVP(critical_hit);
			ar & BOOST_SERIALIZATION_NVP(critical_hit_chance);
			ar & BOOST_SERIALIZATION_NVP(miss);
			ar & BOOST_SERIALIZATION_NVP(levitate);
			ar & BOOST_SERIALIZATION_NVP(state_ranks);
			ar & BOOST_SERIALIZATION_NVP(attribute_ranks);
			ar & BOOST_SERIALIZATION_NVP(actions);
		}
	};
}

#endif
