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

#ifndef _RPG_CHIPSET_H_
#define _RPG_CHIPSET_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::Chipset class
////////////////////////////////////////////////////////////
namespace RPG {
	class Chipset {
	public:
		Chipset();
		
		int ID;
		std::string name;
		std::string chipset_name;
		std::vector<short> terrain_data;
		std::vector<unsigned char> passable_data_lower;
		std::vector<unsigned char> passable_data_upper;
		int animation_type;
		int animation_speed;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(chipset_name);
			ar & BOOST_SERIALIZATION_NVP(terrain_data);
			ar & BOOST_SERIALIZATION_NVP(passable_data_lower);
			ar & BOOST_SERIALIZATION_NVP(passable_data_upper);
			ar & BOOST_SERIALIZATION_NVP(animation_type);
			ar & BOOST_SERIALIZATION_NVP(animation_speed);
		}
	};
}

#endif
