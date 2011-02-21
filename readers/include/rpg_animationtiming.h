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

#ifndef _RPG_ANIMATIONTIMING_H_
#define _RPG_ANIMATIONTIMING_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "rpg_sound.h"

////////////////////////////////////////////////////////////
/// RPG::AnimationTiming class
////////////////////////////////////////////////////////////
namespace RPG {
	class AnimationTiming {
	public:
		enum FlashScope {
			FlashScope_nothing = 0,
			FlashScope_target = 1,
			FlashScope_screen = 2
		};
		enum ScreenShake {
			ScreenShake_nothing = 0,
			ScreenShake_target = 1,
			ScreenShake_screen = 2
		};

		AnimationTiming();
		
		int frame;
		Sound se;
		int flash_scope;
		int flash_red;
		int flash_green;
		int flash_blue;
		int flash_power;
		int screen_shake;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(frame);
			ar & BOOST_SERIALIZATION_NVP(se);
			ar & BOOST_SERIALIZATION_NVP(flash_scope);
			ar & BOOST_SERIALIZATION_NVP(flash_red);
			ar & BOOST_SERIALIZATION_NVP(flash_green);
			ar & BOOST_SERIALIZATION_NVP(flash_blue);
			ar & BOOST_SERIALIZATION_NVP(flash_power);
			ar & BOOST_SERIALIZATION_NVP(screen_shake);
		}
	};
}

#endif
