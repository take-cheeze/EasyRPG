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

////////////////////////////////////////////////////////////
/// Read EnemyAction
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(EnemyAction, WithID)

EASYRPG_STRUCT_NAME(EnemyAction)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT EnemyAction

EASYRPG_STRUCT_FIELD_MAP_BEGIN(EnemyAction)
	, EASYRPG_TYPED_FIELD_PAIR(int, kind, ('kind'))
	, EASYRPG_TYPED_FIELD_PAIR(int, basic, ('basi')('c'))
	, EASYRPG_TYPED_FIELD_PAIR(int, skill_id, ('skil')('l_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, enemy_id, ('enem')('y_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, condition_type, ('cond')('itio')('n_ty')('pe'))
	, EASYRPG_TYPED_FIELD_PAIR(int, condition_param1, ('cond')('itio')('n_pa')('ram1'))
	, EASYRPG_TYPED_FIELD_PAIR(int, condition_param2, ('cond')('itio')('n_pa')('ram2'))
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_id, ('swit')('ch_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, switch_on, ('swit')('ch_o')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_on_id, ('swit')('ch_o')('n_id'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, switch_off, ('swit')('ch_o')('ff'))
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_off_id, ('swit')('ch_o')('ff_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, rating, ('rati')('ng'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX

