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
/// Read Save Vehicle Location
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveVehicleLocation, NoID)

EASYRPG_STRUCT_NAME(SaveVehicleLocation)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveVehicleLocation

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SaveVehicleLocation)
	, EASYRPG_TYPED_FIELD_PAIR(int, map_id, ('map_')('id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, position_x, ('posi')('tion')('_x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, position_y, ('posi')('tion')('_y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, facing1, ('faci')('ng1'))
	, EASYRPG_TYPED_FIELD_PAIR(int, facing2, ('faci')('ng2'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_17, ('unkn')('own_')('17'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_21, ('unkn')('own_')('21'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_23, ('unkn')('own_')('23'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_25, ('unkn')('own_')('25'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::MoveRoute, move_route, ('move')('_rou')('te'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_34, ('unkn')('own_')('34'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_35, ('unkn')('own_')('35'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, sprite_name, ('spri')('te_n')('ame'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sprite_id, ('spri')('te_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_4b, ('unkn')('own_')('4b'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_65, ('unkn')('own_')('65'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, sprite2_name, ('spri')('te2_')('name'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sprite2_id, ('spri')('te2_')('id'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
