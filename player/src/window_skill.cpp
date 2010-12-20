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
#include "window_skill.h"
#include "game_actor.h"
#include "game_actors.h"

////////////////////////////////////////////////////////////
Window_Skill::Window_Skill(int ix, int iy, int iwidth, int iheight) :
	Window_Selectable(ix, iy, iwidth, iheight), actor_id(-1) {
	column_max = 2;
}

////////////////////////////////////////////////////////////
Window_Skill::~Window_Skill() {
}

////////////////////////////////////////////////////////////
void Window_Skill::SetActor(int actor_id) {
	this->actor_id = actor_id;
	Refresh();
}

////////////////////////////////////////////////////////////
int Window_Skill::GetSkillId() {
	if (index < 0) {
		return 0;
	} else {
		return data[index];
	}
}

////////////////////////////////////////////////////////////
void Window_Skill::Refresh() {
	data.clear();

	for (size_t i = 0; i < Game_Actors::GetActor(actor_id)->GetSkills().size(); ++i) {
		data.push_back(Game_Actors::GetActor(actor_id)->GetSkills()[i]);
	}

	CreateContents();

	contents->Clear();
	Rect rect(0, 0, contents->GetWidth(), contents->GetHeight());
	contents->FillofColor(rect, windowskin->GetColorKey());
	contents->SetColorKey(windowskin->GetColorKey());

	if (data.size() == 0) {
		data.push_back(0);
	}

	item_max = data.size();

	for (int i = 0; i < item_max; ++i) {
		DrawItem(i);
	}
}

////////////////////////////////////////////////////////////
void Window_Skill::DrawItem(int index) {
	Rect rect = GetItemRect(index);
	contents->FillofColor(rect, windowskin->GetColorKey());
	contents->SetColorKey(windowskin->GetColorKey());

	int skill_id = data[index];

	if (skill_id > 0) {
		int costs = Data::skills[skill_id - 1].sp_cost;
		bool enabled = Game_Actors::GetActor(actor_id)->IsSkillUsable(skill_id);
		DrawSkillName(&Data::skills[skill_id - 1], rect.x, rect.y, enabled);
		
		std::stringstream ss;
		ss << std::setfill(' ') << std::setw(3) << costs;

		contents->TextDraw(rect, ss.str(), Bitmap::align_right);
	}
}

////////////////////////////////////////////////////////////
void Window_Skill::UpdateHelp() {
	help_window->SetText(GetSkillId() == 0 ? "" : 
		Data::skills[GetSkillId() - 1].description);
}
