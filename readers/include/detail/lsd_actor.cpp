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
#include "rpg_save.h"

////////////////////////////////////////////////////////////
/// Read Save Actor
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveActor, WithID)

EASYRPG_STRUCT_NAME(SaveActor)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveActor

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SaveActor)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, title, ('titl')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, sprite_name, ('spri')('te_n')('ame'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sprite_id, ('spri')('te_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sprite_flags, ('spri')('te_f')('lags'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, face_name, ('face')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, face_id, ('face')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, level, ('leve')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(int, exp, ('exp'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hp_mod, ('hp_m')('od'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sp_mod, ('sp_m')('od'))
	, EASYRPG_TYPED_FIELD_PAIR(int, attack_mod, ('atta')('ck_m')('od'))
	, EASYRPG_TYPED_FIELD_PAIR(int, defense_mod, ('defe')('nse_')('mod'))
	, EASYRPG_TYPED_FIELD_PAIR(int, spirit_mod, ('spir')('it_m')('od'))
	, EASYRPG_TYPED_FIELD_PAIR(int, agility_mod, ('agil')('ity_')('mod'))
	, EASYRPG_TYPED_FIELD_PAIR(int, skills_size, ('skil')('ls_s')('ize'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, skills, ('skil')('ls'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, equipped, ('equi')('pped'))
	, EASYRPG_TYPED_FIELD_PAIR(int, current_hp, ('curr')('ent_')('hp'))
	, EASYRPG_TYPED_FIELD_PAIR(int, current_sp, ('curr')('ent_')('sp'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint32_t>, battle_commands, ('batt')('le_c')('omma')('nds'))
	, EASYRPG_TYPED_FIELD_PAIR(int, status_size, ('stat')('us_s')('ize'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, status, ('stat')('us'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, changed_class, ('chan')('ged_')('clas')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(int, class_id, ('clas')('s_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_5b, ('unkn')('own_')('5b'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, two_weapon, ('two_')('weap')('on'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, lock_equipment, ('lock')('_equ')('ipme')('nt'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, auto_battle, ('auto')('_bat')('tle'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, mighty_guard, ('migh')('ty_g')('uard'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_60, ('unkn')('own_')('60'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
