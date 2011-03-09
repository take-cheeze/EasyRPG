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

////////////////////////////////////////////////////////////
/// Read Class
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Class, WithID)

EASYRPG_STRUCT_NAME(Class)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Class

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Class)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, two_swords_style, ('two_')('swor')('ds_s')('tyle'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, fix_equipment, ('fix_')('equi')('pmen')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, auto_battle, ('auto')('_bat')('tle'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, super_guard, ('supe')('r_gu')('ard'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Parameters, parameters, ('para')('mete')('rs'))
	, EASYRPG_TYPED_FIELD_PAIR(int, exp_base, ('exp_')('base'))
	, EASYRPG_TYPED_FIELD_PAIR(int, exp_inflation, ('exp_')('infl')('atio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(int, exp_correction, ('exp_')('corr')('ecti')('on'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unarmed_animation, ('unar')('med_')('anim')('atio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Learning>, skills, ('skil')('ls'))
	, EASYRPG_SIZE_FIELD_PAIR(uint8_t, state_ranks, ('stat')('e_ra')('nks'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, state_ranks, ('stat')('e_ra')('nks'))
	, EASYRPG_SIZE_FIELD_PAIR(uint8_t, attribute_ranks, ('attr')('ibut')('e_ra')('nks'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, attribute_ranks, ('attr')('ibut')('e_ra')('nks'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint32_t>, battle_commands, ('batt')('le_c')('omma')('nds'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
