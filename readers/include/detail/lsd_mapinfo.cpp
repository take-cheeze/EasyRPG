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

////////////////////////////////////////////////////////////
/// Read Save Map Info
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveMapInfo, NoID)

EASYRPG_STRUCT_NAME(SaveMapInfo)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveMapInfo

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SaveMapInfo)
	, EASYRPG_TYPED_FIELD_PAIR(int, pan_x, ('pan_')('x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, pan_y, ('pan_')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, encounter_rate, ('enco')('unte')('r_ra')('te'))
	, EASYRPG_TYPED_FIELD_PAIR(int, chipset_id, ('chip')('set_')('id'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::SaveMapEvent>, events, ('even')('ts'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, lower_tiles, ('lowe')('r_ti')('les'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, upper_tiles, ('uppe')('r_ti')('les'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, parallax_name, ('para')('llax')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, parallax_horz, ('para')('llax')('_hor')('z'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, parallax_vert, ('para')('llax')('_ver')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, parallax_horz_auto, ('para')('llax')('_hor')('z_au')('to'))
	, EASYRPG_TYPED_FIELD_PAIR(int, parallax_horz_speed, ('para')('llax')('_hor')('z_sp')('eed'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, parallax_vert_auto, ('para')('llax')('_ver')('t_au')('to'))
	, EASYRPG_TYPED_FIELD_PAIR(int, parallax_vert_speed, ('para')('llax')('_ver')('t_sp')('eed'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
