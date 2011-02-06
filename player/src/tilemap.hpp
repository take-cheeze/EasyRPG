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

#ifndef _TILEMAP_H_
#define _TILEMAP_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <vector>
#include "tilemap_layer.h"
#include "bitmap.h"

////////////////////////////////////////////////////////////
/// Tilemap class
////////////////////////////////////////////////////////////
class Tilemap {
public:
	Tilemap();

	void Update();

	Bitmap* GetChipset() const;
	void SetChipset(Bitmap* nchipset);
	std::vector<short> const& GetMapDataDown() const;
	void SetMapDataDown(std::vector<short> const& down);
	std::vector<short> const& GetMapDataUp() const;
	void SetMapDataUp(std::vector<short> const& up);
	std::vector<unsigned char> const& GetPassableUp() const;
	void SetPassableUp(std::vector<unsigned char> const& up);
	std::vector<unsigned char> const& GetPassableDown() const;
	void SetPassableDown(std::vector<unsigned char> const& down);
	std::vector<short> const& GetProperties() const;
	void SetProperties(std::vector<short> const& nproperties);
	bool GetVisible() const;
	void SetVisible(bool nvisible);
	int GetOx() const;
	void SetOx(int nox);
	int GetOy() const;
	void SetOy(int noy);
	int GetWidth() const;
	void SetWidth(int nwidth);
	int GetHeight() const;
	void SetHeight(int nheight);
	int GetAnimationSpeed() const;
	void SetAnimationSpeed(int speed);
	int GetAnimationType() const;
	void SetAnimationType(int type);
	void SubstituteDown(int old_id, int new_id);
	void SubstituteUp(int old_id, int new_id);

private:
	TilemapLayer layer_down;
	TilemapLayer layer_up;
};

#endif
