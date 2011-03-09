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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "reader_util.h"

////////////////////////////////////////////////////////////
/// Read Tree Map
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Start, NoID)

EASYRPG_STRUCT_NAME(Start)

#define EASYRPG_CHUNK_SUFFIX LMT_Reader
#define EASYRPG_CURRENT_STRUCT Start

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Start)
	, EASYRPG_TYPED_FIELD_PAIR(int, party_map_id, ('part')('y_ma')('p_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, party_x, ('part')('y_x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, party_y, ('part')('y_y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, boat_map_id, ('boat')('_map')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, boat_x, ('boat')('_x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, boat_y, ('boat')('_y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, ship_map_id, ('ship')('_map')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, ship_x, ('ship')('_x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, ship_y, ('ship')('_y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, airship_map_id, ('airs')('hip_')('map_')('id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, airship_x, ('airs')('hip_')('x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, airship_y, ('airs')('hip_')('y'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
