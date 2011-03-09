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
/// Read Save Inventory
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveInventory, NoID)

EASYRPG_STRUCT_NAME(SaveInventory)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveInventory

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SaveInventory)
	, EASYRPG_TYPED_FIELD_PAIR(int, party_size, ('part')('y_si')('ze'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, party, ('part')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, items_size, ('item')('s_si')('ze'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, item_ids, ('item')('_ids'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, item_counts, ('item')('_cou')('nts'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, item_usage, ('item')('_usa')('ge'))
	, EASYRPG_TYPED_FIELD_PAIR(int, gold, ('gold'))
	, EASYRPG_TYPED_FIELD_PAIR(int, timer1_secs, ('time')('r1_s')('ecs'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, timer1_active, ('time')('r1_a')('ctiv')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, timer1_visible, ('time')('r1_v')('isib')('le'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, timer1_battle, ('time')('r1_b')('attl')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, timer2_secs, ('time')('r2_s')('ecs'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, timer2_active, ('time')('r2_a')('ctiv')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, timer2_visible, ('time')('r2_v')('isib')('le'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, timer2_battle, ('time')('r2_b')('attl')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battles, ('batt')('les'))
	, EASYRPG_TYPED_FIELD_PAIR(int, defeats, ('defe')('ats'))
	, EASYRPG_TYPED_FIELD_PAIR(int, escapes, ('esca')('pes'))
	, EASYRPG_TYPED_FIELD_PAIR(int, victories, ('vict')('orie')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_29, ('unkn')('own_')('29'))
	, EASYRPG_TYPED_FIELD_PAIR(int, steps, ('step')('s'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
