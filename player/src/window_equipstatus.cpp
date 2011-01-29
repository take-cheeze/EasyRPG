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
#include "game_actors.hpp"
#include "window_equipstatus.hpp"

////////////////////////////////////////////////////////////
Window_EquipStatus::Window_EquipStatus(int actor_id) :
	Window_Base(0, 32, 124, 96),
	actor_id(actor_id),
	draw_params(false) {

	SetContents(Surface::CreateSurface(width - 16, height - 16));
	contents->SetTransparentColor(windowskin->GetTransparentColor());

	Refresh();
}

////////////////////////////////////////////////////////////
Window_EquipStatus::~Window_EquipStatus() {
}

////////////////////////////////////////////////////////////
void Window_EquipStatus::Refresh() {
	contents->Clear();

	DrawActorName(Game_Actors::GetActor(actor_id), 0, 2);

	for (int i = 0; i < 4; ++i) {
		DrawParameter(0, (12 + 6) + ((12 + 4) * i), i);
	}
}

////////////////////////////////////////////////////////////
void Window_EquipStatus::SetNewParameters(
	int new_atk, int new_def, int new_spi, int new_agi) {
	draw_params = true;

	if (new_atk != atk || new_def != def || new_spi != spi ||
		new_agi != agi) {
		atk = new_atk;
		def = new_def;
		spi = new_spi;
		agi = new_agi;
		Refresh();
	}
}

////////////////////////////////////////////////////////////
void Window_EquipStatus::ClearParameters() {
	if (draw_params != false) {
		draw_params = false;
		Refresh();
	}
}

////////////////////////////////////////////////////////////
int Window_EquipStatus::GetNewParameterColor(int old_value, int new_value) {
	if (old_value == new_value) {
		return 0;
	} else if (old_value < new_value) {
		return 2;
	} else {
		return 3;
	}
}

////////////////////////////////////////////////////////////
void Window_EquipStatus::DrawParameter(int cx, int cy, int type) {
	std::string name;
	int value;
	int new_value;
	
	switch (type) {
	case 0:
		name = Main_Data::vocabulary(132); // attack
		value = Game_Actors::GetActor(actor_id)->GetAtk();
		new_value = atk;
		break;
	case 1:
		name = Main_Data::vocabulary(133); // defence
		value = Game_Actors::GetActor(actor_id)->GetDef();
		new_value = def;
		break;
	case 2:
		name = Main_Data::vocabulary(134); // mental
		value = Game_Actors::GetActor(actor_id)->GetSpi();
		new_value = spi;
		break;
	case 3:
		name = Main_Data::vocabulary(135); // speed
		value = Game_Actors::GetActor(actor_id)->GetAgi();
		new_value = agi;
		break;
	default:
		return;
	}

	// Draw Term
	Rect rect = contents->GetTextSize(name);
	contents->TextDraw(cx, cy, 1, name);

	// Draw Value
	cx += 60;
	std::stringstream ss;
	ss << value;
	contents->TextDraw(cx + 18, cy, Font::ColorDefault, ss.str(), Surface::TextAlignRight);

	if (draw_params) {
		// Draw New Value
		cx += 30;
		ss.str("");
		ss << new_value;
		int color = GetNewParameterColor(value, new_value);
		contents->TextDraw(cx + 18, cy, color, ss.str(), Surface::TextAlignRight);
	}
}
