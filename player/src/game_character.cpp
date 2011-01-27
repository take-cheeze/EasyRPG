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
#include "audio.hpp"
#include "game_character.hpp"
#include "game_map.hpp"
#include "game_player.hpp"
#include "game_switches.hpp"
#include "game_system.hpp"
// #include "lmu_chunks.hpp"
#include "main_data.hpp"
#include "util_macro.hpp"
#include <rpg2k/Stream.hxx>
#include <cassert>
#include <cstdlib>

////////////////////////////////////////////////////////////
Game_Character::Game_Character() :
	x(0),
	y(0),
	tile_id(0),
	character_index(0),
	real_x(0),
	real_y(0),
	direction(2),
	pattern(1),
	original_direction(2),
	original_pattern(1),
	last_pattern(0),
	move_route_forcing(false),
	through(false),
	animation_id(0),
	move_route(NULL),
	original_move_route(NULL),
	move_route_index(0),
	original_move_route_index(0),
	move_type(0),
	move_speed(4),
	move_frequency(6),
	prelock_direction(0),
	move_failed(false),
	locked(false),
	wait_count(0),
	anime_count(0),
	stop_count(0),
	jump_count(0),	
	step_anime(false),
	walk_anime(true),
	turn_enabled(true),
	direction_fix(false),
	priority_type(1),
	transparent(false) {
}

////////////////////////////////////////////////////////////
bool Game_Character::IsMoving() const {
	return real_x != x * 128 || real_y != y * 128;
}

bool Game_Character::IsJumping() const {
	return jump_count > 0;
}

bool Game_Character::IsStopping() const {
	return !(IsMoving() || IsJumping());
}

////////////////////////////////////////////////////////////
bool Game_Character::IsPassable(int x, int y, int d) const {
	int new_x = x + (d == DirectionRight ? 1 : d == DirectionLeft ? -1 : 0);
	int new_y = y + (d == DirectionDown ? 1 : d == DirectionUp ? -1 : 0);

	if (!Game_Map::IsValid(new_x, new_y)) return false;

	if (through) return true;

	if (!Game_Map::IsPassable(x, y, d, this)) return false;
	
	if (!Game_Map::IsPassable(new_x, new_y, 10 - d)) return false;
	
	for (tEventHash::iterator i = Game_Map::GetEvents().begin(); i != Game_Map::GetEvents().end(); i++) {
		Game_Event* evnt = i->second;
		if (evnt->GetX() == new_x && evnt->GetY() == new_y) {
			if (!evnt->GetThrough() && evnt->GetPriorityType() == 1) {
				if (this != (const Game_Character*)Main_Data::game_player.get())
					return false;

				if (!evnt->GetCharacterName().empty())
					return false;
			}
		}
	}

	if (Main_Data::game_player->GetX() == new_x && Main_Data::game_player->GetY() == new_y) {
		if (!Main_Data::game_player->GetThrough() && !character_name.empty()) {
			return false;
		}
	}

	return true;
}

int Game_Character::GetPriorityType() const {
	return priority_type;
}

////////////////////////////////////////////////////////////
void Game_Character::MoveTo(int x, int y) {
	this->x = x % Game_Map::GetWidth();
	this->y = y % Game_Map::GetHeight();
	real_x = x * 128;
	real_y = y * 128;
	prelock_direction = 0;
}

////////////////////////////////////////////////////////////
int Game_Character::GetScreenX() const {
	return (real_x - Game_Map::GetDisplayX() + 3) / 8 + 8;
}

////////////////////////////////////////////////////////////
int Game_Character::GetScreenY() const {
	int y = (real_y - Game_Map::GetDisplayY() + 3) / 8 + 16;

	/*int n;
	if (jump_count >= jump_peak)
		n = jump_count - jump_peak;
	else
		n = jump_peak - jump_count;*/

	return y; /*- (jump_peak * jump_peak - n * n) / 2;*/
}

////////////////////////////////////////////////////////////
int Game_Character::GetScreenZ() const {
	return GetScreenZ(0);
}
int Game_Character::GetScreenZ(int height) const {
	/*if (always_on_top) return 999;*/
	
	int z = (real_y - Game_Map::GetDisplayY() + 3) / 8 + 16;

	/*if (tile_id > 0)
		return z + Game_Map::priorities[tile_id] * 16
	else*/
		return z + ((height > 16) ? 15 : 0);
}

////////////////////////////////////////////////////////////
void Game_Character::Update() {
	/*if (IsJumping())
		UpdateJump();
	else*/ if (IsMoving())
		UpdateMove();
	else
		UpdateStop();

	if (anime_count > 24 - move_speed) {
		if (!step_anime && stop_count > 0) {
			pattern = original_pattern;
			last_pattern = last_pattern == 0 ? 2 : 0;
		} else {
			if (last_pattern == 0) {
				if (pattern == 2) {
					pattern = 1;
					last_pattern = 2;
				} else {
					pattern = 2;
				}
			} else {
				if (pattern == 0) {
					pattern = 1;
					last_pattern = 0;
				} else {
					pattern = 0;
				}
			}
		}

		anime_count = 0;
	}

	/*if (wait_count > 0) {
		wait_count -= 1
		return;
	}*/

	if (move_route_forcing) {
		MoveTypeCustom();
	} else if (!locked) {
		UpdateSelfMovement();
	}
}

////////////////////////////////////////////////////////////
void Game_Character::UpdateMove() {
	int distance = (1 << move_speed);
	if (y * 128 > real_y)
		real_y = min(real_y + distance, y * 128);

	if (x * 128 < real_x)
		real_x = max(real_x - distance, x * 128);

	if (x * 128 > real_x)
		real_x = min(real_x + distance, x * 128);

	if (y * 128 < real_y)
		real_y = max(real_y - distance, y * 128);

	if (walk_anime)
		anime_count += 1.5;
	else if (step_anime)
		anime_count += 1;
}

////////////////////////////////////////////////////////////
void Game_Character::UpdateSelfMovement() {
	if (stop_count > 30 * (5 - move_frequency)) {
		switch (move_type) {
		case 1: // Random
			break;
		case 2: // Cycle up-down
			break;
		case 3: // Cycle left-right
			break;
		case 4: // Step towards hero
			break;
		case 5: // Step away from hero
			break;
		case 6: // Custom route
			MoveTypeCustom();
			break;
		}
	}
}

////////////////////////////////////////////////////////////
void Game_Character::UpdateStop() {
	if (step_anime)
		anime_count += 1;
	else if (pattern != original_pattern)
		anime_count += 1.5;

	//if (!starting || !IsLock())
		stop_count += 1;
}

////////////////////////////////////////////////////////////
static rpg2k::SystemString readString(std::istream& is)
{
	using rpg2k::structure::readBER;

	rpg2k::size_t const size = readBER(is);
	rpg2k::String ret;
	for(rpg2k::size_t i = 0; i < size; ++i) {
		ret.push_back( readBER(is) );
	}
	return ret.toSystem();
}

void Game_Character::MoveTypeCustom() {
	using rpg2k::structure::readBER;

	if (IsStopping()) {
		move_failed = false;
		if( rpg2k::structure::isEOF(move_commands) ) {
		// if ((size_t)move_route_index >= move_route->move_commands.size()) {
			// End of Move list
			if ((*move_route)[21].to<bool>()) {
				move_commands.seekg(0);
				// move_route_index = 0;
			} else if (move_route_forcing) {
				move_route_forcing = false;
				if (move_route_owner != NULL) {
					move_route_owner->EndMoveRoute(*move_route);
				}
				move_route = original_move_route;
				move_route_index = original_move_route_index;
				original_move_route = NULL;
			}
		} else {
			// RPG::MoveCommand& move_command = move_route->move_commands[move_route_index];
			switch ( readBER(move_commands) /* move_command.command_id */) {
			case rpg2k::Action::Move::UP:
				MoveUp();	break;
			case rpg2k::Action::Move::RIGHT:
				MoveRight(); break;
			case rpg2k::Action::Move::DOWN:
				MoveDown(); break;
			case rpg2k::Action::Move::LEFT:
				MoveLeft(); break;
			case rpg2k::Action::Move::RIGHT_UP: break;
			case rpg2k::Action::Move::RIGHT_DOWN: break;
			case rpg2k::Action::Move::LEFT_DOWN: break;
			case rpg2k::Action::Move::LEFT_UP: break;
			case rpg2k::Action::Move::RANDOM: break;
			case rpg2k::Action::Move::TO_PARTY: break;
			case rpg2k::Action::Move::FROM_PARTY: break;
			case rpg2k::Action::Move::A_STEP: break;
			case rpg2k::Action::Face::UP:
				TurnUp(); break;
			case rpg2k::Action::Face::RIGHT:
				TurnRight(); break;
			case rpg2k::Action::Face::DOWN:
				TurnDown(); break;
			case rpg2k::Action::Face::LEFT:
				TurnLeft(); break;
			case rpg2k::Action::Turn::RIGHT_90: break;
			case rpg2k::Action::Turn::LEFT_90: break;
			case rpg2k::Action::Turn::OPPOSITE: break;
			case rpg2k::Action::Turn::RIGHT_OR_LEFT_90: break;
			case rpg2k::Action::Turn::RANDOM: break;
			case rpg2k::Action::Turn::TO_PARTY: break;
			case rpg2k::Action::Turn::OPPOSITE_OF_PARTY: break;
			case rpg2k::Action::HALT: break;
			case rpg2k::Action::BEGIN_JUMP: break;
			case rpg2k::Action::END_JUMP: break;
			case rpg2k::Action::FIX_DIR: break;
			case rpg2k::Action::UNFIX_DIR: break;
			case rpg2k::Action::SPEED_UP:
				move_speed = std::min(move_speed + 1, 8); break;
			case rpg2k::Action::SPEED_DOWN: 
				move_speed = std::max(move_speed - 1, 1); break;
			case rpg2k::Action::FREQ_UP: break;
			case rpg2k::Action::FREQ_DOWN: break;
			case rpg2k::Action::SWITCH_ON: // Parameter A: Switch to turn on
				Main_Data::project->getLSD().setFlag(readBER(move_commands), true);
				Game_Map::SetNeedRefresh(true);
				break;
			case rpg2k::Action::SWITCH_OFF: // Parameter A: Switch to turn off
				Main_Data::project->getLSD().setFlag(readBER(move_commands), false);
				Game_Map::SetNeedRefresh(true);
				break;
			case rpg2k::Action::CHANGE_CHAR_SET: // String: File, Parameter A: index
				character_name = readString(move_commands);
				character_index = readBER(move_commands);
				break;
			case rpg2k::Action::PLAY_SOUND: // String: File, Parameters: Volume, Tempo, Balance
				{
					rpg2k::SystemString const name = readString(move_commands);
					int volume = readBER(move_commands)
					, tempo = readBER(move_commands)
					, balance = readBER(move_commands);
					tempo = tempo;
					if (name != rpg2k::AUDIO_OFF) {
						Audio::SE_Play(name, volume, balance);
					}
				}
				break;
			case rpg2k::Action::BEGIN_SLIP:
				through = true; break;
			case rpg2k::Action::END_SLIP:
				through = false; break;
			case rpg2k::Action::STOP_ANIME: break;
			case rpg2k::Action::START_ANIME: break;
			case rpg2k::Action::TRANS_UP: break; // ???
			case rpg2k::Action::TRANS_DOWN: break; // ???
			}

			if ((*move_route)[22].to<bool>() || !move_failed) {
				++move_route_index;
			}
		}
	}
}

////////////////////////////////////////////////////////////
void Game_Character::MoveDown() {
	if (turn_enabled) TurnDown();

	if (IsPassable(x, y, DirectionDown)) {
		TurnDown();
		y += 1;
		//IncreaseSteps();
		move_failed = false;
	} else {
		CheckEventTriggerTouch(x, y + 1);
		move_failed = true;
	}
}

////////////////////////////////////////////////////////////
void Game_Character::MoveLeft() {
	if (turn_enabled) TurnLeft();

	if (IsPassable(x, y, DirectionLeft)) {
		TurnLeft();
		x -= 1;
		//IncreaseSteps();
		move_failed = false;
	} else {
		CheckEventTriggerTouch(x - 1, y);
		move_failed = true;
	}
}

////////////////////////////////////////////////////////////
void Game_Character::MoveRight() {
	if (turn_enabled) TurnRight();

	if (IsPassable(x, y, DirectionRight)) {
		TurnRight();
		x += 1;
		//IncreaseSteps();
		move_failed = false;
	} else {
		CheckEventTriggerTouch(x + 1, y);
		move_failed = true;
	}
}

////////////////////////////////////////////////////////////
void Game_Character::MoveUp() {
	if (turn_enabled) TurnUp();

	if (IsPassable(x, y, DirectionUp)) {
		TurnUp();
		y -= 1;
		//IncreaseSteps();
		move_failed = false;
	} else {
		CheckEventTriggerTouch(x, y - 1);
		move_failed = true;
	}
}

////////////////////////////////////////////////////////////
void Game_Character::TurnDown() {
	if (!direction_fix) {
		direction = 2;
		stop_count = 0;
	}
}

////////////////////////////////////////////////////////////
void Game_Character::TurnLeft() {
	if (!direction_fix) {
		direction = 4;
		stop_count = 0;
	}
}

////////////////////////////////////////////////////////////
void Game_Character::TurnRight() {
	if (!direction_fix) {
		direction = 6;
		stop_count = 0;
	}
}

////////////////////////////////////////////////////////////
void Game_Character::TurnUp() {
	if (!direction_fix) {
		direction = 8;
		stop_count = 0;
	}
}

void Game_Character::TurnTowardPlayer() {
	int sx = DistanceXfromPlayer();
	int sy = DistanceYfromPlayer();

	if ( std::abs(sx) > std::abs(sy) ) {
		(sx > 0) ? TurnLeft() : TurnRight();
	} 
	else if ( std::abs(sx) < std::abs(sy) ) {
		(sy > 0) ? TurnUp() : TurnDown();
	}
}

int Game_Character::DistanceXfromPlayer() const {
	int sx = x - Main_Data::game_player->x;
	if (Game_Map::LoopHorizontal()) {
		if (std::abs(sx) > Game_Map::GetWidth() / 2) {
			sx -= Game_Map::GetWidth();
		}
	}
	return sx;
}

int Game_Character::DistanceYfromPlayer() const {
	int sy = y - Main_Data::game_player->y;
	if (Game_Map::LoopVertical()) {
		if (std::abs(sy) > Game_Map::GetHeight() / 2) {
			sy -= Game_Map::GetHeight();
		}
	}
	return sy;
}

////////////////////////////////////////////////////////////
void Game_Character::Lock() {
	if (!locked) {
		prelock_direction = direction;
		TurnTowardPlayer();
		locked = true;
	}
}

void Game_Character::Unlock() {
	if (locked) {
		locked = false;
		SetDirection(prelock_direction);
	}
}

void Game_Character::SetDirection(int direction) {
	if ((!direction_fix) && (direction != 0)) {
		this->direction = direction;
		stop_count = 0;
	}
}

////////////////////////////////////////////////////////////
void Game_Character::ForceMoveRoute(RPG::MoveRoute* new_route,
									int frequency,
									Game_Interpreter* owner) {
	if (original_move_route == NULL) {
		original_move_route = move_route;
		original_move_route_index = move_route_index;
		original_move_frequency = move_frequency;
	}
	move_route = new_route;
	move_route_index = 0;
	move_route_forcing = true;
	move_frequency = frequency;
	move_route_owner = owner;
	prelock_direction = 0;
	wait_count = 0;
	MoveTypeCustom();

	move_commands.str( (*new_route)[12].toBinary() );
}

void Game_Character::DetachMoveRouteOwner(Game_Interpreter* owner) {
	if (owner == move_route_owner) {
		move_route_owner = NULL;
	}
}

////////////////////////////////////////////////////////////
int Game_Character::GetX() const {
	return x;
}

int Game_Character::GetY() const {
	return y;
}

int Game_Character::GetTileId() const {
	return tile_id;
}

std::string Game_Character::GetCharacterName() const {
	return character_name;
}

int Game_Character::GetCharacterIndex() const {
	return character_index;
}

int Game_Character::GetRealX() const {
	return real_x;
}

int Game_Character::GetRealY() const {
	return real_y;
}

int Game_Character::GetDirection() const {
	return direction;
}

int Game_Character::GetPattern() const {
	return pattern;
}

bool Game_Character::GetMoveRouteForcing() const {
	return move_route_forcing;
}

bool Game_Character::GetThrough() const {
	return through;
}

int Game_Character::GetAnimationId() const {
	return animation_id;
}
void Game_Character::SetAnimationId(int new_animation_id) {
	animation_id = new_animation_id;
}

bool Game_Character::IsInPosition(int x, int y) const {
	return ((this->x == x) && (this->y == y));
}

bool Game_Character::IsTransparent() const {
	return transparent;
}

void Game_Character::UpdateBushDepth() {
	// TODO
}

void Game_Character::SetGraphic(const std::string& name, int index) {
	character_name = name;
	character_index = index;
}

