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
#include "game_map.h"
#include "game_interpreter.h"
#include "game_temp.h"
#include "lmu_reader.h"
#include "main_data.h"
#include "output.h"
#include "util_macro.h"
#include "game_system.h"
#include "system.h"
#include <cassert>

////////////////////////////////////////////////////////////
namespace {
	int chipset_id;
	std::string chipset_name;
	std::string battleback_name;
	std::string panorama_name;
	int panorama_type;
	int panorama_speed;
	int display_x;
	int display_y;
	bool need_refresh;
	std::string parallax_name;
	bool parallax_horz_scroll;
	bool parallax_vert_scroll;
	bool parallax_horz_auto;
	bool parallax_vert_auto;
	int parallax_horz_speed;
	int parallax_vert_speed;

	std::vector<unsigned char> passages_down;
	std::vector<unsigned char> passages_up;
	std::vector<short> terrain_tags;
	tEventHash events;

	RPG::Map* map;
	int map_id;
	int scroll_direction;
	int scroll_rest;
	int scroll_speed;
	int encounter_steps;

	Game_Interpreter* interpreter;
	Game_Vehicle* vehicles[3];

	uint8 substitutions_down[144];
	uint8 substitutions_up[144];

	bool pan_locked;
	bool pan_wait;
	int pan_speed;
	int pan_dx;
	int pan_dy;
	int pan_x;
	int pan_y;
}

////////////////////////////////////////////////////////////
void Game_Map::Init() {
	panorama_type = 0;
	panorama_speed = 0;
	display_x = 0;
	display_y = 0;
	need_refresh = false;
	
	map = NULL;
	map_id = 0;
	scroll_direction = 0;
	scroll_rest = 0;
	scroll_speed = 0;
	interpreter = new Game_Interpreter(0, true);
	encounter_steps = 0;

	for (int i = 0; i < 3; i++)
		vehicles[i] = new Game_Vehicle((Game_Vehicle::Type) i);

	pan_locked = false;
	pan_wait = false;
	pan_speed = 0;
	pan_dx = 0;
	pan_dy = 0;
	pan_x = 0;
	pan_y = 0;
}

////////////////////////////////////////////////////////////
void Game_Map::Dispose() {
	for (tEventHash::iterator i = events.begin(); i != events.end(); ++i) {
		delete i->second;
	}
	events.clear();

	if (Main_Data::game_screen != NULL) {
		Main_Data::game_screen->Reset();
	}

	delete map;
	map = NULL;
}

void Game_Map::Quit() {
	Dispose();
	delete interpreter;
}

////////////////////////////////////////////////////////////
void Game_Map::Setup(int _id) {
	Dispose();

	map_id = _id;
	char file[12];
	sprintf(file, "Map%04d.lmu", map_id);

	map = LMU_Reader::LoadMap(file);
	if (map == NULL) {
		Output::ErrorStr(Reader::GetError());
	}

	SetChipset(map->chipset_id);
	display_x = 0;
	display_y = 0;
	need_refresh = false;

	for (size_t i = 0; i < map->events.size(); i++) {
		events.insert(std::pair<int, Game_Event*>(map->events[i].ID, new Game_Event(map_id, map->events[i])));
	}
	/*@common_events.clear();
	for i in 1...$data_common_events.size
		@common_events[i] = Game_CommonEvent.new(i)
	end*/
	scroll_direction = 2;
	scroll_rest = 0;
	scroll_speed = 4;
	encounter_steps = Data::treemap.maps[map_id - 1].encounter_steps;

	for (int i = 0; i < 3; i++)
		vehicles[i]->Refresh();

	pan_locked = false;
	pan_wait = false;
	pan_speed = 0;
	pan_dx = 0;
	pan_dy = 0;
	pan_x = 0;
	pan_y = 0;
}

////////////////////////////////////////////////////////////
void Game_Map::Autoplay() {
	int parent_index = 0;
	int current_index = GetMapIndex(map_id);
	
	if ((current_index > -1) && !Data::treemap.maps[current_index].music.name.empty()) {
		switch(Data::treemap.maps[current_index].music_type) {
			case 0: // inherits music from parent
				parent_index = GetMapIndex(Data::treemap.maps[current_index].parent_map);
				if (Data::treemap.maps[parent_index].music.name != "(OFF)" && &Data::treemap.maps[parent_index].music != Game_Temp::map_bgm) {
					Game_Temp::map_bgm = &Data::treemap.maps[parent_index].music;
					Game_System::BgmPlay(*Game_Temp::map_bgm);
				}
				break;
			case 1:  // No Change
				break;
			case 2:  // specific map music
				if (&Data::treemap.maps[current_index].music != Game_Temp::map_bgm) {
					if (Game_Temp::map_bgm != NULL) {
						if (Data::treemap.maps[current_index].music.name == Game_Temp::map_bgm->name) {
							// ToDo: Here the volume and pitch must be updated if the song is the same
							return;
						}
					}
					Game_Temp::map_bgm = &Data::treemap.maps[current_index].music;
					Game_System::BgmPlay(*Game_Temp::map_bgm);
				}
		}
	
	}

}

////////////////////////////////////////////////////////////
void Game_Map::Refresh() {
	if (map_id > 0) {
		
		for (tEventHash::iterator i = events.begin(); i != events.end(); i++) {
			i->second->Refresh();
		}

		/*for (size_t i = 0; i < common_events.size(); i++) {
			common_events[i]->Refresh();
		}*/
	}
	need_refresh = false;
}

Game_Interpreter& Game_Map::GetInterpreter() {
	assert(interpreter);
	return *interpreter;
}

////////////////////////////////////////////////////////////
void Game_Map::ScrollDown(int distance) {
	display_y = min(display_y + distance, (map->height - 15) * 128);
}

////////////////////////////////////////////////////////////
void Game_Map::ScrollLeft(int distance) {
	display_x = max(display_x - distance, 0);
}

////////////////////////////////////////////////////////////
void Game_Map::ScrollRight(int distance) {
	display_x = min(display_x + distance, (map->width - 20) * 128);
}

////////////////////////////////////////////////////////////
void Game_Map::ScrollUp(int distance) {
	display_y = max(display_y - distance, 0);
}

////////////////////////////////////////////////////////////
bool Game_Map::IsValid(int x, int y) {
	return (x >= 0 && x < GetWidth() && y >= 0 && y < GetHeight());
}

////////////////////////////////////////////////////////////
bool Game_Map::IsPassable(int x, int y, int d, const Game_Character* self_event) {
	if (!Game_Map::IsValid(x, y)) return false;

	uint8 bit = (1 << (d / 2 - 1));

	for (tEventHash::iterator i = events.begin(); i != events.end(); i++) {
		if (i->second->GetTileId() >= 0 && i->second != self_event &&
			i->second->GetX() == x && i->second->GetY() == y && !i->second->GetThrough()) {
			// FIXME: What does this do?
			/*if ((passages_up[i->second->GetTileId()] & bit) != 0)
				return false;*/
		}
	}

	int16 tile_index = (int16)(x + y * map->width);

	int16 tile_id = map->upper_layer[tile_index] - 10000;
	tile_id = substitutions_up[tile_id];

	if ((passages_up[tile_id] & bit) == 0)
		return false;

	if ((passages_up[tile_id] & (1 << 4)) != (1 << 4))
		return true;

	if (map->lower_layer[tile_index] >= 5000) {
		tile_id = map->lower_layer[tile_index] - 5000;
		tile_id = substitutions_down[tile_id];
		tile_id += 18;

		if ((passages_down[tile_id] & bit) == 0)
			return false;

	} else if (map->lower_layer[tile_index] >= 4000) {
		tile_id = (map->lower_layer[tile_index] - 4000) / 50;
		int16 autotile_id = map->lower_layer[tile_index] - 4000 - tile_id * 50;

		tile_id += 6;

		if (((passages_down[tile_id] & (1 << 5)) == (1 << 5)) && (
				(autotile_id >= 20 && autotile_id <= 23) ||
				(autotile_id >= 33 && autotile_id <= 37) ||
				autotile_id == 42 ||
				autotile_id == 43 ||
				autotile_id == 45
			))
			return true;		
		
		if ((passages_down[tile_id] & bit) == 0)
			return false;

	} else if (map->lower_layer[tile_index] >= 3000) {
		tile_id = (map->lower_layer[tile_index] - 3000) / 50 + 3;

		if ((passages_down[tile_id] & bit) == 0)
			return false;

	} else if (map->lower_layer[tile_index] < 3000) {
		tile_id = map->lower_layer[tile_index] / 1000;

		if ((passages_down[tile_id] & bit) == 0)
			return false;
	}

	return true;
}

////////////////////////////////////////////////////////////
bool Game_Map::IsBush(int x, int y) {
	// TODO
	return false;
}

////////////////////////////////////////////////////////////
bool Game_Map::IsCounter(int x, int y) {
	// TODO
	return false;
}

////////////////////////////////////////////////////////////
int Game_Map::GetTerrainTag(int x, int y) {
	return 0;
}

void Game_Map::GetEventsXY(std::vector<Game_Event*>& events, int x, int y) {
	std::vector<Game_Event*> result;

	tEventHash::const_iterator i;
	for (i = Game_Map::GetEvents().begin(); i != Game_Map::GetEvents().end(); i++) {
		if (i->second->GetX() == x && i->second->GetY() == y) {
			result.push_back(i->second);
		}
	}

	events.swap(result);
}

bool Game_Map::LoopHorizontal() {
	return map->scroll_type == 2 || map->scroll_type == 3;
}

bool Game_Map::LoopVertical() {
	return map->scroll_type == 1 || map->scroll_type == 3;
}

int Game_Map::RoundX(int x) {
	if ( LoopHorizontal() ) {
		return (x + GetWidth()) % GetWidth();
	} else {
		return x;
	}
}

int Game_Map::RoundY(int y) {
	if ( LoopVertical() ) {
		return (y + GetHeight()) % GetHeight();
	} else {
		return y;
	}
}

int Game_Map::XwithDirection(int x, int direction) {
	return RoundX(x + (direction == 6 ? 1 : direction == 4 ? -1 : 0));
}

int Game_Map::YwithDirection(int y, int direction) {
	return RoundY(y + (direction == 2 ? 1 : direction == 8 ? -1 : 0));
}

////////////////////////////////////////////////////////////
int Game_Map::CheckEvent(int x, int y) {
	/*for (size_t i = 0; i < events.size(); i++) {
		if (events[i]->GetX() == x && events[i]->GetY() == y) {
			return events[i]->GetId();
		}
	}*/
	tEventHash::iterator i;
	for (i = events.begin(); i != events.end(); i++) {
		if (i->second->GetX() == x && i->second->GetY() == y) {
			return i->second->GetId();
		}
	}
	return 0;
}

////////////////////////////////////////////////////////////
void Game_Map::StartScroll(int direction, int distance, int speed) {
	scroll_direction = direction;
	scroll_rest = distance * 128;
	scroll_speed = speed;
}

////////////////////////////////////////////////////////////
bool Game_Map::IsScrolling() {
	return scroll_rest > 0;
}

////////////////////////////////////////////////////////////
void Game_Map::UpdateScroll() {
	if (scroll_rest > 0) {
		int distance = (1 << scroll_speed) / 2;
		switch (scroll_direction) {
			case 2:
				ScrollDown(distance);
				break;
			case 4:
				ScrollLeft(distance);
				break;
			case 6:
				ScrollRight(distance);
				break;
			case 8:
				ScrollUp(distance);
				break;
		}
		scroll_rest -= distance;
	}
}

////////////////////////////////////////////////////////////
void Game_Map::Update() {
	if (need_refresh) Refresh();
	UpdateScroll();
	UpdatePan();
	
	for (tEventHash::iterator i = events.begin(); i != events.end(); i++) {
		i->second->Update();
	}

	for (int i = 0; i < 3; i++)
		vehicles[i]->Update();

	/*for (size_t i = 0; i < common_events.size(); i++) {
		common_events[i]->Update();
	}*/
}

////////////////////////////////////////////////////////////
int Game_Map::GetMapId() {
	return map_id;
}

int Game_Map::GetWidth() {
	return map->width;
}

int Game_Map::GetHeight() {
	return map->height;
}

std::vector<RPG::Encounter>& Game_Map::GetEncounterList() {
	return Data::treemap.maps[map_id - 1].encounters;
}

int Game_Map::GetEncounterStep() {
	return encounter_steps;
}

void Game_Map::SetEncounterStep(int step) {
	encounter_steps = step;
}

std::vector<short>& Game_Map::GetMapDataDown() {
	return map->lower_layer;
}

std::vector<short>& Game_Map::GetMapDataUp() {
	return map->upper_layer;
}

////////////////////////////////////////////////////////////
std::string& Game_Map::GetChipsetName() {
	return chipset_name;
}
void Game_Map::SetChipsetName(std::string new_chipset_name) {
	chipset_name = new_chipset_name;
}

std::string& Game_Map::GetBattlebackName() {
	return battleback_name;
}
void Game_Map::SetBattlebackName(std::string new_battleback_name) {
	battleback_name = new_battleback_name;
}

std::string& Game_Map::GetPanoramaName() {
	return panorama_name;
}
void Game_Map::SetPanoramaName(std::string new_panorama_name) {
	panorama_name = new_panorama_name;
}

int Game_Map::GetPanoramaType() {
	return panorama_type;
}
void Game_Map::SetPanoramaType(int new_panorama_type) {
	panorama_type = new_panorama_type;
}

int Game_Map::GetPanoramaSpeed() {
	return panorama_speed;
}
void Game_Map::SetPanoramaSpeed(int new_panorama_speed) {
	panorama_speed = new_panorama_speed;
}

int Game_Map::GetDisplayX() {
	return display_x;
}
void Game_Map::SetDisplayX(int new_display_x) {
	display_x = new_display_x;
}

int Game_Map::GetDisplayY() {
	return display_y;
}
void Game_Map::SetDisplayY(int new_display_y) {
	display_y = new_display_y;
}

bool Game_Map::GetNeedRefresh() {
	return need_refresh;
}
void Game_Map::SetNeedRefresh(bool new_need_refresh) {
	need_refresh = new_need_refresh;
}

////////////////////////////////////////////////////////////
std::vector<unsigned char>& Game_Map::GetPassagesDown() {
	return passages_down;
}

std::vector<unsigned char>& Game_Map::GetPassagesUp() {
	return passages_up;
}

std::vector<short>& Game_Map::GetTerrainTags() {
	return terrain_tags;
}

tEventHash& Game_Map::GetEvents() {
	return events;
}

////////////////////////////////////////////////////////////
void Game_Map::SetParallaxName(const std::string& name) {
	parallax_name = name;
}

void Game_Map::SetParallaxScroll(bool horz, bool vert,
								 bool horz_auto, bool vert_auto,
								 int horz_speed, int vert_speed) {
	parallax_horz_scroll = horz;
	parallax_vert_scroll = vert;
	parallax_horz_auto = horz_auto;
	parallax_vert_auto = vert_auto;
	parallax_horz_speed = horz_speed;
	parallax_vert_speed = vert_speed;
}

////////////////////////////////////////////////////////////
int Game_Map::GetMapIndex(int id) {
	for (unsigned int i = 0; i < Data::treemap.maps.size(); ++i) {
		if (Data::treemap.maps[i].ID == id) {
			return i;
		}
	}
	//nothing found
	return -1;
}

////////////////////////////////////////////////////////////
void Game_Map::SetChipset(int id) {
	chipset_id = id;
	RPG::Chipset &chipset = Data::chipsets[chipset_id - 1];
	chipset_name = chipset.chipset_name;
	passages_down = chipset.passable_data_lower;
	passages_up = chipset.passable_data_upper;
	terrain_tags = chipset.terrain_data;
	panorama_speed = chipset.animation_speed;
	panorama_type = chipset.animation_type;
	if (passages_down.size() < 162)
		passages_down.resize(162, (unsigned char) 0x0F);
	if (passages_up.size() < 144)
		passages_up.resize(144, (unsigned char) 0x0F);
	for (uint8 i = 0; i < 144; i++) {
		substitutions_down[i] = i;
		substitutions_up[i] = i;
	}
}

////////////////////////////////////////////////////////////
Game_Vehicle* Game_Map::GetVehicle(Game_Vehicle::Type which) {
	return vehicles[which];
}

////////////////////////////////////////////////////////////
void Game_Map::SubstituteDown(int old_id, int new_id) {
	substitutions_down[old_id] = (uint8) new_id;
}

void Game_Map::SubstituteUp(int old_id, int new_id) {
	substitutions_up[old_id] = (uint8) new_id;
}

////////////////////////////////////////////////////////////
void Game_Map::LockPan() {
	pan_locked = true;
}

void Game_Map::UnlockPan() {
	pan_locked = false;
}

void Game_Map::StartPan(int direction, int distance, int speed, bool wait) {
	distance *= 128;
	switch (direction) {
		case PanUp:		pan_dy -= distance;		break;
		case PanRight:	pan_dx += distance;		break;
		case PanDown:	pan_dy += distance;		break;
		case PanLeft:	pan_dx -= distance;		break;
	}
	pan_speed = speed;
	pan_wait = wait;
}

void Game_Map::ResetPan(int speed, bool wait) {
	pan_dx = 0;
	pan_dy = 0;
	pan_speed = speed;
	pan_wait = wait;
}

void Game_Map::UpdatePan() {
	if (!IsPanActive())
		return;

	int step = 1 << (pan_speed - 1);
	int dx = pan_dx - pan_x;
	int dy = pan_dy - pan_y;

	if (dx > 0)
		pan_x += std::min(step, dx);
	else if (dx < 0)
		pan_x -= std::min(step, -dx);

	if (dy > 0)
		pan_y += std::min(step, dy);
	else if (dy < 0)
		pan_y -= std::min(step, -dy);
}

////////////////////////////////////////////////////////////
bool Game_Map::IsPanActive() {
	return pan_x != pan_dx || pan_y != pan_dy;
}

bool Game_Map::IsPanWaiting() {
	return IsPanActive() && pan_wait;
}

bool Game_Map::IsPanLocked() {
	return pan_locked;
}

int Game_Map::GetPanX() {
	return pan_x;
}

int Game_Map::GetPanY() {
	return pan_y;
}

