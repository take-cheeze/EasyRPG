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
#include "event_reader.h"
#include "reader.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read CommonEvent
////////////////////////////////////////////////////////////
template <>
void Struct<RPG::CommonEvent>::ReadID(RPG::CommonEvent& obj, Reader& stream) {
	IDReader<RPG::CommonEvent, WithID>::ReadID(obj, stream);
}

template <>
const Field<RPG::CommonEvent>* Struct<RPG::CommonEvent>::fields[] = {
	new TypedField<RPG::CommonEvent, std::string>						(&RPG::CommonEvent::name,			LDB_Reader::ChunkCommonEvent::name,					"name"			),
	new TypedField<RPG::CommonEvent, int>								(&RPG::CommonEvent::trigger,		LDB_Reader::ChunkCommonEvent::trigger,				"trigger"		),
	new TypedField<RPG::CommonEvent, bool>								(&RPG::CommonEvent::switch_flag,	LDB_Reader::ChunkCommonEvent::switch_flag,			"switch_flag"	),
	new TypedField<RPG::CommonEvent, int>								(&RPG::CommonEvent::switch_id,		LDB_Reader::ChunkCommonEvent::switch_id,			"switch_id"		),
	new TypedField<RPG::CommonEvent, int>								(NULL,								LDB_Reader::ChunkCommonEvent::event_commands_size,	""				),
	new TypedField<RPG::CommonEvent, std::vector<RPG::EventCommand> >	(&RPG::CommonEvent::event_commands,	LDB_Reader::ChunkCommonEvent::event_commands,		"event_commands"),
	NULL
};
