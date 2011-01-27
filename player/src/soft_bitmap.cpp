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

#include "system.hpp"
#ifdef USE_SOFT_BITMAP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <cstdlib>
#include <iostream>
<<<<<<< HEAD
#include <png.h>
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_BITMAP_H
#include "cache.hpp"
#include "filefinder.hpp"
#include "options.hpp"
// #include "data.hpp"
#include "output.hpp"
#include "soft_bitmap.hpp"
=======
#include "cache.hpp"
#include "filefinder.hpp"
#include "options.hpp"
#include "data.hpp"
#include "output.hpp"
#include "utils.hpp"
#include "image.hpp"
#include "text.hpp"
#include "soft_bitmap.hpp"
>>>>>>> master

////////////////////////////////////////////////////////////
void SoftBitmap::Init(int width, int height) {
	w = width;
	h = height;
	bitmap = calloc(h, w * 4);

	if (bitmap == NULL) {
		Output::Error("Couldn't create %dx%d image.\n", w, h);
	}
}

////////////////////////////////////////////////////////////
static void ConvertImage(int& width, int& height, void*& pixels) {
	uint8* dst = (uint8*) pixels;
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			uint8 r = dst[0];
			uint8 g = dst[1];
			uint8 b = dst[2];
			uint8 a = dst[3];
			dst[0] = b;
			dst[1] = g;
			dst[2] = r;
			dst[3] = a;
			dst += 4;
		}
	}
}

////////////////////////////////////////////////////////////
SoftBitmap::SoftBitmap(int width, int height, bool itransparent) {
	transparent = itransparent;

	Init(width, height);
}

SoftBitmap::SoftBitmap(const std::string& filename, bool itransparent, uint32 flags) {
	transparent = itransparent;

	int namelen = (int) filename.size();
	if (namelen < 5 || filename[namelen - 4] != '.') {
		Output::Error("Invalid extension for image file %s", filename.c_str());
		return;
	}

	std::string ext = Utils::LowerCase(filename.substr(namelen - 3, 3));
	if (ext != "png" && ext != "xyz") {
		Output::Error("Unsupported image file %s", filename.c_str());
		return;
	}

	FILE* stream = FileFinder::fopenUTF8(filename, "rb");
	if (!stream) {
		Output::Error("Couldn't open image file %s", filename.c_str());
		return;
	}
	if (ext == "png")
		Image::ReadPNG(stream, (const void*) NULL, transparent, w, h, bitmap);
	else if (ext == "xyz")
		Image::ReadXYZ(stream, transparent, w, h, bitmap);

	ConvertImage(w, h, bitmap);

	fclose(stream);

	CheckPixels(flags);
}

SoftBitmap::SoftBitmap(const uint8* data, uint bytes, bool itransparent, uint32 flags) {
	transparent = itransparent;

	if (bytes > 4 && strncmp((char*) data, "XYZ1", 4) == 0)
		Image::ReadXYZ(data, bytes, transparent, w, h, bitmap);
	else
		Image::ReadPNG((FILE*) NULL, (const void*) data, transparent, w, h, bitmap);

	ConvertImage(w, h, bitmap);

	CheckPixels(flags);
}

SoftBitmap::SoftBitmap(Bitmap* source, Rect src_rect, bool itransparent) {
	transparent = itransparent;

	Init(src_rect.width, src_rect.height);

	Blit(0, 0, source, src_rect, 255);
}

////////////////////////////////////////////////////////////
SoftBitmap::~SoftBitmap() {
	free(bitmap);
}

////////////////////////////////////////////////////////////
void* SoftBitmap::pixels() {
	return bitmap;
}

uint8 SoftBitmap::bpp() const {
	return 4;
}

int SoftBitmap::width() const {
	return w;
}

int SoftBitmap::height() const {
	return h;
}

uint16 SoftBitmap::pitch() const {
	return width() * bpp();
}

uint32 SoftBitmap::rmask() const {
	return RMASK;
}

uint32 SoftBitmap::gmask() const {
	return GMASK;
}

uint32 SoftBitmap::bmask() const {
	return BMASK;
}

uint32 SoftBitmap::amask() const {
	return AMASK;
}

uint32 SoftBitmap::colorkey() const {
	return 0;
}

////////////////////////////////////////////////////////////
void SoftBitmap::Blit(int x, int y, Bitmap* _src, Rect src_rect, int opacity) {
	if (opacity < 0)
		return;

	SoftBitmap* src = (SoftBitmap*) _src;
	Rect dst_rect(x, y, 0, 0);

	if (!Rect::AdjustRectangles(src_rect, dst_rect, src->GetRect()))
		return;
	if (!Rect::AdjustRectangles(dst_rect, src_rect, GetRect()))
		return;

	if (opacity > 255) opacity = 255;

	Lock();
	src->Lock();

	const uint8* src_pixels = (const uint8*)src->pixels() + src_rect.x * bpp() + src_rect.y * src->pitch();
	uint8* dst_pixels = (uint8*)pixels() + dst_rect.x * bpp() + dst_rect.y * pitch();

	int src_pad = src->pitch() - dst_rect.width * bpp();
	int dst_pad = pitch() - dst_rect.width * bpp();

	for (int i = 0; i < dst_rect.height; i++) {
		for (int j = 0; j < dst_rect.width; j++) {
			uint8 srca = src_pixels[3] * opacity / 255;
			dst_pixels[0] = (dst_pixels[0] * (255 - srca) + src_pixels[0] * srca) / 255;
			dst_pixels[1] = (dst_pixels[1] * (255 - srca) + src_pixels[1] * srca) / 255;
			dst_pixels[2] = (dst_pixels[2] * (255 - srca) + src_pixels[2] * srca) / 255;
			dst_pixels[3] = std::max(dst_pixels[3], srca);

			src_pixels += 4;
			dst_pixels += 4;
		}
		src_pixels += src_pad;
		dst_pixels += dst_pad;
	}

	Unlock();
	src->Unlock();

	RefreshCallback();
}

void SoftBitmap::Mask(int x, int y, Bitmap* _src, Rect src_rect) {
	SoftBitmap* src = (SoftBitmap*) _src;

	Rect dst_rect(x, y, 0, 0);

	if (!Rect::AdjustRectangles(src_rect, dst_rect, src->GetRect()))
		return;
	if (!Rect::AdjustRectangles(dst_rect, src_rect, GetRect()))
		return;

	Lock();
	src->Lock();

	const uint8* src_pixels = (uint8*)src->pixels() + src_rect.x * bpp() + src_rect.y * src->pitch();
	uint8* dst_pixels = (uint8*)pixels() + dst_rect.x * bpp() + dst_rect.y * pitch();

	int src_pad = src->pitch() - dst_rect.width * bpp();
	int dst_pad = pitch() - dst_rect.width * bpp();

	for (int i = 0; i < dst_rect.height; i++) {
		for (int j = 0; j < dst_rect.width; j++) {
			dst_pixels[3] = std::min(dst_pixels[3], src_pixels[3]);

			src_pixels += 4;
			dst_pixels += 4;
		}
		src_pixels += src_pad;
		dst_pixels += dst_pad;
	}

	Unlock();
	src->Unlock();

	RefreshCallback();
}

////////////////////////////////////////////////////////////
void SoftBitmap::SetTransparentColor(Color color) {
}

////////////////////////////////////////////////////////////
Color SoftBitmap::GetColor(uint32 uint32_color) const {
	const uint8* p = (const uint8*) &uint32_color;
	return Color(p[2], p[1], p[0], p[3]);
}

uint32 SoftBitmap::GetUint32Color(const Color &color) const {
	uint8 x[4] = {color.blue, color.green, color.red, color.alpha};
	return *(const uint32*) x;
}

uint32 SoftBitmap::GetUint32Color(uint8 r, uint8  g, uint8 b, uint8 a) const {
	uint8 x[4] = {b, g, r, a};
	return *(const uint32*) x;
}

void SoftBitmap::GetColorComponents(uint32 color, uint8 &r, uint8 &g, uint8 &b, uint8 &a) const {
	const uint8* p = (const uint8*) &color;
	b = p[0];
	g = p[1];
	r = p[2];
	a = p[3];
}

////////////////////////////////////////////////////////////
void SoftBitmap::Lock() {
}

void SoftBitmap::Unlock() {
}

#endif

