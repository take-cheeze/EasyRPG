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
#include "game_commonevent.h"
#include "game_map.h"
#include "game_switches.h"
#include "game_interpreter_map.h"
#include "game_interpreter_battle.h"
#include "main_data.h"

////////////////////////////////////////////////////////////
Game_CommonEvent::Game_CommonEvent(int common_event_id, bool battle) :
	common_event_id(common_event_id),
	battle(battle),
	interpreter(NULL) {
}

////////////////////////////////////////////////////////////
Game_CommonEvent::~Game_CommonEvent() {
	delete interpreter;
}

////////////////////////////////////////////////////////////
void Game_CommonEvent::Refresh() {
	if ( (GetTrigger() == Game_Character::TriggerParallelProcess) && ( Game_Switches[GetSwitchId()] ) ) {
		if (interpreter == NULL) {
			interpreter = battle
				? (Game_Interpreter*) new Game_Interpreter_Battle()
				: (Game_Interpreter*) new Game_Interpreter_Map();
			Update();
		}
	} else {
		delete interpreter;
		interpreter = NULL;
	}
}

////////////////////////////////////////////////////////////
void Game_CommonEvent::Update() {
	if (interpreter) {
		if (!Game_Map::GetInterpreter().IsRunning()) {
			interpreter->Setup(GetList(), 0);
			Game_Map::GetInterpreter().SetupStartingEvent(this);
		}
		interpreter->Update();
	}
}

////////////////////////////////////////////////////////////
int Game_CommonEvent::GetIndex() const {
	return common_event_id;
}

std::string Game_CommonEvent::GetName() const {
	return Data::commonevents[common_event_id - 1].name;
}

int Game_CommonEvent::GetSwitchId() const {
	return Data::commonevents[common_event_id - 1].switch_id;
}

int Game_CommonEvent::GetTrigger() const {
	return Data::commonevents[common_event_id - 1].trigger;
}

std::vector<RPG::EventCommand>& Game_CommonEvent::GetList() {
	return Data::commonevents[common_event_id - 1].event_commands;
}
