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
/// Read Saved Events
////////////////////////////////////////////////////////////
std::auto_ptr<RPG::SaveTarget> LSD_Reader::ReadSaveTarget(Reader& stream) {
	std::auto_ptr<RPG::SaveTarget> target(new RPG::SaveTarget);
	target->ID = stream.Read32(Reader::CompressedInteger);

	Reader::Chunk chunk_info;

	while (!stream.Eof()) {
		chunk_info.ID = stream.Read32(Reader::CompressedInteger);
		if (chunk_info.ID == ChunkSave::END) {
			break;
		} else {
			chunk_info.length = stream.Read32(Reader::CompressedInteger);
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkTarget::map_id:
			target->map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTarget::map_x:
			target->map_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTarget::map_y:
			target->map_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTarget::switch_on:
			target->switch_on = stream.ReadBool();
			break;
		case ChunkTarget::switch_id:
			target->switch_id = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return target;
}

