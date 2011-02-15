/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _RPG_TERMS_H_
#define _RPG_TERMS_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include "reader.h"

////////////////////////////////////////////////////////////
/// RPG::Terms class
////////////////////////////////////////////////////////////
namespace RPG {
	class Terms {
	public:
		Terms();
		
		std::string encounter;
		std::string special_combat;
		std::string escape_success;
		std::string escape_failure;
		std::string victory;
		std::string defeat;
		std::string exp_received;
		std::string gold_recieved_a;
		std::string gold_recieved_b;
		std::string item_recieved;
		std::string attacking;
		std::string actor_critical;
		std::string enemy_critical;
		std::string defending;
		std::string observing;
		std::string focus;
		std::string autodestruction;
		std::string enemy_escape;
		std::string enemy_transform;
		std::string enemy_damaged;
		std::string enemy_undamaged;
		std::string actor_damaged;
		std::string actor_undamaged;
		std::string skill_failure_a;
		std::string skill_failure_b;
		std::string skill_failure_c;
		std::string dodge;
		std::string use_item;
		std::string hp_recovery;
		std::string parameter_increase;
		std::string parameter_decrease;
		std::string actor_hp_absorbed;
		std::string enemy_hp_absorbed;
		std::string resistance_increase;
		std::string resistance_decrease;
		std::string level_up;
		std::string skill_learned;
		std::string battle_start;
		std::string miss;
		std::string shop_greeting1;
		std::string shop_regreeting1;
		std::string shop_buy1;
		std::string shop_sell1;
		std::string shop_leave1;
		std::string shop_buy_select1;
		std::string shop_buy_number1;
		std::string shop_purchased1;
		std::string shop_sell_select1;
		std::string shop_sell_number1;
		std::string shop_sold1;
		std::string shop_greeting2;
		std::string shop_regreeting2;
		std::string shop_buy2;
		std::string shop_sell2;
		std::string shop_leave2;
		std::string shop_buy_select2;
		std::string shop_buy_number2;
		std::string shop_purchased2;
		std::string shop_sell_select2;
		std::string shop_sell_number2;
		std::string shop_sold2;
		std::string shop_greeting3;
		std::string shop_regreeting3;
		std::string shop_buy3;
		std::string shop_sell3;
		std::string shop_leave3;
		std::string shop_buy_select3;
		std::string shop_buy_number3;
		std::string shop_purchased3;
		std::string shop_sell_select3;
		std::string shop_sell_number3;
		std::string shop_sold3;
		std::string inn_a_greeting_1;
		std::string inn_a_greeting_2;
		std::string inn_a_greeting_3;
		std::string inn_a_accept;
		std::string inn_a_cancel;
		std::string inn_b_greeting_1;
		std::string inn_b_greeting_2;
		std::string inn_b_greeting_3;
		std::string inn_b_accept;
		std::string inn_b_cancel;
		std::string possessed_items;
		std::string equipped_items;
		std::string gold;
		std::string battle_fight;
		std::string battle_auto;
		std::string battle_escape;
		std::string command_attack;
		std::string command_defend;
		std::string command_item;
		std::string command_skill;
		std::string menu_equipment;
		std::string menu_save;
		std::string menu_quit;
		std::string new_game;
		std::string load_game;
		std::string exit_game;
		std::string status;
		std::string row;
		std::string order;
		std::string wait_on;
		std::string wait_off;
		std::string level;
		std::string health_points;
		std::string spirit_points;
		std::string normal_status;
		std::string exp_short;
		std::string lvl_short;
		std::string hp_short;
		std::string sp_short;
		std::string sp_cost;
		std::string attack;
		std::string defense;
		std::string spirit;
		std::string agility;
		std::string weapon;
		std::string shield;
		std::string armor;
		std::string helmet;
		std::string accessory;
		std::string save_game_message;
		std::string load_game_message;
		std::string exit_game_message;
		std::string file;
		std::string yes;
		std::string no;

	private:
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive &ar, unsigned int const /* file_version */)
		{
			ar & BOOST_SERIALIZATION_NVP(encounter);
			ar & BOOST_SERIALIZATION_NVP(special_combat);
			ar & BOOST_SERIALIZATION_NVP(escape_success);
			ar & BOOST_SERIALIZATION_NVP(escape_failure);
			ar & BOOST_SERIALIZATION_NVP(victory);
			ar & BOOST_SERIALIZATION_NVP(defeat);
			ar & BOOST_SERIALIZATION_NVP(exp_received);
			ar & BOOST_SERIALIZATION_NVP(gold_recieved_a);
			ar & BOOST_SERIALIZATION_NVP(gold_recieved_b);
			ar & BOOST_SERIALIZATION_NVP(item_recieved);
			ar & BOOST_SERIALIZATION_NVP(attacking);
			ar & BOOST_SERIALIZATION_NVP(actor_critical);
			ar & BOOST_SERIALIZATION_NVP(enemy_critical);
			ar & BOOST_SERIALIZATION_NVP(defending);
			ar & BOOST_SERIALIZATION_NVP(observing);
			ar & BOOST_SERIALIZATION_NVP(focus);
			ar & BOOST_SERIALIZATION_NVP(autodestruction);
			ar & BOOST_SERIALIZATION_NVP(enemy_escape);
			ar & BOOST_SERIALIZATION_NVP(enemy_transform);
			ar & BOOST_SERIALIZATION_NVP(enemy_damaged);
			ar & BOOST_SERIALIZATION_NVP(enemy_undamaged);
			ar & BOOST_SERIALIZATION_NVP(actor_damaged);
			ar & BOOST_SERIALIZATION_NVP(actor_undamaged);
			ar & BOOST_SERIALIZATION_NVP(skill_failure_a);
			ar & BOOST_SERIALIZATION_NVP(skill_failure_b);
			ar & BOOST_SERIALIZATION_NVP(skill_failure_c);
			ar & BOOST_SERIALIZATION_NVP(dodge);
			ar & BOOST_SERIALIZATION_NVP(use_item);
			ar & BOOST_SERIALIZATION_NVP(hp_recovery);
			ar & BOOST_SERIALIZATION_NVP(parameter_increase);
			ar & BOOST_SERIALIZATION_NVP(parameter_decrease);
			ar & BOOST_SERIALIZATION_NVP(actor_hp_absorbed);
			ar & BOOST_SERIALIZATION_NVP(enemy_hp_absorbed);
			ar & BOOST_SERIALIZATION_NVP(resistance_increase);
			ar & BOOST_SERIALIZATION_NVP(resistance_decrease);
			ar & BOOST_SERIALIZATION_NVP(level_up);
			ar & BOOST_SERIALIZATION_NVP(skill_learned);
			ar & BOOST_SERIALIZATION_NVP(battle_start);
			ar & BOOST_SERIALIZATION_NVP(miss);
			ar & BOOST_SERIALIZATION_NVP(shop_greeting1);
			ar & BOOST_SERIALIZATION_NVP(shop_regreeting1);
			ar & BOOST_SERIALIZATION_NVP(shop_buy1);
			ar & BOOST_SERIALIZATION_NVP(shop_sell1);
			ar & BOOST_SERIALIZATION_NVP(shop_leave1);
			ar & BOOST_SERIALIZATION_NVP(shop_buy_select1);
			ar & BOOST_SERIALIZATION_NVP(shop_buy_number1);
			ar & BOOST_SERIALIZATION_NVP(shop_purchased1);
			ar & BOOST_SERIALIZATION_NVP(shop_sell_select1);
			ar & BOOST_SERIALIZATION_NVP(shop_sell_number1);
			ar & BOOST_SERIALIZATION_NVP(shop_sold1);
			ar & BOOST_SERIALIZATION_NVP(shop_greeting2);
			ar & BOOST_SERIALIZATION_NVP(shop_regreeting2);
			ar & BOOST_SERIALIZATION_NVP(shop_buy2);
			ar & BOOST_SERIALIZATION_NVP(shop_sell2);
			ar & BOOST_SERIALIZATION_NVP(shop_leave2);
			ar & BOOST_SERIALIZATION_NVP(shop_buy_select2);
			ar & BOOST_SERIALIZATION_NVP(shop_buy_number2);
			ar & BOOST_SERIALIZATION_NVP(shop_purchased2);
			ar & BOOST_SERIALIZATION_NVP(shop_sell_select2);
			ar & BOOST_SERIALIZATION_NVP(shop_sell_number2);
			ar & BOOST_SERIALIZATION_NVP(shop_sold2);
			ar & BOOST_SERIALIZATION_NVP(shop_greeting3);
			ar & BOOST_SERIALIZATION_NVP(shop_regreeting3);
			ar & BOOST_SERIALIZATION_NVP(shop_buy3);
			ar & BOOST_SERIALIZATION_NVP(shop_sell3);
			ar & BOOST_SERIALIZATION_NVP(shop_leave3);
			ar & BOOST_SERIALIZATION_NVP(shop_buy_select3);
			ar & BOOST_SERIALIZATION_NVP(shop_buy_number3);
			ar & BOOST_SERIALIZATION_NVP(shop_purchased3);
			ar & BOOST_SERIALIZATION_NVP(shop_sell_select3);
			ar & BOOST_SERIALIZATION_NVP(shop_sell_number3);
			ar & BOOST_SERIALIZATION_NVP(shop_sold3);
			ar & BOOST_SERIALIZATION_NVP(inn_a_greeting_1);
			ar & BOOST_SERIALIZATION_NVP(inn_a_greeting_2);
			ar & BOOST_SERIALIZATION_NVP(inn_a_greeting_3);
			ar & BOOST_SERIALIZATION_NVP(inn_a_accept);
			ar & BOOST_SERIALIZATION_NVP(inn_a_cancel);
			ar & BOOST_SERIALIZATION_NVP(inn_b_greeting_1);
			ar & BOOST_SERIALIZATION_NVP(inn_b_greeting_2);
			ar & BOOST_SERIALIZATION_NVP(inn_b_greeting_3);
			ar & BOOST_SERIALIZATION_NVP(inn_b_accept);
			ar & BOOST_SERIALIZATION_NVP(inn_b_cancel);
			ar & BOOST_SERIALIZATION_NVP(possessed_items);
			ar & BOOST_SERIALIZATION_NVP(equipped_items);
			ar & BOOST_SERIALIZATION_NVP(gold);
			ar & BOOST_SERIALIZATION_NVP(battle_fight);
			ar & BOOST_SERIALIZATION_NVP(battle_auto);
			ar & BOOST_SERIALIZATION_NVP(battle_escape);
			ar & BOOST_SERIALIZATION_NVP(command_attack);
			ar & BOOST_SERIALIZATION_NVP(command_defend);
			ar & BOOST_SERIALIZATION_NVP(command_item);
			ar & BOOST_SERIALIZATION_NVP(command_skill);
			ar & BOOST_SERIALIZATION_NVP(menu_equipment);
			ar & BOOST_SERIALIZATION_NVP(menu_save);
			ar & BOOST_SERIALIZATION_NVP(menu_quit);
			ar & BOOST_SERIALIZATION_NVP(new_game);
			ar & BOOST_SERIALIZATION_NVP(load_game);
			ar & BOOST_SERIALIZATION_NVP(exit_game);
			ar & BOOST_SERIALIZATION_NVP(status);
			ar & BOOST_SERIALIZATION_NVP(row);
			ar & BOOST_SERIALIZATION_NVP(order);
			ar & BOOST_SERIALIZATION_NVP(wait_on);
			ar & BOOST_SERIALIZATION_NVP(wait_off);
			ar & BOOST_SERIALIZATION_NVP(level);
			ar & BOOST_SERIALIZATION_NVP(health_points);
			ar & BOOST_SERIALIZATION_NVP(spirit_points);
			ar & BOOST_SERIALIZATION_NVP(normal_status);
			ar & BOOST_SERIALIZATION_NVP(exp_short);
			ar & BOOST_SERIALIZATION_NVP(lvl_short);
			ar & BOOST_SERIALIZATION_NVP(hp_short);
			ar & BOOST_SERIALIZATION_NVP(sp_short);
			ar & BOOST_SERIALIZATION_NVP(sp_cost);
			ar & BOOST_SERIALIZATION_NVP(attack);
			ar & BOOST_SERIALIZATION_NVP(defense);
			ar & BOOST_SERIALIZATION_NVP(spirit);
			ar & BOOST_SERIALIZATION_NVP(agility);
			ar & BOOST_SERIALIZATION_NVP(weapon);
			ar & BOOST_SERIALIZATION_NVP(shield);
			ar & BOOST_SERIALIZATION_NVP(armor);
			ar & BOOST_SERIALIZATION_NVP(helmet);
			ar & BOOST_SERIALIZATION_NVP(accessory);
			ar & BOOST_SERIALIZATION_NVP(save_game_message);
			ar & BOOST_SERIALIZATION_NVP(load_game_message);
			ar & BOOST_SERIALIZATION_NVP(exit_game_message);
			ar & BOOST_SERIALIZATION_NVP(file);
			ar & BOOST_SERIALIZATION_NVP(yes);
			ar & BOOST_SERIALIZATION_NVP(no);
		}
	};
}

#endif
