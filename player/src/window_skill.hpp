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

#ifndef _WINDOW_SKILL_H_
#define _WINDOW_SKILL_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <vector>
#include "window_selectable.h"

////////////////////////////////////////////////////////////
/// Window_Skill class
////////////////////////////////////////////////////////////
class Window_Skill : public Window_Selectable {

public:
	////////////////////////////////////////////////////////
	/// Constructor.
	////////////////////////////////////////////////////////
	Window_Skill(int ix, int iy, int iwidth, int iheight);

	////////////////////////////////////////////////////////
	/// Destructor.
	////////////////////////////////////////////////////////
	~Window_Skill();

	////////////////////////////////////////////////////////
	/// Sets the actor whose skills are displayed.
	/// @param actor_id : Id of the actor
	////////////////////////////////////////////////////////
	void SetActor(int actor_id);

	////////////////////////////////////////////////////////
	/// Get Skill
	/// @return current selected skill id
	////////////////////////////////////////////////////////
	int GetSkillId();

	////////////////////////////////////////////////////////
	/// Refreshes the skill list.
	////////////////////////////////////////////////////////
	void Refresh();

	////////////////////////////////////////////////////////
	/// Draws a skill together with the costs
	/// @param index : index of skill to draw
	////////////////////////////////////////////////////////
	void DrawItem(int index);

	////////////////////////////////////////////////////////
	/// Updates the Help Window
	////////////////////////////////////////////////////////
	void UpdateHelp();

private:
	std::vector<int> data;

	int actor_id;
};

#endif
