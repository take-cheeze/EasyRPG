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
/// Read Item
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Item, WithID)

EASYRPG_STRUCT_NAME(Item)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Item

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Item)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, description, ('desc')('ript')('ion'))
	, EASYRPG_TYPED_FIELD_PAIR(int, type, ('type'))
	, EASYRPG_TYPED_FIELD_PAIR(int, price, ('pric')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, uses, ('uses'))
	, EASYRPG_TYPED_FIELD_PAIR(int, atk_points1, ('atk_')('poin')('ts1'))
	, EASYRPG_TYPED_FIELD_PAIR(int, def_points1, ('def_')('poin')('ts1'))
	, EASYRPG_TYPED_FIELD_PAIR(int, spi_points1, ('spi_')('poin')('ts1'))
	, EASYRPG_TYPED_FIELD_PAIR(int, agi_points1, ('agi_')('poin')('ts1'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, two_handed, ('two_')('hand')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(int, sp_cost, ('sp_c')('ost'))
	, EASYRPG_TYPED_FIELD_PAIR(int, hit, ('hit'))
	, EASYRPG_TYPED_FIELD_PAIR(int, critical_hit, ('crit')('ical')('_hit'))
	, EASYRPG_TYPED_FIELD_PAIR(int, animation_id, ('anim')('atio')('n_id'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, preemptive, ('pree')('mpti')('ve'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, dual_attack, ('dual')('_att')('ack'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, attack_all, ('atta')('ck_a')('ll'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, ignore_evasion, ('igno')('re_e')('vasi')('on'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, prevent_critical, ('prev')('ent_')('crit')('ical'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, raise_evasion, ('rais')('e_ev')('asio')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, half_sp_cost, ('half')('_sp_')('cost'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, no_terrain_damage, ('no_t')('erra')('in_d')('amag')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, cursed, ('curs')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, entire_party, ('enti')('re_p')('arty'))
	, EASYRPG_TYPED_FIELD_PAIR(int, recover_hp, ('reco')('ver_')('hp'))
	, EASYRPG_TYPED_FIELD_PAIR(int, recover_hp_rate, ('reco')('ver_')('hp_r')('ate'))
	, EASYRPG_TYPED_FIELD_PAIR(int, recover_sp, ('reco')('ver_')('sp'))
	, EASYRPG_TYPED_FIELD_PAIR(int, recover_sp_rate, ('reco')('ver_')('sp_r')('ate'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, occasion_field1, ('occa')('sion')('_fie')('ld2'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, ko_only, ('ko_o')('nly'))
	, EASYRPG_TYPED_FIELD_PAIR(int, max_hp_points, ('max_')('hp_p')('oint')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(int, max_sp_points, ('max_')('sp_p')('oint')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(int, atk_points2, ('atk_')('poin')('ts2'))
	, EASYRPG_TYPED_FIELD_PAIR(int, def_points2, ('def_')('poin')('ts2'))
	, EASYRPG_TYPED_FIELD_PAIR(int, spi_points2, ('spi_')('poin')('ts2'))
	, EASYRPG_TYPED_FIELD_PAIR(int, agi_points2, ('agi_')('poin')('ts2'))
	, EASYRPG_TYPED_FIELD_PAIR(int, using_message, ('usin')('g_me')('ssag')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(int, skill_id, ('skil')('l_id'))
	, EASYRPG_TYPED_FIELD_PAIR(int, switch_id, ('swit')('ch_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, occasion_field2, ('occa')('sion')('_fie')('ld2'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, occasion_battle, ('occa')('sion')('_bat')('tle'))
	, EASYRPG_SIZE_FIELD_PAIR(bool, actor_set, ('acto')('r_se')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<bool>, actor_set, ('acto')('r_se')('t'))
	, EASYRPG_SIZE_FIELD_PAIR(bool, state_set, ('stat')('e_se')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<bool>, state_set, ('stat')('e_se')('t'))
	, EASYRPG_SIZE_FIELD_PAIR(bool, attribute_set, ('attr')('ibut')('e_se')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<bool>, attribute_set, ('attr')('ibut')('e_se')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(int, state_chance, ('stat')('e_ch')('ance'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, state_effect, ('stat')('e_ef')('fect'))
	, EASYRPG_TYPED_FIELD_PAIR(int, weapon_animation, ('weap')('on_a')('nima')('tion'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::ItemAnimation>, animation_data, ('anim')('atio')('n_da')('ta'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, use_skill, ('use_')('skil')('l'))
	, EASYRPG_SIZE_FIELD_PAIR(bool, class_set, ('clas')('s_se')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<bool>, class_set, ('clas')('s_se')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(int, ranged_trajectory, ('rang')('ed_t')('raje')('ctor')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, ranged_target, ('rang')('ed_t')('arge')('t'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX

// FIXME
// 		case ChunkItem::type:
// 			item.type = stream.ReadInt();
// 			if (item.type == RPG::Item::Type_switch) {
// 				item.ocassion_field = true;
// 			}
// 			break;
