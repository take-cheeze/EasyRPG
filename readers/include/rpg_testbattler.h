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

#ifndef _RPG_TESTBATTLER_H_
#define _RPG_TESTBATTLER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::TestBattler class
////////////////////////////////////////////////////////////
namespace RPG {
	class TestBattler {
	public:
		TestBattler();
		
		int ID;
		int level;
		int weapon_id;
		int shield_id;
		int armor_id;
		int helmet_id;
		int accessory_id;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(level);
			ar & BOOST_SERIALIZATION_NVP(weapon_id);
			ar & BOOST_SERIALIZATION_NVP(shield_id);
			ar & BOOST_SERIALIZATION_NVP(armor_id);
			ar & BOOST_SERIALIZATION_NVP(helmet_id);
			ar & BOOST_SERIALIZATION_NVP(accessory_id);
		}
	};
}

#endif
