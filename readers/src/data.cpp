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
#include "data.h"
#include <fstream>
#include <cassert>
#include <boost/archive/xml_oarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>

////////////////////////////////////////////////////////////
namespace Data {
	/// Database (ldb)
	RPG::Database database;
	// TreeMap (lmt)
	RPG::TreeMap treemap;
}

////////////////////////////////////////////////////////////
void Data::Clear() {
	database.Clear();
	treemap.Clear();
}

void Data::Load(std::string const& filename) {
	std::ifstream ifs(filename.c_str());
	assert(ifs);
	boost::archive::xml_iarchive ia(ifs);
	ia & BOOST_SERIALIZATION_NVP(database);
	ia & BOOST_SERIALIZATION_NVP(treemap);
}
void Data::Save(std::string const& filename) {
	std::ofstream ofs(filename.c_str());
	assert(ofs);
	boost::archive::xml_oarchive oa(ofs);
	oa & BOOST_SERIALIZATION_NVP(database);
	oa & BOOST_SERIALIZATION_NVP(treemap);
}
