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
/// Read TroopMember
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::TroopMember>* Struct<RPG::TroopMember>::ID_reader = new IDReaderT<RPG::TroopMember, WithID>();

template <>
const std::string Struct<RPG::TroopMember>::name("TroopMember");

template <>
const Field<RPG::TroopMember>* Struct<RPG::TroopMember>::fields[] = {
	new TypedField<RPG::TroopMember, int>	(&RPG::TroopMember::enemy_id,	LDB_Reader::ChunkTroopMember::enemy_id,		"enemy_id"	),
	new TypedField<RPG::TroopMember, int>	(&RPG::TroopMember::x,			LDB_Reader::ChunkTroopMember::x,			"x"			),
	new TypedField<RPG::TroopMember, int>	(&RPG::TroopMember::y,			LDB_Reader::ChunkTroopMember::y,			"y"			),
	new TypedField<RPG::TroopMember, bool>	(&RPG::TroopMember::invisible,	LDB_Reader::ChunkTroopMember::invisible,	"invisible"	),
	NULL
};
