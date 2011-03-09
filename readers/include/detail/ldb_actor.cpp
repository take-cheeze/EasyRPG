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
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Actor
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Actor, WithID)

EASYRPG_STRUCT_NAME(Actor)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Actor

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Actor)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, title, ('titl')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, character_name, ('char')('acte')('r_na')('me'))
	, EASYRPG_TYPED_FIELD_PAIR(int, character_index, ('char')('acte')('r_in')('dex'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, transparent, ('tran')('spar')('ent'))
	, EASYRPG_TYPED_FIELD_PAIR(int, initial_level, ('init')('ial_')('leve')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(int, final_level, ('fina')('l_le')('vel'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, critical_hit, ('crit')('ical')('_hit'))
	, EASYRPG_TYPED_FIELD_PAIR(int, critical_hit_chance, ('crit')('ical')('_hit')('_cha')('nce'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, face_name, ('face')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, face_index, ('face')('_ind')('ex'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, two_swords_style, ('two_')('swor')('ds_s')('tyle'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, fix_equipment, ('fix_')('equi')('pmen')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, auto_battle, ('auto')('_bat')('tle'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, super_guard, ('supe')('r_gu')('ard'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Parameters, parameters, ('para')('mete')('rs'))
	, EASYRPG_TYPED_FIELD_PAIR(int, exp_base, ('exp_')('base'))
	, EASYRPG_TYPED_FIELD_PAIR(int, exp_inflation, ('exp_')('infl')('atio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(int, exp_correction, ('exp_')('corr')('ecti')('on'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Equipment, initial_equipment, ('init')('ial_')('equi')('pmen')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unarmed_animation, ('unar')('med_')('anim')('atio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(int, class_id, ('clas')('s_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battle_x, ('batt')('le_x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battle_y, ('batt')('le_y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battler_animation, ('batt')('ler_')('anim')('atio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Learning>, skills, ('skil')('ls'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, rename_skill, ('rena')('me_s')('kill'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, skill_name, ('skil')('l_na')('me'))
	, EASYRPG_SIZE_FIELD_PAIR(uint8_t, state_ranks, ('stat')('e_ra')('nks'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, state_ranks, ('stat')('e_ra')('nks'))
	, EASYRPG_SIZE_FIELD_PAIR(uint8_t, attribute_ranks, ('attr')('ibut')('e_ra')('nks'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, attribute_ranks, ('attr')('ibut')('e_ra')('nks'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint32_t>, battle_commands, ('batt')('le_c')('omma')('nds'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
