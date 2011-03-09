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
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Terrain
////////////////////////////////////////////////////////////
template <>
char const* const Flags<RPG::Terrain::Flags>::name("Terrain_Flags");

template <>
const Flags<RPG::Terrain::Flags>::Flag* Flags<RPG::Terrain::Flags>::flags[] = {
	new Flags<RPG::Terrain::Flags>::Flag(&RPG::Terrain::Flags::back_party,		"back_party"		),
	new Flags<RPG::Terrain::Flags>::Flag(&RPG::Terrain::Flags::back_enemies,		"back_enemies"		),
	new Flags<RPG::Terrain::Flags>::Flag(&RPG::Terrain::Flags::lateral_party,	"lateral_party"		),
	new Flags<RPG::Terrain::Flags>::Flag(&RPG::Terrain::Flags::lateral_enemies,	"lateral_enemies"	),
	NULL
};

template <>
const uint32_t Flags<RPG::Terrain::Flags>::max_size = 1;

EASYRPG_STRUCT_ID_READER(Terrain, WithID)

EASYRPG_STRUCT_NAME(Terrain)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Terrain

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Terrain)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(int, damage, ('dama')('ge'))
	, EASYRPG_TYPED_FIELD_PAIR(int, encounter_rate, ('enco')('unte')('r_ra')('te'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, background_name, ('back')('grou')('nd_n')('ame'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, boat_pass, ('boat')('_pas')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, ship_pass, ('ship')('_pas')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, airship_pass, ('airs')('hip_')('pass'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, airship_land, ('airs')('hip_')('land'))
	, EASYRPG_TYPED_FIELD_PAIR(int, bush_depth, ('bush')('_dep')('th'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Sound, footstep, ('foot')('step'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, on_damage_se, ('on_d')('amag')('e_se'))
	, EASYRPG_TYPED_FIELD_PAIR(int, background_type, ('back')('grou')('nd_t')('ype'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, background_a_name, ('back')('grou')('nd_a')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, background_a_scrollh, ('back')('grou')('nd_a')('_scr')('ollh'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, background_a_scrollv, ('back')('grou')('nd_a')('_scr')('ollv'))
	, EASYRPG_TYPED_FIELD_PAIR(int, background_a_scrollh_speed, ('back')('grou')('nd_a')('_scr')('ollh')('_spe')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(int, background_a_scrollv_speed, ('back')('grou')('nd_a')('_scr')('ollv')('_spe')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, background_b, ('back')('grou')('nd_b'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, background_b_name, ('back')('grou')('nd_b')('_nam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, background_b_scrollh, ('back')('grou')('nd_b')('_scr')('ollh'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, background_b_scrollv, ('back')('grou')('nd_b')('_scr')('ollv'))
	, EASYRPG_TYPED_FIELD_PAIR(int, background_b_scrollh_speed, ('back')('grou')('nd_b')('_scr')('ollh')('_spe')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(int, background_b_scrollv_speed, ('back')('grou')('nd_b')('_scr')('ollv')('_spe')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Terrain::Flags, special_flags, ('spec')('ial_')('flag')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(int, special_back_party, ('spec')('ial_')('back')('_par')('ty'))
	, EASYRPG_TYPED_FIELD_PAIR(int, special_back_enemies, ('spec')('ial_')('back')('_ene')('mies'))
	, EASYRPG_TYPED_FIELD_PAIR(int, special_lateral_party, ('spec')('ial_')('late')('ral_')('part')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, special_lateral_enemies, ('spec')('ial_')('late')('ral_')('enem')('ies'))
	, EASYRPG_TYPED_FIELD_PAIR(int, grid_location, ('grid')('_loc')('atio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(int, grid_a, ('grid')('_a'))
	, EASYRPG_TYPED_FIELD_PAIR(int, grid_b, ('grid')('_b'))
	, EASYRPG_TYPED_FIELD_PAIR(int, grid_c, ('grid')('_c'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
