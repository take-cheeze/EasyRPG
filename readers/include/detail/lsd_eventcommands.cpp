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
/// Read Save Event Commands
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveEventCommands, WithID)

EASYRPG_STRUCT_NAME(SaveEventCommands)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveEventCommands

EASYRPG_STRUCT_FIELD_MAP_BEGIN(SaveEventCommands)
	, EASYRPG_TYPED_FIELD_PAIR(int, commands_size, ('comm')('ands')('_siz')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::EventCommand>, commands, ('comm')('ands'))
	, EASYRPG_TYPED_FIELD_PAIR(int, current_command, ('curr')('ent_')('comm')('and'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_0c, ('unkn')('own_')('0c'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_0d, ('unkn')('own_')('0d'))
	, EASYRPG_TYPED_FIELD_PAIR(int, unknown_15, ('unkn')('own_')('15'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<uint8_t>, unknown_16, ('unkn')('own_')('16'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
