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
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Save Title
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveTitle, NoID)

EASYRPG_STRUCT_NAME(SaveTitle)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveTitle

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SaveTitle)
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, timestamp, ('time')('stam')('p'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, hero_name, ('hero')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hero_level, ('hero')('_lev')('el'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hero_hp, ('hero')('_hp'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, face1_name, ('face')('1_na')('me'))
	, EASYRPG_TYPED_FIELD_PAIR(int, face1_id, ('face')('1_id'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, face2_name, ('face')('2_na')('me'))
	, EASYRPG_TYPED_FIELD_PAIR(int, face2_id, ('face')('2_id'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, face3_name, ('face')('3_na')('me'))
	, EASYRPG_TYPED_FIELD_PAIR(int, face3_id, ('face')('3_id'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, face4_name, ('face')('4_na')('me'))
	, EASYRPG_TYPED_FIELD_PAIR(int, face4_id, ('face')('4_id'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
