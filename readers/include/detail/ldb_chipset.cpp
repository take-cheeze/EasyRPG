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
/// Read Chipset
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Chipset, WithID)

EASYRPG_STRUCT_NAME(Chipset)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Chipset

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Chipset)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, chipset_name, ('chip')('set_')('name'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, terrain_data, ('terr')('ain_')('data'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, passable_data_lower, ('pass')('able')('_dat')('a_lo')('wer'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, passable_data_upper, ('pass')('able')('_dat')('a_up')('per'))
	, EASYRPG_TYPED_FIELD_PAIR(int, animation_type, ('anim')('atio')('n_ty')('pe'))
	, EASYRPG_TYPED_FIELD_PAIR(int, animation_speed, ('anim')('atio')('n_sp')('eed'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
