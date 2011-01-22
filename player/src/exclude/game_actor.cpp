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
#include <sstream>
#include "game_actor.h"
#include "game_party.h"
#include "main_data.h"
#include "util_macro.h"

////////////////////////////////////////////////////////////
Game_Actor::Game_Actor(int actor_id) {
	Setup(actor_id);
}

////////////////////////////////////////////////////////////
void Game_Actor::Setup(int actor_id) {
	const RPG::Actor& actor = Data::actors[actor_id - 1];
	this->actor_id = actor_id;
	name = actor.name;
	character_name = actor.character_name;
	character_index = actor.character_index;
	character_transparent = false;
	face_name = actor.face_name;
	face_index = actor.face_index;
	title = actor.title;
	weapon_id = actor.weapon_id;
	shield_id = actor.shield_id;
	armor_id = actor.armor_id;
	helmet_id = actor.helmet_id;
	accessory_id = actor.accessory_id;
	level = actor.initial_level;
	exp_list.resize(actor.final_level, 0);
	MakeExpList();
	exp = exp_list[level - 1];
	hp = GetMaxHp();
	sp = GetMaxSp();
	two_swords_style = actor.two_swords_style;
	battle_commands = std::vector<unsigned int>(actor.battle_commands);

	for (size_t i = 0; i < actor.skills.size(); ++i) {
		if (actor.skills[i].level <= level) {
			LearnSkill(actor.skills[i].skill_id);
		}
	}
}

////////////////////////////////////////////////////////////
int Game_Actor::GetId() const {
	return actor_id;
}

////////////////////////////////////////////////////////////
bool Game_Actor::IsSkillLearned(int skill_id) {
	return std::find(skills.begin(), skills.end(), skill_id) != skills.end();
}

////////////////////////////////////////////////////////////
bool Game_Actor::IsSkillUsable(int skill_id) {
	if (!IsSkillLearned(skill_id)) {
		return false;
	} else {
		return Game_Battler::IsSkillUsable(skill_id);
	}
}

////////////////////////////////////////////////////////////
void Game_Actor::LearnSkill(int skill_id) {
	if (skill_id > 0 && !IsSkillLearned(skill_id)) {
		skills.push_back(skill_id);
		std::sort(skills.begin(), skills.end());
	}
}

////////////////////////////////////////////////////////////
void Game_Actor::UnlearnSkill(int skill_id) {
	std::vector<int>::iterator it = std::find(skills.begin(), skills.end(), skill_id);
	if (it != skills.end())
		skills.erase(it);
}

////////////////////////////////////////////////////////////
void Game_Actor::SetFace(const std::string& file_name, int index) {
	face_name.assign(file_name);
	face_index = index;
}

////////////////////////////////////////////////////////////
int Game_Actor::GetEquipment(int equip_type) const {
	switch (equip_type) {
	case 0:
		return GetWeaponId();
	case 1:
		return GetShieldId();
	case 2:
		return GetArmorId();
	case 3:
		return GetHelmetId();
	case 4:
		return GetAccessoryId();
	default:
		return -1;
	}
}

////////////////////////////////////////////////////////////
int Game_Actor::SetEquipment(int equip_type, int new_item_id) {
	int old_item_id = -1;

	switch (equip_type) {
	case 0:
		old_item_id = weapon_id;
		weapon_id = new_item_id;
		break;
	case 1:
		old_item_id = shield_id;
		shield_id = new_item_id;
		break;
	case 2:
		old_item_id = armor_id;
		armor_id = new_item_id;
		break;
	case 3:
		old_item_id = helmet_id;
		helmet_id = new_item_id;
		break;
	case 4:
		old_item_id = accessory_id;
		accessory_id = new_item_id;
	}
	
	return old_item_id;
}

////////////////////////////////////////////////////////////
void Game_Actor::ChangeEquipment(int equip_type, int item_id, bool test) {
	int prev_item = SetEquipment(equip_type, item_id);

	if (!test) {
		if (prev_item != 0) {
			Game_Party::GainItem(prev_item, 1);
		}
		if (item_id != 0) {
			Game_Party::LoseItem(item_id, 1);
		}
	}
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseMaxHp() const {
	return Data::actors[actor_id - 1].parameter_maxhp[level - 1];
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseMaxSp() const {
	return Data::actors[actor_id - 1].parameter_maxsp[level - 1];
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseAtk() const {
	int n = Data::actors[actor_id - 1].parameter_attack[level - 1];

	if (weapon_id > 0) {
		n += Data::items[weapon_id - 1].atk_points;
	}
	if (shield_id > 0) {
		n += Data::items[shield_id - 1].atk_points;
	}
	if (armor_id > 0) {
		n += Data::items[armor_id - 1].atk_points;
	}
	if (helmet_id > 0) {
		n += Data::items[helmet_id - 1].atk_points;
	}
	if (accessory_id > 0) {
		n += Data::items[accessory_id - 1].atk_points;
	}

	return min(max(n, 1), 999);
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseDef() const {
	int n = Data::actors[actor_id - 1].parameter_defense[level - 1];

	if (weapon_id > 0) {
		n += Data::items[weapon_id - 1].def_points;
	}
	if (shield_id > 0) {
		n += Data::items[shield_id - 1].def_points;
	}
	if (armor_id > 0) {
		n += Data::items[armor_id - 1].def_points;
	}
	if (helmet_id > 0) {
		n += Data::items[helmet_id - 1].def_points;
	}
	if (accessory_id > 0) {
		n += Data::items[accessory_id - 1].def_points;
	}

	return min(max(n, 1), 999);
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseSpi() const {
	int n = Data::actors[actor_id - 1].parameter_spirit[level - 1];

	if (weapon_id > 0) {
		n += Data::items[weapon_id - 1].spi_points;
	}
	if (shield_id > 0) {
		n += Data::items[shield_id - 1].spi_points;
	}
	if (armor_id > 0) {
		n += Data::items[armor_id - 1].spi_points;
	}
	if (helmet_id > 0) {
		n += Data::items[helmet_id - 1].spi_points;
	}
	if (accessory_id > 0) {
		n += Data::items[accessory_id - 1].spi_points;
	}

	return min(max(n, 1), 999);
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseAgi() const {
	int n = Data::actors[actor_id - 1].parameter_agility[level - 1];

	if (weapon_id > 0) {
		n += Data::items[weapon_id - 1].agi_points;
	}
	if (shield_id > 0) {
		n += Data::items[shield_id - 1].agi_points;
	}
	if (armor_id > 0) {
		n += Data::items[armor_id - 1].agi_points;
	}
	if (helmet_id > 0) {
		n += Data::items[helmet_id - 1].agi_points;
	}
	if (accessory_id > 0) {
		n += Data::items[accessory_id - 1].agi_points;
	}

	return min(max(n, 1), 999);
}

////////////////////////////////////////////////////////////
int Game_Actor::CalculateExp(int level)
{
        double base = Data::actors[actor_id - 1].exp_base;
        double inflation = Data::actors[actor_id - 1].exp_inflation;
		double correction = Data::actors[actor_id - 1].exp_correction;

        int result = 0;

        inflation = 1.5 + (inflation * 0.01);

        for (int i = level; i >= 1; i--)
        {
                result = result + (int)(correction + base);
                base = base * inflation;
                inflation = ((level+1) * 0.002 + 0.8) * (inflation - 1) + 1;
        }
        return min(result, 1000000);
}

////////////////////////////////////////////////////////////
void Game_Actor::MakeExpList() {
	for (int i = 1; i < Data::actors[actor_id - 1].final_level; ++i) {
		exp_list[i] = CalculateExp(i);
	}
}

////////////////////////////////////////////////////////////
std::string Game_Actor::GetExpString() {
	if ((unsigned)level == exp_list.size()) {
		return "------";
	} else {
		std::stringstream ss;
		ss << exp;
		return ss.str();
	}
}

////////////////////////////////////////////////////////////
std::string Game_Actor::GetNextExpString() {
	if ((unsigned)level == exp_list.size()) {
		return "------";
	} else {
		std::stringstream ss;
		ss << exp_list[level];
		return ss.str();
	}
}

////////////////////////////////////////////////////////////
std::string Game_Actor::GetName() const {
	return name;
}

////////////////////////////////////////////////////////////
std::string Game_Actor::GetCharacterName() const {
	return character_name;
}

////////////////////////////////////////////////////////////
int Game_Actor::GetCharacterIndex() const {
	return character_index;
}

////////////////////////////////////////////////////////////
std::string Game_Actor::GetFaceName() const {
	return face_name;
}

////////////////////////////////////////////////////////////
int Game_Actor::GetFaceIndex() const {
	return face_index;
}

////////////////////////////////////////////////////////////
std::string Game_Actor::GetTitle() const {
	return title;
}

////////////////////////////////////////////////////////////
int Game_Actor::GetWeaponId() const {
	return weapon_id;
}

////////////////////////////////////////////////////////////
int Game_Actor::GetShieldId() const {
	return shield_id;
}

////////////////////////////////////////////////////////////
int Game_Actor::GetArmorId() const {
	return armor_id;
}

////////////////////////////////////////////////////////////
int Game_Actor::GetHelmetId() const {
	return helmet_id;
}

////////////////////////////////////////////////////////////
int Game_Actor::GetAccessoryId() const {
	return accessory_id;
}

////////////////////////////////////////////////////////////
int Game_Actor::GetLevel() const {
	return level;
}

////////////////////////////////////////////////////////////
int Game_Actor::GetExp() const {
	return exp;
}

////////////////////////////////////////////////////////////
void Game_Actor::SetExp(int _exp) {
	exp = _exp;
}

////////////////////////////////////////////////////////////
void Game_Actor::ChangeExp(int exp) {
	// TODO
	/*int last_level = level;

	this->exp = max(min(exp, 0), 999999);
	while (this->exp*/
}

////////////////////////////////////////////////////////////
void Game_Actor::SetLevel(int _level) {
	level = _level;
}

////////////////////////////////////////////////////////////
void Game_Actor::ChangeLevel(int level) {
	this->level = max(min(level, 50), 1);
	//ChangeExp()
}

////////////////////////////////////////////////////////////
bool Game_Actor::IsEquippable(int item_id) {
	if (two_swords_style &&
		Data::items[item_id - 1].type == RPG::Item::Type_shield) {
			return false;
	}

	// If the actor id is out of range this is an optimization in the ldb file
	// (all actors missing can equip the item)
	if (Data::items[item_id - 1].actor_set.size() <= (unsigned)(actor_id - 1)) {
		return true;
	} else {
		return Data::items[item_id - 1].actor_set.at(actor_id - 1);
	}
}

////////////////////////////////////////////////////////////
std::vector<int> Game_Actor::GetSkills() const {
	return skills;
}

////////////////////////////////////////////////////////////
bool Game_Actor::GetTwoSwordsStyle() const {
	return two_swords_style;
}

////////////////////////////////////////////////////////////
void Game_Actor::SetName(const std::string &new_name) {
	name = new_name;
}

////////////////////////////////////////////////////////////
void Game_Actor::SetTitle(const std::string &new_title) {
	name = new_title;
}

////////////////////////////////////////////////////////////
void Game_Actor::SetSprite(const std::string &file, int index, bool transparent) {
	character_name = file;
	character_index = index;
	character_transparent = transparent;
}

////////////////////////////////////////////////////////////
void Game_Actor::ChangeBattleCommands(bool add, int id) {
	if (add) {
		if (std::find(battle_commands.begin(), battle_commands.end(), id)
			== battle_commands.end()) {
			battle_commands.push_back(id);
			std::sort(battle_commands.begin(), battle_commands.end());
		}
	}
	else if (id == 0) {
		battle_commands.clear();
	}
	else {
		std::vector<unsigned int>::iterator it;
		it = std::find(battle_commands.begin(), battle_commands.end(), id);
		if (it != battle_commands.end())
			battle_commands.erase(it);
	}
}

