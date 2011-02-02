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
#include "game_event.hpp"
#include "game_actor.hpp"
#include "game_actors.hpp"
#include "game_map.hpp"
#include "game_party.hpp"
#include "game_player.hpp"
#include "game_switches.hpp"
#include "game_variables.hpp"
#include "game_system.hpp"
#include "main_data.hpp"
#include "player.hpp"

////////////////////////////////////////////////////////////
Game_Event::Game_Event(int map_id, const RPG::Event& event) :
	starting(false),
	map_id(map_id),
	event(&event),
	erased(false),
	through(true),
	page(NULL),
	interpreter(NULL) {

	ID = event.index();
	
	MoveTo(event[2].to<int>(), event[3].to<int>());
	Refresh();
}

////////////////////////////////////////////////////////////
Game_Event::~Game_Event() {
}

////////////////////////////////////////////////////////////
void Game_Event::ClearStarting() {
	starting = false;
}

////////////////////////////////////////////////////////////
void Game_Event::Setup(RPG::EventPage const& new_page) {
	page = &new_page;

	if (page == NULL) {
		tile_id = 0;
		character_name = "";
		character_index = 0;
		direction = 2;
		//move_type = 0;
		through = true;
		trigger = -1;
		// list.clear();
		interpreter.reset();
		return;
	}
	character_name = (*page)[21].toString().toSystem();
	character_index = (*page)[22].to<int>();

	tile_id = character_name.empty() ? character_index : 0;

	if (original_direction != (*page)[23].to<int>()) {
		switch ((*page)[23].to<int>()) {
		case 0: direction = 8; break;
		case 1: direction = 6; break;
		case 2: direction = 2; break;
		case 3: direction = 4; break;
		};

		original_direction = direction;
		prelock_direction = 0;
	}

	if (original_pattern != (*page)[24].to<int>()) {
		pattern = (*page)[24].to<int>();
		original_pattern = pattern;
	}
	//opacity = page.opacity;
	//opacity = page.translucent ? 192 : 255;
	//blend_type = page.blend_type;
	move_type = (*page)[31].to<int>();
	move_speed = (*page)[37].to<int>();
	move_frequency = (*page)[32].to<int>();
	move_route = &(*page)[41].toArray1D();
	move_route_index = 0;
	move_route_forcing = false;
	//animation_type = page.animation_type;
	//through = page;
	//always_on_top = page.overlap;
	priority_type = (*page)[34].to<int>();
	trigger = (*page)[33].to<int>();
	list = (*page)[52].toEvent();
	
	if (trigger == rpg2k::EventStart::PARALLEL /* TriggerParallelProcess */) {
		interpreter.reset(new Game_Interpreter());
	}
	CheckEventTriggerAuto();
}

void Game_Event::Refresh() {
	RPG::EventPage const* new_page = NULL;
	if (!erased) {
		using rpg2k::structure::Array2D;
		Array2D const& target = (*event)[5].toArray2D();
		for(Array2D::const_reverse_iterator i = target.rbegin(); i != target.rend(); ++i) {
			// Loop in reverse order to see whether any page meets conditions...
			if (AreConditionsMet(*i->second)) {
				new_page = i->second;
				// Stop looking for more...
				break;
			}
		}
	}

	if (new_page != this->page) {
		ClearStarting();
		Setup(*new_page);
		CheckEventTriggerAuto();
	}
}

bool Game_Event::AreConditionsMet(const RPG::EventPage& page) {
	rpg2k::structure::Array1D const& term = page[2];
	int const flag = term[1].to<int>();

	// First switch (A)
	if ((flag & (0x1 << 0)) && !Game_Switches[term[2].to<int>()]) {
		return false;
	}

	// Second switch (B)
	if ((flag & (0x1 << 1)) && !Game_Switches[term[3].to<int>()]) {
		return false;
	}

	// Variable
	if (Player::engine == Player::EngineRpg2k) {
		if ((flag & (0x1 << 2)) && !(Game_Variables[term[4].to<int>()] >= term[5].to<int>())) {
			return false;
		}
	} else {
		if (flag & (0x1 << 2)) {
			switch (term[10].to<int>()) {
			case 0: // ==
				if (!(Game_Variables[term[4].to<int>()] == term[5].to<int>()))
					return false;
				break;
			case 1: // >=
				if (!(Game_Variables[term[4].to<int>()] >= term[5].to<int>()))
					return false;
				break;
			case 2: // <=
				if (!(Game_Variables[term[4].to<int>()] <= term[5].to<int>()))
					return false;
				break;
			case 3: // >
				if (!(Game_Variables[term[4].to<int>()] >  term[5].to<int>()))
					return false;
				break;
			case 4: // <
				if (!(Game_Variables[term[4].to<int>()] <  term[5].to<int>()))
					return false;
				break;
			case 5: // !=
				if (!(Game_Variables[term[4].to<int>()] != term[5].to<int>()))
					return false;
				break;
			}
		}
	}

	// Item in possession?
	if ((flag & (0x1 << 3)) && !Game_Party::ItemNumber(term[6].to<int>())) {
		return false;
	}

	// Actor in party?
	if (flag & (0x1 << 4)) {
		Game_Actor* actor = Game_Actors::GetActor(term[7].to<int>());
		if (!Game_Party::IsActorInParty(actor)) {
			return false;
		}
	}

	// Timer
	if (flag & (0x1 << 5)) {
		int frames = Game_System::ReadTimer(Game_System::Timer1);
		if (frames > term[8].to<int>() * DEFAULT_FPS)
			return false;
	}

	// Timer2
	if (flag & (0x1 << 6)) {
		int frames = Game_System::ReadTimer(Game_System::Timer2);
		if (frames > term[9].to<int>() * DEFAULT_FPS)
			return false;
	}

	// All conditions met :D
	return true;
}

////////////////////////////////////////////////////////////
int Game_Event::GetId() const {
	return ID;
}

bool Game_Event::GetStarting() const {
	return starting;
}

int Game_Event::GetTrigger() const {
	return trigger;
}

////////////////////////////////////////////////////////////
void Game_Event::SetDisabled(bool dis_flag) {
	erased = dis_flag;
}

bool Game_Event::GetDisabled() const {
	return erased;
}
////////////////////////////////////////////////////////////

void Game_Event::Start() {
	// RGSS scripts consider list empty if size <= 1. Why?
	if (list.empty() || erased) 
		return;

	starting = true;

	if (trigger < 3)
		Lock();

	if (!Game_Map::GetInterpreter().IsRunning()) {
		Game_Map::GetInterpreter().SetupStartingEvent(this);
	}
}

void Game_Event::CheckEventTriggerAuto() {
	if (trigger == TriggerAutoStart)
	{
		Start();
	}
}

rpg2k::structure::Event const& Game_Event::GetList() {
	return list;
}

bool Game_Event::CheckEventTriggerTouch(int x, int y) {
	if (Game_Map::GetInterpreter().IsRunning())
		return false;

	if ((trigger == TriggerHeroOrEventTouch) && (Main_Data::game_player->IsInPosition(x, y))) {

		// TODO check over trigger VX differs from XP here
		if (!IsJumping()) {
			Start();
		}
	}

	return true;
}



void Game_Event::Update() {
	Game_Character::Update();

	CheckEventTriggerAuto();

	if (interpreter != NULL) {
		if (!interpreter->IsRunning()) {
			interpreter->Setup(list, event->index(), (*event)[2].to<int>(), (*event)[3].to<int>());
		}
		interpreter->Update();
	}
	
}

RPG::Event const& Game_Event::GetEvent() {
	return *event;
}

