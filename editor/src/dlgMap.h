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

#ifndef _DLGMAP_H_
#define _DLGMAP_H_

////////////////////////////////////////////////////////////
/// @file
/// Subclass of dlgMap_Base, which is generated by wxFormBuilder.
////////////////////////////////////////////////////////////

#include "gui_editor.h"

/// Implementing dlgMap_Base
class dlgMap : public dlgMap_Base {
public:
	/// Constructor
	dlgMap(wxWindow* parent);
protected:
	/// Accepts dialog on click
	void OK_click(wxCommandEvent& WXUNUSED(event));
	/// Cancels dialog on click
	void Cancel_click(wxCommandEvent& WXUNUSED(event));
	/// Applies dialog on click
	void Apply_click(wxCommandEvent& WXUNUSED(event));
};

#endif
