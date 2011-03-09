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
/// Read TroopPageCondition
////////////////////////////////////////////////////////////
template <>
char const* const Flags<RPG::TroopPageCondition::Flags>::name("TroopPageCondition_Flags");

template <>
const Flags<RPG::TroopPageCondition::Flags>::Flag* Flags<RPG::TroopPageCondition::Flags>::flags[] = {
	new Flags<RPG::TroopPageCondition::Flags>::Flag(&RPG::TroopPageCondition::Flags::switch_a,		"switch_a"		),
	new Flags<RPG::TroopPageCondition::Flags>::Flag(&RPG::TroopPageCondition::Flags::switch_b,		"switch_b"		),
	new Flags<RPG::TroopPageCondition::Flags>::Flag(&RPG::TroopPageCondition::Flags::variable,		"variable"		),
	new Flags<RPG::TroopPageCondition::Flags>::Flag(&RPG::TroopPageCondition::Flags::turn,			"turn"			),
	new Flags<RPG::TroopPageCondition::Flags>::Flag(&RPG::TroopPageCondition::Flags::fatigue,		"fatigue"		),
	new Flags<RPG::TroopPageCondition::Flags>::Flag(&RPG::TroopPageCondition::Flags::enemy_hp,		"enemy_hp"		),
	new Flags<RPG::TroopPageCondition::Flags>::Flag(&RPG::TroopPageCondition::Flags::actor_hp,		"actor_hp"		),
	new Flags<RPG::TroopPageCondition::Flags>::Flag(&RPG::TroopPageCondition::Flags::turn_enemy,	"turn_enemy"	),
	new Flags<RPG::TroopPageCondition::Flags>::Flag(&RPG::TroopPageCondition::Flags::turn_actor,	"turn_actor"	),
	new Flags<RPG::TroopPageCondition::Flags>::Flag(&RPG::TroopPageCondition::Flags::command_actor,	"command_actor"	),
	NULL
};

template <>
const uint32_t Flags<RPG::TroopPageCondition::Flags>::max_size = 2;

EASYRPG_STRUCT_ID_READER(TroopPageCondition, NoID)

EASYRPG_STRUCT_NAME(TroopPageCondition)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT TroopPageCondition

EASYRPG_STRUCT_FIELD_MAP_BEGIN(TroopPageCondition)
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_a_id, ('swit')('ch_a')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_b_id, ('swit')('ch_b')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, variable_id, ('vari')('able')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, variable_value, ('vari')('able')('_val')('ue'))
	, EASYRPG_TYPED_FIELD_PAIR(int, turn_a, ('turn')('_a'))
	, EASYRPG_TYPED_FIELD_PAIR(int, turn_b, ('turn')('_b'))
	, EASYRPG_TYPED_FIELD_PAIR(int, fatigue_min, ('fati')('gue_')('min'))
	, EASYRPG_TYPED_FIELD_PAIR(int, fatigue_max, ('fati')('gue_')('max'))
	, EASYRPG_TYPED_FIELD_PAIR(int, enemy_id, ('enem')('y_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, enemy_hp_min, ('enem')('y_hp')('_min'))
	, EASYRPG_TYPED_FIELD_PAIR(int, enemy_hp_max, ('enem')('y_hp')('_max'))
	, EASYRPG_TYPED_FIELD_PAIR(int, actor_id, ('acto')('r_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, actor_hp_min, ('acto')('r_hp')('_min'))
	, EASYRPG_TYPED_FIELD_PAIR(int, actor_hp_max, ('acto')('r_hp')('_max'))
	, EASYRPG_TYPED_FIELD_PAIR(int, turn_enemy_id, ('turn')('_ene')('my_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, turn_enemy_a, ('turn')('_ene')('my_a'))
	, EASYRPG_TYPED_FIELD_PAIR(int, turn_enemy_b, ('turn')('_ene')('my_b'))
	, EASYRPG_TYPED_FIELD_PAIR(int, turn_actor_id, ('turn')('_act')('or_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, turn_actor_a, ('turn')('_act')('or_a'))
	, EASYRPG_TYPED_FIELD_PAIR(int, turn_actor_b, ('turn')('_act')('or_b'))
	, EASYRPG_TYPED_FIELD_PAIR(int, command_actor_id, ('comm')('and_')('acto')('r_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, command_id, ('comm')('and_')('id'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::TroopPageCondition::Flags, flags, ('flag')('s'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
