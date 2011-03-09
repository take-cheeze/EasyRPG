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
#include "lmu_reader.h"
#include "rpg_save.h"

////////////////////////////////////////////////////////////
/// Read Save Party Location
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SavePartyLocation, NoID)

EASYRPG_STRUCT_NAME(SavePartyLocation)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SavePartyLocation

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SavePartyLocation)
	, EASYRPG_TYPED_FIELD_PAIR(int, map_id, ('map_')('id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, position_x, ('posi')('tion')('_x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, position_y, ('posi')('tion')('_y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, facing1, ('faci')('ng1'))
	, EASYRPG_TYPED_FIELD_PAIR(int, facing2, ('faci')('ng2'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_17, ('unkn')('own_')('17'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_20, ('unkn')('own_')('20'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_21, ('unkn')('own_')('21'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_23, ('unkn')('own_')('23'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_25, ('unkn')('own_')('25'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::MoveRoute, move_route, ('move')('_rou')('te'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_2a, ('unkn')('own_')('2a'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_2b, ('unkn')('own_')('2b'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_2c, ('unkn')('own_')('2c'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, sprite_transparent, ('spri')('te_t')('rans')('pare')('nt'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_2f, ('unkn')('own_')('2f'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_33, ('unkn')('own_')('33'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_34, ('unkn')('own_')('34'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_35, ('unkn')('own_')('35'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_36, ('unkn')('own_')('36'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_3e, ('unkn')('own_')('3e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_3f, ('unkn')('own_')('3f'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, sprite_name, ('spri')('te_n')('ame'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sprite_id, ('spri')('te_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_4b, ('unkn')('own_')('4b'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_51, ('unkn')('own_')('51'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_52, ('unkn')('own_')('52'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_53, ('unkn')('own_')('53'))
	, EASYRPG_TYPED_FIELD_PAIR(int, pan_state, ('pan_')('stat')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, pan_current_x, ('pan_')('curr')('ent_')('x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, pan_current_y, ('pan_')('curr')('ent_')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, pan_finish_x, ('pan_')('fini')('sh_x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, pan_finish_y, ('pan_')('fini')('sh_y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_79, ('unkn')('own_')('79'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_7c, ('unkn')('own_')('7c'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_83, ('unkn')('own_')('83'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_84, ('unkn')('own_')('84'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
