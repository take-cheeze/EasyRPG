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
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read BattleCommands
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(BattleCommands, NoID)

EASYRPG_STRUCT_NAME(BattleCommands)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT BattleCommands

EASYRPG_STRUCT_FIELD_MAP_BEGIN(BattleCommands)
	, EASYRPG_TYPED_FIELD_PAIR(int, placement, ('plac')('emen')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(int, death_handler1, ('deat')('h_ha')('ndle')('r1'))
	, EASYRPG_TYPED_FIELD_PAIR(int, row, ('row'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battle_type, ('batt')('le_t')('ype'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown1, ('unkn')('own1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::BattleCommand>, commands, ('comm')('ands'))
	, EASYRPG_TYPED_FIELD_PAIR(int, death_handler2, ('deat')('h_ha')('ndle')('r2'))
	, EASYRPG_TYPED_FIELD_PAIR(int, death_event, ('deat')('h_ev')('ent'))
	, EASYRPG_TYPED_FIELD_PAIR(int, window_size, ('wind')('ow_s')('ize'))
	, EASYRPG_TYPED_FIELD_PAIR(int, transparency, ('tran')('spar')('ency'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, teleport, ('tele')('port'))
	, EASYRPG_TYPED_FIELD_PAIR(int, teleport_id, ('tele')('port')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, teleport_x, ('tele')('port')('_x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, teleport_y, ('tele')('port')('_y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, teleport_face, ('tele')('port')('_fac')('e'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
