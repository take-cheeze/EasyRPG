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
#include <math.h>
#include "window.h"
#include "player.h"
#include "graphics.h"
#include "rect.h"
#include "util_macro.h"

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////
Window::Window() {
	windowskin = NULL;
	contents = NULL;
	stretch = true;
	cursor_rect = Rect(0, 0, 0, 0);
	active = true;
	visible = true;
	pause = false;
	x = 0;
	y = 0;
	width = 0;
	height = 0;
	z = 0;
	ox = 0;
	oy = 0;
	opacity = 255;
	back_opacity = 255;
	contents_opacity = 255;

	background = NULL;
	frame = NULL;
	border_up = NULL;
	border_down = NULL;
	cursor_frame = 0;
	pause_frame = 0;
	animation_frames = 0;

	ID = Graphics::ID++;
	Graphics::RegisterZObj(0, ID);
	Graphics::RegisterDrawable(ID, this);

	type = WINDOW;
	
	cursor1 = new Bitmap(cursor_rect.width, cursor_rect.height);
	cursor2 = new Bitmap(cursor_rect.width, cursor_rect.height);
}

////////////////////////////////////////////////////////////
/// Destructor
////////////////////////////////////////////////////////////
Window::~Window() {
	Graphics::RemoveZObj(ID);
	Graphics::RemoveDrawable(ID);
	delete background;
	delete contents;
	delete frame;
	delete cursor1;
	delete cursor2;
	delete border_up;
	delete border_down;
}
////////////////////////////////////////////////////////////
/// Set Animation
////////////////////////////////////////////////////////////
void Window::SetAnimation(int frames) {
	animation_frames = frames;
	animation_acc = 0;
	// TODO: This increment is suppossed to be: Height / frames
	// but I don't know how to get the Height at this point
	animation_increment = 2;
}

////////////////////////////////////////////////////////////
/// Draw
////////////////////////////////////////////////////////////
void Window::Draw(int z_order) {
	if (!visible) return;
	if (width <= 0 || height <= 0) return;
	if (x < -width || x > Player::GetWidth() || y < -height || y > Player::GetHeight()) return;
	
	Rect src_rect;

	if (windowskin != NULL) {
		if (width > 4 && height > 4 && (back_opacity * opacity / 255 > 0)) {
			if (background_needs_refresh) RefreshBackground();

			if (animation_frames > 0) {
				int bHeight = background->GetHeight();
				src_rect.Set(0, (bHeight/2)-animation_acc, background->GetWidth(), animation_acc*2);
				background->BlitScreen(x + 2, (bHeight/2)-animation_acc+y + 2, src_rect, back_opacity * opacity / 255);
			} else {
				background->BlitScreen(x + 2, y + 2, back_opacity * opacity / 255);	
			}
		}
		if (width > 0 && height > 0 && opacity > 0) {
			if (frame_needs_refresh) RefreshFrame();
			
			if (animation_frames > 0) {
				int fHeight = frame->GetHeight();
				src_rect.Set(0, (fHeight/2)-animation_acc, frame->GetWidth(), animation_acc*2);
				frame->BlitScreen(x, (fHeight/2)-animation_acc+y, src_rect, opacity);
				if (animation_acc > 8) {
					border_down->BlitScreen(x, (fHeight/2)+animation_acc+y-8, opacity);
					border_up->BlitScreen(x, (fHeight/2)-animation_acc+y, opacity);
				}
			} else {
				frame->BlitScreen(x, y, opacity);
			}
		}

		if (width > 16 && height > 16 && cursor_rect.width > 4 && cursor_rect.height > 4) {
			if (cursor_needs_refresh) RefreshCursor();

			Rect src_rect(-min(cursor_rect.x + 8, 0),
				-min(cursor_rect.y + 8, 0),
				min(cursor_rect.width, width - 8 - cursor_rect.x),
				min(cursor_rect.height, height - 8 - cursor_rect.y));
			if (cursor_frame < 16) {
				if (animation_frames <= 0) cursor1->BlitScreen(x + 8 + cursor_rect.x, y + 8 + cursor_rect.y, src_rect);
			} else {
				if (animation_frames <= 0) cursor2->BlitScreen(x + 8 + cursor_rect.x, y + 8 + cursor_rect.y, src_rect);
			}
		}
	}

	if (contents != NULL) {
		if (width > 16 && height > 16 && -ox < width - 16 && -oy < height - 16 && contents_opacity > 0) {
			Rect src_rect(-min(-ox, 0), -min(-oy, 0), min(width - 16, width - 16 + ox), min(height - 16, height - 16 + oy));
			if (animation_frames <= 0)
				contents->BlitScreen(max(x + 8, x + 8 - ox), max(y + 8, y + 8 - oy), src_rect, contents_opacity);
		}
	}
	
	if (pause && pause_frame > 16) {
		Rect src_rect(40, 16, 16, 8);
		if (animation_frames <= 0) windowskin->BlitScreen(x + width / 2 - 4, y + height - 8, src_rect);
	}
	
	if (animation_frames > 0) {
		animation_frames -= animation_increment;
		animation_acc += animation_increment;
	}
}

////////////////////////////////////////////////////////////
/// Refresh Background
////////////////////////////////////////////////////////////
void Window::RefreshBackground() {
	background_needs_refresh = false;

	delete background;

	if (stretch) {
		Rect src_rect(0, 0, 16, 16);
		Rect dst_rect(0, 0, width - 4, height - 4);
		background = new Bitmap(width - 4, height - 4);
		background->StretchBlit(dst_rect, windowskin, src_rect, 255);
	} else {
		background = new Bitmap(width - 4, height - 4);
		int tilesx = (int)(ceil(background->GetWidth() / 16.0));
		int tilesy = (int)(ceil(background->GetHeight() / 16.0));
		Rect src_rect(0, 0, 16, 16);
		for (int i = 0; i < tilesx; i++) {
			for (int j = 0; j < tilesy; j++) {
				background->Blit(i * 16, j * 16, windowskin, src_rect, 255);
			}
		}
	}
}

////////////////////////////////////////////////////////////
/// Refresh Frame
////////////////////////////////////////////////////////////
void Window::RefreshFrame() {
	frame_needs_refresh = false;

	delete frame;
	delete border_up;
	delete border_down;

	frame = new Bitmap(width, height);
	border_up = new Bitmap(width, 8);
	border_down = new Bitmap(width, 8);

	Rect src_rect;
	
	// Draw Corners
	src_rect.x = 32;
	src_rect.y = 0;
	src_rect.width = 8;
	src_rect.height = 8;
	frame->Blit(0, 0, windowskin, src_rect, 255);
	border_up->Blit(0, 0, windowskin, src_rect, 255);
	
	src_rect.x = 64 - 8;
	frame->Blit(width - 8, 0, windowskin, src_rect, 255);
	border_up->Blit(width - 8, 0, windowskin, src_rect, 255);

	src_rect.y = 32 - 8;
	frame->Blit(width - 8, height - 8, windowskin, src_rect, 255);
	border_down->Blit(width - 8, 0, windowskin, src_rect, 255);
	
	src_rect.x = 32;
	frame->Blit(0, height - 8, windowskin, src_rect, 255);
	border_down->Blit(0, 0, windowskin, src_rect, 255);

	Rect dst_rect;

	// Border Up
	src_rect.x = 32 + 8;
	src_rect.y = 0;
	src_rect.width = 16;
	src_rect.height = 8;
	dst_rect.x = 8;
	dst_rect.y = 0;
	dst_rect.width = max(width - 16, 1);
	dst_rect.height = 8;
	frame->StretchBlit(dst_rect, windowskin, src_rect, 255);
	border_up->StretchBlit(dst_rect, windowskin, src_rect, 255);
	
	// Border Down
	src_rect.y = 32 - 8;
	dst_rect.y = height - 8;
	frame->StretchBlit(dst_rect, windowskin, src_rect, 255);
	dst_rect.y = 0;
	border_down->StretchBlit(dst_rect, windowskin, src_rect, 255);
	
	// Border Left
	src_rect.x = 32;
	src_rect.y = 8;
	src_rect.width = 8;
	src_rect.height = 16;
	dst_rect.x = 0;
	dst_rect.y = 8;
	dst_rect.width = 8;
	dst_rect.height = max(height - 16, 1);
	frame->StretchBlit(dst_rect, windowskin, src_rect, 255);
	
	// Border Right
	src_rect.x = 64 - 8;
	dst_rect.x = width - 8;
	frame->StretchBlit(dst_rect, windowskin, src_rect, 255);
}

////////////////////////////////////////////////////////////
/// Refresh Cursor
////////////////////////////////////////////////////////////
void Window::RefreshCursor() {
	cursor_needs_refresh = false;
	
	delete cursor1;
	cursor1 = new Bitmap(cursor_rect.width, cursor_rect.height);

	// Background
	Rect src_rect(66, 2, 28, 28);
	Rect dst_rect(2, 2, cursor_rect.width - 4, cursor_rect.height - 4);
	cursor1->StretchBlit(dst_rect, windowskin, src_rect, 255);

	// Corners
	src_rect.x = 64;
	src_rect.y = 0;
	src_rect.width = 2;
	src_rect.height = 2;
	cursor1->Blit(0, 0, windowskin, src_rect, 255);
	src_rect.x = 96 - 2;
	cursor1->Blit(cursor_rect.width - 2, 0, windowskin, src_rect, 255);
	src_rect.y = 32 - 2;
	cursor1->Blit(cursor_rect.width - 2, cursor_rect.height - 2, windowskin, src_rect, 255);
	src_rect.x = 64;
	cursor1->Blit(0, cursor_rect.height - 2, windowskin, src_rect, 255);

	// Border Up
	src_rect.x = 64 + 2;
	src_rect.y = 0;
	src_rect.width = 28;
	src_rect.height = 2;
	dst_rect.x = 2;
	dst_rect.y = 0;
	dst_rect.width = cursor_rect.width - 4;
	dst_rect.height = 2;
	cursor1->StretchBlit(dst_rect, windowskin, src_rect, 255);

	// Border Down
	src_rect.y = 32 - 2;
	dst_rect.y = cursor_rect.height - 2;
	cursor1->StretchBlit(dst_rect, windowskin, src_rect, 255);

	// Border Left
	src_rect.x = 64;
	src_rect.y = 2;
	src_rect.width = 2;
	src_rect.height = 28;
	dst_rect.x = 0;
	dst_rect.y = 2;
	dst_rect.width = 2;
	dst_rect.height = cursor_rect.height - 4;
	cursor1->StretchBlit(dst_rect, windowskin, src_rect, 255);
	
	// Border Right
	src_rect.x = 96 - 2;
	dst_rect.x = cursor_rect.width - 2;
	cursor1->StretchBlit(dst_rect, windowskin, src_rect, 255);


	delete cursor2;
	cursor2 = new Bitmap(cursor_rect.width, cursor_rect.height);

	// Background
	src_rect.x = 98;
	src_rect.y = 2;
	src_rect.width = 28;
	src_rect.height = 28;
	dst_rect.x = 2;
	dst_rect.y = 2;
	dst_rect.width = cursor_rect.width - 4;
	dst_rect.height = cursor_rect.height - 4;
	cursor2->StretchBlit(dst_rect, windowskin, src_rect, 255);

	// Corners
	src_rect.x = 96;
	src_rect.y = 0;
	src_rect.width = 2;
	src_rect.height = 2;
	cursor2->Blit(0, 0, windowskin, src_rect, 255);
	src_rect.x = 128 - 2;
	cursor2->Blit(cursor_rect.width - 2, 0, windowskin, src_rect, 255);
	src_rect.y = 32 - 2;
	cursor2->Blit(cursor_rect.width - 2, cursor_rect.height - 2, windowskin, src_rect, 255);
	src_rect.x = 96;
	cursor2->Blit(0, cursor_rect.height - 2, windowskin, src_rect, 255);

	// Border Up
	src_rect.x = 96 + 2;
	src_rect.y = 0;
	src_rect.width = 28;
	src_rect.height = 2;
	dst_rect.x = 2;
	dst_rect.y = 0;
	dst_rect.width = cursor_rect.width - 4;
	dst_rect.height = 2;
	cursor2->StretchBlit(dst_rect, windowskin, src_rect, 255);

	// Border Down
	src_rect.y = 32 - 2;
	dst_rect.y = cursor_rect.height - 2;
	cursor2->StretchBlit(dst_rect, windowskin, src_rect, 255);

	// Border Left
	src_rect.x = 96;
	src_rect.y = 2;
	src_rect.width = 2;
	src_rect.height = 28;
	dst_rect.x = 0;
	dst_rect.y = 2;
	dst_rect.width = 2;
	dst_rect.height = cursor_rect.height - 4;
	cursor2->StretchBlit(dst_rect, windowskin, src_rect, 255);
	
	// Border Right
	src_rect.x = 128 - 2;
	dst_rect.x = cursor_rect.width - 2;
	cursor2->StretchBlit(dst_rect, windowskin, src_rect, 255);
}

////////////////////////////////////////////////////////////
/// Update
////////////////////////////////////////////////////////////
void Window::Update() {
	if (active) {
		cursor_frame += 1;
		if (cursor_frame > 32) cursor_frame = 0;
		if (pause) {
			pause_frame += 1;
			if (cursor_frame > 32) pause_frame = 0;
		}
	}
}

////////////////////////////////////////////////////////////
/// Properties
////////////////////////////////////////////////////////////
Bitmap* Window::GetWindowskin() const {
	return windowskin;
}
void Window::SetWindowskin(Bitmap* nwindowskin) {
	background_needs_refresh = true;
	frame_needs_refresh = true;
	cursor_needs_refresh = true;
	windowskin = nwindowskin;
}
Bitmap* Window::GetContents() const {
	return contents;
}
void Window::SetContents(Bitmap* ncontents) {
	contents = ncontents;
}
bool Window::GetStretch() const {
	return stretch;
}
void Window::SetStretch(bool nstretch) {
	if (stretch != nstretch) background_needs_refresh = true;
	stretch = nstretch;
}
Rect Window::GetCursorRect() const {
	return cursor_rect;
}
void Window::SetCursorRect(Rect ncursor_rect) {
	if (cursor_rect != ncursor_rect) cursor_needs_refresh = true;
	cursor_rect = ncursor_rect;
}
bool Window::GetActive() const {
	return active;
}
void Window::SetActive(bool nactive) {
	active = nactive;
}
bool Window::GetVisible() const {
	return visible;
}
void Window::SetVisible(bool nvisible) {
	visible = nvisible;
}
bool Window::GetPause() const {
	return pause;
}
void Window::SetPause(bool npause) {
	pause = npause;
}
int Window::GetX() const {
	return x;
}
void Window::SetX(int nx) {
	x = nx;
}
int Window::GetY() const {
	return y;
}
void Window::SetY(int ny) {
	y = ny;
}
int Window::GetWidth() const {
	return width;
}
void Window::SetWidth(int nwidth) {
	if (width != nwidth) {
		background_needs_refresh = true;
		frame_needs_refresh = true;
	}
	width = nwidth;
}
int Window::GetHeight() const {
	return height;
}
void Window::SetHeight(int nheight) {
	if (height != nheight) {
		background_needs_refresh = true;
		frame_needs_refresh = true;
	}
	height = nheight;
}
int Window::GetZ() const {
	return z;
}
void Window::SetZ(int nz) {
	if (z != nz) Graphics::UpdateZObj(ID, nz);
	z = nz;
}
int Window::GetOx() const {
	return ox;
}
void Window::SetOx(int nox) {
	ox = nox;
}
int Window::GetOy() const {
	return oy;
}
void Window::SetOy(int noy) {
	oy = noy;
}
int Window::GetOpacity() const {
	return opacity;
}
void Window::SetOpacity(int nopacity) {
	opacity = nopacity;
}
int Window::GetBackOpacity() const {
	return back_opacity;
}
void Window::SetBackOpacity(int nback_opacity) {
	back_opacity = nback_opacity;
}
int Window::GetContentsOpacity() const {
	return contents_opacity;
}
void Window::SetContentsOpacity(int ncontents_opacity) {
	contents_opacity = ncontents_opacity;
}

////////////////////////////////////////////////////////////
/// Get id
////////////////////////////////////////////////////////////
unsigned long Window::GetId() const {
	return ID;
}


DrawableType Window::GetType() const {
	return type;
}

