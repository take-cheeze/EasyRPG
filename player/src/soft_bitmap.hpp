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

#ifndef _SOFT_BITMAP_H_
#define _SOFT_BITMAP_H_

#include "system.hpp"
#ifdef USE_SOFT_BITMAP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>

#include "surface.hpp"
#include "pixel_format.hpp"
#include "bitmap_utils.hpp"

////////////////////////////////////////////////////////////
/// SoftBitmap class.
////////////////////////////////////////////////////////////
class SoftBitmap : public Surface {
public:
	SoftBitmap(int width, int height, bool transparent);
	SoftBitmap(void *pixels, int width, int height, int pitch);
	SoftBitmap(const std::string& filename, bool transparent, uint32 flags);
	SoftBitmap(const uint8* data, uint bytes, bool transparent, uint32 flags);
	SoftBitmap(Bitmap* source, Rect src_rect, bool transparent);
	~SoftBitmap();

	void SetTransparentColor(Color color);

	void* pixels();
	int width() const;
	int height() const;
	uint8 bpp() const;
	uint16 pitch() const;
	uint32 rmask() const;
	uint32 gmask() const;
	uint32 bmask() const;
	uint32 amask() const;
	uint32 colorkey() const;

protected:
	friend class SoftBitmapScreen;

	static const format_B8G8R8A8_a pixel_format;
	static const format_B8G8R8A8_n opaque_format;
	static const format_R8G8B8A8_a image_format;

	/// Bitmap data.
	int w, h;
	int _pitch;
	void* bitmap;
	bool destroy;

	void Init(int width, int height, void* data, int pitch = 0, bool destroy = true);

	Color GetColor(uint32 color) const;
	uint32 GetUint32Color(const Color &color) const;
	uint32 GetUint32Color(uint8 r, uint8  g, uint8 b, uint8 a) const;
	void GetColorComponents(uint32 color, uint8 &r, uint8 &g, uint8 &b, uint8 &a) const;

	void Lock();
	void Unlock();

	void ConvertImage(int& width, int& height, void*& pixels);
	void SetupFormat();
};

#endif

#endif
