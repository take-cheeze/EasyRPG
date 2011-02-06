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
#ifdef USE_PIXMAN_BITMAP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <cstdlib>
#include <cmath>
#include <iostream>
#include "cache.hpp"
#include "filefinder.hpp"
#include "options.hpp"
#include "output.hpp"
#include "utils.hpp"
#include "image_xyz.hpp"
#include "image_bmp.hpp"
#include "image_png.hpp"
#include "text.hpp"
#include "pixel_format.hpp"
#include "bitmap_utils.hpp"
#include "pixman_bitmap.hpp"

////////////////////////////////////////////////////////////

const format_B8G8R8A8_a PixmanBitmap::pixel_format;
const format_B8G8R8A8_n PixmanBitmap::opaque_format;
const format_R8G8B8A8_a PixmanBitmap::image_format;

////////////////////////////////////////////////////////////
static void destroy_func(pixman_image_t *image, void *data) {
	free(data);
}

void PixmanBitmap::Init(int width, int height, void* data, int pitch, bool destroy) {

	if (!pitch)
		pitch = width * 4;

	bitmap = pixman_image_create_bits(pixman_format, width, height, (uint32_t*) data, pitch);

	if (bitmap == NULL) {
		Output::Error("Couldn't create %dx%d image.\n", width, height);
	}

	if (data != NULL && destroy)
		pixman_image_set_destroy_function(bitmap, destroy_func, data);
}

////////////////////////////////////////////////////////////
void PixmanBitmap::ConvertImage(int& width, int& height, void*& pixels) {
	// premultiply alpha and convert bytes to words
	for (int y = 0; y < height; y++) {
		uint8* dst = (uint8*) pixels + y * width * 4;
		for (int x = 0; x < width; x++) {
			uint8 r, g, b, a;
			image_format.get_rgba(dst, r, g, b, a);
			MultiplyAlpha(r, g, b, a);
			pixel_format.set_rgba(dst, r, g, b, a);
			dst += 4;
		}
	}
}

////////////////////////////////////////////////////////////
PixmanBitmap::PixmanBitmap(int width, int height, bool itransparent) {
	transparent = itransparent;
	format = (transparent ? pixel_format.Format() : opaque_format.Format());
	Init(width, height, (void *) NULL);
}

PixmanBitmap::PixmanBitmap(void *pixels, int width, int height, int pitch) {
	transparent = false;
	format = (transparent ? pixel_format.Format() : opaque_format.Format());
	Init(width, height, pixels, pitch, false);
}

PixmanBitmap::PixmanBitmap(const std::string filename, bool itransparent, uint32 flags) {
	transparent = itransparent;
	format = (transparent ? pixel_format.Format() : opaque_format.Format());

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

	int w, h;
	void* pixels;

	if (ext == "png")
		ImagePNG::ReadPNG(stream, (void*) NULL, transparent, w, h, pixels);
	else if (ext == "xyz")
		ImageXYZ::ReadXYZ(stream, transparent, w, h, pixels);
	else if (ext == "bmp")
		ImageBMP::ReadBMP(stream, transparent, w, h, pixels);

	fclose(stream);

	ConvertImage(w, h, pixels);
	Init(w, h, pixels);

	CheckPixels(flags);
}

PixmanBitmap::PixmanBitmap(const uint8* data, uint bytes, bool itransparent, uint32 flags) {
	transparent = itransparent;
	format = (transparent ? pixel_format.Format() : opaque_format.Format());

	int w, h;
	void* pixels;

	if (bytes > 4 && strncmp((char*) data, "XYZ1", 4) == 0)
		ImageXYZ::ReadXYZ(data, bytes, transparent, w, h, pixels);
	else if (bytes > 2 && strncmp((char*) data, "BM", 4) == 0)
		ImageBMP::ReadBMP(data, bytes, transparent, w, h, pixels);
	else
		ImagePNG::ReadPNG((FILE*) NULL, (const void*) data, transparent, w, h, pixels);

	ConvertImage(w, h, pixels);
	Init(w, h, pixels);

	CheckPixels(flags);
}

PixmanBitmap::PixmanBitmap(Bitmap* source, Rect src_rect, bool itransparent) {
	transparent = itransparent;
	format = (transparent ? pixel_format.Format() : opaque_format.Format());

	Init(src_rect.width, src_rect.height, (void *) NULL);

	Blit(0, 0, source, src_rect, 255);
}

////////////////////////////////////////////////////////////
PixmanBitmap::~PixmanBitmap() {
	pixman_image_unref(bitmap);
}

////////////////////////////////////////////////////////////
void* PixmanBitmap::pixels() {
	return (void*) pixman_image_get_data(bitmap);
}

uint8 PixmanBitmap::bpp() const {
	return (pixman_image_get_depth(bitmap) + 7) / 8;
}

int PixmanBitmap::width() const {
	return pixman_image_get_width(bitmap);
}

int PixmanBitmap::height() const {
	return pixman_image_get_height(bitmap);
}

uint16 PixmanBitmap::pitch() const {
	return pixman_image_get_stride(bitmap);
}

uint32 PixmanBitmap::rmask() const {
	return pixel_format.r_mask();
}

uint32 PixmanBitmap::gmask() const {
	return pixel_format.g_mask();
}

uint32 PixmanBitmap::bmask() const {
	return pixel_format.b_mask();
}

uint32 PixmanBitmap::amask() const {
	return pixel_format.a_mask();
}

uint32 PixmanBitmap::colorkey() const {
	return 0;
}

////////////////////////////////////////////////////////////
std::auto_ptr<Bitmap> PixmanBitmap::Resample(int scale_w, int scale_h, const Rect& src_rect) {
	std::auto_ptr<PixmanBitmap> dst(new PixmanBitmap(scale_w, scale_h, transparent));

	double zoom_x = (double)src_rect.width  / scale_w;
	double zoom_y = (double)src_rect.height / scale_h;

	pixman_transform_t xform;
	pixman_transform_init_scale(&xform,
								pixman_double_to_fixed(zoom_x),
								pixman_double_to_fixed(zoom_y));
	
	pixman_image_set_transform(bitmap, &xform);

	pixman_image_composite32(PIXMAN_OP_SRC,
							 bitmap, (pixman_image_t*) NULL, dst->bitmap,
							 src_rect.x, src_rect.y,
							 0, 0,
							 0, 0,
							 scale_w, scale_h);

	pixman_transform_init_identity(&xform);
	pixman_image_set_transform(bitmap, &xform);

	return std::auto_ptr<Bitmap>(dst.release());
}

////////////////////////////////////////////////////////////
void PixmanBitmap::Blit(int x, int y, Bitmap* _src, Rect src_rect, int opacity) {
	if (opacity < 0)
		return;

	PixmanBitmap* src = (PixmanBitmap*) _src;

	if (opacity > 255) opacity = 255;

	pixman_image_t* mask;
	if (opacity < 255) {
		pixman_color_t tcolor = {0, 0, 0, opacity << 8};
		mask = pixman_image_create_solid_fill(&tcolor);
	}
	else
		mask = (pixman_image_t*) NULL;

	pixman_image_composite32(PIXMAN_OP_OVER,
							 src->bitmap, mask, bitmap,
							 src_rect.x, src_rect.y,
							 0, 0,
							 x, y,
							 src_rect.width, src_rect.height);

	if (mask != NULL)
		pixman_image_unref(mask);

	RefreshCallback();
}

pixman_image_t* PixmanBitmap::GetSubimage(Bitmap* _src, const Rect& src_rect) {
	PixmanBitmap* src = (PixmanBitmap*) _src;
	uint8* pixels = (uint8*) src->pixels() + src_rect.x * src->bpp() + src_rect.y * src->pitch();
	return pixman_image_create_bits(pixman_format, src_rect.width, src_rect.height,
									(uint32_t*) pixels, src->pitch());
}

void PixmanBitmap::TiledBlit(Rect src_rect, Bitmap* src, Rect dst_rect, int opacity) {
	TiledBlit(0, 0, src_rect, src, dst_rect, opacity);
}

void PixmanBitmap::TiledBlit(int ox, int oy, Rect src_rect, Bitmap* src, Rect dst_rect, int opacity) {
	if (opacity < 0)
		return;

	if (opacity > 255) opacity = 255;

	if (ox >= src_rect.width)	ox %= src_rect.width;
	if (oy >= src_rect.height)	ox %= src_rect.height;
	if (ox < 0) ox += src_rect.width  * ((-ox + src_rect.width  - 1) / src_rect.width);
	if (oy < 0) oy += src_rect.height * ((-oy + src_rect.height - 1) / src_rect.height);

	pixman_image_t* src_bm = GetSubimage(src, src_rect);

	pixman_image_t* mask;
	if (opacity < 255) {
		pixman_color_t tcolor = {0, 0, 0, opacity << 8};
		mask = pixman_image_create_solid_fill(&tcolor);
	}
	else
		mask = (pixman_image_t*) NULL;

	pixman_image_set_repeat(src_bm, PIXMAN_REPEAT_NORMAL);

	pixman_transform_t xform;
	pixman_transform_init_translate(&xform,
									pixman_int_to_fixed(ox),
									pixman_int_to_fixed(oy));

	pixman_image_set_transform(src_bm, &xform);

	pixman_image_composite32(PIXMAN_OP_OVER,
							 src_bm, mask, bitmap,
							 0, 0,
							 0, 0,
							 dst_rect.x, dst_rect.y,
							 dst_rect.width, dst_rect.height);

	pixman_image_unref(src_bm);

	if (mask != NULL)
		pixman_image_unref(mask);

	RefreshCallback();
}

void PixmanBitmap::StretchBlit(Bitmap* src, Rect src_rect, int opacity) {
	StretchBlit(GetRect(), src, src_rect, opacity);
}

void PixmanBitmap::StretchBlit(Rect dst_rect, Bitmap* _src, Rect src_rect, int opacity) {
	if (opacity < 0)
		return;

	PixmanBitmap* src = (PixmanBitmap*) _src;

	pixman_image_t* mask = (pixman_image_t*) NULL;
	if (opacity < 255) {
		pixman_color_t tcolor = {0, 0, 0, opacity << 8};
		mask = pixman_image_create_solid_fill(&tcolor);
	}

	double zoom_x = (double)src_rect.width  / dst_rect.width;
	double zoom_y = (double)src_rect.height / dst_rect.height;

	pixman_transform_t xform;
	pixman_transform_init_scale(&xform,
								pixman_double_to_fixed(zoom_x),
								pixman_double_to_fixed(zoom_y));

	pixman_image_set_transform(src->bitmap, &xform);

	pixman_image_composite32(PIXMAN_OP_OVER,
							 src->bitmap, mask, bitmap,
							 src_rect.x, src_rect.y,
							 0, 0,
							 dst_rect.x, dst_rect.y,
							 dst_rect.width, dst_rect.height);

	pixman_transform_init_identity(&xform);
	pixman_image_set_transform(src->bitmap, &xform);

	if (mask != NULL)
		pixman_image_unref(mask);

	RefreshCallback();
}

void PixmanBitmap::TransformBlit(Rect dst_rect, Bitmap* _src, Rect src_rect, const Matrix& inv) {
	PixmanBitmap* src = (PixmanBitmap*) _src;
	pixman_transform_t xform = {{
		{ pixman_double_to_fixed(inv.xx), pixman_double_to_fixed(inv.xy), pixman_double_to_fixed(inv.x0) },
		{ pixman_double_to_fixed(inv.yx), pixman_double_to_fixed(inv.yy), pixman_double_to_fixed(inv.y0) },
		{ pixman_double_to_fixed(0.0),    pixman_double_to_fixed(0.0),    pixman_double_to_fixed(1.0) }
		}};

	pixman_image_set_transform(src->bitmap, &xform);

	pixman_image_composite32(PIXMAN_OP_OVER,
							 src->bitmap, (pixman_image_t*) NULL, bitmap,
							 dst_rect.x, dst_rect.y,
							 0, 0,
							 dst_rect.x, dst_rect.y,
							 dst_rect.width, dst_rect.height);

	pixman_transform_init_identity(&xform);
	pixman_image_set_transform(src->bitmap, &xform);
}

void PixmanBitmap::MaskBlit(int x, int y, Bitmap* _src, Rect src_rect) {
	PixmanBitmap* src = (PixmanBitmap*) _src;

	pixman_image_composite32(PIXMAN_OP_DISJOINT_IN_REVERSE,
							 src->bitmap, (pixman_image_t*) NULL, bitmap,
							 src_rect.x, src_rect.y,
							 0, 0,
							 x, y,
							 src_rect.width, src_rect.height);

	RefreshCallback();
}

////////////////////////////////////////////////////////////

static pixman_color_t PixmanColor(const Color &color) {
	pixman_color_t pcolor;
	pcolor.red = color.red * color.alpha;
	pcolor.green = color.green * color.alpha;
	pcolor.blue = color.blue * color.alpha;
	pcolor.alpha = color.alpha << 8;
	return pcolor;
}

void PixmanBitmap::Fill(const Color &color) {
	pixman_color_t pcolor = PixmanColor(color);
	pixman_rectangle16_t rect = {0, 0, width(), height()};

	pixman_image_fill_rectangles(PIXMAN_OP_SRC, bitmap, &pcolor, 1, &rect);

	RefreshCallback();
}

void PixmanBitmap::FillRect(Rect dst_rect, const Color &color) {
	pixman_color_t pcolor = PixmanColor(color);
	pixman_rectangle16_t rect = {dst_rect.x, dst_rect.y, dst_rect.width, dst_rect.height};

	pixman_image_fill_rectangles(PIXMAN_OP_SRC, bitmap, &pcolor, 1, &rect);

	RefreshCallback();
}

void PixmanBitmap::Clear() {
	pixman_color_t pcolor = {0, 0, 0, 0};
	pixman_rectangle16_t rect = {0, 0, width(), height()};

	pixman_image_fill_rectangles(PIXMAN_OP_CLEAR, bitmap, &pcolor, 1, &rect);

	RefreshCallback();
}

void PixmanBitmap::ClearRect(Rect dst_rect) {
	pixman_color_t pcolor = {0, 0, 0, 0};
	pixman_rectangle16_t rect = {dst_rect.x, dst_rect.y, dst_rect.width, dst_rect.height};

	pixman_image_fill_rectangles(PIXMAN_OP_CLEAR, bitmap, &pcolor, 1, &rect);

	RefreshCallback();
}

void PixmanBitmap::OpacityBlit(int x, int y, Bitmap* _src, Rect src_rect, int opacity) {
	PixmanBitmap* src = (PixmanBitmap*) _src;

	if (opacity == 255) {
		if (_src != this)
			Blit(x, y, _src, src_rect, opacity);
		return;
	}

	if (src == this) {
		pixman_color_t pcolor = {0, 0, 0, opacity << 8};
		pixman_rectangle16_t rect = {src_rect.x, src_rect.y, src_rect.width, src_rect.height};

		pixman_image_fill_rectangles(PIXMAN_OP_IN_REVERSE, bitmap, &pcolor, 1, &rect);
	}
	else {
		if (opacity > 255)
			opacity = 255;

		pixman_color_t tcolor = {0, 0, 0, opacity << 8};
		pixman_image_t* mask = pixman_image_create_solid_fill(&tcolor);

		pixman_image_composite32(PIXMAN_OP_OVER,
								 src->bitmap, mask, bitmap,
								 src_rect.x, src_rect.y,
								 0, 0,
								 x, y,
								 src_rect.width, src_rect.height);

		pixman_image_unref(mask);
	}

	RefreshCallback();
}

void PixmanBitmap::ToneBlit(int x, int y, Bitmap* _src, Rect src_rect, const Tone &tone) {
	if (tone == Tone()) {
		if (_src != this)
			Blit(x, y, _src, src_rect, 255);
		return;
	}

	PixmanBitmap* src = (PixmanBitmap*) _src;

	if (_src != this)
		pixman_image_composite32(PIXMAN_OP_SRC,
								 src->bitmap, (pixman_image_t*) NULL, bitmap,
								 src_rect.x, src_rect.y,
								 0, 0,
								 x, y,
								 src_rect.width, src_rect.height);

	if (tone.gray == 0) {
		pixman_color_t tcolor = {tone.red << 8, tone.green << 8, tone.blue << 8, 0xFFFF};
		pixman_image_t *timage = pixman_image_create_solid_fill(&tcolor);

		pixman_image_composite32(PIXMAN_OP_ADD,
								 timage, src->bitmap, bitmap,
								 src_rect.x, src_rect.y,
								 0, 0,
								 x, y,
								 src_rect.width, src_rect.height);

		pixman_image_unref(timage);
	}
	else {
		pixman_rectangle16_t rect = {0, 0, src_rect.width, src_rect.height};

		PixmanBitmap *gray = new PixmanBitmap(src, src_rect, transparent);
		pixman_color_t gcolor = {0, 0, 0, 0xFFFF};
		pixman_image_fill_rectangles(PIXMAN_OP_HSL_SATURATION, gray->bitmap, &gcolor, 1, &rect);

		pixman_color_t acolor = {0, 0, 0, tone.gray << 8};
		pixman_image_fill_rectangles(PIXMAN_OP_IN_REVERSE, gray->bitmap, &acolor, 1, &rect);

		pixman_image_composite32(PIXMAN_OP_ATOP,
								 gray->bitmap, (pixman_image_t*) NULL, bitmap,
								 src_rect.x, src_rect.y,
								 0, 0,
								 x, y,
								 src_rect.width, src_rect.height);

		pixman_color_t tcolor = {tone.red << 8, tone.green << 8, tone.blue << 8, 0xFFFF};
		pixman_image_t *timage = pixman_image_create_solid_fill(&tcolor);

		pixman_image_composite32(PIXMAN_OP_ADD,
								 timage, src->bitmap, bitmap,
								 src_rect.x, src_rect.y,
								 0, 0,
								 x, y,
								 src_rect.width, src_rect.height);

		pixman_image_unref(timage);

		delete gray;
	}

	RefreshCallback();
}

void PixmanBitmap::FlipBlit(int x, int y, Bitmap* _src, Rect src_rect, bool horizontal, bool vertical) {
	if (!horizontal && !vertical) {
		Blit(x, y, _src, src_rect, 255);
		return;
	}

	PixmanBitmap* src = (PixmanBitmap*) _src;

	pixman_transform_t xform;
	pixman_transform_init_scale(&xform,
								pixman_int_to_fixed(horizontal ? -1 : 1),
								pixman_int_to_fixed(vertical ? -1 : 1));

	pixman_transform_translate((pixman_transform_t*) NULL, &xform,
							   pixman_int_to_fixed(horizontal ? src_rect.width : 0),
							   pixman_int_to_fixed(vertical ? src_rect.height : 0));

	pixman_image_set_transform(bitmap, &xform);

	pixman_image_composite32(PIXMAN_OP_SRC,
							 src->bitmap, (pixman_image_t*) NULL, bitmap,
							 src_rect.x, src_rect.y,
							 0, 0,
							 x, y,
							 src_rect.width, src_rect.height);

	pixman_transform_init_identity(&xform);
	pixman_image_set_transform(bitmap, &xform);

	RefreshCallback();
}

////////////////////////////////////////////////////////////
void PixmanBitmap::Flip(const Rect& dst_rect, bool horizontal, bool vertical) {
	if (!horizontal && !vertical)
		return;

	PixmanBitmap* resampled = new PixmanBitmap(dst_rect.width, dst_rect.height, transparent);

	resampled->FlipBlit(0, 0, this, dst_rect, horizontal, vertical);

	pixman_image_composite32(PIXMAN_OP_SRC,
							 resampled->bitmap, (pixman_image_t*) NULL, bitmap,
							 0, 0,
							 0, 0,
							 dst_rect.x, dst_rect.y,
							 dst_rect.width, dst_rect.height);

	delete resampled;

	RefreshCallback();
}

void PixmanBitmap::Blit2x(Rect dst_rect, Bitmap* _src, Rect src_rect) {
	PixmanBitmap* src = (PixmanBitmap*) _src;

	pixman_transform_t xform;
	pixman_transform_init_scale(&xform,
								pixman_double_to_fixed(0.5),
								pixman_double_to_fixed(0.5));

	pixman_image_set_transform(src->bitmap, &xform);

	pixman_image_composite32(PIXMAN_OP_SRC,
							 src->bitmap, (pixman_image_t*) NULL, bitmap,
							 src_rect.x, src_rect.y,
							 0, 0,
							 dst_rect.x, dst_rect.y,
							 dst_rect.width, dst_rect.height);

	pixman_transform_init_identity(&xform);
	pixman_image_set_transform(src->bitmap, &xform);

	RefreshCallback();
}

////////////////////////////////////////////////////////////
Color PixmanBitmap::GetColor(uint32 uint32_color) const {
	uint8 r, g, b, a;
	GetColorComponents(uint32_color, r, g, b, a);
	return Color(r, g, b, a);
}

uint32 PixmanBitmap::GetUint32Color(const Color &color) const {
	return GetUint32Color(color.red, color.green, color.blue, color.alpha);
}

uint32 PixmanBitmap::GetUint32Color(uint8 r, uint8 g, uint8 b, uint8 a) const {
	MultiplyAlpha(r, g, b, a);
	return pixel_format.rgba_to_uint32(r, g, b, a);
}

void PixmanBitmap::GetColorComponents(uint32 color, uint8 &r, uint8 &g, uint8 &b, uint8 &a) const {
	pixel_format.uint32_to_rgba(color, r, g, b, a);
	DivideAlpha(r, g, b, a);
}

////////////////////////////////////////////////////////////
void PixmanBitmap::Lock() {
}

void PixmanBitmap::Unlock() {
}

#endif

