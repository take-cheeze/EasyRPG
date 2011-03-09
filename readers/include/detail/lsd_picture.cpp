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
/// Read Save Cover
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SavePicture, WithID)

EASYRPG_STRUCT_NAME(SavePicture)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SavePicture

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SavePicture)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, name, ('name'))
	, EASYRPG_TYPED_FIELD_PAIR(double, start_x, ('star')('t_x'))
	, EASYRPG_TYPED_FIELD_PAIR(double, start_y, ('star')('t_y'))
	, EASYRPG_TYPED_FIELD_PAIR(double, current_x, ('curr')('ent_')('x'))
	, EASYRPG_TYPED_FIELD_PAIR(double, current_y, ('curr')('ent_')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, picture_scrolls, ('pict')('ure_')('scro')('lls'))
	, EASYRPG_TYPED_FIELD_PAIR(double, current_magnify, ('curr')('ent_')('magn')('ify'))
	, EASYRPG_TYPED_FIELD_PAIR(double, current_top_trans, ('curr')('ent_')('top_')('tran')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(bool, transparency, ('tran')('spar')('ency'))
	, EASYRPG_TYPED_FIELD_PAIR(double, current_red, ('curr')('ent_')('red'))
	, EASYRPG_TYPED_FIELD_PAIR(double, current_green, ('curr')('ent_')('gree')('n'))
	, EASYRPG_TYPED_FIELD_PAIR(double, current_blue, ('curr')('ent_')('blue'))
	, EASYRPG_TYPED_FIELD_PAIR(double, current_sat, ('curr')('ent_')('sat'))
	, EASYRPG_TYPED_FIELD_PAIR(int, effect_mode, ('effe')('ct_m')('ode'))
	, EASYRPG_TYPED_FIELD_PAIR(double, effect_speed, ('effe')('ct_s')('peed'))
	, EASYRPG_TYPED_FIELD_PAIR(double, current_bot_trans, ('curr')('ent_')('bot_')('tran')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(double, finish_x, ('fini')('sh_x'))
	, EASYRPG_TYPED_FIELD_PAIR(double, finish_y, ('fini')('sh_y'))
	, EASYRPG_TYPED_FIELD_PAIR(int, finish_magnify, ('fini')('sh_m')('agni')('fy'))
	, EASYRPG_TYPED_FIELD_PAIR(int, finish_top_trans, ('fini')('sh_t')('op_t')('rans'))
	, EASYRPG_TYPED_FIELD_PAIR(int, finish_bot_trans, ('fini')('sh_b')('ot_t')('rans'))
	, EASYRPG_TYPED_FIELD_PAIR(int, finish_red, ('fini')('sh_r')('ed'))
	, EASYRPG_TYPED_FIELD_PAIR(int, finish_green, ('fini')('sh_g')('reen'))
	, EASYRPG_TYPED_FIELD_PAIR(int, finish_blue, ('fini')('sh_b')('lue'))
	, EASYRPG_TYPED_FIELD_PAIR(int, finish_sat, ('fini')('sh_s')('at'))
	, EASYRPG_TYPED_FIELD_PAIR(int, effect2_speed, ('effe')('ct2_')('spee')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, time_left, ('time')('_lef')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(double, current_rotation, ('curr')('ent_')('rota')('tion'))
	, EASYRPG_TYPED_FIELD_PAIR(int, current_waver, ('curr')('ent_')('wave')('r'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
