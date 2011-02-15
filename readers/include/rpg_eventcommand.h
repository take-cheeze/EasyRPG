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

#ifndef _RPG_EVENTCOMMAND_H_
#define _RPG_EVENTCOMMAND_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::EventCommand class
////////////////////////////////////////////////////////////
namespace RPG {
	class EventCommand {
	public:
		EventCommand();
		
		int code;
		int indent;
		std::string string;
		std::vector<int> parameters;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(code);
			ar & BOOST_SERIALIZATION_NVP(indent);
			ar & BOOST_SERIALIZATION_NVP(string);
			ar & BOOST_SERIALIZATION_NVP(parameters);
		}
	};
}

#endif
