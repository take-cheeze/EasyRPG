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
#include "scene_skill.hpp"
#include "game_map.hpp"
#include "game_party.hpp"
#include "game_switches.hpp"
#include "game_system.hpp"
#include "input.hpp"
#include "scene_actortarget.hpp"
#include "scene_map.hpp"
#include "scene_menu.hpp"

////////////////////////////////////////////////////////////
Scene_Skill::Scene_Skill(int actor_index, int skill_index) :
	actor_index(actor_index), skill_index(skill_index),
	// Create the windows
	skill_window(0, 64, 320, 240 - 64),
	skillstatus_window(0, 32, 320, 32),
	help_window(0, 0, 320, 32) {
	Scene::type = Scene::Skill;
}

////////////////////////////////////////////////////////////
void Scene_Skill::Start() {
	// Assign actors and help to windows
	skill_window.SetActor(Game_Party::GetActors()[actor_index]->GetId());
	skillstatus_window.SetActor(Game_Party::GetActors()[actor_index]->GetId());
	skill_window.SetIndex(skill_index);
	skill_window.SetHelpWindow(&help_window);
}

////////////////////////////////////////////////////////////
void Scene_Skill::Terminate() {
}

////////////////////////////////////////////////////////////
void Scene_Skill::Update() {
	help_window.Update();
	skillstatus_window.Update();
	skill_window.Update();

	if (Input::IsTriggered(Input::CANCEL)) {
		Game_System::SePlay(Main_Data::cancelSE());
		Scene::Pop();
	} else if (Input::IsTriggered(Input::DECISION)) {
		int skill_id = skill_window.GetSkillId();

		Game_Actor* actor = Game_Party::GetActors()[actor_index];

		if (actor->IsSkillUsable(skill_id)) {
			Game_System::SePlay(Main_Data::decisionSE());

			RPG::Skill const& target = Main_Data::project->getLDB().skill()[skill_id];
			switch( target[8].to<int>() ) {
			case 0: // normal
				Scene::Push(std::auto_ptr<Scene>(new Scene_ActorTarget(skill_id, actor_index, skill_window.GetIndex())));
				skill_index = skill_window.GetIndex();
				break;
			case 1: // teleport
				// ToDo: Displays the teleport target scene/window
				break;
			case 2: // escape
				// ToDo: Displays the escape target scene/window
				break;
			case 3: // flag
				actor->SetSp(actor->GetSp() - actor->CalculateSkillCost(skill_id));
				Main_Data::project->getLSD().setFlag( target[13].to<int>(), true );
				// Game_Switches[Data::skills[skill_id - 1].switch_id] = true;
				Scene::PopUntil(Scene::Map);
				Game_Map::SetNeedRefresh(true);
				break;
			}
			/*
			if (Data::skills[skill_id - 1].type == RPG::Skill::Type_switch) {
				actor->SetSp(actor->GetSp() - actor->CalculateSkillCost(skill_id));
				Game_Switches[Data::skills[skill_id - 1].switch_id] = true;
				Scene::PopUntil(Scene::Map);
				Game_Map::SetNeedRefresh(true);
			} else if (Data::skills[skill_id - 1].type == RPG::Skill::Type_normal) {
				Scene::Push(new Scene_ActorTarget(skill_id, actor_index, skill_window.GetIndex()));
				skill_index = skill_window.GetIndex();
			} else if (Data::skills[skill_id - 1].type == RPG::Skill::Type_teleport) {
				// ToDo: Displays the teleport target scene/window
			} else if (Data::skills[skill_id - 1].type == RPG::Skill::Type_escape) {
				// ToDo: Displays the escape target scene/window
			} 
			*/
		} else {
			Game_System::SePlay(Main_Data::buzzerSE());
		}
	}
}
