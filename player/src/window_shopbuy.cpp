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
#include <string>
#include "window_base.hpp"
#include "window_shopbuy.hpp"
#include "game_system.hpp"
#include "game_temp.hpp"
#include "game_party.hpp"

////////////////////////////////////////////////////////////
Window_ShopBuy::Window_ShopBuy(int ix, int iy, int iwidth, int iheight) : 
	Window_Selectable(ix, iy, iwidth, iheight) {
	index = 0;
}

Window_ShopBuy::~Window_ShopBuy() {
}

////////////////////////////////////////////////////////////
int Window_ShopBuy::GetItemId() {
	if (index < 0) {
		return 0;
	} else {
		return data[index];
	}
}

////////////////////////////////////////////////////////////
void Window_ShopBuy::Refresh() {
	data = Game_Temp::shop_goods;
	item_max = data.size();

	CreateContents();

	contents->Clear();
	Rect rect(0, 0, contents->GetWidth(), contents->GetHeight());
	contents->SetTransparentColor(windowskin->GetTransparentColor());
	contents->Clear();

	for (size_t i = 0; i < data.size(); ++i) {
		DrawItem(i);
	}
}

////////////////////////////////////////////////////////////
void Window_ShopBuy::DrawItem(int index) {
	int item_id = data[index];
	RPG::Item const& item = Main_Data::project->getLDB().item()[item_id];
	bool enabled = item[5].to<int>() <= Game_Party::GetGold();
	Rect rect = GetItemRect(index);
	contents->SetTransparentColor(windowskin->GetTransparentColor());
	contents->ClearRect(rect);
	DrawItemName(&item, rect.x, rect.y, enabled);

	std::stringstream ss;
	ss << item[5].to<int>();
	contents->TextDraw(rect.width + 4, rect.y, ss.str(), Surface::TextAlignRight);
}

////////////////////////////////////////////////////////////
void Window_ShopBuy::UpdateHelp() {
	help_window->SetText(GetItemId() == 0 ? "" : 
		Main_Data::item(GetItemId())[2].toString().toSystem());
}

////////////////////////////////////////////////////////////
bool Window_ShopBuy::CheckEnable(int item_id) {
	return (
		item_id > 0 &&
		Main_Data::project->getLDB().item()[item_id][5].to<int>() <= Game_Party::GetGold() &&
		Game_Party::ItemNumber(item_id) < 99);
}
