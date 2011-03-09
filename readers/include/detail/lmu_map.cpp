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
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_lcf.h"

////////////////////////////////////////////////////////////
/// Read Map
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Map, NoID)

EASYRPG_STRUCT_NAME(Map)

#define EASYRPG_CHUNK_SUFFIX LMU_Reader
#define EASYRPG_CURRENT_STRUCT Map

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Map)
	, EASYRPG_TYPED_FIELD_PAIR(int, chipset_id, ('chip')('set_')('id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, width, ('widt')('h'))
	, EASYRPG_TYPED_FIELD_PAIR(int, height, ('heig')('ht'))
	, EASYRPG_TYPED_FIELD_PAIR(int, scroll_type, ('scro')('ll_t')('ype'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, parallax_flag, ('para')('llax')('_fla')('g'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, parallax_name, ('para')('llax')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, parallax_loop_x, ('para')('llax')('_loo')('p_x'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, parallax_loop_y, ('para')('llax')('_loo')('p_y'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, parallax_auto_loop_x, ('para')('llax')('_aut')('o_lo')('op_x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, parallax_sx, ('para')('llax')('_sx'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, parallax_auto_loop_y, ('para')('llax')('_aut')('o_lo')('op_y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, parallax_sy, ('para')('llax')('_sy'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, generator_flag, ('gene')('rato')('r_fl')('ag'))
	, EASYRPG_TYPED_FIELD_PAIR(int, generator_mode, ('gene')('rato')('r_mo')('de'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, top_level, ('top_')('leve')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(int, generator_tiles, ('gene')('rato')('r_ti')('les'))
	, EASYRPG_TYPED_FIELD_PAIR(int, generator_width, ('gene')('rato')('r_wi')('dth'))
	, EASYRPG_TYPED_FIELD_PAIR(int, generator_height, ('gene')('rato')('r_he')('ight'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, generator_surround, ('gene')('rato')('r_su')('rrou')('nd'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, generator_upper_wall, ('gene')('rato')('r_up')('per_')('wall'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, generator_floor_b, ('gene')('rato')('r_fl')('oor_')('b'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, generator_floor_c, ('gene')('rato')('r_fl')('oor_')('c'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, generator_extra_b, ('gene')('rato')('r_ex')('tra_')('b'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, generator_extra_c, ('gene')('rato')('r_ex')('tra_')('c'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint32_t>, generator_x, ('gene')('rato')('r_x'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint32_t>, generator_y, ('gene')('rato')('r_y'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, generator_tile_ids, ('gene')('rato')('r_ti')('le_i')('ds'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, lower_layer, ('lowe')('r_la')('yer'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<int16_t>, upper_layer, ('uppe')('r_la')('yer'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Event>, events, ('even')('ts'))
	, EASYRPG_TYPED_FIELD_PAIR(int, save_times, ('save')('_tim')('es'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
