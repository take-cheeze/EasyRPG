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
/// Read TroopMember
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(TroopMember, WithID)

EASYRPG_STRUCT_NAME(TroopMember)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT TroopMember

EASYRPG_STRUCT_FIELD_MAP_BEGIN(TroopMember)
	, EASYRPG_TYPED_FIELD_PAIR(int, enemy_id, ('enem')('y_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, x, ('x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, y, ('y'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, invisible, ('invi')('sibl')('e'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
