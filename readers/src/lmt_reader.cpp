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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "data.h"
#include "reader_util.h"

////////////////////////////////////////////////////////////
/// Load Map Tree
////////////////////////////////////////////////////////////
bool LMT_Reader::Load(const std::string& filename, RPG::TreeMap& lmt) {
	Reader reader(filename, ReaderUtil::GetEncoding());
	if (!reader.IsOk()) {
		Reader::SetError("Couldn't find %s map tree file.\n", filename.c_str());
		return false;
	}
	std::string header = reader.ReadString(reader.Read32(Reader::CompressedInteger));
	if (header != "LcfMapTree") {
		Reader::SetError("%s is not a valid RPG2000 map tree.\n", filename.c_str());
		return false;
	}
	ReadTreeMap(reader, lmt);
	return true;
}

////////////////////////////////////////////////////////////
/// Read Tree Map
////////////////////////////////////////////////////////////
void LMT_Reader::ReadTreeMap(Reader& stream, RPG::TreeMap& lmt) {
	// Array - RPG::MapInfo
	lmt.maps.resize(stream.Read32(Reader::CompressedInteger) + 1);
	for (unsigned int i = 1; i < lmt.maps.size(); i++) {
		lmt.maps[i] = ReadMapInfo(stream);
	}

	// Array - Integer
	for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
		lmt.tree_order.push_back(stream.Read32(Reader::CompressedInteger));
	}

	// Integer
	lmt.active_node = stream.Read32(Reader::CompressedInteger);

	// RPG::TreeMap
	Reader::Chunk chunk_info;
	while (!stream.Eof()) {
		chunk_info.ID = stream.Read32(Reader::CompressedInteger);
		if (chunk_info.ID == ChunkData::END) {
			break;
		} else {
			chunk_info.length = stream.Read32(Reader::CompressedInteger);
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkTreeMap::start_map_id:
			lmt.start_map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::start_x:
			lmt.start_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::start_y:
			lmt.start_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::boat_map_id:
			lmt.boat_map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::boat_x:
			lmt.boat_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::boat_y:
			lmt.boat_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::ship_map_id:
			lmt.ship_map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::ship_x:
			lmt.ship_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::ship_y:
			lmt.ship_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::airship_map_id:
			lmt.airship_map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::airship_x:
			lmt.airship_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::airship_y:
			lmt.airship_y = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}
}
