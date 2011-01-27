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
#include <string>
#include <sstream>
#include "game_party.hpp"
#include "window_shopstatus.hpp"

////////////////////////////////////////////////////////////
Window_ShopStatus::Window_ShopStatus(int ix, int iy, int iwidth, int iheight) :
	Window_Base(ix, iy, iwidth, iheight), item_id(0) {

	SetContents(Surface::CreateSurface(width - 16, height - 16));
	contents->SetTransparentColor(windowskin->GetTransparentColor());

	Refresh();
}

////////////////////////////////////////////////////////////
Window_ShopStatus::~Window_ShopStatus() {
}

////////////////////////////////////////////////////////////
void Window_ShopStatus::Refresh() {
	contents->Clear();

	if (item_id != 0) {
		int number = Game_Party::ItemNumber(item_id);

		contents->GetFont()->color = 1;
		contents->TextDraw(0, 2, Main_Data::vocabulary(92));
		contents->TextDraw(0, 18, Main_Data::vocabulary(93));

		std::stringstream ss;
		ss << number;

		contents->GetFont()->color = Font::ColorDefault;
		contents->TextDraw(120, 2, ss.str(), Surface::TextAlignRight);

		ss.str("");
		ss << Game_Party::ItemNumber(item_id, true);
		contents->TextDraw(120, 18, ss.str(), Surface::TextAlignRight);
	}
}

////////////////////////////////////////////////////////////
void Window_ShopStatus::SetItemId(int new_item_id) {
	if (new_item_id != item_id) {
		item_id = new_item_id;
		Refresh();
	}
}

