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

#ifndef _EASYRPG_READER_DATA_H_
#define _EASYRPG_READER_DATA_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "ldb_reader.h"
#include "reader_options.h"
#include "rpg_treemap.h"

////////////////////////////////////////////////////////////
/// Data namespace
////////////////////////////////////////////////////////////
namespace Data {
	/// Database (ldb)
	extern RPG::Database database;
	/// TreeMap (lmt)
	extern RPG::TreeMap treemap;

	////////////////////////////////////////////////////////
	/// Clear all data.
	////////////////////////////////////////////////////////
	void Clear();

	void Load(std::string const& filename = EASY_RPG_NAME);
	void Save(std::string const& filename = EASY_RPG_NAME);
}

#endif
