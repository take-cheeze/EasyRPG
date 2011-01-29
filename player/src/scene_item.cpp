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
#include "scene_item.hpp"
#include "game_map.hpp"
#include "game_party.hpp"
#include "game_switches.hpp"
#include "game_system.hpp"
#include "input.hpp"
#include "scene_actortarget.hpp"
#include "scene_map.hpp"
#include "scene_menu.hpp"

////////////////////////////////////////////////////////////
Scene_Item::Scene_Item(int item_index) :
	help_window(NULL), item_window(NULL), item_index(item_index) {
	Scene::type = Scene::Item;
}

////////////////////////////////////////////////////////////
void Scene_Item::Start() {
	// Create the windows
	help_window = new Window_Help(0, 0, 320, 32);
	item_window = new Window_Item(0, 32, 320, 240 - 32);
	item_window->SetHelpWindow(help_window);
	item_window->Refresh();
	item_window->SetIndex(item_index);
}

////////////////////////////////////////////////////////////
void Scene_Item::Terminate() {
	delete help_window;
	delete item_window;
}

////////////////////////////////////////////////////////////
void Scene_Item::Update() {
	help_window->Update();
	item_window->Update();

	if (Input::IsTriggered(Input::CANCEL)) {
		Game_System::SePlay(Main_Data::cancelSE());
		Scene::Pop();
	} else if (Input::IsTriggered(Input::DECISION)) {
		int item_id = item_window->GetItemId();

		if (Game_Party::IsItemUsable(item_id)) {
			Game_System::SePlay(Main_Data::decisionSE());

			RPG::Item const& target = Main_Data::project->getLDB().item()[item_id];

			if (target[3].to<int>() == 10 /* RPG::Item::Type_switch */) {
				Main_Data::project->getLSD().setFlag( target[55].to<int>(), true );
				// Game_Switches[Data::items[item_id - 1].switch_id] = true;
				Scene::PopUntil(Scene::Map);
				Game_Map::SetNeedRefresh(true);
			} else {
				Scene::Push(new Scene_ActorTarget(item_id, item_window->GetIndex()));
				item_index = item_window->GetIndex();
			}
		} else {
			Game_System::SePlay(Main_Data::buzzerSE());
		}
	}
}
