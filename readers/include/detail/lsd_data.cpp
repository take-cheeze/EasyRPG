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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "ldb_reader.h"
#include "rpg_save.h"

////////////////////////////////////////////////////////////
/// Read Save System
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveSystem, NoID)

EASYRPG_STRUCT_NAME(SaveSystem)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveSystem

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SaveSystem)
	, EASYRPG_TYPED_FIELD_PAIR(int, screen, ('scre')('en'))
	, EASYRPG_TYPED_FIELD_PAIR(int, frame_count, ('fram')('e_co')('unt'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, graphics_name, ('grap')('hics')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, switches_size, ('swit')('ches')('_siz')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<bool>, switches, ('swit')('ches'))
	, EASYRPG_TYPED_FIELD_PAIR(int, variables_size, ('vari')('able')('s_si')('ze'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint32_t>, variables, ('vari')('able')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(int, message_transparent, ('mess')('age_')('tran')('spar')('ent'))
	, EASYRPG_TYPED_FIELD_PAIR(int, message_position, ('mess')('age_')('posi')('tion'))
	, EASYRPG_TYPED_FIELD_PAIR(int, message_placement, ('mess')('age_')('plac')('emen')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(int, message_continue, ('mess')('age_')('cont')('inue'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, face_name, ('face')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, face_id, ('face')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, face_right, ('face')('_rig')('ht'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, face_flip, ('face')('_fli')('p'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, transparent, ('tran')('spar')('ent'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_3d, ('unkn')('own_')('3d'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, title_music, ('titl')('e_mu')('sic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, battle_music, ('batt')('le_m')('usic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, battle_end_music, ('batt')('le_e')('nd_m')('usic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, inn_music, ('inn_')('musi')('c'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, current_music, ('curr')('ent_')('musi')('c'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, unknown1_music, ('unkn')('own1')('_mus')('ic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, unknown2_music, ('unkn')('own2')('_mus')('ic'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, stored_music, ('stor')('ed_m')('usic'))
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
	, EASYRPG_TYPED_FIELD_PAIR(uint8_t, transition_out, ('tran')('siti')('on_o')('ut'))
	, EASYRPG_TYPED_FIELD_PAIR(uint8_t, transition_in, ('tran')('siti')('on_i')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(uint8_t, battle_start_fadeout, ('batt')('le_s')('tart')('_fad')('eout'))
	, EASYRPG_TYPED_FIELD_PAIR(uint8_t, battle_start_fadein, ('batt')('le_s')('tart')('_fad')('ein'))
	, EASYRPG_TYPED_FIELD_PAIR(uint8_t, battle_end_fadeout, ('batt')('le_e')('nd_f')('adeo')('ut'))
	, EASYRPG_TYPED_FIELD_PAIR(uint8_t, battle_end_fadein, ('batt')('le_e')('nd_f')('adei')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, teleport_allowed, ('tele')('port')('_all')('owed'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, escape_allowed, ('esca')('pe_a')('llow')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, save_allowed, ('save')('_all')('owed'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, menu_allowed, ('menu')('_all')('owed'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, background, ('back')('grou')('nd'))
	, EASYRPG_TYPED_FIELD_PAIR(int, save_count, ('save')('_cou')('nt'))
	, EASYRPG_TYPED_FIELD_PAIR(int, save_slot, ('save')('_slo')('t'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
