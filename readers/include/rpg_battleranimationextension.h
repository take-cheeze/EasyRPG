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

#ifndef _RPG_BATTLERANIMATIONEXTENSION_H_
#define _RPG_BATTLERANIMATIONEXTENSION_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::BattlerAnimationExtension class
////////////////////////////////////////////////////////////
namespace RPG {
	class BattlerAnimationExtension {
	public:
		BattlerAnimationExtension();
		
		std::string name;
		std::string battler_name;
		int battler_index;
		int animation_type;
		int animation_id;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(battler_name);
			ar & BOOST_SERIALIZATION_NVP(battler_index);
			ar & BOOST_SERIALIZATION_NVP(animation_type);
			ar & BOOST_SERIALIZATION_NVP(animation_id);
		}
	};
}

#endif
