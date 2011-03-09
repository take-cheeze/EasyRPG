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
/// Read Item Animation
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(ItemAnimation, WithID)

EASYRPG_STRUCT_NAME(ItemAnimation)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT ItemAnimation

EASYRPG_STRUCT_FIELD_MAP_BEGIN(ItemAnimation)
	, EASYRPG_TYPED_FIELD_PAIR(int, type, ('type'))
	, EASYRPG_TYPED_FIELD_PAIR(int, weapon_anim, ('weap')('on_a')('nim'))
	, EASYRPG_TYPED_FIELD_PAIR(int, movement, ('move')('ment'))
	, EASYRPG_TYPED_FIELD_PAIR(int, after_image, ('afte')('r_im')('age'))
	, EASYRPG_TYPED_FIELD_PAIR(int, attacks, ('atta')('cks'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, ranged, ('rang')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(int, ranged_anim, ('rang')('ed_a')('nim'))
	, EASYRPG_TYPED_FIELD_PAIR(int, ranged_speed, ('rang')('ed_s')('peed'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battle_anim, ('batt')('le_a')('nim'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
