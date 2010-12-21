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
#include "window_gold.h"
#include "game_party.h"
#include "main_data.h"

////////////////////////////////////////////////////////////
Window_Gold::Window_Gold(int ix, int iy, int iwidth, int iheight) :
	Window_Base(ix, iy, iwidth, iheight) {

	contents = Bitmap::CreateBitmap(width - 16, height - 16);

	Refresh();
}

////////////////////////////////////////////////////////////
Window_Gold::~Window_Gold() {
}

////////////////////////////////////////////////////////////
void Window_Gold::Refresh() {
	contents->Clear();
	Rect rect(0, 0, contents->GetWidth(), 16);
	std::stringstream gold;
	gold << Game_Party::GetGold();
	
	contents->ClearRect(rect);

	contents->GetFont()->color = 1;
	contents->TextDraw(rect, Data::terms.gold, Bitmap::TextAlignRight);

	rect.x -= 12;
	contents->GetFont()->color = Font::ColorDefault;
	contents->TextDraw(rect, gold.str(), Bitmap::TextAlignRight);
}
