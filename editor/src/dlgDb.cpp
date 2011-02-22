/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Editor.
// 
// EasyRPG Editor is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// EasyRPG Editor is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with EasyRPG Editor. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#include "dlgDb.h"
#include "gui_database_actors.h"
#include "gui_database_skills.h"
#include "gui_database_items.h"
#include "gui_database_enemies.h"
#include "gui_database_troops.h"
#include "gui_database_attributes.h"
#include "gui_database_states.h"
#include "gui_database_animations.h"
#include "gui_database_terrains.h"
#include "gui_database_tilesets.h"
#include "gui_database_texts.h"
#include "gui_database_system.h"
#include "gui_database_common_events.h"
#include "pnActor.h"
#include "pnSkill.h"
#include "pnItem.h"
#include "pnEnemy.h"
#include "pnTroop.h"
#include "pnAttribute.h"
#include "pnState.h"
#include "pnAnimation.h"
#include "pnTerrain.h"
#include "pnTileset.h"
#include "pnText.h"
#include "pnSystem.h"
#include "pnCommonEvent.h"
#include "dlgMusic.h"

dlgDb::dlgDb(wxWindow* parent) : dlgDb_Base(parent) {
	pnActor *panelActor = new pnActor(nbDb);
	pnSkill *panelSkill = new pnSkill(nbDb);
	pnItem *panelItem = new pnItem(nbDb);
	pnEnemy *panelEnemy = new pnEnemy(nbDb);
	pnTroop *panelTroop = new pnTroop(nbDb);
	pnAttribute *panelAttribute = new pnAttribute(nbDb);
	pnState *panelState = new pnState(nbDb);
	pnAnimation *panelAnimation = new pnAnimation(nbDb);
	pnTerrain *panelTerrain = new pnTerrain(nbDb);
	pnTileset *panelTileset = new pnTileset(nbDb);
	pnText *panelText = new pnText(nbDb);
	pnSystem *panelSystem = new pnSystem(nbDb);
	pnCommonEvent *panelCommonEvent = new pnCommonEvent(nbDb);
	nbDb->AddPage(panelActor, _("Actors"));
	nbDb->AddPage(panelSkill, _("Skills"));
	nbDb->AddPage(panelItem, _("Items"));
	nbDb->AddPage(panelEnemy, _("Enemies"));
	nbDb->AddPage(panelTroop, _("Troops"));
	nbDb->AddPage(panelAttribute, _("Attributes"));
	nbDb->AddPage(panelState, _("States"));
	nbDb->AddPage(panelAnimation, _("Animations"));
	nbDb->AddPage(panelTerrain, _("Terrains"));
	nbDb->AddPage(panelTileset, _("Tilesets"));
	nbDb->AddPage(panelText, _("Texts"));
	nbDb->AddPage(panelSystem, _("System"));
	nbDb->AddPage(panelCommonEvent, _("Common events"));
	Fit();
}

void dlgDb::btnMusic_click(wxCommandEvent& WXUNUSED(event)) {
	dlgMusic *DialogMusic = new dlgMusic(NULL);
	DialogMusic->ShowModal();
	DialogMusic->Destroy();
}

void dlgDb::btnOK_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}

void dlgDb::btnCancel_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}
