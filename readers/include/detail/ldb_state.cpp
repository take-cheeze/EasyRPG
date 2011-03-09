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

////////////////////////////////////////////////////////////
/// Read State
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(State, WithID)

EASYRPG_STRUCT_NAME(State)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT State

EASYRPG_STRUCT_FIELD_MAP_BEGIN(State)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(int, type, ('type'))
	, EASYRPG_TYPED_FIELD_PAIR(int, color, ('colo')('r'))
	, EASYRPG_TYPED_FIELD_PAIR(int, priority, ('prio')('rity'))
	, EASYRPG_TYPED_FIELD_PAIR(int, restriction, ('rest')('rict')('ion'))
	, EASYRPG_TYPED_FIELD_PAIR(int, a_rate, ('a_ra')('te'))
	, EASYRPG_TYPED_FIELD_PAIR(int, b_rate, ('b_ra')('te'))
	, EASYRPG_TYPED_FIELD_PAIR(int, c_rate, ('c_ra')('te'))
	, EASYRPG_TYPED_FIELD_PAIR(int, d_rate, ('d_ra')('te'))
	, EASYRPG_TYPED_FIELD_PAIR(int, e_rate, ('e_ra')('te'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hold_turn, ('hold')('_tur')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(int, auto_release_prob, ('auto')('_rel')('ease')('_pro')('b'))
	, EASYRPG_TYPED_FIELD_PAIR(int, release_by_damage, ('rele')('ase_')('by_d')('amag')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, affect_type, ('affe')('ct_t')('ype'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_attack, ('affe')('ct_a')('ttac')('k'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_defense, ('affe')('ct_d')('efen')('se'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_spirit, ('affe')('ct_s')('piri')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_agility, ('affe')('ct_a')('gili')('ty'))
	, EASYRPG_TYPED_FIELD_PAIR(int, reduce_hit_ratio, ('redu')('ce_h')('it_r')('atio'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, avoid_attacks, ('avoi')('d_at')('tack')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, reflect_magic, ('refl')('ect_')('magi')('c'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, cursed, ('curs')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battler_animation_id, ('batt')('ler_')('anim')('atio')('n_id'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, restrict_skill, ('rest')('rict')('_ski')('ll'))
	, EASYRPG_TYPED_FIELD_PAIR(int, restrict_skill_level, ('rest')('rict')('_ski')('ll_l')('evel'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, restrict_magic, ('rest')('rict')('_mag')('ic'))
	, EASYRPG_TYPED_FIELD_PAIR(int, restrict_magic_level, ('rest')('rict')('_mag')('ic_l')('evel'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hp_change_type, ('hp_c')('hang')('e_ty')('pe'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sp_change_type, ('sp_c')('hang')('e_ty')('pe'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, message_actor, ('mess')('age_')('acto')('r'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, message_enemy, ('mess')('age_')('enem')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, message_already, ('mess')('age_')('alre')('ady'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, message_affected, ('mess')('age_')('affe')('cted'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, message_recovery, ('mess')('age_')('reco')('very'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hp_change_max, ('hp_c')('hang')('e_ma')('x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hp_change_val, ('hp_c')('hang')('e_va')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hp_change_map_val, ('hp_c')('hang')('e_ma')('p_va')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hp_change_map_steps, ('hp_c')('hang')('e_ma')('p_st')('eps'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sp_change_max, ('sp_c')('hang')('e_ma')('x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sp_change_val, ('sp_c')('hang')('e_va')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sp_change_map_val, ('sp_c')('hang')('e_ma')('p_va')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sp_change_map_steps, ('sp_c')('hang')('e_ma')('p_st')('eps'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
