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

#ifndef __game_screen__
#define __game_screen__

#include "game_picture.h"

class Game_Screen {

public:
	Game_Screen();
	~Game_Screen();

	Picture& GetPicture(int id);

	void TintScreen(int r, int g, int b, int s, int tenths);
	void FlashOnce(int r, int g, int b, int s, int tenths);
	void FlashBegin(int r, int g, int b, int s, int tenths);
	void FlashEnd();
	void ShakeOnce(int power, int speed, int tenths);
	void ShakeBegin(int power, int speed);
	void ShakeEnd();
	void Weather(int type, int strength);
	void Update();

private:
	std::vector<Picture> pictures;

	double tint_red;
	double tint_green;
	double tint_blue;
	double tint_saturation;

	double tint_finish_red;
	double tint_finish_green;
	double tint_finish_blue;
	double tint_finish_saturation;
	int tint_duration;

	double flash_red;
	double flash_green;
	double flash_blue;
	double flash_saturation;
	double flash_level;
	int flash_timer;
	int flash_period;

    int shake_power;
    int shake_speed;
    int shake_duration;
	int shake_direction;
    double shake_position;
    bool shake_continuous;

	int weather_type;
	int weather_strength;
};
#endif // __game_screen__
