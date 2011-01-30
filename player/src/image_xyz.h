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

#ifndef _EASYRPG_IMAGE_XYZ_H_
#define _EASYRPG_IMAGE_XYZ_H_

#include <cstdio>
#include "system.h"

namespace ImageXYZ {
	void ReadXYZ(const uint8* data, uint len, bool transparent, int& width, int& height, void*& pixels);
	void ReadXYZ(FILE* stream, bool transparent, int& width, int& height, void*& pixels);
}

#endif
