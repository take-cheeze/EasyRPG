/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
//
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _MAIN_DATA_H_
#define _MAIN_DATA_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <boost/scoped_ptr.hpp>
#include <rpg2k/Project.hxx>
#include <rpg2k/Event.hxx>
#include "game_screen.hpp"

namespace RPG {
	typedef rpg2k::structure::Array1D Item;
	typedef rpg2k::structure::Array1D Skill;
	typedef rpg2k::structure::Array1D Condition;
	typedef rpg2k::structure::Array1D Actor;
	typedef rpg2k::structure::Array1D CommonEvent;

	using rpg2k::structure::Music;
	using rpg2k::structure::Sound;

	typedef rpg2k::structure::Array1D MoveRoute;

	typedef rpg2k::structure::Array1D EventPage;

	typedef rpg2k::structure::Array1D Event;
	typedef rpg2k::structure::Instruction EventCommand;
}

////////////////////////////////////////////////////////////
/// Main Data namespace
////////////////////////////////////////////////////////////
class Game_Player;
class Game_Screen;
class Game_Troop;

namespace Main_Data {
	// Dynamic Game Data
	extern boost::scoped_ptr<Game_Screen> game_screen;
	extern boost::scoped_ptr<Game_Player> game_player;
	extern boost::scoped_ptr<Game_Troop> game_troop;
	extern boost::scoped_ptr<Game_Player> game_player;

	extern boost::scoped_ptr<rpg2k::model::Project> project;

	inline RPG::Item const& item(rpg2k::size_t const index) {
		return project->getLDB().item()[index];
	}
	inline RPG::Skill const& skill(rpg2k::size_t const index) {
		return project->getLDB().skill()[index];
	}
	inline RPG::Actor const& actor(rpg2k::size_t const index) {
		return project->getLDB().character()[index];
	}
	inline RPG::Condition const& condition(rpg2k::size_t const index) {
		return project->getLDB().condition()[index];
	}
	inline RPG::CommonEvent const& commonEvent(rpg2k::size_t const index) {
		return project->getLDB().commonEvent()[index];
	}
	inline rpg2k::structure::Array1D const& system() {
		return project->getLDB().system();
	}

	void Cleanup();

	inline RPG::Sound const& systemSE(rpg2k::size_t const index) {
		return project->getLDB().system()[index].toSound();
	}
	inline RPG::Music const& systemBGM(rpg2k::size_t const index) {
		return project->getLDB().system()[index].toMusic();
	}
	inline RPG::Sound const& cursorSE() { return systemSE(41); }
	inline RPG::Sound const& decisionSE() { return systemSE(42); }
	inline RPG::Sound const& cancelSE() { return systemSE(43); }
	inline RPG::Sound const& buzzerSE() { return systemSE(44); }

	inline std::string vocabulary(rpg2k::size_t const index) {
		return project->getLDB().vocabulary(index).toSystem();
	}

	inline void setFlag(rpg2k::size_t const index, bool const val) {
		project->getLSD().setFlag(index, val);
	}
	inline void setVar(rpg2k::size_t const index, int32_t const val) {
		project->getLSD().setVar(index, val);
	}
}

#endif
