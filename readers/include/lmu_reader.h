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

#ifndef _LMU_READER_H_
#define _LMU_READER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <memory>
#include "reader.h"
#include "rpg_map.h"

////////////////////////////////////////////////////////////
/// LMU Reader namespace
////////////////////////////////////////////////////////////
namespace LMU_Reader {
	std::auto_ptr<RPG::Map> LoadMap(const std::string &filename);
	std::auto_ptr<RPG::Map> ReadMapData(Reader& stream);
	RPG::Event ReadEvent(Reader& stream);
	RPG::EventPage ReadEventPage(Reader& stream);
	RPG::EventPageCondition ReadEventPageCondition(Reader& stream);
	RPG::MoveRoute ReadMoveRoute(Reader& stream);
	RPG::MoveCommand ReadMoveCommand(Reader& stream);
}

#endif
