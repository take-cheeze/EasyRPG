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
#include "scene_menu.hpp"
#include "audio.hpp"
#include "graphics.hpp"
#include "game_party.hpp"
#include "game_system.hpp"
#include "input.hpp"
#include "player.hpp"
#include "scene_end.hpp"
#include "scene_equip.hpp"
#include "scene_item.hpp"
#include "scene_map.hpp"
#include "scene_skill.hpp"

////////////////////////////////////////////////////////////
Scene_Menu::Scene_Menu(int menu_index) :
	menu_index(menu_index) {
	type = Scene::Menu;
}

////////////////////////////////////////////////////////////
void Scene_Menu::Start() {
	CreateCommandWindow();

	// Gold Window
	gold_window = new Window_Gold(0, 208, 88, 32);

	// Status Window
	menustatus_window = new Window_MenuStatus(88, 0, 232, 240);
	menustatus_window->SetActive(false);
}

////////////////////////////////////////////////////////////
void Scene_Menu::Terminate() {
	delete command_window;
	delete gold_window;
	delete menustatus_window;
}

////////////////////////////////////////////////////////////
void Scene_Menu::Update() {
	command_window->Update();
	gold_window->Update();
	menustatus_window->Update();

	if (command_window->GetActive()) {
		UpdateCommand();
	}
	else if (menustatus_window->GetActive()) {
		UpdateActorSelection();
	}
}

////////////////////////////////////////////////////////////
void Scene_Menu::CreateCommandWindow() {
	// Create Options Window
	std::vector<std::string> options;
	options.push_back(Main_Data::vocabulary(106));
	options.push_back(Main_Data::vocabulary(107));
	options.push_back(Main_Data::vocabulary(108));
	options.push_back(Main_Data::vocabulary(110));
	options.push_back(Main_Data::vocabulary(117));
	/*
	options.push_back(Data::terms.command_item);
	options.push_back(Data::terms.command_skill);
	options.push_back(Data::terms.menu_equipment);
	options.push_back(Data::terms.menu_save);
	options.push_back(Data::terms.menu_quit);
	*/

	command_window = new Window_Command(options, 88);
	command_window->SetIndex(menu_index);

	// If there are no actors in the party disable Skills and Equipment
	// RPG2k does not do this, but crashes if you try to access these menus
	if (Game_Party::GetActors().empty()) {
		//command_window->DisableItem(0);
		command_window->DisableItem(1);
		command_window->DisableItem(2);
	}

	// If save is forbidden disable this item
	if (Game_System::save_disabled) {
		command_window->DisableItem(3);
	}
}

////////////////////////////////////////////////////////////
void Scene_Menu::UpdateCommand() {
	if (Input::IsTriggered(Input::CANCEL)) {
		Game_System::SePlay(Main_Data::cancelSE());
		Scene::Pop();
	} else if (Input::IsTriggered(Input::DECISION)) {
		menu_index = command_window->GetIndex();

		switch (menu_index) {
		case 0: // Item
			Game_System::SePlay(Main_Data::decisionSE());
			Scene::Push(new Scene_Item());
			break;
		case 1: // Tech Skill
		case 2: // Equipment
			if (Game_Party::GetActors().empty()) {
				Game_System::SePlay(Main_Data::buzzerSE());
			} else {
				Game_System::SePlay(Main_Data::decisionSE());
				command_window->SetActive(false);
				menustatus_window->SetActive(true);
				menustatus_window->SetIndex(0);
			}
			break;
		case 3: // Save
			if (Game_System::save_disabled) {
				Game_System::SePlay(Main_Data::buzzerSE());
			} else {
				Game_System::SePlay(Main_Data::decisionSE());
			}

			// Debug Test code to add items
			for (int i = 1; i < 82; ++i) {
				Game_Party::GainItem(i, 1);
			}
			break;
		case 4: // Quit Game
			Game_System::SePlay(Main_Data::decisionSE());
			Scene::Push(new Scene_End());
			break;
		}
	}
}

////////////////////////////////////////////////////////////
void Scene_Menu::UpdateActorSelection() {
	if (Input::IsTriggered(Input::CANCEL)) {
		Game_System::SePlay(Main_Data::cancelSE());
		command_window->SetActive(true);
		menustatus_window->SetActive(false);
		menustatus_window->SetIndex(-1);
	} else if (Input::IsTriggered(Input::DECISION)) {
		Game_System::SePlay(Main_Data::decisionSE());
		switch (command_window->GetIndex()) {
		case 1: // Tech Skill
			Scene::Push(new Scene_Skill(menustatus_window->GetIndex()));
			command_window->SetActive(true);
			menustatus_window->SetActive(false);
			menustatus_window->SetIndex(-1);
			break;
		case 2: // Equipment
			Scene::Push(new Scene_Equip(menustatus_window->GetIndex()));
			command_window->SetActive(true);
			menustatus_window->SetActive(false);
			menustatus_window->SetIndex(-1);
			break;
		}
	}
}
