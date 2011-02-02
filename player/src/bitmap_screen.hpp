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

#ifndef _BITMAP_SCREEN_H_
#define _BITMAP_SCREEN_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "bitmap.hpp"
#include "tone.hpp"

////////////////////////////////////////////////////////////
/// Base BitmapScreen class.
/// It includes blitting to screen methods.
/// This class must not be used by the Engine, it may only
/// be used by the backend itself.
////////////////////////////////////////////////////////////
class BitmapScreen {
public:
	////////////////////////////////////////////////////////
	/// Creates a BitmapScreen object.
	/// @param source : source bitmap, or NULL.
	////////////////////////////////////////////////////////
	static std::auto_ptr<BitmapScreen> CreateBitmapScreen(Bitmap* source);
	static std::auto_ptr<BitmapScreen> CreateBitmapScreen(std::auto_ptr<Bitmap> source);

	////////////////////////////////////////////////////////
	/// Creates a BitmapScreen object with no attached bitmap
	////////////////////////////////////////////////////////
	static std::auto_ptr<BitmapScreen> CreateBitmapScreen();

	////////////////////////////////////////////////////////
	/// Marks the BitmapScreen as dirty.
	////////////////////////////////////////////////////////
	virtual void SetDirty();

	////////////////////////////////////////////////////////
	/// Set source bitmap.
	/// @param source : source bitmap
	////////////////////////////////////////////////////////
	virtual void SetBitmap(std::auto_ptr<Bitmap> source);
	virtual void SetBitmap(Bitmap* source);

	////////////////////////////////////////////////////////
	/// Get source bitmap.
	/// @return source bitmap
	////////////////////////////////////////////////////////
	virtual Bitmap* GetBitmap();

	////////////////////////////////////////////////////////
	/// Blit the bitmap to the screen.
	/// @param x : x position
	/// @param y : y position
	////////////////////////////////////////////////////////
	virtual void BlitScreen(int x, int y) = 0;

	////////////////////////////////////////////////////////
	/// Blit the bitmap to the screen.
	/// @param x : x position
	/// @param y : y position
	/// @param src_rect : source rect
	////////////////////////////////////////////////////////
	virtual void BlitScreen(int x, int y, Rect src_rect) = 0;

	////////////////////////////////////////////////////////
	/// Blit the bitmap to the screen.
	/// @param src_rect : source bitmap rect
	/// @param dst_rect : screen destination rect
	////////////////////////////////////////////////////////
	virtual void BlitScreenTiled(Rect src_rect, Rect dst_rect, int ox, int oy) = 0;

	////////////////////////////////////////////////////////
	/// Clear all effects data.
	////////////////////////////////////////////////////////
	virtual void ClearEffects();

	////////////////////////////////////////////////////////
	/// Flash effect.
	/// @param color : flash color
	/// @param duration : flash duration
	////////////////////////////////////////////////////////
	virtual void SetFlashEffect(const Color &color, int duration);

	////////////////////////////////////////////////////////
	/// Flash effect update.
	/// @param frame : frame of flash animation
	////////////////////////////////////////////////////////
	virtual void UpdateFlashEffect(int frame);

	/// @return source rect
	virtual Rect GetSrcRect() const;

	/// @param src_rect : source rect
	virtual void SetSrcRect(Rect src_rect);

	/// @return bitmap opacity
	/// @param which : 0 => top, 1 => bottom (below bush depth)
	virtual int GetOpacityEffect(int which = 0) const;

	/// @param opacity_top : bitmap top opacity (above bush depth)
	/// @param opacity_bottom : bitmap bottom opacity (below bush depth)
	///  note: opacity_bottom == -1 => opacity_bottom = (opacity_top + 1) / 2
	virtual void SetOpacityEffect(int opacity_top, int opacity_bottom = -1);

	/// @return bush depth effect
	virtual int GetBushDepthEffect() const;

	/// @param bush_depth : bush depth effect
	virtual void SetBushDepthEffect(int bush_depth);

	/// @return tone effect
	virtual Tone GetToneEffect() const;

	/// @param tone : tone effect
	virtual void SetToneEffect(Tone tone);

	/// @return horizontal flip
	virtual bool GetFlipXEffect() const;

	/// @param flipx : horizontal flip
	virtual void SetFlipXEffect(bool flipx);

	/// @return vertical flip
	virtual bool GetFlipYEffect() const;

	/// @param flipy : vertical flip
	virtual void SetFlipYEffect(bool flipy);

	/// @return horizontal zoom
	virtual double GetZoomXEffect() const;

	/// @param zoom_x : horizontal zoom
	virtual void SetZoomXEffect(double zoom_x);

	/// @return vertical zoom
	virtual double GetZoomYEffect() const;

	/// @param zoom_y : vertical zoom
	virtual void SetZoomYEffect(double zoom_y);

	/// @return angle of rotation in degrees
	virtual double GetAngleEffect() const;

	/// @param angle : angle of rotation in degrees
	virtual void SetAngleEffect(double angle);

	/// @return blend type
	virtual int GetBlendType() const;

	/// @param blend_type : blend type
	virtual void SetBlendType(int blend_type);

	/// @return blend color
	virtual Color GetBlendColor() const;

	/// @param blend_color : blend color
	virtual void SetBlendColor(Color blend_color);

	/// @return waver magnitude in pixels
	virtual int GetWaverEffectDepth() const;

	/// @return waver phase in degrees
	virtual double GetWaverEffectPhase() const;

	/// @param waver magnitude in pixels
	virtual void SetWaverEffectDepth(int depth);

	/// @param waver phase in degrees
	virtual void SetWaverEffectPhase(double phase);

protected:
	BitmapScreen(Bitmap* src);
	BitmapScreen(std::auto_ptr<Bitmap> src);

	class BitmapPointer {
	public:
		BitmapPointer(BitmapScreen& bs) : owner_(bs), rawptr_(NULL) {}
		Bitmap* get() { return( autoptr_.get()? autoptr_.get() : rawptr_ ); }
		Bitmap const* get() const { return( autoptr_.get()? autoptr_.get() : rawptr_ ); }
		operator bool() const { return this->get(); }
		Bitmap* operator ->() { return this->get(); }
	private:
		BitmapScreen& owner_;
		std::auto_ptr<Bitmap> autoptr_;
		Bitmap* rawptr_;

		void unattach() {
			if( this->get() != NULL ) {
				(*this)->DetachBitmapScreen(&owner_);
			}
			autoptr_.reset(NULL);
			rawptr_ = NULL;
		}
		void attach() {
			owner_.src_rect_effect = (*this)->GetRect();
			(*this)->AttachBitmapScreen(&owner_);
		}
	public:
		~BitmapPointer() { unattach(); }

		BitmapPointer& operator =(Bitmap* src) {
			this->unattach();
			rawptr_ = src;
			this->attach();
			return *this;
		}
		BitmapPointer& operator =(std::auto_ptr<Bitmap> src) {
			this->unattach();
			autoptr_ = src;
			this->attach();
			return *this;
		}
	} bitmap;

	bool needs_refresh;

	Rect src_rect_effect;
	int opacity_top_effect;
	int opacity_bottom_effect;
	int bush_effect;
	Tone tone_effect;
	bool flipx_effect;
	bool flipy_effect;
	double zoom_x_effect;
	double zoom_y_effect;
	double angle_effect;
	int blend_type_effect;
	Color blend_color_effect;
	int waver_effect_depth;
	double waver_effect_phase;
};

#endif
