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

class FrameEditor: public wxFrame
{
public:
    FrameEditor();
private:
    void set_properties();
    void do_layout();
    void open_click(wxCommandEvent &WXUNUSED(event));
    void exit_click(wxCommandEvent &WXUNUSED(event));
    void database_click(wxCommandEvent &WXUNUSED(event));
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
    ID_UPPER_LAYER,
    ID_LOWER_LAYER,
    ID_EVENTS,
    ID_ZOOM_12,
    ID_ZOOM_14,
    ID_ZOOM_18,
    ID_DATABASE,
    ID_MATERIAL_MANAGER,
    ID_FULL_SCREEN,
    ID_SHOW_TITLE
};

#endif
