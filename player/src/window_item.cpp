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
#include <iomanip>
#include <sstream>
#include "window_item.h"
#include "game_party.h"

////////////////////////////////////////////////////////////
Window_Item::Window_Item(int ix, int iy, int iwidth, int iheight) :
	Window_Selectable(ix, iy, iwidth, iheight) {
	column_max = 2;
}

////////////////////////////////////////////////////////////
Window_Item::~Window_Item() {
}

////////////////////////////////////////////////////////////
int Window_Item::GetItemId() {
	if (index < 0) {
		return 0;
	} else {
		return data[index];
	}
}

////////////////////////////////////////////////////////////
bool Window_Item::CheckInclude(int item_id) {
	// Todo:
	// if (Game_Temp::InBattle()) {
	// 	return item_id == Rpg::Item
	
	if (data.size() == 0 && item_id == 0) {
		return true;
	} else {
		return (item_id > 0);
	}
}

////////////////////////////////////////////////////////////
bool Window_Item::CheckEnable(int item_id) {
	// ToDo: return Game_Party::ItemCanUse(item_id);
	return true;
}

////////////////////////////////////////////////////////////
void Window_Item::Refresh() {
	std::vector<int> party_items;

	data.clear();
	Game_Party::GetItems(party_items);

	for (int i = 0; i < party_items.size(); ++i) {
		if (this->CheckInclude(party_items[i])) {
			data.push_back(party_items[i]);
		}
	}

	if (CheckInclude(0)) {
		data.push_back(0);
	}

	item_max = data.size();

	CreateContents();

	contents->Clear();
	Rect rect(0, 0, contents->GetWidth(), contents->GetHeight());
	contents->FillofColor(rect, windowskin->GetColorKey());
	contents->SetColorKey(windowskin->GetColorKey());

	for (int i = 0; i < item_max; ++i) {
		DrawItem(i);
	}
}

////////////////////////////////////////////////////////////
void Window_Item::DrawItem(int index) {
	Rect rect = GetItemRect(index);
	contents->FillofColor(rect, windowskin->GetColorKey());
	contents->SetColorKey(windowskin->GetColorKey());

	int item_id = data[index];

	if (item_id > 0) {
		int number = Game_Party::ItemNumber(item_id);
		bool enabled = CheckEnable(item_id);
		DrawItemName(&Data::items[item_id - 1], rect.x, rect.y, enabled);
		
		std::stringstream ss;
		ss << std::setfill(' ') << std::setw(3) << number;
		// to align the number with item name vertically
		rect.y -= 2;
		contents->TextDraw(rect, ss.str(), Bitmap::align_right);
	}
}

////////////////////////////////////////////////////////////
void Window_Item::UpdateHelp() {
	GetItemId();
	help_window->SetText(GetItemId() == 0 ? "" : 
		Data::items[GetItemId() - 1].description);
}
