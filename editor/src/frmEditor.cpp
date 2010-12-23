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

#include "frmEditor.h"
#include "dlgDb.h"
#include "dlgMaterial.h"
#include "dlgMap.h"
#include "dlgEvt.h"

frmEditor::frmEditor(wxWindow* parent) : frmEditor_Base(parent) {
}

void frmEditor::Exit_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}

void frmEditor::Database_click(wxCommandEvent& WXUNUSED(event)) {
	dlgDb *DialogDb = new dlgDb(NULL);
	DialogDb->ShowModal();
	DialogDb->Destroy();
}

void frmEditor::Material_click(wxCommandEvent& WXUNUSED(event)) {
	dlgMaterial *DialogMaterial = new dlgMaterial(NULL);
	DialogMaterial->ShowModal();
	DialogMaterial->Destroy();
}

void frmEditor::MapTree_menu_click(wxMouseEvent& WXUNUSED(event)) {
	dlgMap *DialogMap = new dlgMap(NULL);
	DialogMap->ShowModal();
	DialogMap->Destroy();
}

void frmEditor::EditorMap_menu_click(wxMouseEvent& WXUNUSED(event)) {
	dlgEvt *DialogEvt = new dlgEvt(NULL);
	DialogEvt->ShowModal();
	DialogEvt->Destroy();
}
