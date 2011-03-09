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
/// Read TestBattler
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(TestBattler, WithID)

EASYRPG_STRUCT_NAME(TestBattler)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT TestBattler

EASYRPG_STRUCT_FIELD_MAP_BEGIN(TestBattler)
	, EASYRPG_TYPED_FIELD_PAIR(int, actor_id, ('acto')('r_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, level, ('leve')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(int, weapon_id, ('weap')('on_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, shield_id, ('shie')('ld_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, armor_id, ('armo')('r_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, helmet_id, ('helm')('et_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, accessory_id, ('acce')('ssor')('y_id'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
