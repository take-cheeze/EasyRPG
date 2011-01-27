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

#ifndef _EASYRPG_SURFACE_H_
#define _EASYRPG_SURFACE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <list>
#include "color.hpp"
#include "font.hpp"
#include "rect.hpp"
#include "tone.hpp"
#include "bitmap.hpp"

////////////////////////////////////////////////////////////
/// Base Surface class.
////////////////////////////////////////////////////////////
class Surface : public Bitmap {
public:
	////////////////////////////////////////////////////////
	/// Creates surface.
	/// @param width  : surface width
	/// @param height : surface height
	/// @param transparent : allow transparency on surface
	////////////////////////////////////////////////////////
	static std::auto_ptr<Surface> CreateSurface(int width, int height, bool transparent = true);

	////////////////////////////////////////////////////////
	/// Creates a bitmap from another.
	/// @param source : source bitmap
	/// @param src_rect : rect to copy from source bitmap
	/// @param transparent : allow transparency on bitmap
	////////////////////////////////////////////////////////
	static std::auto_ptr<Surface> CreateSurface(Bitmap* source, Rect src_rect, bool transparent = true);

	////////////////////////////////////////////////////////
	/// Destructor.
	////////////////////////////////////////////////////////
	virtual ~Surface();

	////////////////////////////////////////////////////////
	/// Blit source bitmap to this one.
	/// @param x : x position
	/// @param y : y position
	/// @param src : source bitmap
	/// @param src_rect : source bitmap rect
	/// @param opacity : opacity for blending with bitmap
	////////////////////////////////////////////////////////
	virtual void Blit(int x, int y, Bitmap* src, Rect src_rect, int opacity);

	////////////////////////////////////////////////////////
	/// Blit source bitmap in tiles to this one.
	/// @param src_rect : source bitmap rect
	/// @param src : source bitmap
	/// @param dst_rect : destination rect
	/// @param opacity : opacity for blending with bitmap
	////////////////////////////////////////////////////////
	virtual void TiledBlit(Rect src_rect, Bitmap* src, Rect dst_rect, int opacity);

	////////////////////////////////////////////////////////
	/// Blit source bitmap in tiles to this one.
	/// @param ox : tile start x offset
	/// @param ox : tile start y offset
	/// @param src_rect : source bitmap rect
	/// @param src : source bitmap
	/// @param dst_rect : destination rect
	/// @param opacity : opacity for blending with bitmap
	////////////////////////////////////////////////////////
	virtual void TiledBlit(int ox, int oy, Rect src_rect, Bitmap* src, Rect dst_rect, int opacity);

	////////////////////////////////////////////////////////
	/// Blit source bitmap stretched to this one.
	/// @param src : source bitmap
	/// @param src_rect : source bitmap rect
	/// @param opacity : opacity for blending with bitmap
	////////////////////////////////////////////////////////
	virtual void StretchBlit(Bitmap* src, Rect src_rect, int opacity);

	////////////////////////////////////////////////////////
	/// Blit source bitmap stretched to this one.
	/// @param dst_rect : destination rect
	/// @param src : source bitmap
	/// @param src_rect : source bitmap rect
	/// @param opacity : opacity for blending with bitmap
	////////////////////////////////////////////////////////
	virtual void StretchBlit(Rect dst_rect, Bitmap* src, Rect src_rect, int opacity);

	/// Blit source bitmap transparency to this one.
	/// @param x : x position
	/// @param y : y position
	/// @param src : source bitmap
	/// @param src_rect : source bitmap rect
	////////////////////////////////////////////////////////
	virtual void Mask(int x, int y, Bitmap* src, Rect src_rect);

	////////////////////////////////////////////////////////
	/// Fill entire bitmap with color.
	/// @param color : color for filling
	////////////////////////////////////////////////////////
	virtual void Fill(const Color &color);

	////////////////////////////////////////////////////////
	/// Fill bitmap rect with color.
	/// @param dst_rect : destination rect
	/// @param color : color for filling
	////////////////////////////////////////////////////////
	virtual void FillRect(Rect dst_rect, const Color &color);

	////////////////////////////////////////////////////////
	/// Clears the bitmap with transparent pixels.
	////////////////////////////////////////////////////////
	virtual void Clear();

	////////////////////////////////////////////////////////
	/// Clears the bitmap rect with transparent pixels.
	/// @param dst_rect : destination rect
	////////////////////////////////////////////////////////
	virtual void ClearRect(Rect dst_rect);
	
	////////////////////////////////////////////////////////
	/// Rotate bitmap hue.
	/// @param hue : hue change, degrees
	////////////////////////////////////////////////////////
	virtual void HueChange(double hue);

	////////////////////////////////////////////////////////
	/// Adjust bitmap HSL colors.
	/// @param hue : hue change, degrees
	/// @param sat : saturation scale
	/// @param lum : luminance scale
	/// @param loff: luminance offset
	/// @param dst_rect : destination rect
	////////////////////////////////////////////////////////
	virtual void HSLChange(double hue, double sat, double lum, double loff, Rect dst_rect);

	////////////////////////////////////////////////////////
	/// Adjust bitmap tone.
	/// @param tone : tone to apply
	////////////////////////////////////////////////////////
	virtual void ToneChange(const Tone &tone);

	////////////////////////////////////////////////////////
	/// Flips the bitmap pixels.
	/// @param horizontal : flip horizontally (mirror)
	/// @param vertical : flip vertically
	////////////////////////////////////////////////////////
	virtual void Flip(bool horizontal, bool vertical);

	////////////////////////////////////////////////////////
	/// Change the opacity of a bitmap.
	/// @param opacity : the maximum opacity
	/// @param src_rect: the rectangle to modify
	////////////////////////////////////////////////////////
	virtual void OpacityChange(int opacity, const Rect &src_rect);

	/// TextDraw alignment options
	enum TextAlignment {
		TextAlignLeft,
		TextAlignCenter,
		TextAlignRight
	};

	////////////////////////////////////////////////////////
	/// Draws text to bitmap.
	/// @param x : x coordinate where text rendering starts
	/// @param y : y coordinate where text rendering starts
	/// @param text : text to draw
	/// @param align : text alignment
	////////////////////////////////////////////////////////
	virtual void TextDraw(int x, int y, std::string text, TextAlignment align = Surface::TextAlignLeft);
	virtual void TextDraw(int x, int y, std::wstring text, TextAlignment align = Surface::TextAlignLeft);

	////////////////////////////////////////////////////////
	/// Draws text to bitmap.
	/// @param x : x coordinate of bounding rectangle
	/// @param y : y coordinate of bounding rectangle
	/// @param width : width of bounding rectangle
	/// @param height : height of bounding rectangle
	/// @param text : text to draw
	/// @param align : text alignment inside bounding rectangle
	////////////////////////////////////////////////////////
	virtual void TextDraw(int x, int y, int width, int height, std::string text, TextAlignment align = Surface::TextAlignLeft);
	virtual void TextDraw(int x, int y, int width, int height, std::wstring text, TextAlignment align = Surface::TextAlignLeft);

	////////////////////////////////////////////////////////
	/// Draws text to bitmap.
	/// @param rect : bounding rectangle
	/// @param text : text to draw
	/// @param align : text alignment inside bounding rectangle
	////////////////////////////////////////////////////////
	virtual void TextDraw(Rect rect, std::string text, TextAlignment align = Surface::TextAlignLeft);
	virtual void TextDraw(Rect rect, std::wstring text, TextAlignment align = Surface::TextAlignLeft);

	////////////////////////////////////////////////////////
	/// Get space needed to draw some text.
	/// This assumes that every char has a size of 6x12.
	/// @param text : text to draw
	////////////////////////////////////////////////////////
	virtual Rect GetTextSize(std::string text) const;
	/// Wide string version
	virtual Rect GetTextSize(std::wstring text) const;

	////////////////////////////////////////////////////////
	/// Set the bitmap not to update its attached
	/// BitmapScreen objects until EndEditing is called.
	/// This way when multiple operation take place, the
	/// attached BitmapScreen objects will be set dirty
	/// only one time.
	////////////////////////////////////////////////////////
	virtual void BeginEditing();

	////////////////////////////////////////////////////////
	/// Set all attached BitmapScreen objects dirty and
	/// restore normal updates.
	////////////////////////////////////////////////////////
	virtual void EndEditing();

	/// @return text drawing font
	virtual Font* GetFont() const;

	/// @param text drawing font
	virtual void SetFont(Font* font);

protected:
	friend class FTFont;

#ifdef USE_SDL
	friend class SdlBitmap;
	friend class SdlUi;
#endif

	Surface();

	/// Font for text drawing.
	Font* font;

	virtual void RefreshCallback();

	////////////////////////////////////////////////////////
	/// Get a pixel color.
	/// @param x : pixel x
	/// @param y : pixel y
	/// @param color : pixel color
	////////////////////////////////////////////////////////
	virtual void SetPixel(int x, int y, const Color &color);

	bool editing;
};

#endif
