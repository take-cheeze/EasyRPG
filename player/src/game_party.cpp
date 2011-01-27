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
#include <algorithm>
#include "system.hpp"
#include "game_party.hpp"
#include "game_actors.hpp"
#include "game_player.hpp"
#include "output.hpp"
#include "util_macro.hpp"

////////////////////////////////////////////////////////////
namespace {
	int gold;
	int steps;
	std::vector<Game_Actor*> actors;
	std::map<int, int> items;

	int battle_count;
	int win_count;
	int defeat_count;
	int run_count;
}

////////////////////////////////////////////////////////////
void Game_Party::Init() {
	gold = 0;
	steps = 0;
	actors.clear();
	items.clear();

	battle_count = 0;
	win_count = 0;
	defeat_count = 0;
	run_count = 0;
}

////////////////////////////////////////////////////////////
void Game_Party::SetupStartingMembers() {
	actors.clear();
	for (size_t i = 0; i < Main_Data::project->getLSD().member().size(); ++i) {
		int const id = Main_Data::project->getLSD().member()[i];
		Game_Actor* actor = Game_Actors::GetActor(id);

		if (actor == NULL) {
			Output::Warning("Invalid actor (Id: %d) in initial party at index %d.", id, i);
		} else {
			actors.push_back(actor);
		}
	}
}

////////////////////////////////////////////////////////////
void Game_Party::GetItems(std::vector<int>& item_list) {
	item_list.clear();

	std::map<int, int>::iterator it;
	for (it = items.begin(); it != items.end(); ++it) {
		item_list.push_back(it->first);
	}
}

////////////////////////////////////////////////////////////
int Game_Party::ItemNumber(int item_id, bool get_equipped) {
	if (get_equipped && item_id > 0) {
		int number = 0;
		for (size_t i = 0; i < actors.size(); ++i) {
			if (actors[i]->GetWeaponId() == item_id) {
				++number;
			}
			if (actors[i]->GetShieldId() == item_id) {
				++number;
			}
			if (actors[i]->GetArmorId() == item_id) {
				++number;
			}
			if (actors[i]->GetHelmetId() == item_id) {
				++number;
			}
			if (actors[i]->GetAccessoryId() == item_id) {
				++number;
			}
		}
		return number;
	} else {
		std::map<int, int>::iterator it;
		it = items.find(item_id);

		if (it != items.end()) {
			return it->second;
		}
	}
	
	return 0;
}


////////////////////////////////////////////////////////////
void Game_Party::GainGold(int n) {
	int a = gold + n;
	gold = min(max(a, 0), 999999);
}

void Game_Party::LoseGold(int n) {
	int a = gold - n;
	gold = min(max(a, 0), 999999);
}

////////////////////////////////////////////////////////////
void Game_Party::GainItem(int item_id, int amount, bool include_equip) {
	int a;
	if (item_id > 0 && (uint)item_id <= Main_Data::project->getLDB().item().rbegin()->first) {
		a = ItemNumber(item_id);
		items[item_id] = min(max(a + amount, 0), 99);
	} else {
		Output::Warning("Can't add item to party.\n%d is not a valid item id.",
			item_id);
	}
}

void Game_Party::LoseItem(int item_id, int amount, bool include_equip) {
	int total_items;
	GainItem(item_id, -amount, include_equip);
	total_items = ItemNumber(item_id);
	if (total_items <= 0) {
		items.erase(item_id);
	}
}

////////////////////////////////////////////////////////////
bool Game_Party::IsItemUsable(int item_id) {
	RPG::Item const& target = Main_Data::item(item_id);
	if (item_id > 0 && item_id < (int)Main_Data::project->getLDB().item().rbegin()->first) {
		//ToDo: if (Game_Temp::IsInBattle()) {
		//if (Data::items[item_id - 1].type == RPG::Item::Type_medicine) {
		//	return !Data::items[item_id - 1].ocassion_field;
		//} else if (Data::items[item_id - 1].type == RPG::Item::Type_switch) {
		//	return Data::items[item_id - 1].ocassion_battle;
		//} else {
		if (actors.size() > 0 &&
			(target[3].to<int>() == rpg2k::Item::MEDICINE ||
			target[3].to<int>() == rpg2k::Item::SEED ||
			target[3].to<int>() == rpg2k::Item::BOOK)) {
			return true;
		} else if (target[3].to<int>() == rpg2k::Item::SWITCH) {
			return target[57].to<bool>();
		}
	}

	return false;
}

////////////////////////////////////////////////////////////
void Game_Party::AddActor(int actor_id) {
	Game_Actor* actor;

	actor = Game_Actors::GetActor(actor_id);

	// If the party has less than 4 members and this actor is not in the party
	if ( (actors.size() < 4) && (!IsActorInParty(actor)) ) {
		actors.push_back(actor);
		Main_Data::game_player->Refresh();
	}
}

////////////////////////////////////////////////////////////
void Game_Party::RemoveActor(int actor_id) {
	if (IsActorInParty(Game_Actors::GetActor(actor_id))) {
		actors.erase(std::find(actors.begin(), actors.end(), Game_Actors::GetActor(actor_id)));
		Main_Data::game_player->Refresh();
	}
}

////////////////////////////////////////////////////////////
bool Game_Party::IsActorInParty(Game_Actor* actor) {	
	return ( std::find(actors.begin(), actors.end(), actor) != actors.end() );
}

////////////////////////////////////////////////////////////
int Game_Party::GetGold() {
	return gold;
}

int Game_Party::GetSteps() {
	return steps;
}

std::vector<Game_Actor*>& Game_Party::GetActors() {
	return actors;
}

int Game_Party::GetBattleCount() {
	return battle_count;
}

int Game_Party::GetWinCount() {
	return win_count;
}

int Game_Party::GetDefeatCount() {
	return defeat_count;
}

int Game_Party::GetRunCount() {
	return run_count;
}
