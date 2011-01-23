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

#include "data.h"
#include "cache.h"
#include "output.h"
#include "utils.h"
#include "bitmap.h"
#include "font.h"
#include "text.h"

////////////////////////////////////////////////////////////
void Text::Draw(Bitmap* dest, int x, int y, std::wstring wtext, Bitmap::TextAlignment align) {
	if (wtext.length() == 0) return;

	Font* font = dest->GetFont();

	Rect dst_rect = dest->GetTextSize(wtext);
	dst_rect.x = x; dst_rect.y = y;
	dst_rect.width += 1; dst_rect.height += 1; // Need place for shadow
	if (dst_rect.IsOutOfBounds(dest->GetWidth(), dest->GetHeight())) return;

	Bitmap* text_surface; // Complete text will be on this surface
	text_surface = Bitmap::CreateBitmap(dst_rect.width, dst_rect.height, true);
	#ifndef USE_ALPHA
	text_surface->SetTransparentColor(dest->GetTransparentColor());
	#endif
	text_surface->Clear();

	// Load the system file for the shadow and text color
	Bitmap* system = Cache::System(Data::system.system_name);
	// Load the exfont-file
	Bitmap* exfont = Cache::ExFont();

	// Get the Shadow color
	Color shadow_color(system->GetPixel(16, 32));
	// If shadow is pure black, add 1 to blue channel
	// so it doesn't become transparent
	if ((shadow_color.red == 0) &&
		(shadow_color.green == 0) &&
		(shadow_color.blue == 0) ) {
			// FIXME: what if running in 16 bpp?
		shadow_color.blue++;
	}

	// Where to draw the next glyph (x pos)
	int next_glyph_pos = 0;

	// The current char is a full size glyph
	bool is_full_glyph = false;
	// The current char is an exfont (is_full_glyph must be true too)
	bool is_exfont = false;

	// This loops always renders a single char, color blends it and then puts
	// it onto the text_surface (including the drop shadow)
	for (unsigned c = 0; c < wtext.size(); ++c) {
		Rect next_glyph_rect(next_glyph_pos, 0, 0, 0);

		Bitmap* mask;

		// ExFont-Detection: Check for A-Z or a-z behind the $
		if (wtext[c] == L'$' && c != wtext.size() - 1 &&
			((wtext[c+1] >= L'a' && wtext[c+1] <= L'z') ||
			(wtext[c+1] >= L'A' && wtext[c+1] <= L'Z'))) {
			int exfont_value;
			// Calculate which exfont shall be rendered
			if ((wtext[c+1] >= L'a' && wtext[c+1] <= L'z')) {
				exfont_value = 26 + wtext[c+1] - L'a';
			} else {
				exfont_value = wtext[c+1] - L'A';
			}
			is_full_glyph = true;
			is_exfont = true;

			mask = Bitmap::CreateBitmap(12, 12, true);

			// Get exfont from graphic
			Rect rect_exfont((exfont_value % 13) * 12, (exfont_value / 13) * 12, 12, 12);

			// Create a mask
			mask->Clear();
			mask->Blit(0, 0, exfont, rect_exfont, 255);
		} else {
			// No ExFont, draw normal text

			mask = font->Render(wtext[c]);
			if (mask == NULL) {
				Output::Warning("Couldn't render char %lc (%d). Skipping...", wtext[c], (int)wtext[c]);
				continue;
			}
		}

		// Get color region from system graphic
		Rect clip_system(8+16*(font->color%10), 4+48+16*(font->color/10), 6, 12);

		Bitmap* char_surface = Bitmap::CreateBitmap(mask->GetWidth(), mask->GetHeight(), true);
		#ifndef USE_ALPHA
		char_surface->SetTransparentColor(dest->GetTransparentColor());
		#endif
		char_surface->Clear();

		// Blit gradient color background (twice in case of a full glyph)
		char_surface->Blit(0, 0, system, clip_system, 255);
		char_surface->Blit(6, 0, system, clip_system, 255);
		// Blit mask onto background
		char_surface->Mask(0, 0, mask, mask->GetRect());

		Bitmap* char_shadow = Bitmap::CreateBitmap(mask->GetWidth(), mask->GetHeight(), true);
		#ifndef USE_ALPHA
		char_shadow->SetTransparentColor(dest->GetTransparentColor());
		#endif
		char_shadow->Clear();

		// Blit solid color background
		char_shadow->Fill(shadow_color);
		// Blit mask onto background
		char_shadow->Mask(0, 0, mask, mask->GetRect());

		// Blit first shadow and then text
		text_surface->Blit(next_glyph_rect.x + 1, next_glyph_rect.y + 1, char_shadow, char_shadow->GetRect(), 255);
		text_surface->Blit(next_glyph_rect.x, next_glyph_rect.y, char_surface, char_surface->GetRect(), 255);

		delete mask;
		delete char_surface;
		delete char_shadow;

		// If it's a full size glyph, add the size of a half-size glypth twice
		if (is_full_glyph) {
			next_glyph_pos += 6;
			is_full_glyph = false;
			if (is_exfont) {
				is_exfont = false;
				// Skip the next character
				++c;
			}
		}
		next_glyph_pos += 6;	
	}

	Bitmap* text_bmp = Bitmap::CreateBitmap(text_surface, text_surface->GetRect());

	Rect src_rect(0, 0, dst_rect.width, dst_rect.height);
	int iy = dst_rect.y;
	if (dst_rect.height > text_bmp->GetHeight()) {
		iy += ((dst_rect.height - text_bmp->GetHeight()) / 2);
	}
	int ix = dst_rect.x;
	
	// Alignment code
	if (dst_rect.width > text_bmp->GetWidth()) {
		if (align == Bitmap::TextAlignCenter) {
			ix += (dst_rect.width - text_bmp->GetWidth()) / 2;
		} else if (align == Bitmap::TextAlignRight) {
			ix += dst_rect.width - text_bmp->GetWidth();
		}
	}

	dest->Blit(ix, iy, text_bmp, src_rect, 255);

	delete text_bmp;
	delete text_surface;
}

void Text::Draw(Bitmap* dest, int x, int y, std::string text, Bitmap::TextAlignment align) {
	if (text.length() == 0) return;

	std::wstring wtext = Utils::DecodeUTF(text);
	Draw(dest, x, y, wtext, align);
}

