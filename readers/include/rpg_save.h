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

#ifndef _RPG_SAVE_H_
#define _RPG_SAVE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader.h"
#include "rpg_music.h"
#include "rpg_sound.h"
#include "rpg_eventcommand.h"
#include "rpg_moveroute.h"
#include "rpg_actor.h"
#include "rpg_system.h"
#include "rpg_map.h"
#include "rpg_mapinfo.h"

////////////////////////////////////////////////////////////
/// RPG::Map class
////////////////////////////////////////////////////////////
namespace RPG {
	class SaveTitle {
	public:
		SaveTitle();

		std::vector<uint8_t>  timestamp;
		std::string hero_name;
		int hero_level;
		int hero_hp;
		std::string face1_name;
		std::string face2_name;
		std::string face3_name;
		std::string face4_name;
		int face1_id;
		int face2_id;
		int face3_id;
		int face4_id;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(timestamp);
			ar & BOOST_SERIALIZATION_NVP(hero_name);
			ar & BOOST_SERIALIZATION_NVP(hero_level);
			ar & BOOST_SERIALIZATION_NVP(hero_hp);
			ar & BOOST_SERIALIZATION_NVP(face1_name);
			ar & BOOST_SERIALIZATION_NVP(face2_name);
			ar & BOOST_SERIALIZATION_NVP(face3_name);
			ar & BOOST_SERIALIZATION_NVP(face4_name);
			ar & BOOST_SERIALIZATION_NVP(face1_id);
			ar & BOOST_SERIALIZATION_NVP(face2_id);
			ar & BOOST_SERIALIZATION_NVP(face3_id);
			ar & BOOST_SERIALIZATION_NVP(face4_id);
		}
	};

	class SaveSystem {
	public:
		SaveSystem();
		void Setup();
		int screen;
		int frame_count;
		std::string graphics_name;
		int switches_size;
		std::vector<bool> switches;
		int variables_size;
		std::vector<uint32_t> variables;
		int message_transparent;
		int message_position;
		int message_placement;
		int message_continue;
		std::string face_name;
		int face_id;
		bool face_right;
		bool face_flip;
		bool transparent;
		int unknown_3d;
		Music title_music;
		Music battle_music;
		Music battle_end_music;
		Music inn_music;
		Music current_music;
		Music unknown1_music;
		Music unknown2_music;
		Music stored_music;
		Music boat_music;
		Music ship_music;
		Music airship_music;
		Music gameover_music;
		Sound cursor_se;
		Sound decision_se;
		Sound cancel_se;
		Sound buzzer_se;
		Sound battle_se;
		Sound escape_se;
		Sound enemy_attack_se;
		Sound enemy_damaged_se;
		Sound actor_damaged_se;
		Sound dodge_se;
		Sound enemy_death_se;
		Sound item_se;
		int transition_out;
		int transition_in;
		int battle_start_fadeout;
		int battle_start_fadein;
		int battle_end_fadeout;
		int battle_end_fadein;
		bool teleport_allowed;
		bool escape_allowed;
		bool save_allowed;
		bool menu_allowed;
		std::string background;
		int save_count;
		int save_slot;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(screen);
			ar & BOOST_SERIALIZATION_NVP(frame_count);
			ar & BOOST_SERIALIZATION_NVP(graphics_name);
			ar & BOOST_SERIALIZATION_NVP(switches_size);
			ar & BOOST_SERIALIZATION_NVP(switches);
			ar & BOOST_SERIALIZATION_NVP(variables_size);
			ar & BOOST_SERIALIZATION_NVP(variables);
			ar & BOOST_SERIALIZATION_NVP(message_transparent);
			ar & BOOST_SERIALIZATION_NVP(message_position);
			ar & BOOST_SERIALIZATION_NVP(message_placement);
			ar & BOOST_SERIALIZATION_NVP(message_continue);
			ar & BOOST_SERIALIZATION_NVP(face_name);
			ar & BOOST_SERIALIZATION_NVP(face_id);
			ar & BOOST_SERIALIZATION_NVP(face_right);
			ar & BOOST_SERIALIZATION_NVP(face_flip);
			ar & BOOST_SERIALIZATION_NVP(transparent);
			ar & BOOST_SERIALIZATION_NVP(unknown_3d);
			ar & BOOST_SERIALIZATION_NVP(title_music);
			ar & BOOST_SERIALIZATION_NVP(battle_music);
			ar & BOOST_SERIALIZATION_NVP(battle_end_music);
			ar & BOOST_SERIALIZATION_NVP(inn_music);
			ar & BOOST_SERIALIZATION_NVP(current_music);
			ar & BOOST_SERIALIZATION_NVP(unknown1_music);
			ar & BOOST_SERIALIZATION_NVP(unknown2_music);
			ar & BOOST_SERIALIZATION_NVP(stored_music);
			ar & BOOST_SERIALIZATION_NVP(boat_music);
			ar & BOOST_SERIALIZATION_NVP(ship_music);
			ar & BOOST_SERIALIZATION_NVP(airship_music);
			ar & BOOST_SERIALIZATION_NVP(gameover_music);
			ar & BOOST_SERIALIZATION_NVP(cursor_se);
			ar & BOOST_SERIALIZATION_NVP(decision_se);
			ar & BOOST_SERIALIZATION_NVP(cancel_se);
			ar & BOOST_SERIALIZATION_NVP(buzzer_se);
			ar & BOOST_SERIALIZATION_NVP(battle_se);
			ar & BOOST_SERIALIZATION_NVP(escape_se);
			ar & BOOST_SERIALIZATION_NVP(enemy_attack_se);
			ar & BOOST_SERIALIZATION_NVP(enemy_damaged_se);
			ar & BOOST_SERIALIZATION_NVP(actor_damaged_se);
			ar & BOOST_SERIALIZATION_NVP(dodge_se);
			ar & BOOST_SERIALIZATION_NVP(enemy_death_se);
			ar & BOOST_SERIALIZATION_NVP(item_se);
			ar & BOOST_SERIALIZATION_NVP(transition_out);
			ar & BOOST_SERIALIZATION_NVP(transition_in);
			ar & BOOST_SERIALIZATION_NVP(battle_start_fadeout);
			ar & BOOST_SERIALIZATION_NVP(battle_start_fadein);
			ar & BOOST_SERIALIZATION_NVP(battle_end_fadeout);
			ar & BOOST_SERIALIZATION_NVP(battle_end_fadein);
			ar & BOOST_SERIALIZATION_NVP(teleport_allowed);
			ar & BOOST_SERIALIZATION_NVP(escape_allowed);
			ar & BOOST_SERIALIZATION_NVP(save_allowed);
			ar & BOOST_SERIALIZATION_NVP(menu_allowed);
			ar & BOOST_SERIALIZATION_NVP(background);
			ar & BOOST_SERIALIZATION_NVP(save_count);
			ar & BOOST_SERIALIZATION_NVP(save_slot);
		}
	};

	class SavePicture {
	public:
		SavePicture();

		int ID;
		std::string name;
		double start_x;
		double start_y;
		double current_x;
		double current_y;
		bool picture_scrolls;
		double current_magnify;
		double current_top_trans;
		bool transparency;
		double current_red;
		double current_green;
		double current_blue;
		double current_sat;
		int effect_mode;
		double effect_speed;
		double current_bot_trans;
		double finish_x;
		double finish_y;
		int finish_magnify;
		int finish_top_trans;
		int finish_bot_trans;
		int finish_red;
		int finish_green;
		int finish_blue;
		int finish_sat;
		int effect2_speed;
		int time_left;
		double current_rotation;
		int current_waver;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(start_x);
			ar & BOOST_SERIALIZATION_NVP(start_y);
			ar & BOOST_SERIALIZATION_NVP(current_x);
			ar & BOOST_SERIALIZATION_NVP(current_y);
			ar & BOOST_SERIALIZATION_NVP(picture_scrolls);
			ar & BOOST_SERIALIZATION_NVP(current_magnify);
			ar & BOOST_SERIALIZATION_NVP(current_top_trans);
			ar & BOOST_SERIALIZATION_NVP(transparency);
			ar & BOOST_SERIALIZATION_NVP(current_red);
			ar & BOOST_SERIALIZATION_NVP(current_green);
			ar & BOOST_SERIALIZATION_NVP(current_blue);
			ar & BOOST_SERIALIZATION_NVP(current_sat);
			ar & BOOST_SERIALIZATION_NVP(effect_mode);
			ar & BOOST_SERIALIZATION_NVP(effect_speed);
			ar & BOOST_SERIALIZATION_NVP(current_bot_trans);
			ar & BOOST_SERIALIZATION_NVP(finish_x);
			ar & BOOST_SERIALIZATION_NVP(finish_y);
			ar & BOOST_SERIALIZATION_NVP(finish_magnify);
			ar & BOOST_SERIALIZATION_NVP(finish_top_trans);
			ar & BOOST_SERIALIZATION_NVP(finish_bot_trans);
			ar & BOOST_SERIALIZATION_NVP(finish_red);
			ar & BOOST_SERIALIZATION_NVP(finish_green);
			ar & BOOST_SERIALIZATION_NVP(finish_blue);
			ar & BOOST_SERIALIZATION_NVP(finish_sat);
			ar & BOOST_SERIALIZATION_NVP(effect2_speed);
			ar & BOOST_SERIALIZATION_NVP(time_left);
			ar & BOOST_SERIALIZATION_NVP(current_rotation);
			ar & BOOST_SERIALIZATION_NVP(current_waver);
		}
	};

	class SavePartyLocation {
	public:
		SavePartyLocation();

		int map_id;
		int position_x;
		int position_y;
		int facing1;
		int facing2;
		int unknown_17;
		int unknown_20;
		int unknown_21;
		int unknown_23;
		int unknown_25;
		MoveRoute move_route;
		int unknown_2a;
		int unknown_2b;
		int unknown_2c;
		bool sprite_transparent;
		int unknown_2f;
		int unknown_33;
		int unknown_34;
		int unknown_35;
		int unknown_36;
		int unknown_3e;
		int unknown_3f;
		std::string sprite_name;
		int sprite_id;
		int unknown_4b;
		int unknown_51;
		int unknown_52;
		int unknown_53;
		int pan_state;
		int pan_current_x;
		int pan_current_y;
		int pan_finish_x;
		int pan_finish_y;
		int unknown_79;
		int unknown_7c;
		int unknown_83;
		int unknown_84;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(map_id);
			ar & BOOST_SERIALIZATION_NVP(position_x);
			ar & BOOST_SERIALIZATION_NVP(position_y);
			ar & BOOST_SERIALIZATION_NVP(facing1);
			ar & BOOST_SERIALIZATION_NVP(facing2);
			ar & BOOST_SERIALIZATION_NVP(unknown_17);
			ar & BOOST_SERIALIZATION_NVP(unknown_21);
			ar & BOOST_SERIALIZATION_NVP(unknown_23);
			ar & BOOST_SERIALIZATION_NVP(unknown_25);
			ar & BOOST_SERIALIZATION_NVP(move_route);
			ar & BOOST_SERIALIZATION_NVP(unknown_2b);
			ar & BOOST_SERIALIZATION_NVP(unknown_34);
			ar & BOOST_SERIALIZATION_NVP(unknown_35);
			ar & BOOST_SERIALIZATION_NVP(unknown_36);
			ar & BOOST_SERIALIZATION_NVP(unknown_3e);
			ar & BOOST_SERIALIZATION_NVP(unknown_3f);
			ar & BOOST_SERIALIZATION_NVP(sprite_name);
			ar & BOOST_SERIALIZATION_NVP(sprite_id);
			ar & BOOST_SERIALIZATION_NVP(unknown_4b);
			ar & BOOST_SERIALIZATION_NVP(unknown_51);
			ar & BOOST_SERIALIZATION_NVP(unknown_52);
			ar & BOOST_SERIALIZATION_NVP(unknown_53);
			ar & BOOST_SERIALIZATION_NVP(pan_state);
			ar & BOOST_SERIALIZATION_NVP(pan_current_x);
			ar & BOOST_SERIALIZATION_NVP(pan_current_y);
			ar & BOOST_SERIALIZATION_NVP(pan_finish_x);
			ar & BOOST_SERIALIZATION_NVP(pan_finish_y);
			ar & BOOST_SERIALIZATION_NVP(unknown_79);
			ar & BOOST_SERIALIZATION_NVP(unknown_7c);
			ar & BOOST_SERIALIZATION_NVP(unknown_83);
			ar & BOOST_SERIALIZATION_NVP(unknown_84);
		}
	};

	class SaveVehicleLocation {
	public:
		SaveVehicleLocation();

		int map_id;
		int position_x;
		int position_y;
		int facing1;
		int facing2;
		int unknown_17;
		int unknown_21;
		int unknown_23;
		int unknown_25;
		MoveRoute move_route;
		int unknown_34;
		int unknown_35;
		std::string sprite_name;
		int sprite_id;
		int unknown_4b;
		int unknown_65;
		std::string sprite2_name;
		int sprite2_id;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(map_id);
			ar & BOOST_SERIALIZATION_NVP(position_x);
			ar & BOOST_SERIALIZATION_NVP(position_y);
			ar & BOOST_SERIALIZATION_NVP(facing1);
			ar & BOOST_SERIALIZATION_NVP(facing2);
			ar & BOOST_SERIALIZATION_NVP(unknown_17);
			ar & BOOST_SERIALIZATION_NVP(unknown_21);
			ar & BOOST_SERIALIZATION_NVP(unknown_23);
			ar & BOOST_SERIALIZATION_NVP(unknown_25);
			ar & BOOST_SERIALIZATION_NVP(move_route);
			ar & BOOST_SERIALIZATION_NVP(unknown_34);
			ar & BOOST_SERIALIZATION_NVP(unknown_35);
			ar & BOOST_SERIALIZATION_NVP(sprite_name);
			ar & BOOST_SERIALIZATION_NVP(sprite_id);
			ar & BOOST_SERIALIZATION_NVP(unknown_4b);
			ar & BOOST_SERIALIZATION_NVP(unknown_65);
			ar & BOOST_SERIALIZATION_NVP(sprite2_name);
			ar & BOOST_SERIALIZATION_NVP(sprite2_id);
		}
	};

	class SaveActor {
	public:
		SaveActor();
		void Setup(int actor_id);

		int ID;
		std::string name;
		std::string title;
		std::string sprite_name;
		int sprite_id;
		int sprite_flags;
		std::string face_name;
		int face_id;
		int level;
		int exp;
		int hp_mod;
		int sp_mod;
		int attack_mod;
		int defense_mod;
		int spirit_mod;
		int agility_mod;
		int skills_size;
		std::vector<int16_t> skills;
		std::vector<int16_t> equipped;
		int current_hp;
		int current_sp;
		std::vector<uint32_t> battle_commands;
		int status_size;
		std::vector<int16_t> status;
		bool changed_class;
		int class_id;
		int unknown_5b;
		bool two_weapon;
		bool lock_equipment;
		bool auto_battle;
		bool mighty_guard;
		int unknown_60;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(name);
			ar & BOOST_SERIALIZATION_NVP(title);
			ar & BOOST_SERIALIZATION_NVP(sprite_name);
			ar & BOOST_SERIALIZATION_NVP(sprite_id);
			ar & BOOST_SERIALIZATION_NVP(sprite_flags);
			ar & BOOST_SERIALIZATION_NVP(face_name);
			ar & BOOST_SERIALIZATION_NVP(face_id);
			ar & BOOST_SERIALIZATION_NVP(level);
			ar & BOOST_SERIALIZATION_NVP(exp);
			ar & BOOST_SERIALIZATION_NVP(hp_mod);
			ar & BOOST_SERIALIZATION_NVP(sp_mod);
			ar & BOOST_SERIALIZATION_NVP(attack_mod);
			ar & BOOST_SERIALIZATION_NVP(defense_mod);
			ar & BOOST_SERIALIZATION_NVP(spirit_mod);
			ar & BOOST_SERIALIZATION_NVP(agility_mod);
			ar & BOOST_SERIALIZATION_NVP(skills_size);
			ar & BOOST_SERIALIZATION_NVP(skills);
			ar & BOOST_SERIALIZATION_NVP(equipped);
			ar & BOOST_SERIALIZATION_NVP(current_hp);
			ar & BOOST_SERIALIZATION_NVP(current_sp);
			ar & BOOST_SERIALIZATION_NVP(battle_commands);
			ar & BOOST_SERIALIZATION_NVP(status_size);
			ar & BOOST_SERIALIZATION_NVP(status);
			ar & BOOST_SERIALIZATION_NVP(changed_class);
			ar & BOOST_SERIALIZATION_NVP(class_id);
			ar & BOOST_SERIALIZATION_NVP(unknown_5b);
			ar & BOOST_SERIALIZATION_NVP(two_weapon);
			ar & BOOST_SERIALIZATION_NVP(lock_equipment);
			ar & BOOST_SERIALIZATION_NVP(auto_battle);
			ar & BOOST_SERIALIZATION_NVP(mighty_guard);
			ar & BOOST_SERIALIZATION_NVP(unknown_60);
		}
	};

	class SaveInventory {
	public:
		SaveInventory();
		void Setup();

		int party_size;
		std::vector<int16_t> party;
		int items_size;
		std::vector<int16_t> item_ids;
		std::vector<uint8_t> item_counts;
		std::vector<uint8_t> item_usage;
		int gold;
		int timer1_secs;
		bool timer1_active;
		bool timer1_visible;
		bool timer1_battle;
		int timer2_secs;
		bool timer2_active;
		bool timer2_visible;
		bool timer2_battle;
		int battles;
		int defeats;
		int escapes;
		int victories;
		int unknown_29;
		int steps;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(party_size);
			ar & BOOST_SERIALIZATION_NVP(party);
			ar & BOOST_SERIALIZATION_NVP(items_size);
			ar & BOOST_SERIALIZATION_NVP(item_ids);
			ar & BOOST_SERIALIZATION_NVP(item_counts);
			ar & BOOST_SERIALIZATION_NVP(item_usage);
			ar & BOOST_SERIALIZATION_NVP(gold);
			ar & BOOST_SERIALIZATION_NVP(timer1_secs);
			ar & BOOST_SERIALIZATION_NVP(timer1_active);
			ar & BOOST_SERIALIZATION_NVP(timer1_visible);
			ar & BOOST_SERIALIZATION_NVP(timer1_battle);
			ar & BOOST_SERIALIZATION_NVP(timer2_secs);
			ar & BOOST_SERIALIZATION_NVP(timer2_active);
			ar & BOOST_SERIALIZATION_NVP(timer2_visible);
			ar & BOOST_SERIALIZATION_NVP(timer2_battle);
			ar & BOOST_SERIALIZATION_NVP(battles);
			ar & BOOST_SERIALIZATION_NVP(defeats);
			ar & BOOST_SERIALIZATION_NVP(escapes);
			ar & BOOST_SERIALIZATION_NVP(victories);
			ar & BOOST_SERIALIZATION_NVP(unknown_29);
			ar & BOOST_SERIALIZATION_NVP(steps);
		}
	};

	class SaveEventCommands {
	public:
		SaveEventCommands();

		int ID;
		int commands_size;
		std::vector<EventCommand> commands;
		int current_command;
		int unknown_0c;
		int unknown_0d;
		int unknown_15;
		int unknown_16;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(commands_size);
			ar & BOOST_SERIALIZATION_NVP(commands);
			ar & BOOST_SERIALIZATION_NVP(current_command);
			ar & BOOST_SERIALIZATION_NVP(unknown_0c);
			ar & BOOST_SERIALIZATION_NVP(unknown_0d);
			ar & BOOST_SERIALIZATION_NVP(unknown_15);
			ar & BOOST_SERIALIZATION_NVP(unknown_16);
		}
	};

	class SaveEventData {
	public:
		SaveEventData();

		std::vector<SaveEventCommands> commands;
		int time_left;
		int unknown_16;
		int unknown_17;
		int unknown_20;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(commands);
			ar & BOOST_SERIALIZATION_NVP(time_left);
			ar & BOOST_SERIALIZATION_NVP(unknown_16);
			ar & BOOST_SERIALIZATION_NVP(unknown_17);
			ar & BOOST_SERIALIZATION_NVP(unknown_20);
		}
	};

	class SaveMapEvent {
	public:
		SaveMapEvent();

		int ID;
		int unknown_01;
		int map_id;
		int position_x;
		int position_y;
		int facing1;
		int facing2;
		int anim_frame;
		int unknown_18;
		int unknown_1f;
		int unknown_20;
		int layer;
		int unknown_22;
		int unknown_23;
		int unknown_24;
		int unknown_25;
		MoveRoute move_route;
		int unknown_2a;
		int unknown_2b;
		int unknown_2f;
		int anim_paused;
		int unknown_33;
		int unknown_34;
		int unknown_35;
		int unknown_36;
		int unknown_3e;
		int unknown_3f;
		int unknown_47;
		std::string sprite_name;
		int sprite_id;
		int unknown_4b;
		int flash_red;
		int flash_green;
		int flash_blue;
		double flash_current_level;
		int flash_time_left;
		int unknown_66;
		int unknown_67;
		SaveEventData event_data;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(unknown_01);
			ar & BOOST_SERIALIZATION_NVP(map_id);
			ar & BOOST_SERIALIZATION_NVP(position_x);
			ar & BOOST_SERIALIZATION_NVP(position_y);
			ar & BOOST_SERIALIZATION_NVP(facing1);
			ar & BOOST_SERIALIZATION_NVP(facing2);
			ar & BOOST_SERIALIZATION_NVP(anim_frame);
			ar & BOOST_SERIALIZATION_NVP(unknown_18);
			ar & BOOST_SERIALIZATION_NVP(unknown_1f);
			ar & BOOST_SERIALIZATION_NVP(unknown_20);
			ar & BOOST_SERIALIZATION_NVP(layer);
			ar & BOOST_SERIALIZATION_NVP(unknown_22);
			ar & BOOST_SERIALIZATION_NVP(unknown_23);
			ar & BOOST_SERIALIZATION_NVP(unknown_24);
			ar & BOOST_SERIALIZATION_NVP(unknown_25);
			ar & BOOST_SERIALIZATION_NVP(move_route);
			ar & BOOST_SERIALIZATION_NVP(unknown_2a);
			ar & BOOST_SERIALIZATION_NVP(unknown_2b);
			ar & BOOST_SERIALIZATION_NVP(anim_paused);
			ar & BOOST_SERIALIZATION_NVP(unknown_33);
			ar & BOOST_SERIALIZATION_NVP(unknown_34);
			ar & BOOST_SERIALIZATION_NVP(unknown_35);
			ar & BOOST_SERIALIZATION_NVP(unknown_36);
			ar & BOOST_SERIALIZATION_NVP(unknown_47);
			ar & BOOST_SERIALIZATION_NVP(sprite_name);
			ar & BOOST_SERIALIZATION_NVP(sprite_id);
			ar & BOOST_SERIALIZATION_NVP(unknown_4b);
			ar & BOOST_SERIALIZATION_NVP(flash_red);
			ar & BOOST_SERIALIZATION_NVP(flash_green);
			ar & BOOST_SERIALIZATION_NVP(flash_blue);
			ar & BOOST_SERIALIZATION_NVP(flash_current_level);
			ar & BOOST_SERIALIZATION_NVP(flash_time_left);
			ar & BOOST_SERIALIZATION_NVP(unknown_66);
			ar & BOOST_SERIALIZATION_NVP(unknown_67);
			ar & BOOST_SERIALIZATION_NVP(event_data);
		}
	};

	class SaveMapInfo {
	public:
		SaveMapInfo();
		void Setup();
		void Setup(const RPG::Map& map);
		void Setup(const RPG::MapInfo& map_info);

		int pan_x;
		int pan_y;
		int encounter_rate;
		int chipset_id;
		std::vector<SaveMapEvent> events;
		std::vector<uint8_t> lower_tiles;
		std::vector<uint8_t> upper_tiles;
		std::string parallax_name;
		bool parallax_horz;
		bool parallax_vert;
		bool parallax_horz_auto;
		int parallax_horz_speed;
		bool parallax_vert_auto;
		int parallax_vert_speed;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(pan_x);
			ar & BOOST_SERIALIZATION_NVP(pan_y);
			ar & BOOST_SERIALIZATION_NVP(events);
			ar & BOOST_SERIALIZATION_NVP(lower_tiles);
			ar & BOOST_SERIALIZATION_NVP(upper_tiles);
			ar & BOOST_SERIALIZATION_NVP(parallax_name);
			ar & BOOST_SERIALIZATION_NVP(parallax_horz);
			ar & BOOST_SERIALIZATION_NVP(parallax_vert);
			ar & BOOST_SERIALIZATION_NVP(parallax_horz_auto);
			ar & BOOST_SERIALIZATION_NVP(parallax_horz_speed);
			ar & BOOST_SERIALIZATION_NVP(parallax_vert_auto);
			ar & BOOST_SERIALIZATION_NVP(parallax_vert_speed);
		}
	};

	class SaveScreen {
	public:
		SaveScreen();

		int tint_finish_red;
		int tint_finish_green;
		int tint_finish_blue;
		int tint_finish_sat;
		double tint_current_red;
		double tint_current_green;
		double tint_current_blue;
		double tint_current_sat;
		int tint_time_left;
		bool flash_continuous;
		int flash_red;
		int flash_green;
		int flash_blue;
		double flash_current_level;
		int flash_time_left;
		bool shake_continuous;
		int shake_strength;
		int shake_speed;
		int shake_position;
		int shake_time_left;
		int pan_x;
		int pan_y;
		int battleanim_id;
		int battleanim_target;
		int battleanim_unk_2d;
		bool battleanim_global;
		int weather;
		int weather_strength;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(tint_finish_red);
			ar & BOOST_SERIALIZATION_NVP(tint_finish_green);
			ar & BOOST_SERIALIZATION_NVP(tint_finish_blue);
			ar & BOOST_SERIALIZATION_NVP(tint_finish_sat);
			ar & BOOST_SERIALIZATION_NVP(tint_current_red);
			ar & BOOST_SERIALIZATION_NVP(tint_current_green);
			ar & BOOST_SERIALIZATION_NVP(tint_current_blue);
			ar & BOOST_SERIALIZATION_NVP(tint_current_sat);
			ar & BOOST_SERIALIZATION_NVP(tint_time_left);
			ar & BOOST_SERIALIZATION_NVP(flash_status);
			ar & BOOST_SERIALIZATION_NVP(flash_red);
			ar & BOOST_SERIALIZATION_NVP(flash_green);
			ar & BOOST_SERIALIZATION_NVP(flash_blue);
			ar & BOOST_SERIALIZATION_NVP(flash_current_level);
			ar & BOOST_SERIALIZATION_NVP(flash_time_left);
			ar & BOOST_SERIALIZATION_NVP(shake_status);
			ar & BOOST_SERIALIZATION_NVP(shake_strength);
			ar & BOOST_SERIALIZATION_NVP(shake_speed);
			ar & BOOST_SERIALIZATION_NVP(shake_position);
			ar & BOOST_SERIALIZATION_NVP(shake_time_left);
			ar & BOOST_SERIALIZATION_NVP(pan_x);
			ar & BOOST_SERIALIZATION_NVP(pan_y);
			ar & BOOST_SERIALIZATION_NVP(battleanim_id);
			ar & BOOST_SERIALIZATION_NVP(battleanim_target);
			ar & BOOST_SERIALIZATION_NVP(battleanim_unk_2d);
			ar & BOOST_SERIALIZATION_NVP(battleanim_global);
			ar & BOOST_SERIALIZATION_NVP(weather);
			ar & BOOST_SERIALIZATION_NVP(weather_strength);
		}
	};

	class SaveCommonEvent {
	public:
		SaveCommonEvent();

		int ID;
		SaveEventData event_data;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(event_data);
		}
	};

	class SaveEvents {
	public:
		SaveEvents();

		std::vector<SaveEventCommands> events;
		int events_size;
		int unknown_16;
		int unknown_17;
		int unknown_18;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(events);
			ar & BOOST_SERIALIZATION_NVP(events_size);
			ar & BOOST_SERIALIZATION_NVP(unknown_16);
			ar & BOOST_SERIALIZATION_NVP(unknown_17);
			ar & BOOST_SERIALIZATION_NVP(unknown_18);
		}
	};

	class SaveTarget {
	public:
		SaveTarget();

		int ID;
		int map_id;
		int map_x;
		int map_y;
		bool switch_on;
		int switch_id;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ID);
			ar & BOOST_SERIALIZATION_NVP(map_id);
			ar & BOOST_SERIALIZATION_NVP(map_x);
			ar & BOOST_SERIALIZATION_NVP(map_y);
			ar & BOOST_SERIALIZATION_NVP(switch_on);
			ar & BOOST_SERIALIZATION_NVP(switch_id);
		}
	};

	class Save {
	public:
		Save();
		void Setup();

		SaveTitle title;
		SaveSystem system;
		SaveScreen screen;
		std::vector<SavePicture> pictures;
		SavePartyLocation party_location;
		SaveVehicleLocation boat_location;
		SaveVehicleLocation ship_location;
		SaveVehicleLocation airship_location;
		std::vector<SaveActor> party;
		SaveInventory inventory;
		std::vector<SaveTarget> targets;
		SaveMapInfo map_info;
		int unknown_70;
		std::vector<SaveCommonEvent> common_events;
		SaveEvents events;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(title);
			ar & BOOST_SERIALIZATION_NVP(system);
			ar & BOOST_SERIALIZATION_NVP(screen);
			ar & BOOST_SERIALIZATION_NVP(pictures);
			ar & BOOST_SERIALIZATION_NVP(party_location);
			ar & BOOST_SERIALIZATION_NVP(boat_location);
			ar & BOOST_SERIALIZATION_NVP(ship_location);
			ar & BOOST_SERIALIZATION_NVP(airship_location);
			ar & BOOST_SERIALIZATION_NVP(party);
			ar & BOOST_SERIALIZATION_NVP(inventory);
			ar & BOOST_SERIALIZATION_NVP(map_info);
			ar & BOOST_SERIALIZATION_NVP(common_events);
			ar & BOOST_SERIALIZATION_NVP(events);
		}
	};
}

#endif

