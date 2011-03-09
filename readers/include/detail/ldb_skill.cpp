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
/// Read Skill
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Skill, WithID)

EASYRPG_STRUCT_NAME(Skill)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Skill

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Skill)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, description, ('desc')('ript')('ion'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, using_message1, ('usin')('g_me')('ssag')('e1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, using_message2, ('usin')('g_me')('ssag')('e2'))
	, EASYRPG_TYPED_FIELD_PAIR(int, failure_message, ('fail')('ure_')('mess')('age'))
	, EASYRPG_TYPED_FIELD_PAIR(int, type, ('type'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sp_type, ('sp_t')('ype'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sp_percent, ('sp_p')('erce')('nt'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sp_cost, ('sp_c')('ost'))
	, EASYRPG_TYPED_FIELD_PAIR(int, scope, ('scop')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_id, ('swit')('ch_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, animation_id, ('anim')('atio')('n_id'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, sound_effect, ('soun')('d_ef')('fect'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, occasion_field, ('occa')('sion')('_fie')('ld'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, occasion_battle, ('occa')('sion')('_bat')('tle'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, state_effect, ('stat')('e_ef')('fect'))
	, EASYRPG_TYPED_FIELD_PAIR(int, pdef_f, ('pdef')('_f'))
	, EASYRPG_TYPED_FIELD_PAIR(int, mdef_f, ('mdef')('_f'))
	, EASYRPG_TYPED_FIELD_PAIR(int, variance, ('vari')('ance'))
	, EASYRPG_TYPED_FIELD_PAIR(int, power, ('powe')('r'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hit, ('hit'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_hp, ('affe')('ct_h')('p'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_sp, ('affe')('ct_s')('p'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_attack, ('affe')('ct_a')('ttac')('k'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_defense, ('affe')('ct_d')('efen')('se'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_spirit, ('affe')('ct_s')('piri')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_agility, ('affe')('ct_a')('gili')('ty'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, absorb_damage, ('abso')('rb_d')('amag')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, ignore_defense, ('igno')('re_d')('efen')('se'))
	, EASYRPG_SIZE_FIELD_PAIR(bool, state_effects, ('stat')('e_ef')('fect')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<bool>, state_effects, ('stat')('e_ef')('fect')('s'))
	, EASYRPG_SIZE_FIELD_PAIR(bool, attribute_effects, ('attr')('ibut')('e_ef')('fect')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<bool>, attribute_effects, ('attr')('ibut')('e_ef')('fect')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, affect_attr_defence, ('affe')('ct_a')('ttr_')('defe')('nce'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battler_animation, ('batt')('ler_')('anim')('atio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::BattlerAnimationData>, battler_animation_data, ('batt')('ler_')('anim')('atio')('n_da')('ta'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
