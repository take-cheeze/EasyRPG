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

#ifndef _RPG_EVENT_H_
#define _RPG_EVENT_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader.h"
#include "rpg_eventpage.h"

////////////////////////////////////////////////////////////
/// RPG::Event class
////////////////////////////////////////////////////////////
namespace RPG {
	class Event {
	public:
		Event();
		
		int ID;
		std::string name;
		int x;
		int y;
		std::vector<RPG::EventPage> pages;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(x);
			ar & BOOST_SERIALIZATION_NVP(y);
			ar & BOOST_SERIALIZATION_NVP(pages);
		}
	};
}

#endif
