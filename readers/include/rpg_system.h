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

#ifndef _RPG_SYSTEM_H_
#define _RPG_SYSTEM_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "rpg_sound.h"
#include "rpg_music.h"
#include "rpg_testbattler.h"

////////////////////////////////////////////////////////////
/// RPG::System class
////////////////////////////////////////////////////////////
namespace RPG {
	class System {
	public:
		System();
		
		int ldb_id;
		std::string boat_name;
		std::string ship_name;
		std::string airship_name;
		int boat_index;
		int ship_index;
		int airship_index;
		std::string title_name;
		std::string gameover_name;
		std::string system_name;
		std::string system2_name;
		std::vector<short> party;
		std::vector<short> menu_commands;
		Music title_music;
		Music battle_music;
		Music battle_end_music;
		Music inn_music;
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
		int message_stretch;
		int font_id;
		int selected_condition;
		int selected_hero;
		std::string battletest_background;
		std::vector<TestBattler> battletest_data;
		int battletest_terrain;
		int battletest_formation;
		int battletest_condition;
		int saved_times;
		bool show_frame;
		std::string frame_name;
		bool invert_animations;

		RPG_SERIALIZE() {
			ar & BOOST_SERIALIZATION_NVP(ldb_id);
			ar & BOOST_SERIALIZATION_NVP(boat_name);
			ar & BOOST_SERIALIZATION_NVP(ship_name);
			ar & BOOST_SERIALIZATION_NVP(airship_name);
			ar & BOOST_SERIALIZATION_NVP(boat_index);
			ar & BOOST_SERIALIZATION_NVP(ship_index);
			ar & BOOST_SERIALIZATION_NVP(airship_index);
			ar & BOOST_SERIALIZATION_NVP(title_name);
			ar & BOOST_SERIALIZATION_NVP(gameover_name);
			ar & BOOST_SERIALIZATION_NVP(system_name);
			ar & BOOST_SERIALIZATION_NVP(system2_name);
			ar & BOOST_SERIALIZATION_NVP(party);
			ar & BOOST_SERIALIZATION_NVP(menu_commands);
			ar & BOOST_SERIALIZATION_NVP(title_music);
			ar & BOOST_SERIALIZATION_NVP(battle_music);
			ar & BOOST_SERIALIZATION_NVP(battle_end_music);
			ar & BOOST_SERIALIZATION_NVP(inn_music);
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
			ar & BOOST_SERIALIZATION_NVP(message_stretch);
			ar & BOOST_SERIALIZATION_NVP(font_id);
			ar & BOOST_SERIALIZATION_NVP(selected_condition);
			ar & BOOST_SERIALIZATION_NVP(selected_hero);
			ar & BOOST_SERIALIZATION_NVP(battletest_background);
			ar & BOOST_SERIALIZATION_NVP(battletest_data);
			ar & BOOST_SERIALIZATION_NVP(battletest_terrain);
			ar & BOOST_SERIALIZATION_NVP(battletest_formation);
			ar & BOOST_SERIALIZATION_NVP(battletest_condition);
			ar & BOOST_SERIALIZATION_NVP(saved_times);
			ar & BOOST_SERIALIZATION_NVP(show_frame);
			ar & BOOST_SERIALIZATION_NVP(frame_name);
			ar & BOOST_SERIALIZATION_NVP(invert_animations);
		}
	};
}

#endif
