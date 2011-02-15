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

#ifndef _RPG_EVENTPAGECONDITION_H_
#define _RPG_EVENTPAGECONDITION_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::EventPageCondition class
////////////////////////////////////////////////////////////
namespace RPG {
	class EventPageCondition {
	public:
		EventPageCondition();
		
		bool switch_a;
		bool switch_b;
		bool variable;
		bool item;
		bool actor;
		bool timer;
		bool timer2;
		int switch_a_id;
		int switch_b_id;
		int variable_id;
		int variable_value;
		int item_id;
		int actor_id;
		int timer_sec;
		int timer2_sec;
		int compare_operator;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(switch_a);
			ar & BOOST_SERIALIZATION_NVP(switch_b);
			ar & BOOST_SERIALIZATION_NVP(variable);
			ar & BOOST_SERIALIZATION_NVP(item);
			ar & BOOST_SERIALIZATION_NVP(actor);
			ar & BOOST_SERIALIZATION_NVP(timer);
			ar & BOOST_SERIALIZATION_NVP(timer2);
			ar & BOOST_SERIALIZATION_NVP(switch_a_id);
			ar & BOOST_SERIALIZATION_NVP(switch_b_id);
			ar & BOOST_SERIALIZATION_NVP(variable_id);
			ar & BOOST_SERIALIZATION_NVP(variable_value);
			ar & BOOST_SERIALIZATION_NVP(item_id);
			ar & BOOST_SERIALIZATION_NVP(actor_id);
			ar & BOOST_SERIALIZATION_NVP(timer_sec);
			ar & BOOST_SERIALIZATION_NVP(timer2_sec);
			ar & BOOST_SERIALIZATION_NVP(compare_operator);
		}
	};
}

#endif
