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
#include "window_gold.hpp"
#include "game_party.hpp"
#include "main_data.hpp"

////////////////////////////////////////////////////////////
Window_Gold::Window_Gold(int ix, int iy, int iwidth, int iheight) :
	Window_Base(ix, iy, iwidth, iheight) {

	SetContents(Bitmap::CreateBitmap(width - 16, height - 16));
	contents->SetTransparentColor(windowskin->GetTransparentColor());

	Refresh();
}

////////////////////////////////////////////////////////////
Window_Gold::~Window_Gold() {
}

////////////////////////////////////////////////////////////
void Window_Gold::Refresh() {
	contents->Clear();
	std::stringstream gold;
	gold << std::setfill(' ') << std::setw(6) << Game_Party::GetGold();

	contents->GetFont()->color = 1;
	rpg2k::SystemString const goldSuffix = Main_Data::vocabulary(95);
	Rect gold_text_size = contents->GetTextSize(goldSuffix);
	contents->TextDraw(contents->GetWidth() - gold_text_size.width, 2, goldSuffix);

	contents->GetFont()->color = Font::ColorDefault;
	contents->TextDraw(contents->GetWidth() - gold_text_size.width - 6 * 6, 2, gold.str(), Bitmap::TextAlignRight);
}
