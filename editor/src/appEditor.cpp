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

#include <wx/splash.h>
#include "appEditor.h"
#include "frmEditor.h"
#include "splash.xpm"

IMPLEMENT_APP(appEditor)

appEditor::appEditor() {
}

appEditor::~appEditor() {
}

bool appEditor::OnInit()
{
	wxInitAllImageHandlers();
	frmEditor *FrameEditor = new frmEditor(NULL);
	FrameEditor->Show();
	wxBitmap bitmap(splash_xpm);
	new wxSplashScreen(bitmap, wxSPLASH_CENTRE_ON_SCREEN|wxSPLASH_TIMEOUT, 2500, FrameEditor, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER|wxSTAY_ON_TOP);
	wxYield();
	return true;
}
