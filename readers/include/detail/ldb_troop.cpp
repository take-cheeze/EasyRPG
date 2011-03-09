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
/// Read Troop
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Troop, WithID)

EASYRPG_STRUCT_NAME(Troop)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Troop

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Troop)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::TroopMember>, members, ('memb')('ers'))
	, EASYRPG_SIZE_FIELD_PAIR(bool, terrain_set, ('terr')('ain_')('set'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<bool>, terrain_set, ('terr')('ain_')('set'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::TroopPage>, pages, ('page')('s'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
