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
#include "bitmap.hpp"
#include "surface.hpp"
#include "cache.hpp"
#include "game_party.hpp"
#include "game_actor.hpp"
#include "window_shopparty.hpp"

////////////////////////////////////////////////////////////
Window_ShopParty::Window_ShopParty(int ix, int iy, int iwidth, int iheight) :
	Window_Base(ix, iy, iwidth, iheight) {

	SetContents(Surface::CreateSurface(width - 16, height - 16));
	contents->SetTransparentColor(windowskin->GetTransparentColor());

	cycle = 0;
	item_id = 0;

	const std::vector<Game_Actor*>& actors = Game_Party::GetActors();
	for (size_t i = 0; i < actors.size() && i < 4; i++) {
		Game_Actor *actor = actors[i];
		const std::string& sprite_name = actor->GetCharacterName();
		int sprite_id = actor->GetCharacterIndex();
		Bitmap *bm = Cache::Charset(sprite_name);
		int width = bm->GetWidth() / 4 / 3;
		int height = bm->GetHeight() / 2 / 4;
		for (int j = 0; j < 3; j++) {
			int sx = ((sprite_id % 4) * 3 + j) * width;
			int sy = ((sprite_id / 4) * 4 + 2) * height;
			Rect src(sx, sy, width, height);
			for (int k = 0; k < 2; k++) {
				std::auto_ptr<Surface> bm2 = Surface::CreateSurface(width, height, true);
				#ifndef USE_ALPHA
				bm2->SetTransparentColor(bm->GetTransparentColor());
				#endif
				bm2->Clear();
				bm2->Blit(0, 0, bm, src, 255);
				if (k == 0)
					bm2->ToneBlit(0, 0, bm2.get(), bm2->GetRect(), Tone(0, 0, 0, 255));
				bitmaps[i][j][k] = bm2.release();
			}
		}
	}

	Refresh();
}

////////////////////////////////////////////////////////////
Window_ShopParty::~Window_ShopParty() {
	for (size_t i = 0; i < Game_Party::GetActors().size() && i < 4; i++)
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 2; k++)
				delete bitmaps[i][j][k];
}

////////////////////////////////////////////////////////////
void Window_ShopParty::Refresh() {
	contents->Clear();

	Bitmap* system = Cache::System(Main_Data::system()[19].toString().toSystem());

	const std::vector<Game_Actor*>& actors = Game_Party::GetActors();
	for (size_t i = 0; i < actors.size() && i < 4; i++) {
		Game_Actor *actor = actors[i];
		int phase = (cycle / anim_rate) % 4;
		if (phase == 3) {
			phase = 1;
		}
		bool equippable = item_id == 0 || actor->IsEquippable(item_id);
		Bitmap *bm = bitmaps[i][phase][equippable ? 1 : 0];
		contents->Blit(i * 32, 0, bm, bm->GetRect(), 255);

		if (equippable) {
			//check if item is equipped by each member
			bool is_equipped = false;
			for (int j = 0; j < 5; ++j)
				is_equipped |= (actor->GetEquipment(j) == item_id);
			if (is_equipped) 
				contents->Blit(i * 32 + 20, 24, system, Rect(128 + 8 * phase, 24, 8, 8), 255);
			else {

				RPG::Item const& new_item = Main_Data::item(item_id);
				int item_type =  new_item[3].to<int>();
				RPG::Item const* current_item = NULL;

				switch (item_type) {
				
				//get the current equipped item
				case rpg2k::Item::WEAPON:
					if (actor->GetWeaponId() > 0)
						current_item = &Main_Data::item(actor->GetWeaponId());
					break;
				case rpg2k::Item::HELMET:
					if (actor->GetHelmetId() > 0)
						current_item = &Main_Data::item(actor->GetHelmetId());
					break;
				case rpg2k::Item::SHIELD:
					if (actor->GetShieldId() > 0)
						current_item = &Main_Data::item(actor->GetShieldId());
					break;
				case rpg2k::Item::ARMOR:
					if (actor->GetArmorId() > 0)
						current_item = &Main_Data::item(actor->GetArmorId());
					break;
				case rpg2k::Item::ACCESSORY:
					if (actor->GetAccessoryId() > 0)
						current_item = &Main_Data::item(actor->GetAccessoryId());
					break;
				}

				if (current_item != NULL) {
					int diff_atk = new_item[11].to<int>() - (*current_item)[11].to<int>();
					int diff_def = new_item[12].to<int>() - (*current_item)[12].to<int>();
					int diff_spi = new_item[13].to<int>() - (*current_item)[13].to<int>();
					int diff_agi = new_item[14].to<int>() - (*current_item)[14].to<int>();
					if (diff_atk > 0 || diff_def > 0 || diff_spi > 0 || diff_agi > 0)
						contents->Blit(i * 32 + 20, 24, system, Rect(128 + 8 * phase, 0, 8, 8), 255);
					else if (diff_atk < 0 || diff_def < 0 || diff_spi < 0 || diff_agi < 0)
						contents->Blit(i * 32 + 20, 24, system, Rect(128 + 8 * phase, 16, 8, 8), 255);
					else
						contents->Blit(i * 32 + 20, 24, system, Rect(128 + 8 * phase, 8, 8, 8), 255);
				}
			}
		}
	}
}

void Window_ShopParty::SetItemId(int nitem_id) {
	if (nitem_id != item_id) {
		item_id = nitem_id;
		Refresh();
	}
}

void Window_ShopParty::Update() {
	cycle++;
	if (cycle % anim_rate == 0)
		Refresh();
}
