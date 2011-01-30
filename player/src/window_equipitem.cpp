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
#include "window_equipitem.hpp"
#include "game_actors.hpp"
#include "game_party.hpp"

////////////////////////////////////////////////////////////
Window_EquipItem::Window_EquipItem(int actor_id, int equip_type) :
	Window_Item(0, 128, 320, 112),
	actor_id(actor_id) {
	this->equip_type = equip_type;
	if (equip_type > 4 || equip_type < 0) {
		this->equip_type = Window_EquipItem::other;
	}

	if (this->equip_type == Window_EquipItem::shield &&
		Game_Actors::GetActor(actor_id)->GetTwoSwordsStyle()) {
		
		this->equip_type = Window_EquipItem::weapon;
	}
}

////////////////////////////////////////////////////////////
Window_EquipItem::~Window_EquipItem() {
}

////////////////////////////////////////////////////////////
bool Window_EquipItem::CheckInclude(int item_id) {
	// Add the empty element
	if (item_id == 0) {
		return true;
	}

	bool result = false;

	int const type = Main_Data::project->getLDB().item()[item_id][3].to<int>();
	switch (equip_type) {
	case Window_EquipItem::weapon:
		result = (type == 1 /* RPG::Item::Type_weapon */);
		break;
	case Window_EquipItem::shield:
		result = (type == 2 /* RPG::Item::Type_shield */);
		break;
	case Window_EquipItem::armor:
		result = (type == 3 /* RPG::Item::Type_armor */);
		break;
	case Window_EquipItem::helmet:
		result = (type == 4 /* RPG::Item::Type_helmet */);
		break;
	case Window_EquipItem::other:
		result = (type == 5 /* RPG::Item::Type_accessory */);
		break;
	default:
		return false;
	}

	if (result) {
		// Check if the party has the item at least once
		if (Game_Party::ItemNumber(item_id) == 0) {
			return false;
		} else {
			return Game_Actors::GetActor(actor_id)->IsEquippable(item_id);
		}
	} else {
		return false;
	}
}

////////////////////////////////////////////////////////////
bool Window_EquipItem::CheckEnable(int item_id) {
	(void)item_id;
	return true;
}
