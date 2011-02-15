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

#ifndef _RPG_EVENTPAGE_H_
#define _RPG_EVENTPAGE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "rpg_eventpagecondition.h"
#include "rpg_eventcommand.h"
#include "rpg_moveroute.h"

////////////////////////////////////////////////////////////
/// RPG::EventPage class
////////////////////////////////////////////////////////////
namespace RPG {
	class EventPage {
	public:
		EventPage();
		
		int ID;
		RPG::EventPageCondition condition;
		std::string character_name;
		int character_index;
		int character_direction;
		int character_pattern;
		bool translucent;
		int move_type;
		int move_frequency;
		int trigger;
		int priority_type;
		bool overlap;
		int animation_type;
		int move_speed;
		RPG::MoveRoute move_route;
		std::vector<RPG::EventCommand> event_commands;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(condition);
			ar & BOOST_SERIALIZATION_NVP(character_name);
			ar & BOOST_SERIALIZATION_NVP(character_index);
			ar & BOOST_SERIALIZATION_NVP(character_direction);
			ar & BOOST_SERIALIZATION_NVP(character_pattern);
			ar & BOOST_SERIALIZATION_NVP(translucent);
			ar & BOOST_SERIALIZATION_NVP(move_type);
			ar & BOOST_SERIALIZATION_NVP(move_frequency);
			ar & BOOST_SERIALIZATION_NVP(trigger);
			ar & BOOST_SERIALIZATION_NVP(priority_type);
			ar & BOOST_SERIALIZATION_NVP(overlap);
			ar & BOOST_SERIALIZATION_NVP(animation_type);
			ar & BOOST_SERIALIZATION_NVP(move_speed);
			ar & BOOST_SERIALIZATION_NVP(move_route);
			ar & BOOST_SERIALIZATION_NVP(event_commands);
		}
	};
}

#endif
