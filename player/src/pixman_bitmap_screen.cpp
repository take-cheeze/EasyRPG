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
#include <cmath>
#include <iostream>
#include "pixman_bitmap_screen.hpp"
#include "pixman_bitmap.hpp"
#include "sdl_ui.hpp"

////////////////////////////////////////////////////////////
PixmanBitmapScreen::PixmanBitmapScreen(Bitmap* bitmap) :
	BitmapScreen(bitmap),
	bitmap_effects(NULL) {}

////////////////////////////////////////////////////////////
PixmanBitmapScreen::PixmanBitmapScreen(std::auto_ptr<Bitmap> bitmap) :
	BitmapScreen(bitmap),
	bitmap_effects(NULL) {}

////////////////////////////////////////////////////////////
void PixmanBitmapScreen::BlitScreen(int x, int y) {
	if (bitmap == NULL || opacity_top_effect <= 0)
		return;

	Refresh();

	x -= origin_x;
	y -= origin_y;

	BlitScreenIntern(x, y, bitmap_effects->GetRect());
}

////////////////////////////////////////////////////////////
void PixmanBitmapScreen::BlitScreen(int x, int y, Rect src_rect) {
	if (bitmap == NULL || opacity_top_effect <= 0)
		return;

	Refresh();

	if (bitmap_effects == NULL) return;

	x -= origin_x;
	y -= origin_y;

	BlitScreenIntern(x, y, src_rect);
}

////////////////////////////////////////////////////////////
void PixmanBitmapScreen::BlitScreenTiled(Rect src_rect, Rect dst_rect) {
	if (bitmap == NULL || opacity_top_effect <= 0)
		return;

	Refresh();

	int x1 = dst_rect.x + dst_rect.width;
	int y1 = dst_rect.y + dst_rect.height;
	for (int y = dst_rect.y; y < y1; y += src_rect.height) {
		for (int x = dst_rect.x; x < x1; x += src_rect.width) {
			Rect rect = src_rect;
			if (y + src_rect.height > y1)
				src_rect.height = y1 - y;
			if (x + src_rect.width > x1)
				src_rect.width = x1 - x;
			BlitScreenIntern(x, y, src_rect);
		}
	}
}

////////////////////////////////////////////////////////////
void PixmanBitmapScreen::BlitScreenIntern(int x, int y, Rect src_rect) {
	DisplaySdlUi->GetDisplaySurface()->Blit(x, y, bitmap_effects.get(), src_rect, 255);
}

////////////////////////////////////////////////////////////
void PixmanBitmapScreen::Refresh() {
	origin_x = 0;
	origin_y = 0;

	if (!needs_refresh)
		return;

	needs_refresh = false;

	if (bitmap.get() == NULL)
		return;

	std::auto_ptr<Surface> surface_effects = Surface::CreateSurface(src_rect_effect.width, src_rect_effect.height, true);

	src_rect_effect.Adjust(bitmap->GetWidth(), bitmap->GetHeight());

	if (src_rect_effect.IsOutOfBounds(bitmap->GetWidth(), bitmap->GetHeight()))
		return;

	surface_effects->Blit(0, 0, bitmap.get(), src_rect_effect, 255);
	surface_effects->ToneChange(tone_effect);
	surface_effects->Flip(flipx_effect, flipy_effect);

	if (opacity_top_effect < 255 && bush_effect < surface_effects->GetHeight()) {
		Rect src_rect(0, 0, surface_effects->GetWidth(), surface_effects->GetHeight() - bush_effect);
		surface_effects->OpacityChange(opacity_top_effect, src_rect);
	}

	if (opacity_bottom_effect < 255 && bush_effect > 0) {
		Rect src_rect(0, surface_effects->GetHeight() - bush_effect, surface_effects->GetWidth(), bush_effect);
		surface_effects->OpacityChange(opacity_bottom_effect / 2, src_rect);
	}

	bitmap_effects.reset(surface_effects.release());

	if (zoom_x_effect == 1.0 && zoom_y_effect == 1.0 && angle_effect == 0.0 && waver_effect_depth == 0)
		return;

	int zoomed_width  = (int)(bitmap_effects->GetWidth()  * zoom_x_effect);
	int zoomed_height = (int)(bitmap_effects->GetHeight() * zoom_y_effect);
	std::auto_ptr<Bitmap> fx2;

	if (angle_effect == 0.0) {
		fx2 = bitmap_effects->Resample(zoomed_width, zoomed_height, bitmap_effects->GetRect());
	}
	else {
		fx2 = bitmap_effects->RotateScale(
			angle_effect * 3.14159 / 180, zoomed_width, zoomed_height);
		origin_x = (fx2->GetWidth() - zoomed_width) / 2;
		origin_y = (fx2->GetHeight() - zoomed_height) / 2;
	}

	bitmap_effects.reset(fx2.release());

	if (waver_effect_depth == 0)
		return;

	fx2 = bitmap_effects->Waver(waver_effect_depth, waver_effect_phase);

	bitmap_effects.reset(fx2.release());
}

#endif

