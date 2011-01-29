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
#include "input.hpp"
#include "scene.hpp"
#include "scene_shop.hpp"
#include "game_temp.hpp"
#include "game_system.hpp"
#include "window_shop.hpp"

////////////////////////////////////////////////////////////
Window_Shop::Window_Shop(int ix, int iy, int iwidth, int iheight) :
	Window_Base(ix, iy, iwidth, iheight) {

	SetContents(Surface::CreateSurface(width - 16, height - 16));
	contents->SetTransparentColor(windowskin->GetTransparentColor());

	int const baseIndex = 41 + 13 * Game_Temp::shop_type;
	greeting = Main_Data::vocabulary(baseIndex + 0);
	regreeting = Main_Data::vocabulary(baseIndex + 1);
	buy_msg = Main_Data::vocabulary(baseIndex + 2);
	sell_msg = Main_Data::vocabulary(baseIndex + 3);
	leave_msg = Main_Data::vocabulary(baseIndex + 4);
	buy_select = Main_Data::vocabulary(baseIndex + 5);
	buy_number = Main_Data::vocabulary(baseIndex + 6);
	purchased = Main_Data::vocabulary(baseIndex + 7);
	sell_select = Main_Data::vocabulary(baseIndex + 8);
	sell_number = Main_Data::vocabulary(baseIndex + 9);
	sold_msg = Main_Data::vocabulary(baseIndex + 10);

	mode = Scene_Shop::BuySellLeave;
	index = 1;

	Refresh();
}

////////////////////////////////////////////////////////////
Window_Shop::~Window_Shop() {
}

void Window_Shop::UpdateCursorRect() {
	Rect rect;
	switch (mode) {
		case Scene_Shop::BuySellLeave:
		case Scene_Shop::BuySellLeave2:
			rect = Rect(4, index * 16 + 2, contents->GetWidth() - 8, 16);
			break;
		default:
			rect = Rect();
			break;
	}

	SetCursorRect(rect);
}

////////////////////////////////////////////////////////////
void Window_Shop::Refresh() {
	contents->Clear();

	int idx = 0;
	switch (mode) {
		case Scene_Shop::BuySellLeave:
		case Scene_Shop::BuySellLeave2:
			contents->TextDraw(2, 4, Font::ColorDefault,
							   mode == Scene_Shop::BuySellLeave2
							   ? regreeting
							   : greeting);
			idx++;

			contents->TextDraw(12, 4 + idx * 16, Font::ColorDefault, buy_msg);
			buy_index = idx++;

			contents->TextDraw(12, 4 + idx * 16, Font::ColorDefault, sell_msg);
			sell_index = idx++;

			contents->TextDraw(12, 4 + idx * 16, Font::ColorDefault, leave_msg);
			leave_index = idx++;
			break;
		case Scene_Shop::Buy:
			contents->TextDraw(2, 2, Font::ColorDefault, buy_select);
			break;
		case Scene_Shop::BuyHowMany:
			contents->TextDraw(2, 2, Font::ColorDefault, buy_number);
			break;
		case Scene_Shop::Bought:
			contents->TextDraw(2, 2, Font::ColorDefault, purchased);
			break;
		case Scene_Shop::Sell:
			contents->TextDraw(2, 2, Font::ColorDefault, sell_select);
			break;
		case Scene_Shop::SellHowMany:
			contents->TextDraw(2, 2, Font::ColorDefault, sell_number);
			break;
		case Scene_Shop::Sold:
			contents->TextDraw(2, 2, Font::ColorDefault, sold_msg);
			break;
	}
}

////////////////////////////////////////////////////////////
void Window_Shop::SetMode(int nmode) {
	mode = nmode;
	Refresh();
}

////////////////////////////////////////////////////////////
int Window_Shop::GetChoice() const {
	return choice;
}

void Window_Shop::SetChoice(int nchoice) {
	choice = nchoice;
}

////////////////////////////////////////////////////////////
void Window_Shop::Update() {
	Window_Base::Update();

	if (active) {
		switch (mode) {
			case Scene_Shop::BuySellLeave:
			case Scene_Shop::BuySellLeave2:
				if (Input::IsRepeated(Input::DOWN)) {
					if (index < leave_index) {
						index++;
					}
					else {
						index = 1;
					}
					Game_System::SePlay(Main_Data::cursorSE());
				}
				if (Input::IsRepeated(Input::UP)) {
					if (index > 1) {
						index--;
					}
					else {
						index = leave_index;
					}
					Game_System::SePlay(Main_Data::cursorSE());
				}
				if (Input::IsTriggered(Input::DECISION)) {
					Game_System::SePlay(Main_Data::decisionSE());
					if (index == buy_index)
						choice = Scene_Shop::Buy;
					if (index == sell_index)
						choice = Scene_Shop::Sell;
					if (index == leave_index)
						choice = Scene_Shop::Leave;
				}
				break;
		}
	}

	UpdateCursorRect();
}
