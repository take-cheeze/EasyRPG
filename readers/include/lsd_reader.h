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

#ifndef _LSD_READER_H_
#define _LSD_READER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <boost/ptr_container/ptr_vector.hpp>
#include <memory>
#include "reader.h"
#include "rpg_save.h"

////////////////////////////////////////////////////////////
/// LDB Reader namespace
////////////////////////////////////////////////////////////
namespace LSD_Reader {
	std::auto_ptr<RPG::SaveTitle> ReadSaveTitle(Reader& stream);
	std::auto_ptr<RPG::SaveSystem> ReadSaveSystem(Reader& stream);
	std::auto_ptr<RPG::SavePicture> ReadSavePicture(Reader& stream);
	std::auto_ptr<RPG::SavePartyLocation> ReadSavePartyLocation(Reader& stream);
	std::auto_ptr<RPG::SaveVehicleLocation> ReadSaveVehicleLocation(Reader& stream);
	std::auto_ptr<RPG::SaveActor> ReadSaveActor(Reader& stream);
	std::auto_ptr<RPG::SaveInventory> ReadSaveInventory(Reader& stream);
	std::auto_ptr<RPG::SaveMapInfo> ReadSaveMapInfo(Reader& stream);
	std::auto_ptr<RPG::SaveMapEvent> ReadSaveMapEvent(Reader& stream);
	std::auto_ptr<RPG::SaveEventData> ReadSaveEventData(Reader& stream);
	std::auto_ptr<RPG::SaveEventCommands> ReadSaveEventCommands(Reader& stream);
	std::auto_ptr<RPG::SaveScreen> ReadSaveScreen(Reader& stream);
	std::auto_ptr<RPG::SaveCommonEvent> ReadCommonEvent(Reader& stream);
	std::auto_ptr<RPG::SaveEvents> ReadSaveEvents(Reader& stream);
	std::auto_ptr<RPG::SaveEventCommands> ReadSaveEventCommands(Reader& stream);
	std::auto_ptr<RPG::SaveTarget> ReadSaveTarget(Reader& stream);

	std::auto_ptr<RPG::Save> Load(const std::string &filename);
	std::auto_ptr<RPG::Save> LoadChunks(Reader& stream);
}

#endif
