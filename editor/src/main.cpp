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

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/splash.h>
#include "FrameEditor.h"
#include "splash.xpm"

class AppEditor: public wxApp {
private:
	void showSplash();
public:
	bool OnInit();
};

void AppEditor::showSplash()
{
	wxBitmap bitmap(splash_xpm, wxBITMAP_TYPE_XPM);
	wxSplashScreen* splash;
	splash = new wxSplashScreen(bitmap, wxSPLASH_CENTRE_ON_SCREEN|wxSPLASH_TIMEOUT, 2500, NULL, -1, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER|wxSTAY_ON_TOP);
	wxYield();
}

IMPLEMENT_APP(AppEditor)

bool AppEditor::OnInit()
{
	wxInitAllImageHandlers();
	showSplash();
	FrameEditor* frmEditor = new FrameEditor();
	SetTopWindow(frmEditor);
	frmEditor->Show();
	return true;
}
