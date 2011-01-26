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
#include <vector>
#include "audio.hpp"
#include "game_system.hpp"
#include "input.hpp"
#include "scene_end.hpp"
#include "scene_menu.hpp"
#include "scene_title.hpp"
#include "util_macro.hpp"

////////////////////////////////////////////////////////////
Scene_End::Scene_End() :
	help_window(NULL),
	command_window(NULL) {
	Scene::type = Scene::End;
}

////////////////////////////////////////////////////////////
void Scene_End::Start() {
	CreateCommandWindow();
	CreateHelpWindow();
}

////////////////////////////////////////////////////////////
void Scene_End::Terminate() {
	delete command_window;
	delete help_window;
}

////////////////////////////////////////////////////////////
void Scene_End::Update() {
	command_window->Update();

	if (Input::IsTriggered(Input::CANCEL)) {
		Game_System::SePlay(Main_Data::cancelSE());
		Scene::Pop(); // Select End Game
	} else if (Input::IsTriggered(Input::DECISION)) {
		Game_System::SePlay(Main_Data::decisionSE());
		switch (command_window->GetIndex()) {
		case 0: // Yes
			Audio::BGM_Fade(800);
			Audio::BGS_Fade(800);
			Audio::ME_Fade(800);
			Scene::PopUntil(Scene::Title);
			break;
		case 1: // No
			Scene::Pop();
			break;
		}
	}
}

////////////////////////////////////////////////////////////
void Scene_End::CreateCommandWindow() {
	// Create Options Window
	std::vector<std::string> options;
	options.push_back(Main_Data::vocabulary(152)); // yes
	options.push_back(Main_Data::vocabulary(153)); // no

	// TODO: Calculate window width from max text length from options
	int text_size = max(options[0].size() * 6, options[1].size() * 6);
	command_window = new Window_Command(text_size + 24, options);
	command_window->SetX(160 - command_window->GetWidth() / 2);
	command_window->SetY(72 + 48);
}

////////////////////////////////////////////////////////////
void Scene_End::CreateHelpWindow() {
	std::string const exitMessage = Main_Data::vocabulary(151);
	int text_size = exitMessage.size() * 6;

	help_window = new Window_Help(160 - (text_size + 16)/ 2,
		72, text_size + 16, 32);
	help_window->SetText(exitMessage);

	command_window->SetHelpWindow(help_window);
}
