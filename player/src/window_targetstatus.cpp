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
#include <sstream>
#include "window_targetstatus.hpp"
#include "game_party.hpp"

////////////////////////////////////////////////////////////
Window_TargetStatus::Window_TargetStatus(int ix, int iy, int iwidth, int iheight) :
	Window_Base(ix, iy, iwidth, iheight), id(-1), use_item(false) {

	SetContents(Bitmap::CreateBitmap(width - 16, height - 16));
	contents->SetTransparentColor(windowskin->GetTransparentColor());
}

////////////////////////////////////////////////////////////
Window_TargetStatus::~Window_TargetStatus() {
}

////////////////////////////////////////////////////////////
void Window_TargetStatus::Refresh() {
	contents->Clear();

	if (id < 0) {
		return;
	}

	contents->GetFont()->color = 1;

	if (use_item) {
		contents->TextDraw(0, 0, Main_Data::vocabulary(92));
	} else {
		contents->TextDraw(0, 0, Main_Data::vocabulary(131));
	}

	std::stringstream ss;
	if (use_item) {
		ss << Game_Party::ItemNumber(id);
	} else {
		ss << Main_Data::project->getLDB().skill()[id][11].to<int>();
	}

	contents->GetFont()->color = Font::ColorDefault;
	contents->TextDraw(contents->GetWidth() - contents->GetTextSize(ss.str()).width, 0, ss.str(), Bitmap::TextAlignRight);
}

////////////////////////////////////////////////////////////
void Window_TargetStatus::SetData(int id, bool is_item) {
	this->id = id;
	use_item = is_item;

	Refresh();
}
