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
#include "reader.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Music
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::Music>* Struct<RPG::Music>::ID_reader = new IDReaderT<RPG::Music, NoID>();

template <>
const Field<RPG::Music>* Struct<RPG::Music>::fields[] = {
	new TypedField<RPG::Music, std::string>	(&RPG::Music::name,		LDB_Reader::ChunkMusic::name,		"name"		),
	new TypedField<RPG::Music, int>			(&RPG::Music::fadein,	LDB_Reader::ChunkMusic::fadein,		"fadein"	),
	new TypedField<RPG::Music, int>			(&RPG::Music::volume,	LDB_Reader::ChunkMusic::volume,		"volume"	),
	new TypedField<RPG::Music, int>			(&RPG::Music::tempo,	LDB_Reader::ChunkMusic::tempo,		"tempo"		),
	new TypedField<RPG::Music, int>			(&RPG::Music::balance,	LDB_Reader::ChunkMusic::balance,	"balance"	),
	NULL
};
