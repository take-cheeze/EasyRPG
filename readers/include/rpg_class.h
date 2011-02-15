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

#ifndef _RPG_CLASS_H_
#define _RPG_CLASS_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "rpg_learning.h"
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::Class class
////////////////////////////////////////////////////////////
namespace RPG {
	class Class {
	public:
		Class();
		
		int ID;
		std::string name;
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
		int unarmed_animation;
		std::vector<Learning> skills;
		std::vector<unsigned char> state_ranks;
		std::vector<unsigned char> attribute_ranks;
		std::vector<uint32_t> battle_commands;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
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
			ar & BOOST_SERIALIZATION_NVP(unarmed_animation);
			ar & BOOST_SERIALIZATION_NVP(skills);
			ar & BOOST_SERIALIZATION_NVP(state_ranks);
			ar & BOOST_SERIALIZATION_NVP(attribute_ranks);
			ar & BOOST_SERIALIZATION_NVP(battle_commands);
		}
	};
}

#endif
