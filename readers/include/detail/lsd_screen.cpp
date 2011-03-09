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
/// Read Saved Screen Appearance
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveScreen, NoID)

EASYRPG_STRUCT_NAME(SaveScreen)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveScreen

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SaveScreen)
	, EASYRPG_TYPED_FIELD_PAIR(int, tint_finish_red, ('tint')('_fin')('ish_')('red'))
	, EASYRPG_TYPED_FIELD_PAIR(int, tint_finish_green, ('tint')('_fin')('ish_')('gree')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(int, tint_finish_blue, ('tint')('_fin')('ish_')('blue'))
	, EASYRPG_TYPED_FIELD_PAIR(int, tint_finish_sat, ('tint')('_fin')('ish_')('sat'))
	, EASYRPG_TYPED_FIELD_PAIR(double, tint_current_red, ('tint')('_cur')('rent')('_red'))
	, EASYRPG_TYPED_FIELD_PAIR(double, tint_current_green, ('tint')('_cur')('rent')('_gre')('en'))
	, EASYRPG_TYPED_FIELD_PAIR(double, tint_current_blue, ('tint')('_cur')('rent')('_blu')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(double, tint_current_sat, ('tint')('_cur')('rent')('_sat'))
	, EASYRPG_TYPED_FIELD_PAIR(int, tint_time_left, ('tint')('_tim')('e_le')('ft'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, flash_continuous, ('flas')('h_co')('ntin')('uous'))
	, EASYRPG_TYPED_FIELD_PAIR(int, flash_red, ('flas')('h_re')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, flash_green, ('flas')('h_gr')('een'))
	, EASYRPG_TYPED_FIELD_PAIR(int, flash_blue, ('flas')('h_bl')('ue'))
	, EASYRPG_TYPED_FIELD_PAIR(double, flash_current_level, ('flas')('h_cu')('rren')('t_le')('vel'))
	, EASYRPG_TYPED_FIELD_PAIR(int, flash_time_left, ('flas')('h_ti')('me_l')('eft'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, shake_continuous, ('shak')('e_co')('ntin')('uous'))
	, EASYRPG_TYPED_FIELD_PAIR(int, shake_strength, ('shak')('e_st')('reng')('th'))
	, EASYRPG_TYPED_FIELD_PAIR(int, shake_speed, ('shak')('e_sp')('eed'))
	, EASYRPG_TYPED_FIELD_PAIR(int, shake_position, ('shak')('e_po')('siti')('on'))
	, EASYRPG_TYPED_FIELD_PAIR(int, shake_time_left, ('shak')('e_ti')('me_l')('eft'))
	, EASYRPG_TYPED_FIELD_PAIR(int, pan_x, ('pan_')('x'))
	, EASYRPG_TYPED_FIELD_PAIR(int, pan_y, ('pan_')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battleanim_id, ('batt')('lean')('im_i')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battleanim_target, ('batt')('lean')('im_t')('arge')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(int, battleanim_unk_2d, ('batt')('lean')('im_u')('nk_2')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, battleanim_global, ('batt')('lean')('im_g')('loba')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(int, weather, ('weat')('her'))
	, EASYRPG_TYPED_FIELD_PAIR(int, weather_strength, ('weat')('her_')('stre')('ngth'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
