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

#ifndef _SDL_BITMAP_SCREEN_H_
#define _SDL_BITMAP_SCREEN_H_

#include "system.hpp"
#ifdef USE_SDL_BITMAP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "bitmap_screen.hpp"
#include "surface.hpp"
#include "SDL.h"

////////////////////////////////////////////////////////////
/// SdlBitmapScreen class.
////////////////////////////////////////////////////////////
class SdlBitmapScreen : public BitmapScreen {
public:
	SdlBitmapScreen(Bitmap* source);
	SdlBitmapScreen(std::auto_ptr<Bitmap> source);
	~SdlBitmapScreen();

	void SetBitmap(Bitmap* bitmap);

	void BlitScreen(int x, int y);
	void BlitScreen(int x, int y, Rect src_rect);
	void BlitScreenTiled(Rect src_rect, Rect dst_rect);

	void ClearEffects();

	void SetSrcRect(Rect src_rect);

protected:
	static void BlitScreenIntern(SDL_Surface* surface, int x, int y, Rect src_rect, int opacity);

	void Refresh(Rect& rect);

	void CalcRotatedSize(int &width, int &height);
	void CalcZoomedSize(int &width, int &height);

	boost::scoped_ptr<Bitmap> bitmap_effects;
	Rect bitmap_effects_src_rect;
	Rect bitmap_effects_rect;
	int origin_x;
	int origin_y;
};

#endif

#endif
