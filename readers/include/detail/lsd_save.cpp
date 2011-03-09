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
/// Read Save
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Save, NoID)

EASYRPG_STRUCT_NAME(Save)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT Save

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Save)
	, EASYRPG_TYPED_FIELD_PAIR(RPG::SaveTitle, title, ('titl')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::SaveSystem, system, ('syst')('em'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::SaveScreen, screen, ('scre')('en'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::SavePicture>, pictures, ('pict')('ures'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::SavePartyLocation, party_location, ('part')('y_lo')('cati')('on'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::SaveVehicleLocation, boat_location, ('boat')('_loc')('atio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::SaveVehicleLocation, ship_location, ('ship')('_loc')('atio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::SaveVehicleLocation, airship_location, ('airs')('hip_')('loca')('tion'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::SaveActor>, party, ('part')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::SaveInventory, inventory, ('inve')('ntor')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::SaveTarget>, targets, ('targ')('ets'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::SaveMapInfo, map_info, ('map_')('info'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_70, ('unkn')('own_')('70'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::SaveEvents, events, ('even')('ts'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::SaveCommonEvent>, common_events, ('comm')('on_e')('vent')('s'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
