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
#include "pnActor.h"
#include "pnSkill.h"

dlgDb::dlgDb(wxWindow* parent) : dlgDb_Base(parent) {
	pnActor *panelActor = new pnActor(nbDb);
	pnSkill *panelSkill = new pnSkill(nbDb);
	nbDb->AddPage(panelActor, _("Actors"));
	nbDb->AddPage(panelSkill, _("Skills"));
	Fit();
}

void dlgDb::OK_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}

void dlgDb::Cancel_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}

void dlgDb::Apply_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}