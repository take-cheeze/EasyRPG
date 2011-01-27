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

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "cache.hpp"
#include "filefinder.hpp"
#include "exfont.hpp"

#include <boost/ptr_container/ptr_unordered_map.hpp>

////////////////////////////////////////////////////////////
typedef std::pair<std::string,std::string> cache_key;
typedef std::pair<std::string, int> tile_key;

namespace {
	boost::ptr_unordered_map<cache_key, Bitmap> cache;
	boost::ptr_unordered_map<tile_key, Bitmap> cache_tiles;
}

tSystemInfo Cache::system_info;

////////////////////////////////////////////////////////////
Bitmap* Cache::LoadBitmap(
	const std::string& folder_name, 
	const std::string& filename,
	bool transparent, 
	uint32 flags
) {
	cache_key const key = cache_key(folder_name, filename);

	boost::ptr_unordered_map<cache_key, Bitmap>::iterator it = cache.find(key);
	if (cache.find(key) == cache.end()) {
		std::string const path = FileFinder::FindImage(folder_name, filename);
		return cache.insert(key, !path.empty()
			? Bitmap::CreateBitmap(path, transparent)
			: Bitmap::CreateBitmap(16, 16, Color())
		).first->second;
	}

	return it->second;
}

////////////////////////////////////////////////////////////
Bitmap* Cache::Backdrop(const std::string& filename) {
	return LoadBitmap("Backdrop", filename, false);
}
Bitmap* Cache::Battle(const std::string& filename) {
	return LoadBitmap("Battle", filename);
}
Bitmap* Cache::Battle2(const std::string& filename) {
	return LoadBitmap("Battle2", filename);
}
Bitmap* Cache::BattleCharset(const std::string& filename) {
	return LoadBitmap("BattleCharSet", filename);
}
Bitmap* Cache::BattleWeapon(const std::string& filename) {
	return LoadBitmap("BattleWeapon", filename);
}
Bitmap* Cache::Charset(const std::string& filename) {
	return LoadBitmap("CharSet", filename);
}
Bitmap* Cache::ExFont() {
	cache_key const hash = cache_key("\x00","ExFont");

	boost::ptr_unordered_map<cache_key, Bitmap>::iterator it = cache.find(hash);
	if (it == cache.end()) {
		cache.insert( hash, Bitmap::CreateBitmap(exfont_h, sizeof(exfont_h), true) );
	}

	return it->second;
}
Bitmap* Cache::Faceset(const std::string& filename) {
	return LoadBitmap("FaceSet", filename);
}
Bitmap* Cache::Frame(const std::string& filename) {
	return LoadBitmap("Frame", filename);
}
Bitmap* Cache::Gameover(const std::string& filename) {
	return LoadBitmap("GameOver", filename, false);
}
Bitmap* Cache::Monster(const std::string& filename) {
	return LoadBitmap("Monster", filename);
}
Bitmap* Cache::Panorama(const std::string& filename) {
	return LoadBitmap("Panorama", filename, false);
}
Bitmap* Cache::Picture(const std::string& filename) {
	return LoadBitmap("Picture", filename);
}
Bitmap* Cache::Chipset(const std::string& filename) {
	return LoadBitmap("ChipSet", filename, true, Bitmap::Chipset);
}
Bitmap* Cache::Title(const std::string& filename) {
	return LoadBitmap("Title", filename, false);
}
Bitmap* Cache::System(const std::string& filename) {
	return LoadBitmap("System", filename, true, Bitmap::System);
}
Bitmap* Cache::System2(const std::string& filename) {
	return LoadBitmap("System2", filename);
}

////////////////////////////////////////////////////////////
Bitmap* Cache::Tile(const std::string& filename, int tile_id) {
	tile_key const key(filename, tile_id);
	boost::ptr_unordered_map<tile_key, Bitmap>::iterator it = cache_tiles.find(key);
	if (it == cache_tiles.end()) {
		Bitmap* chipset = Cache::Chipset(filename);
		Rect rect = Rect(0, 0, 16, 16);

		int sub_tile_id = 0;
		
		if (tile_id > 0 && tile_id < 48) {
			sub_tile_id = tile_id;
			rect.x += 288;
			rect.y += 128;
		} else if (tile_id >= 48 && tile_id < 96) {
			sub_tile_id = tile_id - 48;
			rect.x += 384;
		} else if (tile_id >= 96 && tile_id < 144) {
			sub_tile_id = tile_id - 96;
			rect.x += 384;
			rect.y += 128;
		} else { // Invalid -> Use empty file (first one)
			rect.x = 288;
			rect.y = 128;
		}

		rect.x += sub_tile_id % 6 * 16;
		rect.y += sub_tile_id / 6 * 16;


		return cache_tiles.insert(key, Bitmap::CreateBitmap(chipset, rect)).first->second;
	}
	return it->second;
}

////////////////////////////////////////////////////////////
void Cache::Clear() {
	cache.clear();
	cache_tiles.clear();
}
