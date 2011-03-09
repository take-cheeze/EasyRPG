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
/// Read BattlerAnimationExtension
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(BattlerAnimationExtension, WithID)

EASYRPG_STRUCT_NAME(BattlerAnimationExtension)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT BattlerAnimationExtension

EASYRPG_STRUCT_FIELD_MAP_BEGIN(BattlerAnimationExtension)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, battler_name, ('batt')('ler_')('name'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battler_index, ('batt')('ler_')('inde')('x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, animation_type, ('anim')('atio')('n_ty')('pe'))
	, EASYRPG_TYPED_FIELD_PAIR(int, animation_id, ('anim')('atio')('n_id'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
