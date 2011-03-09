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

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read System
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(System, NoID)

EASYRPG_STRUCT_NAME(System)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT System

EASYRPG_STRUCT_FIELD_MAP_BEGIN(System)
	, EASYRPG_TYPED_FIELD_PAIR(int, ldb_id, ('ldb_')('id'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, boat_name, ('boat')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, ship_name, ('ship')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, airship_name, ('airs')('hip_')('name'))
	, EASYRPG_TYPED_FIELD_PAIR(int, boat_index, ('boat')('_ind')('ex'))
	, EASYRPG_TYPED_FIELD_PAIR(int, ship_index, ('ship')('_ind')('ex'))
	, EASYRPG_TYPED_FIELD_PAIR(int, airship_index, ('airs')('hip_')('inde')('x'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, title_name, ('titl')('e_na')('me'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, gameover_name, ('game')('over')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, system_name, ('syst')('em_n')('ame'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, system2_name, ('syst')('em2_')('name'))
	, EASYRPG_SIZE_FIELD_PAIR(int16_t, party, ('part')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, party, ('part')('y'))
	, EASYRPG_SIZE_FIELD_PAIR(int16_t, menu_commands, ('menu')('_com')('mand')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, menu_commands, ('menu')('_com')('mand')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, title_music, ('titl')('e_mu')('sic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, battle_music, ('batt')('le_m')('usic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, battle_end_music, ('batt')('le_e')('nd_m')('usic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, inn_music, ('inn_')('musi')('c'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, boat_music, ('boat')('_mus')('ic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, ship_music, ('ship')('_mus')('ic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, airship_music, ('airs')('hip_')('musi')('c'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, gameover_music, ('game')('over')('_mus')('ic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, cursor_se, ('curs')('or_s')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, decision_se, ('deci')('sion')('_se'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, cancel_se, ('canc')('el_s')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, buzzer_se, ('buzz')('er_s')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, battle_se, ('batt')('le_s')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, escape_se, ('esca')('pe_s')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, enemy_attack_se, ('enem')('y_at')('tack')('_se'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, enemy_damaged_se, ('enem')('y_da')('mage')('d_se'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, actor_damaged_se, ('acto')('r_da')('mage')('d_se'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, dodge_se, ('dodg')('e_se'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, enemy_death_se, ('enem')('y_de')('ath_')('se'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, item_se, ('item')('_se'))
	, EASYRPG_TYPED_FIELD_PAIR(int, transition_out, ('tran')('siti')('on_o')('ut'))
	, EASYRPG_TYPED_FIELD_PAIR(int, transition_in, ('tran')('siti')('on_i')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battle_start_fadeout, ('batt')('le_s')('tart')('_fad')('eout'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battle_start_fadein, ('batt')('le_s')('tart')('_fad')('ein'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battle_end_fadeout, ('batt')('le_e')('nd_f')('adeo')('ut'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battle_end_fadein, ('batt')('le_e')('nd_f')('adei')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(int, message_stretch, ('mess')('age_')('stre')('tch'))
	, EASYRPG_TYPED_FIELD_PAIR(int, font_id, ('font')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, selected_condition, ('sele')('cted')('_con')('diti')('on'))
	, EASYRPG_TYPED_FIELD_PAIR(int, selected_hero, ('sele')('cted')('_her')('o'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, battletest_background, ('batt')('lete')('st_b')('ackg')('roun')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::TestBattler>, battletest_data, ('batt')('lete')('st_d')('ata'))
	, EASYRPG_TYPED_FIELD_PAIR(int, saved_times, ('save')('d_ti')('mes'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battletest_terrain, ('batt')('lete')('st_t')('erra')('in'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battletest_formation, ('batt')('lete')('st_f')('orma')('tion'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battletest_condition, ('batt')('lete')('st_c')('ondi')('tion'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, show_frame, ('show')('_fra')('me'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, frame_name, ('fram')('e_na')('me'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, invert_animations, ('inve')('rt_a')('nima')('tion')('s'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
