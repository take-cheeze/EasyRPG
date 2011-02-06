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
#include "cache.hpp"
#include "filefinder.hpp"
#include "options.hpp"
#include "main_data.hpp"
#include "output.hpp"
#include "utils.hpp"
#include "image_xyz.hpp"
#include "image_bmp.hpp"
#include "image_png.hpp"
#include "text.hpp"
#include "bitmap_utils.hpp"
#include "soft_bitmap.hpp"

////////////////////////////////////////////////////////////

const format_B8G8R8A8_a SoftBitmap::pixel_format;
const format_B8G8R8A8_n SoftBitmap::opaque_format;
const format_R8G8B8A8_a SoftBitmap::image_format;

////////////////////////////////////////////////////////////
void SoftBitmap::Init(int width, int height, void *data = NULL, int pitch, bool _destroy) {
	w = width;
	h = height;
	_pitch = (pitch != 0) ? pitch : w * 4;
	bitmap = (data != NULL)  ? data : malloc(h * _pitch);
	destroy = _destroy;

	if (bitmap == NULL) {
		Output::Error("Couldn't create %dx%d image.\n", w, h);
	}
}

////////////////////////////////////////////////////////////
void SoftBitmap::ConvertImage(int& width, int& height, void*& pixels) {
	uint8* dst = (uint8*) pixels;
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			uint8 r, g, b, a;
			image_format.get_rgba(dst, r, g, b, a);
			pixel_format.set_rgba(dst, r, g, b, a);
			dst += 4;
		}
	}

	Init(width, height, pixels);
}

////////////////////////////////////////////////////////////
void SoftBitmap::SetupFormat() {
	format = (transparent ? pixel_format.Format() : opaque_format.Format());
}

////////////////////////////////////////////////////////////
SoftBitmap::SoftBitmap(int width, int height, bool itransparent) {
	transparent = itransparent;
	SetupFormat();
	Init(width, height);
	Clear();
}

SoftBitmap::SoftBitmap(void *pixels, int width, int height, int pitch) {
	transparent = false;
	SetupFormat();
	Init(width, height, pixels, pitch, false);
}

SoftBitmap::SoftBitmap(const std::string& filename, bool itransparent, uint32 flags) {
	transparent = itransparent;
	SetupFormat();

	int namelen = (int) filename.size();
	if (namelen < 5 || filename[namelen - 4] != '.') {
		Output::Error("Invalid extension for image file %s", filename.c_str());
		return;
	}

	std::string ext = Utils::LowerCase(filename.substr(namelen - 3, 3));
	if (ext != "png" && ext != "xyz" && ext != "bmp") {
		Output::Error("Unsupported image file %s", filename.c_str());
		return;
	}

	FILE* stream = FileFinder::fopenUTF8(filename, "rb");
	if (!stream) {
		Output::Error("Couldn't open image file %s", filename.c_str());
		return;
	}

	int width, height;
	void* pixels;

	if (ext == "png")
		ImagePNG::ReadPNG(stream, (const void*) NULL, transparent, width, height, pixels);
	else if (ext == "xyz")
		ImageXYZ::ReadXYZ(stream, transparent, width, height, pixels);
	else if (ext == "bmp")
		ImageBMP::ReadBMP(stream, transparent, width, height, pixels);

	ConvertImage(width, height, pixels);

	fclose(stream);

	CheckPixels(flags);
}

SoftBitmap::SoftBitmap(const uint8* data, uint bytes, bool itransparent, uint32 flags) {
	transparent = itransparent;
	SetupFormat();

	int width, height;
	void* pixels;

	if (bytes > 4 && strncmp((char*) data, "XYZ1", 4) == 0)
		ImageXYZ::ReadXYZ(data, bytes, transparent, width, height, pixels);
	else if (bytes > 2 && strncmp((char*) data, "BM", 2) == 0)
		ImageBMP::ReadBMP(data, bytes, transparent, width, height, pixels);
	else
		ImagePNG::ReadPNG((FILE*) NULL, (const void*) data, transparent, width, height, pixels);

	ConvertImage(width, height, pixels);

	CheckPixels(flags);
}

SoftBitmap::SoftBitmap(Bitmap* source, Rect src_rect, bool itransparent) {
	transparent = itransparent;
	SetupFormat();

	Init(src_rect.width, src_rect.height);
	Clear();

	Blit(0, 0, source, src_rect, 255);
}

////////////////////////////////////////////////////////////
SoftBitmap::~SoftBitmap() {
	if (destroy)
		free(bitmap);
}

////////////////////////////////////////////////////////////
void* SoftBitmap::pixels() {
	return bitmap;
}

uint8 SoftBitmap::bpp() const {
	return pixel_format.bytes;
}

int SoftBitmap::width() const {
	return w;
}

int SoftBitmap::height() const {
	return h;
}

uint16 SoftBitmap::pitch() const {
	return _pitch;
}

uint32 SoftBitmap::rmask() const {
	return pixel_format.r_mask();
}

uint32 SoftBitmap::gmask() const {
	return pixel_format.g_mask();
}

uint32 SoftBitmap::bmask() const {
	return pixel_format.b_mask();
}

uint32 SoftBitmap::amask() const {
	return pixel_format.a_mask();
}

uint32 SoftBitmap::colorkey() const {
	return 0;
}

////////////////////////////////////////////////////////////
Color SoftBitmap::GetColor(uint32 uint32_color) const {
	uint8 r, g, b, a;
	pixel_format.uint32_to_rgba(uint32_color, r, g, b, a);
	return Color(r, g, b, a);
}

uint32 SoftBitmap::GetUint32Color(const Color &color) const {
	return pixel_format.rgba_to_uint32(color.red, color.green, color.blue, color.alpha);
}

uint32 SoftBitmap::GetUint32Color(uint8 r, uint8 g, uint8 b, uint8 a) const {
	return pixel_format.rgba_to_uint32(r, g, b, a);
}

void SoftBitmap::GetColorComponents(uint32 color, uint8 &r, uint8 &g, uint8 &b, uint8 &a) const {
	pixel_format.uint32_to_rgba(color, r, g, b, a);
}

////////////////////////////////////////////////////////////
void SoftBitmap::Lock() {
}

void SoftBitmap::Unlock() {
}

#endif

