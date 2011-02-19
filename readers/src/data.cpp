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
#include "ldb_reader.h"
#include "lmt_reader.h"
#include "lmu_reader.h"
#include "lsd_reader.h"
#include "serialization_no_rtti.h"
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cassert>
#include <boost/archive/xml_oarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>

////////////////////////////////////////////////////////////
namespace Data {
	/// Database (ldb)
	RPG::Database database;
	// TreeMap (lmt)
	RPG::TreeMap treemap;
	/// Msp Unit (lmu)
	RPG::Map mapunit;
	/// Save Data (lsd)
	RPG::Save savedata;

	namespace {
		std::string baseDirectory_ = "./";
		std::string mapUnitPath_, saveDataPath_, dataPath_;

		std::string GenMapName(int const id, char const* const suffix) {
			std::ostringstream oss;
			oss << "Map" << std::setfill('0') << std::setw(4) << id << suffix;
			return oss.str();
		}
		std::string GenSaveName(int const id, char const* const suffix) {
			std::ostringstream oss;
			oss << "Save" << std::setfill('0') << std::setw(2) << id << suffix;
			return oss.str();
		}
	}
}

////////////////////////////////////////////////////////////
void Data::SetBaseDirectory(std::string const& dir) {
	if(*dir.rbegin() == '/') { baseDirectory_ = dir; }
	else { baseDirectory_.assign(dir).push_back('/'); }
}
////////////////////////////////////////////////////////////
void Data::Convert()
{
	{
		if(!LDB_Reader::Load(baseDirectory_ + DATABASE_NAME)) assert(false);
		if(!LMT_Reader::Load(baseDirectory_ + TREEMAP_NAME)) assert(false);

		std::ofstream ofs((baseDirectory_ + EASY_RPG_NAME).c_str());
		assert(ofs);
		boost::archive::xml_oarchive oa(ofs);
		oa & BOOST_SERIALIZATION_NVP(Data::database);
		oa & BOOST_SERIALIZATION_NVP(Data::treemap);
		dataPath_.assign(baseDirectory_).append(EASY_RPG_NAME);
	}

	for(int i = 1; i <= 15; i++) {
		if(!LSD_Reader::Load(baseDirectory_ + GenSaveName(i, ".lsd"), savedata)) continue;

		std::ofstream ofs((baseDirectory_ + GenSaveName(i, ".xml")).c_str());
		assert(ofs);
		boost::archive::xml_oarchive oa(ofs);
		oa & BOOST_SERIALIZATION_NVP(Data::savedata);
	}

	for(int i = 1; i <= 9999; i++) {
		if(!LMU_Reader::LoadMap(baseDirectory_ + GenMapName(i, ".lmu"), mapunit)) continue;

		std::ofstream ofs((baseDirectory_ + GenMapName(i, ".xml")).c_str());
		assert(ofs);
		boost::archive::xml_oarchive oa(ofs);
		oa & BOOST_SERIALIZATION_NVP(Data::mapunit);
	}
}

////////////////////////////////////////////////////////////
bool Data::Load(std::string const& filename) {
	std::ifstream ifs((baseDirectory_ + filename).c_str());
	if(!ifs) { Convert(); return false; }
	else {
		boost::archive::xml_iarchive ia(ifs);
		ia & BOOST_SERIALIZATION_NVP(Data::database);
		ia & BOOST_SERIALIZATION_NVP(Data::treemap);
		dataPath_.assign(baseDirectory_).append(filename);
		return true;
	}
}

////////////////////////////////////////////////////////////
void Data::Save() {
	assert(!dataPath_.empty());
	std::ofstream ofs(dataPath_.c_str());
	assert(ofs);
	boost::archive::xml_oarchive oa(ofs);
	oa & BOOST_SERIALIZATION_NVP(Data::database);
	oa & BOOST_SERIALIZATION_NVP(Data::treemap);
}

////////////////////////////////////////////////////////////
bool Data::LoadMapUnit(std::string const& filename)
{
	std::ifstream ifs((baseDirectory_ + filename).c_str());
	if(!ifs) { return false; }
	else {
		boost::archive::xml_iarchive ia(ifs);
		ia & BOOST_SERIALIZATION_NVP(Data::mapunit);
		mapUnitPath_.assign(baseDirectory_).append(filename);
		return true;
	}
}

////////////////////////////////////////////////////////////
bool Data::LoadMapUnit(int const id)
{
	return LoadMapUnit(GenMapName(id, ".xml"));
}

////////////////////////////////////////////////////////////
bool Data::LoadSaveData(std::string const& filename)
{
	std::ifstream ifs((baseDirectory_ + filename).c_str());
	if(!ifs) { return false; }
	else {
		boost::archive::xml_iarchive ia(ifs);
		ia & BOOST_SERIALIZATION_NVP(Data::savedata);
		saveDataPath_.assign(baseDirectory_).append(filename);
		return true;
	}
}

////////////////////////////////////////////////////////////
bool Data::LoadSaveData(int const id)
{
	return LoadSaveData(GenSaveName(id, ".xml"));
}

////////////////////////////////////////////////////////////
void Data::SaveSaveData()
{
	assert(!saveDataPath_.empty());
	std::ofstream ofs(saveDataPath_.c_str());
	assert(ofs);
	boost::archive::xml_oarchive oa(ofs);
	oa & BOOST_SERIALIZATION_NVP(Data::savedata);
}

////////////////////////////////////////////////////////////
void Data::SaveMapUnit()
{
	assert(!mapUnitPath_.empty());
	std::ofstream ofs(mapUnitPath_.c_str());
	assert(ofs);
	boost::archive::xml_oarchive oa(ofs);
	oa & BOOST_SERIALIZATION_NVP(Data::mapunit);
}
