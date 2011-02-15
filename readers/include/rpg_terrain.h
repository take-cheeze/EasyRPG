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

#ifndef _RPG_TERRAIN_H_
#define _RPG_TERRAIN_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include "rpg_sound.h"

////////////////////////////////////////////////////////////
/// RPG::Terrain class
////////////////////////////////////////////////////////////
namespace RPG {
	class Terrain {
	public:
		Terrain();
		
		int ID;
		std::string name;
		int damage;
		int encounter_rate;
		std::string background_name;
		bool boat_pass;
		bool ship_pass;
		bool airship_pass;
		bool airship_land;
		int bush_depth;
		Sound footstep;
		bool on_damage_se;
		int background_type;
		std::string background_a_name;
		bool background_a_scrollh;
		bool background_a_scrollv;
		int background_a_scrollh_speed;
		int background_a_scrollv_speed;
		bool background_b;
		std::string background_b_name;
		bool background_b_scrollh;
		bool background_b_scrollv;
		int background_b_scrollh_speed;
		int background_b_scrollv_speed;
		bool special_back_party_flag;
		bool special_back_enemies_flag;
		bool special_lateral_party_flag;
		bool special_lateral_enemies_flag;
		int special_back_party;
		int special_back_enemies;
		int special_lateral_party;
		int special_lateral_enemies;
		int grid_location;
		int grid_a;
		int grid_b;
		int grid_c;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(damage);
			ar & BOOST_SERIALIZATION_NVP(encounter_rate);
			ar & BOOST_SERIALIZATION_NVP(background_name);
			ar & BOOST_SERIALIZATION_NVP(boat_pass);
			ar & BOOST_SERIALIZATION_NVP(ship_pass);
			ar & BOOST_SERIALIZATION_NVP(airship_pass);
			ar & BOOST_SERIALIZATION_NVP(airship_land);
			ar & BOOST_SERIALIZATION_NVP(bush_depth);
			ar & BOOST_SERIALIZATION_NVP(footstep);
			ar & BOOST_SERIALIZATION_NVP(on_damage_se);
			ar & BOOST_SERIALIZATION_NVP(background_type);
			ar & BOOST_SERIALIZATION_NVP(background_a_name);
			ar & BOOST_SERIALIZATION_NVP(background_a_scrollh);
			ar & BOOST_SERIALIZATION_NVP(background_a_scrollv);
			ar & BOOST_SERIALIZATION_NVP(background_a_scrollh_speed);
			ar & BOOST_SERIALIZATION_NVP(background_a_scrollv_speed);
			ar & BOOST_SERIALIZATION_NVP(background_b);
			ar & BOOST_SERIALIZATION_NVP(background_b_name);
			ar & BOOST_SERIALIZATION_NVP(background_b_scrollh);
			ar & BOOST_SERIALIZATION_NVP(background_b_scrollv);
			ar & BOOST_SERIALIZATION_NVP(background_b_scrollh_speed);
			ar & BOOST_SERIALIZATION_NVP(background_b_scrollv_speed);
			ar & BOOST_SERIALIZATION_NVP(special_back_party_flag);
			ar & BOOST_SERIALIZATION_NVP(special_back_enemies_flag);
			ar & BOOST_SERIALIZATION_NVP(special_lateral_party_flag);
			ar & BOOST_SERIALIZATION_NVP(special_lateral_enemies_flag);
			ar & BOOST_SERIALIZATION_NVP(special_back_party);
			ar & BOOST_SERIALIZATION_NVP(special_back_enemies);
			ar & BOOST_SERIALIZATION_NVP(special_lateral_party);
			ar & BOOST_SERIALIZATION_NVP(special_lateral_enemies);
			ar & BOOST_SERIALIZATION_NVP(grid_location);
			ar & BOOST_SERIALIZATION_NVP(grid_a);
			ar & BOOST_SERIALIZATION_NVP(grid_b);
			ar & BOOST_SERIALIZATION_NVP(grid_c);
		}
	};
}

#endif
