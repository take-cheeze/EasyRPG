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
#include "lmt_reader.h"
#include "lmt_chunks.h"

////////////////////////////////////////////////////////////
/// Read MapInfo
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(MapInfo, WithID)

EASYRPG_STRUCT_NAME(MapInfo)

#define EASYRPG_CHUNK_SUFFIX LMT_Reader
#define EASYRPG_CURRENT_STRUCT MapInfo

EASYRPG_STRUCT_FIELD_MAP_BEGIN(MapInfo)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(int, parent_map, ('pare')('nt_m')('ap'))
	, EASYRPG_TYPED_FIELD_PAIR(int, type, ('type'))
	, EASYRPG_TYPED_FIELD_PAIR(int, music_type, ('musi')('c_ty')('pe'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Music, music, ('musi')('c'))
	, EASYRPG_TYPED_FIELD_PAIR(int, background_type, ('back')('grou')('nd_t')('ype'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, background_name, ('back')('grou')('nd_n')('ame'))
	, EASYRPG_TYPED_FIELD_PAIR(int, teleport, ('tele')('port'))
	, EASYRPG_TYPED_FIELD_PAIR(int, escape, ('esca')('pe'))
	, EASYRPG_TYPED_FIELD_PAIR(int, save, ('save'))
	, EASYRPG_TYPED_FIELD_PAIR(int, encounter_steps, ('enco')('unte')('r_st')('eps'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Rect, area, ('area'))
	, EASYRPG_TYPED_FIELD_PAIR(int, indentation, ('inde')('ntat')('ion'))
	, EASYRPG_TYPED_FIELD_PAIR(int, scrollbar_x, ('scro')('llba')('r_x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, scrollbar_y, ('scro')('llba')('r_y'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, expanded_node, ('expa')('nded')('_nod')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Encounter>, encounters, ('enco')('unte')('rs'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
