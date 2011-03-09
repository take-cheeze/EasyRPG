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

////////////////////////////////////////////////////////////
/// Read Event Page
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(EventPage, WithID)

EASYRPG_STRUCT_NAME(EventPage)

#define EASYRPG_CHUNK_SUFFIX LMU_Reader
#define EASYRPG_CURRENT_STRUCT EventPage

EASYRPG_STRUCT_FIELD_MAP_BEGIN(EventPage)
	, EASYRPG_TYPED_FIELD_PAIR(RPG::EventPageCondition, condition, ('cond')('itio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, character_name, ('char')('acte')('r_na')('me'))
	, EASYRPG_TYPED_FIELD_PAIR(int, character_index, ('char')('acte')('r_in')('dex'))
	, EASYRPG_TYPED_FIELD_PAIR(int, character_direction, ('char')('acte')('r_di')('rect')('ion'))
	, EASYRPG_TYPED_FIELD_PAIR(int, character_pattern, ('char')('acte')('r_pa')('tter')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, translucent, ('tran')('sluc')('ent'))
	, EASYRPG_TYPED_FIELD_PAIR(int, move_type, ('move')('_typ')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, move_frequency, ('move')('_fre')('quen')('cy'))
	, EASYRPG_TYPED_FIELD_PAIR(int, trigger, ('trig')('ger'))
	, EASYRPG_TYPED_FIELD_PAIR(int, priority_type, ('prio')('rity')('_typ')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, overlap, ('over')('lap'))
	, EASYRPG_TYPED_FIELD_PAIR(int, animation_type, ('anim')('atio')('n_ty')('pe'))
	, EASYRPG_TYPED_FIELD_PAIR(int, move_speed, ('move')('_spe')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::MoveRoute, move_route, ('move')('_rou')('te'))
	, EASYRPG_SIZE_FIELD_PAIR(RPG::EventCommand, event_commands, ('even')('t_co')('mman')('ds'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::EventCommand>, event_commands, ('even')('t_co')('mman')('ds'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
