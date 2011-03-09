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
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_lcf.h"

////////////////////////////////////////////////////////////
/// Read Event Page Condition
////////////////////////////////////////////////////////////
template <>
char const* const Flags<RPG::EventPageCondition::Flags>::name("EventPageCondition_Flags");

template <>
const Flags<RPG::EventPageCondition::Flags>::Flag* Flags<RPG::EventPageCondition::Flags>::flags[] = {
	new Flags<RPG::EventPageCondition::Flags>::Flag(&RPG::EventPageCondition::Flags::switch_a,	"switch_a"	),
	new Flags<RPG::EventPageCondition::Flags>::Flag(&RPG::EventPageCondition::Flags::switch_b,	"switch_b"	),
	new Flags<RPG::EventPageCondition::Flags>::Flag(&RPG::EventPageCondition::Flags::variable,	"variable"	),
	new Flags<RPG::EventPageCondition::Flags>::Flag(&RPG::EventPageCondition::Flags::item,		"item"		),
	new Flags<RPG::EventPageCondition::Flags>::Flag(&RPG::EventPageCondition::Flags::actor,		"actor"		),
	new Flags<RPG::EventPageCondition::Flags>::Flag(&RPG::EventPageCondition::Flags::timer,		"timer"		),
	new Flags<RPG::EventPageCondition::Flags>::Flag(&RPG::EventPageCondition::Flags::timer2,	"timer2"	),
	NULL
};

template <>
const uint32_t Flags<RPG::EventPageCondition::Flags>::max_size = 1;

EASYRPG_STRUCT_ID_READER(EventPageCondition, NoID)

EASYRPG_STRUCT_NAME(EventPageCondition)

#define EASYRPG_CHUNK_SUFFIX LMU_Reader
#define EASYRPG_CURRENT_STRUCT EventPageCondition

EASYRPG_STRUCT_FIELD_MAP_BEGIN(EventPageCondition)
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_a_id, ('swit')('ch_a')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_b_id, ('swit')('ch_b')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, variable_id, ('vari')('able')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, variable_value, ('vari')('able')('_val')('ue'))
	, EASYRPG_TYPED_FIELD_PAIR(int, item_id, ('item')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, actor_id, ('acto')('r_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, timer_sec, ('time')('r_se')('c'))
	, EASYRPG_TYPED_FIELD_PAIR(int, timer2_sec, ('time')('r2_s')('ec'))
	, EASYRPG_TYPED_FIELD_PAIR(int, compare_operator, ('comp')('are_')('oper')('ator'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::EventPageCondition::Flags, flags, ('flag')('s'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
