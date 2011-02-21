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

#ifndef _RPG_ENCOUNTER_H_
#define _RPG_ENCOUNTER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::Encounter class
////////////////////////////////////////////////////////////
namespace RPG {
	class Encounter {
	public:
		Encounter();
		
		int ID;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
		}
	};
}

#endif
