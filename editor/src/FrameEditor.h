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

#ifndef FRAMEEDITOR_H
#define FRAMEEDITOR_H

#include <wx/artprov.h>
#include <wx/imaglist.h>
#include <wx/splitter.h>
#include <wx/treectrl.h>

#include "lmtReader.h"
#include "ldbReader.h"

#include "DialogDb.h"

class FrameEditor: public wxFrame
{
public:
    FrameEditor();
    lmt_data my_lmt;
    LDB_data ldbdata;
    wxString ProjectDirectory;
private:

    DialogDb* dlgDb;

    wxMenu* MenuScale;
    wxMenu* MenuEdit;
    wxMenu* MenuGame;

    void set_properties();
    void do_layout();
    void fill_lmtTree();
    void open_click(wxCommandEvent &WXUNUSED(event));
    void exit_click(wxCommandEvent &WXUNUSED(event));
    void database_click(wxCommandEvent &WXUNUSED(event));
	void material_click(wxCommandEvent &WXUNUSED(event));
    void zoom11_click(wxCommandEvent &WXUNUSED(event));
    void zoom12_click(wxCommandEvent &WXUNUSED(event));
    void zoom14_click(wxCommandEvent &WXUNUSED(event));
    void zoom18_click(wxCommandEvent &WXUNUSED(event));
    void upperlayer_click(wxCommandEvent &WXUNUSED(event));
    void lowerlayer_click(wxCommandEvent &WXUNUSED(event));
    void eventlayer_click(wxCommandEvent &WXUNUSED(event));
    void fullscreen_click(wxCommandEvent& event);
    void showtitle_click(wxCommandEvent &WXUNUSED(event));

protected:
    wxMenuBar* frmEditorMenubar;
    wxStatusBar* frmEditorStatusbar;
    wxToolBar* frmEditorToolbar;
    wxScrolledWindow* pnEditorTileset;
    wxTreeCtrl* tcMapTree;
    wxPanel* pnEditorMapTree;
    wxSplitterWindow* swEditor;
    wxScrolledWindow* pnEditorMap;
};

enum
{
    ID_UPPER_LAYER = 1,
    ID_LOWER_LAYER,
    ID_EVENTS,
    ID_ZOOM_12,
    ID_ZOOM_14,
    ID_ZOOM_18,
    ID_DATABASE,
    ID_MATERIAL_MANAGER,
    ID_FULL_SCREEN,
    ID_FULL_SCREEN2,
    ID_SHOW_TITLE,
    ID_SHOW_TITLE2
};

#endif
