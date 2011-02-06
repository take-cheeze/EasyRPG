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
#include "window_base.hpp"
#include "cache.hpp"
#include "game_system.hpp"

////////////////////////////////////////////////////////////
Window_Base::Window_Base(int x, int y, int width, int height) {
	windowskin_name = Game_System::GetSystemName();
	SetWindowskin(Cache::System(windowskin_name));

	SetX(x);
	SetY(y);
	SetWidth(width);
	SetHeight(height);
	SetZ(100);
}

////////////////////////////////////////////////////////////
void Window_Base::Update() {
	Window::Update();
	if (Game_System::GetSystemName() != windowskin_name) {
		windowskin_name = Game_System::GetSystemName();
		SetWindowskin(Cache::System(windowskin_name));
		contents->SetTransparentColor(windowskin->GetTransparentColor());
	}
}

////////////////////////////////////////////////////////////
void Window_Base::DrawFace(std::string face_name, int face_index, int cx, int cy, bool flip) {
	Bitmap* faceset = Cache::Faceset(face_name);

	Rect src_rect(
		(face_index % 4) * 48,
		face_index / 4 * 48,
		48,
		48
	);

	if (flip) {
		contents->FlipBlit(cx, cy, faceset, src_rect, true, false);
	} else {
		contents->Blit(cx, cy, faceset, src_rect, 255);
	}
}

void Window_Base::DrawActorFace(Game_Actor* actor, int cx, int cy) {
	DrawFace(actor->GetFaceName(), actor->GetFaceIndex(), cx, cy);
}

void Window_Base::DrawActorName(Game_Actor* actor, int cx, int cy) {
	contents->TextDraw(cx, cy, Font::ColorDefault, actor->GetName());
}

void Window_Base::DrawActorTitle(Game_Actor* actor, int cx, int cy) {

}

void Window_Base::DrawActorClass(Game_Actor* actor, int cx, int cy) {
	contents->TextDraw(cx, cy, Font::ColorDefault, actor->GetTitle());
}

void Window_Base::DrawActorLevel(Game_Actor* actor, int cx, int cy) {
	// Draw LV-String
	contents->TextDraw(cx, cy, 1, Main_Data::vocabulary(128));

	// Draw Level of the Actor
	std::stringstream ss;
	ss << actor->GetLevel();
	contents->TextDraw(cx + 24, cy, Font::ColorDefault, ss.str(), Surface::TextAlignRight);
}

void Window_Base::DrawActorState(Game_Actor* actor, int cx, int cy) {
	std::vector<int> states = actor->GetStates();

	// Unit has Normal state if no state is set
	if (states.size() == 0) {
		contents->TextDraw(cx, cy, Font::ColorDefault, Main_Data::vocabulary(126));
	} else {
		int highest_priority = 0;
		int state = 0;

		// Display the state with the highest priority
		for (size_t i = 0; i < states.size(); ++i) {
			if (Main_Data::project->getLDB().condition()[states[i]][4].to<int>() > highest_priority) {
				state = i;
			}
		}

		contents->TextDraw(cx, cy, Main_Data::project->getLDB().condition()[state][3].to<int>()
		, Main_Data::project->getLDB().condition()[state][1].toString().toSystem());
	}
}

void Window_Base::DrawActorExp(Game_Actor* actor, int cx, int cy) {
	// Draw EXP-String
	contents->TextDraw(cx, cy, 1, Main_Data::vocabulary(127));

	// Current Exp of the Actor
	// ------/------
	std::stringstream ss;
	ss << std::setfill(' ') << std::setw(6) << actor->GetExpString();

	// Delimiter
	ss << '/';

	// Exp for Level up
	ss << std::setfill(' ') << std::setw(6) << actor->GetNextExpString();
	contents->TextDraw(cx + 12, cy, Font::ColorDefault, ss.str(), Surface::TextAlignLeft);
}

void Window_Base::DrawActorHp(Game_Actor* actor, int cx, int cy) {
	// Draw HP-String
	contents->TextDraw(cx, cy, 1, Main_Data::vocabulary(129));

	// Draw Current HP of the Actor
	cx += 12;
	// Color: 0 okay, 4 critical, 5 dead
	int color = Font::ColorDefault;
	if (actor->GetHp() == 0) {
		color = Font::ColorKnockout;
	} else if (actor->GetHp() <= actor->GetMaxHp() / 4) {
		color = Font::ColorCritical;
	}
	std::stringstream ss;
	ss << actor->GetHp();
	contents->TextDraw(cx + 18, cy, color, ss.str(), Surface::TextAlignRight);

	// Draw the /
	cx += 3 * 6;
	contents->TextDraw(cx, cy, Font::ColorDefault, "/");

	// Draw Max Hp
	cx += 6;
	ss.str("");
	ss << actor->GetMaxHp();
	contents->TextDraw(cx + 18, cy, Font::ColorDefault, ss.str(), Surface::TextAlignRight);
}

void Window_Base::DrawActorSp(Game_Actor* actor, int cx, int cy) {
	// Draw SP-String
	contents->TextDraw(cx, cy, 1, Main_Data::vocabulary(130));

	// Draw Current SP of the Actor
	cx += 12;
	// Color: 0 okay, 4 critical/empty
	int color = Font::ColorDefault;
	if (actor->GetMaxSp() != 0 && actor->GetSp() <= actor->GetMaxSp() / 4) {
		color = Font::ColorCritical;
	}
	std::stringstream ss;
	ss << actor->GetSp();
	contents->TextDraw(cx + 18, cy, color, ss.str(), Surface::TextAlignRight);

	// Draw the /
	cx += 3 * 6;
	contents->TextDraw(cx, cy, Font::ColorDefault, "/");

	// Draw Max Sp
	cx += 6;
	ss.str("");
	ss << actor->GetMaxSp();
	contents->TextDraw(cx + 18, cy, Font::ColorDefault, ss.str(), Surface::TextAlignRight);
}

void Window_Base::DrawActorParameter(Game_Actor* actor, int cx, int cy, int type) {
	std::string name;
	int value;
	
	switch (type) {
	case 0:
		name = Main_Data::vocabulary(132); // attack
		value = actor->GetAtk();
		break;
	case 1:
		name = Main_Data::vocabulary(133); // defence
		value = actor->GetDef();
		break;
	case 2:
		name = Main_Data::vocabulary(134); // mental
		value = actor->GetSpi();
		break;
	case 3:
		name = Main_Data::vocabulary(135); // speed
		value = actor->GetAgi();
		break;
	default:
		return;
	}

	// Draw Term
	Rect rect = contents->GetTextSize(name);
	contents->TextDraw(cx, cy, 1, name);

	// Draw Value
	std::stringstream ss;
	ss << value;
	contents->TextDraw(cx + 78, cy, Font::ColorDefault, ss.str(), Surface::TextAlignRight);
}

void Window_Base::DrawEquipmentType(Game_Actor* actor, int cx, int cy, int type) {
	std::string name;
	
	switch (type) {
	case 0:
		name = Main_Data::vocabulary(136); // weapon
		break;
	case 1:
		if (actor->GetTwoSwordsStyle()) {
			name = Main_Data::vocabulary(136); // weapon
		} else {
			name = Main_Data::vocabulary(137); // shield
		}
		break;
	case 2:
		name = Main_Data::vocabulary(138); // armor
		break;
	case 3:
		name = Main_Data::vocabulary(139); // helmet
		break;
	case 4:
		name = Main_Data::vocabulary(140); // other
		break;
	default:
		return;
	}

	contents->TextDraw(cx, cy, 1, name);
}

void Window_Base::DrawItemName(RPG::Item const* item, int cx, int cy, bool enabled) {
	int color = enabled ? Font::ColorDefault : Font::ColorDisabled;
	contents->TextDraw(cx, cy, color, (*item)[1].toString().toSystem());
}

void Window_Base::DrawSkillName(RPG::Skill* skill, int cx, int cy, bool enabled) {
	int color = enabled ? Font::ColorDefault : Font::ColorDisabled;
	contents->TextDraw(cx, cy, color, (*skill)[1].toString().toSystem());
}

void Window_Base::DrawCurrencyValue(int money, int cx, int cy) {
	// This function draws right aligned because of the dynamic with of the
	// gold output (cx and cy define the right border)
	std::stringstream gold;
	gold << money;

	Rect gold_text_size = contents->GetTextSize(Main_Data::vocabulary(95));
	contents->TextDraw(cx, cy, 1, Main_Data::vocabulary(95), Surface::TextAlignRight);

	contents->TextDraw(cx - gold_text_size.width, cy, Font::ColorDefault, gold.str(), Surface::TextAlignRight);
}
