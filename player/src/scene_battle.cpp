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
#include "scene_battle.hpp"
#include "input.hpp"
#include "output.hpp"
#include "player.hpp"
#include "sprite.hpp"

////////////////////////////////////////////////////////////
Scene_Battle::Scene_Battle() {
	Scene::type = Scene::Battle;
}

////////////////////////////////////////////////////////////
void Scene_Battle::Start() {
	const char warning[] = "Scene_Battle is a stub class\n\
						It was added for the BattleTest parameter.\n\n\
						This scene will do nothing and hangs now. Enjoy! :)";

	if (Player::battle_test_flag) {
		if (Player::battle_test_troop_id <= 0) {
			Output::Error("Invalid Monster Party Id");
		} else {	
			Output::Warning(warning);
		}
	} else {
		Output::Warning(warning);
	}
}

////////////////////////////////////////////////////////////
void Scene_Battle::Update() {
	if (Input::IsTriggered(Input::DECISION)) {
		Scene::Push(new Scene());
	}
}
