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

#ifndef _RPG_BATTLERANIMATIONDATA_H_
#define _RPG_BATTLERANIMATIONDATA_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::BattlerAnimation class
////////////////////////////////////////////////////////////
namespace RPG {
	class BattlerAnimationData {
	public:
		BattlerAnimationData();
		
		int ID;
		int move;
		int after_image;
		int pose;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(move);
			ar & BOOST_SERIALIZATION_NVP(after_image);
			ar & BOOST_SERIALIZATION_NVP(pose);
		}
};
}

#endif
