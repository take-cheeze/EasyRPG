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

#ifndef _CACHE_H_
#define _CACHE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <map>
#include "bitmap.hpp"

////////////////////////////////////////////////////////////
/// Cache namespace
////////////////////////////////////////////////////////////
namespace Cache {
	Bitmap* LoadBitmap(std::string const& folder_name, std::string const& filename, bool transparent);
	Bitmap* Backdrop(std::string const& filename);
	Bitmap* Battle(std::string const& filename);
	Bitmap* Battle2(std::string const& filename);
	Bitmap* BattleCharset(std::string const& filename);
	Bitmap* BattleWeapon(std::string const& filename);
	Bitmap* Charset(std::string const& filename);
	Bitmap* ExFont();
	Bitmap* Faceset(std::string const& filename);
	Bitmap* Frame(std::string const& filename);
	Bitmap* Gameover(std::string const& filename);
	Bitmap* Monster(std::string const& filename);
	Bitmap* Panorama(std::string const& filename);
	Bitmap* Picture(std::string const& filename);
	Bitmap* Chipset(std::string const& filename);
	Bitmap* Title(std::string const& filename);
	Bitmap* System(std::string const& filename);
	Bitmap* System2(std::string const& filename);
	Bitmap* Tile(std::string const& filename, int tile_id);
	void Clear();
}

#endif
