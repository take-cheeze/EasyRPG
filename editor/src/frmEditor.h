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

#ifndef _FRMEDITOR_H_
#define _FRMEDITOR_H_

////////////////////////////////////////////////////////////
/// @file
/// Subclass of frmEditor_Base, which is generated by wxFormBuilder.
////////////////////////////////////////////////////////////

#include "gui_editor.h"
#include "dlgDb.h"

/// Implementing frmEditor_Base
class frmEditor : public frmEditor_Base {
public:
	/// Constructor
	frmEditor(wxWindow* parent);
	~frmEditor();
protected:
	/// Exits app on menu exit
	void Exit_click(wxCommandEvent& WXUNUSED(event));
	/// Show database window
	void Database_click(wxCommandEvent& WXUNUSED(event));
	/// Show material window
	void Material_click(wxCommandEvent& WXUNUSED(event));
	/// Secondary click on map tree
	void MapTree_menu_click(wxMouseEvent& WXUNUSED(event));
	/// Secondary click on editor map
	void EditorMap_menu_click(wxMouseEvent& WXUNUSED(event));
	dlgDb *DialogDb;
};

#endif
