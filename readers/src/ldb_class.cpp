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
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Class
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Class, WithID)

EASYRPG_STRUCT_NAME(Class)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Class

EASYRPG_STRUCT_FIELDS_BEGIN(Class)
	EASYRPG_STRUCT_TYPED_FIELD(std::string, name),
	EASYRPG_STRUCT_TYPED_FIELD(bool, two_swords_style),
	EASYRPG_STRUCT_TYPED_FIELD(bool, fix_equipment),
	EASYRPG_STRUCT_TYPED_FIELD(bool, auto_battle),
	EASYRPG_STRUCT_TYPED_FIELD(bool, super_guard),
	EASYRPG_STRUCT_TYPED_FIELD(RPG::Parameters, parameters),
	EASYRPG_STRUCT_TYPED_FIELD(int, exp_base),
	EASYRPG_STRUCT_TYPED_FIELD(int, exp_inflation),
	EASYRPG_STRUCT_TYPED_FIELD(int, exp_correction),
	EASYRPG_STRUCT_TYPED_FIELD(int, unarmed_animation),
	EASYRPG_STRUCT_TYPED_FIELD(std::vector<RPG::Learning>, skills),
	EASYRPG_STRUCT_SIZE_FIELD(uint8_t, state_ranks),
	EASYRPG_STRUCT_TYPED_FIELD(std::vector<uint8_t>, state_ranks),
	EASYRPG_STRUCT_SIZE_FIELD(uint8_t, attribute_ranks),
	EASYRPG_STRUCT_TYPED_FIELD(std::vector<uint8_t>, attribute_ranks),
	EASYRPG_STRUCT_TYPED_FIELD(std::vector<uint32_t>, battle_commands),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
