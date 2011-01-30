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
#include "scene_gameover.hpp"
#include "scene_map.hpp"
#include "scene_menu.hpp"
#include "scene_title.hpp"
#include "scene_name.hpp"
#include "scene_shop.hpp"
#include "scene_save.hpp"
#include "main_data.hpp"
#include "game_map.hpp"
#include "game_message.hpp"
#include "game_player.hpp"
#include "game_system.hpp"
#include "game_temp.hpp"
// #include "rpg_system.hpp"
#include "player.hpp"
#include "graphics.hpp"
#include "audio.hpp"
#include "input.hpp"

////////////////////////////////////////////////////////////
Scene_Map::Scene_Map() : 
	spriteset(new Spriteset_Map()),
	message_window(0, 240 - 80, 320, 80) {
	type = Scene::Map;
}

////////////////////////////////////////////////////////////
void Scene_Map::Start() {
	Main_Data::game_screen->Reset();
	Graphics::FrameReset();
}

////////////////////////////////////////////////////////////
void Scene_Map::Terminate() {
	Main_Data::game_screen->Reset();
}

////////////////////////////////////////////////////////////
void Scene_Map::Update() {
	Game_Map::GetInterpreter().Update();

	UpdateTeleportPlayer();

	Game_Map::Update();
	Main_Data::game_player->Update();
	Main_Data::game_screen->Update();
	spriteset->Update();
	message_window.Update();
	
	if (Game_Temp::gameover) {
		Game_Temp::gameover = false;
		Scene::Push(std::auto_ptr<Scene>(new Scene_Gameover()));
	}
	
	if (Game_Temp::to_title) {
		Game_Temp::to_title = false;
		Scene::PopUntil(Scene::Title);
	}

	if (Game_Message::visible)
		return;

	// ESC-Menu calling
	if (Input::IsTriggered(Input::CANCEL))
	{
		//if (Game_Map::GetInterpreter().IsRunning())
			//return;
		//$game_system.menu_disabled


		Game_Temp::menu_calling = true;
		Game_Temp::menu_beep = true;
	}

	if (!Main_Data::game_player->IsMoving()) {
		if (Game_Temp::menu_calling) {
			CallMenu();
			return;
		}

		if (Game_Temp::name_calling) {
			CallName();
			return;
		}

		if (Game_Temp::shop_calling) {
			CallShop();
			return;
		}

		if (Game_Temp::save_calling) {
			CallSave();
			return;
		}

		if (Game_Temp::transition_processing) {
			Game_Temp::transition_processing = false;

			Graphics::Transition(Game_Temp::transition_type, 32, Game_Temp::transition_erase);
		}
	}
}

void Scene_Map::UpdateTeleportPlayer() {
	if (!Main_Data::game_player->IsTeleporting())
		return;

	Scene::TransitionOut();

	Main_Data::game_player->PerformTeleport();
	Game_Map::Autoplay();

	spriteset.reset(new Spriteset_Map());

	Game_Map::Update();

	Scene::TransitionIn();

	Input::Update();
}

////////////////////////////////////////////////////////////
/// Menu Calling Stuff
////////////////////////////////////////////////////////////
void Scene_Map::CallBattle() {

}

void Scene_Map::CallShop() {
	Game_Temp::shop_calling = false;

	Scene::Push(std::auto_ptr<Scene>(new Scene_Shop()));
}

void Scene_Map::CallName() {
	Game_Temp::name_calling = false;

	Scene::Push(std::auto_ptr<Scene>(new Scene_Name()));
}

////////////////////////////////////////////////////////////
/// ESC-Menu Call
////////////////////////////////////////////////////////////
void Scene_Map::CallMenu() {
	Game_Temp::menu_calling = false;

	if (Game_Temp::menu_beep) {
		Game_System::SePlay(Main_Data::decisionSE());
		Game_Temp::menu_beep = false;
	}

	// TODO: Main_Data::game_player->Straighten();

	Scene::Push(std::auto_ptr<Scene>(new Scene_Menu()));
}

void Scene_Map::CallSave() {
	Game_Temp::save_calling = false;

	Scene::Push(std::auto_ptr<Scene>(new Scene_Save()));
}

void Scene_Map::CallDebug() {

}

