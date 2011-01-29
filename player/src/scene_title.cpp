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
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "scene_title.hpp"
#include "audio.hpp"
#include "bitmap.hpp"
#include "cache.hpp"
#include "filefinder.hpp"
#include "game_actors.hpp"
#include "game_map.hpp"
#include "game_message.hpp"
#include "game_party.hpp"
#include "game_player.hpp"
#include "game_screen.hpp"
#include "game_switches.hpp"
#include "game_system.hpp"
#include "game_temp.hpp"
#include "game_troop.hpp"
#include "game_variables.hpp"
#include "graphics.hpp"
#include "input.hpp"
/*
#include "ldb_reader.hpp"
#include "lmt_reader.hpp"
*/
#include "main_data.hpp"
#include "options.hpp"
#include "output.hpp"
#include "player.hpp"
// #include "reader.hpp"
#include "scene_map.hpp"
#include "util_macro.hpp"
#include "window_command.hpp"

////////////////////////////////////////////////////////////
Scene_Title::Scene_Title() :
	command_window(NULL), init(false) {
	type = Scene::Title;
}

////////////////////////////////////////////////////////////
void Scene_Title::Start() {
	// Clear the cache when the game returns to title screen
	// e.g. by pressing F12
	if (init) {
		Cache::Clear();
	}

	LoadDatabase();

	if (!init) {
		if (Main_Data::project->getLDB().system()[10].to<int>() == 2003) {
			Output::Debug("Switching to Rpg2003 Interpreter");
			Player::engine = Player::EngineRpg2k3;
		}

		// File Finder cant be initialized earlier because we need the RPG-version
		#ifdef _WIN32
		FileFinder::Init();
		#endif
	}

	init = true;

	// Create Game System
	Game_System::Init();

	CreateTitleGraphic();
	CreateCommandWindow();

	PlayTitleMusic();
}

////////////////////////////////////////////////////////////
void Scene_Title::TransitionIn() {
	Graphics::Transition(Graphics::TransitionErase, 1, true);
	Graphics::Transition(Graphics::TransitionFadeIn, 32);
}

////////////////////////////////////////////////////////////
void Scene_Title::TransitionOut() {
	Graphics::Transition(Graphics::TransitionFadeOut, 12, true);
}

////////////////////////////////////////////////////////////
void Scene_Title::Resume() {
	command_window->SetVisible(true);
}

////////////////////////////////////////////////////////////
void Scene_Title::Suspend() {
	command_window->SetVisible(false);
}

////////////////////////////////////////////////////////////
void Scene_Title::Terminate() {
	delete command_window;
	delete title;
}

////////////////////////////////////////////////////////////
void Scene_Title::Update() {
	command_window->Update();

	if (Input::IsTriggered(Input::DECISION)) {
		switch (command_window->GetIndex()) {
		case 0: // New Game
			CommandNewGame();
			break;
		case 1: // Load Game
			CommandContinue();
			break;
		case 2: // Exit Game
			CommandShutdown();
		}
	}
}

////////////////////////////////////////////////////////////
void Scene_Title::LoadDatabase() {
	// Load Database
	Main_Data::project.reset( new rpg2k::model::Project(".") );
	/*
	Data::Clear();

	if (!LDB_Reader::Load(FileFinder::FindDefault(".", DATABASE_NAME))) {
		Output::ErrorStr(Reader::GetError());
	}
	if (!LMT_Reader::Load(FileFinder::FindDefault(".", TREEMAP_NAME))) {
		Output::ErrorStr(Reader::GetError());
	}
	*/
}

////////////////////////////////////////////////////////////
void Scene_Title::CreateGameObjects() {
	Game_Temp::Init();
	Main_Data::game_screen.reset( new Game_Screen() );
	Game_Actors::Init();
	Game_Party::Init();
	Game_Message::Init();
	Main_Data::game_troop.reset( new Game_Troop() );
	Game_Map::Init();
	Main_Data::game_player.reset( new Game_Player() );
}

////////////////////////////////////////////////////////////
bool Scene_Title::CheckContinue() {
	for (int i = 0; i < 15; i++) {
		char name[11];
		sprintf(name, "Save%2d.lsd", i);
		std::ifstream file(name);
		if (file.is_open()) {
			file.close();
			return true;
		}
	}
	return false;
}

////////////////////////////////////////////////////////////
void Scene_Title::CreateTitleGraphic() {
	// Load Title Graphic
	title = new Sprite();
	title->SetBitmap(Cache::Title(Main_Data::project->getLDB().system()[17].toString().toSystem()));
}

////////////////////////////////////////////////////////////
void Scene_Title::CreateCommandWindow() {
	// Create Options Window
	std::vector<std::string> options;
	options.push_back(Main_Data::vocabulary(114)); // new game
	options.push_back(Main_Data::vocabulary(115)); // continue
	options.push_back(Main_Data::vocabulary(117)); // quit

	command_window = new Window_Command(options);
	command_window->SetX(160 - command_window->GetWidth() / 2);
	command_window->SetY(224 - command_window->GetHeight());

	// Enable load game if available
	continue_enabled = CheckContinue();
	if (continue_enabled) {
		command_window->SetIndex(1);
	} else {
		command_window->DisableItem(1);
	}

	// Set the number of frames for the opening animation to last
	command_window->SetOpenAnimation(32);

	command_window->SetVisible(false);
}

////////////////////////////////////////////////////////////
void Scene_Title::PlayTitleMusic() {
	// Play music
	Game_System::BgmPlay(Main_Data::systemBGM(31));
}

////////////////////////////////////////////////////////////
bool Scene_Title::CheckValidPlayerLocation() {
	return true; // TODO: (Data::treemap.start_map_id > 0);
}

////////////////////////////////////////////////////////////
void Scene_Title::CommandNewGame() {
	if (!CheckValidPlayerLocation()) {
		Output::Warning("The game has no start location set.");
	} else {
		Game_System::SePlay(Main_Data::decisionSE());
		Audio::BGM_Stop();
		Graphics::SetFrameCount(0);
		CreateGameObjects();
		Game_Party::SetupStartingMembers();

		rpg2k::structure::Array1D const& start = Main_Data::project->getLMT().startPoint();
		Game_Map::Setup(start[11].to<int>());
		Main_Data::game_player->MoveTo(start[12].to<int>(), start[13].to<int>());
		Main_Data::game_player->Refresh();

		Game_Map::Autoplay();
		Scene::Push(new Scene_Map());
	}
}

////////////////////////////////////////////////////////////
void Scene_Title::CommandContinue() {
	if (continue_enabled) {
		Game_System::SePlay(Main_Data::decisionSE());
	} else {
		Game_System::SePlay(Main_Data::buzzerSE());
		return;
	}

	// Change scene
	//Scene::Push(new Scene_Load());
}

////////////////////////////////////////////////////////////
void Scene_Title::CommandShutdown() {
	Game_System::SePlay(Main_Data::decisionSE());
	Audio::BGS_Fade(800);
	Pop();
}
