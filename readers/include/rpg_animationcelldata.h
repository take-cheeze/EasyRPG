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

#ifndef _RPG_ANIMATIONCELLDATA_H_
#define _RPG_ANIMATIONCELLDATA_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::AnimationCellData class
////////////////////////////////////////////////////////////
namespace RPG {
	class AnimationCellData {
	public:
		AnimationCellData();
		
		int priority;
		int ID;
		int x;
		int y;
		int zoom;
		int tone_red;
		int tone_green;
		int tone_blue;
		int tone_gray;
		int transparency;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(priority);
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(x);
			ar & BOOST_SERIALIZATION_NVP(y);
			ar & BOOST_SERIALIZATION_NVP(zoom);
			ar & BOOST_SERIALIZATION_NVP(tone_red);
			ar & BOOST_SERIALIZATION_NVP(tone_green);
			ar & BOOST_SERIALIZATION_NVP(tone_blue);
			ar & BOOST_SERIALIZATION_NVP(tone_gray);
			ar & BOOST_SERIALIZATION_NVP(transparency);
		}
	};
}

#endif
