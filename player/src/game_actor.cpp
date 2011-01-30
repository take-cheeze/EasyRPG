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
#include "game_actor.hpp"
#include "game_party.hpp"
#include "main_data.hpp"
#include "util_macro.hpp"

////////////////////////////////////////////////////////////
Game_Actor::Game_Actor(int actor_id) {
	Setup(actor_id);
}

////////////////////////////////////////////////////////////
void Game_Actor::Setup(int actor_id) {
	const RPG::Actor& actor = Main_Data::actor(actor_id);
	this->actor_id = actor_id;
	name = actor[1].toString().toSystem();
	character_name = actor[3].toString().toSystem();
	character_index = actor[4].to<int>();
	character_transparent = false;
	face_name = actor[15].toString().toSystem();
	face_index = actor[16].to<int>();
	title = actor[2].toString().toSystem();
	boost::array<uint16_t, rpg2k::Equip::END> eq = actor[51].toBinary().toArray<uint16_t, rpg2k::Equip::END>();
	weapon_id = eq[rpg2k::Equip::WEAPON];
	shield_id = eq[rpg2k::Equip::SHIELD];
	armor_id = eq[rpg2k::Equip::ARMOR];
	helmet_id = eq[rpg2k::Equip::HELMET];
	accessory_id = eq[rpg2k::Equip::OTHER];
	level = actor[7].to<int>();
	exp_list.resize(actor[8].to<int>(), 0);
	MakeExpList();
	exp = exp_list[level - 1];
	hp = GetMaxHp();
	sp = GetMaxSp();

	two_swords_style = actor[21].to<bool>();
	eastl::vector<uint32_t> buf = actor[80].toBinary().toVector<uint32_t>();
	battle_commands.assign(buf.begin(), buf.end());

	using rpg2k::structure::Array2D;
	Array2D const& skillList = actor[63].toArray2D();
	for (Array2D::const_iterator i = skillList.begin(); i != skillList.end(); ++i) {
		if ((*i->second)[1].to<int>() <= level) {
			LearnSkill((*i->second)[2].to<int>());
	/*
	two_swords_style = actor.two_swords_style;
	battle_commands = std::vector<uint32_t>(actor.battle_commands);

	for (size_t i = 0; i < actor.skills.size(); ++i) {
		if (actor.skills[i].level <= level) {
			LearnSkill(actor.skills[i].skill_id);
	*/
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
	return Main_Data::project->character(actor_id).basicParam(level, rpg2k::Param::HP);
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseMaxSp() const {
	return Main_Data::project->character(actor_id).basicParam(level, rpg2k::Param::MP);
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseAtk() const {
	int n = Main_Data::project->character(actor_id).basicParam(level, rpg2k::Param::ATTACK);

	if (weapon_id > 0) {
		n += Main_Data::item(weapon_id)[11].to<int>();
	}
	if (shield_id > 0) {
		n += Main_Data::item(shield_id)[11].to<int>();
	}
	if (armor_id > 0) {
		n += Main_Data::item(armor_id)[11].to<int>();
	}
	if (helmet_id > 0) {
		n += Main_Data::item(helmet_id)[11].to<int>();
	}
	if (accessory_id > 0) {
		n += Main_Data::item(accessory_id)[11].to<int>();
	}

	return min(max(n, 1), 999);
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseDef() const {
	int n = Main_Data::project->character(actor_id).basicParam(level, rpg2k::Param::GAURD);

	if (weapon_id > 0) {
		n += Main_Data::item(weapon_id)[12].to<int>();
	}
	if (shield_id > 0) {
		n += Main_Data::item(shield_id)[12].to<int>();
	}
	if (armor_id > 0) {
		n += Main_Data::item(armor_id)[12].to<int>();
	}
	if (helmet_id > 0) {
		n += Main_Data::item(helmet_id)[12].to<int>();
	}
	if (accessory_id > 0) {
		n += Main_Data::item(accessory_id)[12].to<int>();
	}

	return min(max(n, 1), 999);
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseSpi() const {
	int n = Main_Data::project->character(actor_id).basicParam(level, rpg2k::Param::MIND);

	if (weapon_id > 0) {
		n += Main_Data::item(weapon_id)[13].to<int>();
	}
	if (shield_id > 0) {
		n += Main_Data::item(shield_id)[13].to<int>();
	}
	if (armor_id > 0) {
		n += Main_Data::item(armor_id)[13].to<int>();
	}
	if (helmet_id > 0) {
		n += Main_Data::item(helmet_id)[13].to<int>();
	}
	if (accessory_id > 0) {
		n += Main_Data::item(accessory_id)[13].to<int>();
	}

	return min(max(n, 1), 999);
}

////////////////////////////////////////////////////////////
int Game_Actor::GetBaseAgi() const {
	int n = Main_Data::project->character(actor_id).basicParam(level, rpg2k::Param::SPEED);

	if (weapon_id > 0) {
		n += Main_Data::item(weapon_id)[14].to<int>();
	}
	if (shield_id > 0) {
		n += Main_Data::item(shield_id)[14].to<int>();
	}
	if (armor_id > 0) {
		n += Main_Data::item(armor_id)[14].to<int>();
	}
	if (helmet_id > 0) {
		n += Main_Data::item(helmet_id)[14].to<int>();
	}
	if (accessory_id > 0) {
		n += Main_Data::item(accessory_id)[14].to<int>();
	}

	return min(max(n, 1), 999);
}

////////////////////////////////////////////////////////////
int Game_Actor::CalculateExp(int level)
{
	double base = Main_Data::actor(actor_id)[41].to<int>();
	double inflation = Main_Data::actor(actor_id)[42].to<int>();
	double correction = Main_Data::actor(actor_id)[43].to<int>();

	int result = 0;

	inflation = 1.5 + (inflation * 0.01);

	for (int i = level; i >= 1; i--)
	{
		result = result + (int)(correction + base);
		base = base * inflation;
		inflation = ((level+1) * 0.002 + 0.8) * (inflation - 1) + 1;
	}
	return std::min(result, 1000000);
}

////////////////////////////////////////////////////////////
void Game_Actor::MakeExpList() {
	for (int i = 1; i < Main_Data::actor(actor_id)[8].to<int>(); ++i) {
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
	RPG::Item const& target = Main_Data::item(item_id);

	if (two_swords_style &&
		target[3].to<int>() == rpg2k::Item::SHIELD) {
			return false;
	}

	// If the actor id is out of range this is an optimization in the ldb file
	// (all actors missing can equip the item)
	if (target[61].to<int>() <= (actor_id - 1)) {
		return true;
	} else {
		return target[61].toBinary()[actor_id - 1];
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
		std::vector<uint32_t>::iterator it;
		it = std::find(battle_commands.begin(), battle_commands.end(), id);
		if (it != battle_commands.end())
			battle_commands.erase(it);
	}
}

