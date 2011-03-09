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
/// Read Event
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Event, WithID)

EASYRPG_STRUCT_NAME(Event)

#define EASYRPG_CHUNK_SUFFIX LMU_Reader
#define EASYRPG_CURRENT_STRUCT Event

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Event)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(int, x, ('x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, y, ('y'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::EventPage>, pages, ('page')('s'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
