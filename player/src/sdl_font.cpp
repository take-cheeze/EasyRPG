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
#ifdef USE_SDL_TTF

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SDL.h>
#include <SDL_ttf.h>
#include "font.hpp"
#include "filefinder.hpp"
#include "output.hpp"
#include "utils.hpp"
#include "sdl_bitmap.hpp"
#include "sdl_font.hpp"

////////////////////////////////////////////////////////////

#ifdef USE_ALPHA
	#define DisplayFormat(surface) SDL_DisplayFormatAlpha(surface)
#else
	#define DisplayFormat(surface) SDL_DisplayFormat(surface)
#endif

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////
SdlFont::SdlFont(const std::string& name, int size, bool bold, bool italic)
	: Font(name, size, bold, italic), ttf_font(NULL) {}

////////////////////////////////////////////////////////////
/// Destructor
////////////////////////////////////////////////////////////
SdlFont::~SdlFont() {
}

////////////////////////////////////////////////////////////
/// Get TTF_Font*
////////////////////////////////////////////////////////////
void SdlFont::GetTTF() {
	if (ttf_font != NULL)
		return;

	std::string path = FileFinder::FindFont(name);
	ttf_font = TTF_OpenFont(path.c_str(), size);
	if (!ttf_font) {
		Output::Error("Couldn't open font %s size %d.\n%s\n", name.c_str(), size, TTF_GetError());
	}

	int style = 0;
	if (bold) style |= TTF_STYLE_BOLD;
	if (italic) style |= TTF_STYLE_ITALIC;
	TTF_SetFontStyle(ttf_font, style);
}

////////////////////////////////////////////////////////////
/// Public methods
////////////////////////////////////////////////////////////
int SdlFont::GetHeight() {
	GetTTF();
	return TTF_FontHeight(ttf_font);
}

std::auto_ptr<Bitmap> SdlFont::Render(int c) {
	GetTTF();
	SDL_Color color = {255, 255, 255, 255};
	uint16 text[2] = {(uint16) c, 0};
	SDL_Surface* temp = TTF_RenderUNICODE_Solid(ttf_font, text, color);
	SDL_Color colorkey = temp->format->palette->colors[0];
	SDL_SetColorKey(temp, SDL_SRCCOLORKEY, SDL_MapRGB(temp->format, colorkey.r, colorkey.g, colorkey.b));
	SDL_Surface* surf = DisplayFormat(temp);
	SDL_FreeSurface(temp);
	return std::auto_ptr<Bitmap>( new SdlBitmap(surf) );
}

#endif

