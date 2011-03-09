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
/// Read Saved Target
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveTarget, WithID)

EASYRPG_STRUCT_NAME(SaveTarget)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveTarget

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SaveTarget)
	, EASYRPG_TYPED_FIELD_PAIR(int, map_id, ('map_')('id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, map_x, ('map_')('x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, map_y, ('map_')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, switch_on, ('swit')('ch_o')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_id, ('swit')('ch_i')('d'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
