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
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Saved Events
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveEvents, NoID)

EASYRPG_STRUCT_NAME(SaveEvents)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveEvents

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SaveEvents)
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::SaveEventCommands>, events, ('even')('ts'))
	, EASYRPG_TYPED_FIELD_PAIR(int, events_size, ('even')('ts_s')('ize'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_16, ('unkn')('own_')('16'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_17, ('unkn')('own_')('17'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_18, ('unkn')('own_')('18'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_1c, ('unkn')('own_')('1c'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_20, ('unkn')('own_')('20'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_24, ('unkn')('own_')('24'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_25, ('unkn')('own_')('25'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
