/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
//
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
// Headers
///////////////////////////////////////////////////////////
#include "baseui.hpp"
#include "system.hpp"

#ifdef USE_SDL
#include "sdl_ui.hpp"
#endif

///////////////////////////////////////////////////////////
boost::scoped_ptr<BaseUi> DisplayUi;

///////////////////////////////////////////////////////////
std::auto_ptr<BaseUi> BaseUi::CreateBaseUi(long width, long height, const std::string title, bool fs_flag, bool zoom) {
	#ifdef USE_SDL
	return std::auto_ptr<BaseUi>(new SdlUi(width, height, title, fs_flag));
	#endif
}
