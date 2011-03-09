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

////////////////////////////////////////////////////////////
/// Read CommonEvent
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(CommonEvent, WithID)

EASYRPG_STRUCT_NAME(CommonEvent)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT CommonEvent

EASYRPG_STRUCT_FIELD_MAP_BEGIN(CommonEvent)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(int, trigger, ('trig')('ger'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, switch_flag, ('swit')('ch_f')('lag'))
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_id, ('swit')('ch_i')('d'))
	, EASYRPG_SIZE_FIELD_PAIR(RPG::EventCommand, event_commands, ('even')('t_co')('mman')('ds'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::EventCommand>, event_commands, ('even')('t_co')('mman')('ds'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
