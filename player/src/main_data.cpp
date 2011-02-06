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

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "main_data.hpp"
#include "game_actors.hpp"
#include "game_party.hpp"
#include "game_player.hpp"
#include "game_screen.hpp"
#include "game_troop.hpp"
#include "game_message.hpp"
#include "game_map.hpp"
#include "game_variables.hpp"
#include "game_switches.hpp"
#include "font.hpp"

////////////////////////////////////////////////////////////
/// Global Variables
////////////////////////////////////////////////////////////
Game_Variables_Class Game_Variables;
Game_Switches_Class Game_Switches;

namespace Main_Data {
	// Dynamic Game Data
	boost::scoped_ptr<Game_Screen> game_screen;
	boost::scoped_ptr<Game_Player> game_player;
	boost::scoped_ptr<Game_Troop> game_troop;
	boost::scoped_ptr<rpg2k::model::Project> project;
}

void Main_Data::Cleanup() {
	Game_Map::Quit();
	Game_Actors::Dispose();
	Font::Dispose();

	game_screen.reset();
	game_troop.reset();
	game_player.reset();

	Main_Data::project.reset();
}
