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
#include <wx/dcclient.h>

#include "lmtReader.h"
#include "ldbReader.h"

#include "DialogDb.h"

class ScrolledPalete : public wxScrolledWindow
{
	std::vector<wxBitmap> OnScreenPalete;
public:
    ScrolledPalete(wxWindow* parent, wxWindowID id) : wxScrolledWindow(parent, id)
    {
        /* init scrolled area size, scrolling speed, etc. */
        SetScrollbars(0,32, 0, OnScreenPalete.size() / 6, 0, 0);
    }
    ScrolledPalete()
    {
        OnScreenPalete.clear();
    }
	bool load_palete(wxArrayString Chipsets)
	{
		for (unsigned int chipsetid = 0; chipsetid < Chipsets.GetCount(); chipsetid++){
			//if (wxFile::Exists(Chipsets.Item(chipsetid))){
				wxBitmap Chipset = wxBitmap::wxBitmap(Chipsets.Item(chipsetid));
				wxImage Scaler = Chipset.ConvertToImage();
				Scaler.Rescale( Chipset.GetWidth() * 2, Chipset.GetHeight() * 2);
				Chipset = wxBitmap::wxBitmap(Scaler);
				OnScreenPalete.clear();
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(0, 0), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(0, 220), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(0, 448), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(96, 188), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(192, 0), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(192, 128), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(192, 256), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(192, 384), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(288, 0), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(288, 128), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(288, 256), wxSize(32, 32))));
				OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(288, 384), wxSize(32, 32))));
				for (int bloq = 0; bloq < 3; bloq++)
					for (int row = 0; row < 16; row++)
						for (int col = 0; col < 3; col++){
							int x = 384 + bloq * 96 + col * 32;
							int y = row * 32;
							OnScreenPalete.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(x, y), wxSize(32, 32))));
						}
				SetScrollbars(32,32, 6, OnScreenPalete.size() / 6, 0, 0);
			}
			//else{ SetScrollbars(32,32, 6, OnScreenPalete.size() / 6, 0, 0); return false;}
		return true;
	}
    void OnDraw(wxDC& dc)
    {
		if (!OnScreenPalete.empty())
		for (unsigned int id = 0; id < OnScreenPalete.size(); id++)
			dc.DrawBitmap(OnScreenPalete.at(id), (id % 6) * 32, (id / 6) * 32, false);
    }
};

class FrameEditor: public wxFrame
{
public:
    FrameEditor();
    lmt_data my_lmt;
    LDB_data ldbdata;
    wxString ProjectDirectory;
	std::vector<wxImage> MemoryPalete;
	std::vector<int> PaleteSelection;
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
	wxToolBar* pnEditorTilesetToolbar;
    ScrolledPalete* pnEditorTileset;
	wxPanel* pnPaleteConainer;
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
