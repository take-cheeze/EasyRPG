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
/// Read Enemy
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Enemy, WithID)

EASYRPG_STRUCT_NAME(Enemy)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Enemy

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Enemy)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, battler_name, ('batt')('ler_')('name'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battler_hue, ('batt')('ler_')('hue'))
	, EASYRPG_TYPED_FIELD_PAIR(int, max_hp, ('max_')('hp'))
	, EASYRPG_TYPED_FIELD_PAIR(int, max_sp, ('max_')('sp'))
	, EASYRPG_TYPED_FIELD_PAIR(int, attack, ('atta')('ck'))
	, EASYRPG_TYPED_FIELD_PAIR(int, defense, ('defe')('nse'))
	, EASYRPG_TYPED_FIELD_PAIR(int, spirit, ('spir')('it'))
	, EASYRPG_TYPED_FIELD_PAIR(int, agility, ('agil')('ity'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, transparent, ('tran')('spar')('ent'))
	, EASYRPG_TYPED_FIELD_PAIR(int, exp, ('exp'))
	, EASYRPG_TYPED_FIELD_PAIR(int, gold, ('gold'))
	, EASYRPG_TYPED_FIELD_PAIR(int, drop_id, ('drop')('_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, drop_prob, ('drop')('_pro')('b'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, critical_hit, ('crit')('ical')('_hit'))
	, EASYRPG_TYPED_FIELD_PAIR(int, critical_hit_chance, ('crit')('ical')('_hit')('_cha')('nce'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, miss, ('miss'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, levitate, ('levi')('tate'))
	, EASYRPG_SIZE_FIELD_PAIR(uint8_t, state_ranks, ('stat')('e_ra')('nks'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, state_ranks, ('stat')('e_ra')('nks'))
	, EASYRPG_SIZE_FIELD_PAIR(uint8_t, attribute_ranks, ('attr')('ibut')('e_ra')('nks'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, attribute_ranks, ('attr')('ibut')('e_ra')('nks'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::EnemyAction>, actions, ('acti')('ons'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
