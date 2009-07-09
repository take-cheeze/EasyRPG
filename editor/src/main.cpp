/* This file is part of EasyRPG editor.
Copyright (C) 2007-2009 EasyRPG Project <http://easyrpg.sourceforge.net/>.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.If not, see <http://www.gnu.org/licenses/>.*/

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/splash.h>
#include "FrameEditor.h"

class AppEditor: public wxApp {
private:
    void showSplash();
public:
    bool OnInit();
};

void AppEditor::showSplash()
{
    wxBitmap bitmap;
    if (bitmap.LoadFile("../share/splash/easyrpg-splash-256.xpm", wxBITMAP_TYPE_XPM))
    {
          wxSplashScreen* splash = new wxSplashScreen(bitmap,
              wxSPLASH_CENTRE_ON_SCREEN|wxSPLASH_TIMEOUT,
              2500, NULL, -1, wxDefaultPosition, wxDefaultSize,
              wxSIMPLE_BORDER|wxSTAY_ON_TOP);
      }
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
