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

#ifndef _SCENE_SHOP_H_
#define _SCENE_SHOP_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "scene.hpp"
#include "window_base.hpp"
#include "window_help.hpp"
#include "window_gold.hpp"
#include "window_party.hpp"
#include "window_shopbuy.hpp"
#include "window_shopnumber.hpp"
#include "window_shopstatus.hpp"
#include "window_shopsell.hpp"
#include "window_shop.hpp"

////////////////////////////////////////////////////////////
/// Scene_Item class
////////////////////////////////////////////////////////////
class Scene_Shop : public Scene {

public:
	////////////////////////////////////////////////////////
	/// Constructor.
	////////////////////////////////////////////////////////
	Scene_Shop();

	void Start();
	void Update();
	void Terminate();

	enum ShopMode {
		BuySellLeave,
		BuySellLeave2,
		Buy,
		BuyHowMany,
		Bought,
		Sell,
		SellHowMany,
		Sold,
		Leave
	};

	void SetMode(int nmode);

private:
	/// Displays available items
	Window_Help* help_window;
	Window_ShopBuy* buy_window;
	Window_Party* party_window;
	Window_ShopStatus* status_window;
	Window_Gold* gold_window;
	Window_ShopSell* sell_window;
	Window_ShopNumber* count_window;
	Window_Base* empty2_window;
	Window_Base* empty_window;
	Window_Shop* shop_window;
	int mode;
	int timer;
};

#endif
