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
#include <wx/dcmemory.h>
#include <wx/file.h>

//#include "../../player/src/rpg_treemap.h"
//#include "ldbReader.h"
//#include "map.h"

class ScrolledPalette : public wxScrolledWindow
{
public:
    wxBitmap OnScreenPalette;
    ScrolledPalette(wxWindow* parent, wxWindowID id);
    ScrolledPalette();
    bool load_palette(wxArrayString Chipsets);
    void OnDraw(wxDC& dc);
};

class ScrolledCanvas : public wxScrolledWindow
{
public:
	float Scale;
	void SetScale(float zoom);
	wxColour KeyColor;
	wxMask Mask;
    ScrolledCanvas(wxWindow* parent, wxWindowID id);
    ScrolledCanvas();
	//bool load_canvas(wxArrayString Chipsets);
	bool load_map(wxString FileName);
//	map_reader m_reader;
//	map_data m_data;
    void DrawLayer(wxDC& dc, int layer);
	void OnDraw(wxDC&dc);
	void DrawRealChipset(wxDC & dc);
	void OnEraseBackground(wxEraseEvent& event);
	bool MapLoaded;
	bool generate_chipset();
	wxBitmap bm_lower_layer;
	wxBitmap bm_upper_layer;
	wxBitmap real_chipset;
	wxBitmap base_chipset;
	wxBitmap draw_water(int Frame, int Border, int Water, int Combination);
	wxBitmap draw_deep_water(int Frame, int Depth, int DepthCombination);
	wxBitmap draw_animationtile(unsigned short TileID);
	wxBitmap draw_autotile(int Terrain, int Combination);
	wxBitmap RenderTile(unsigned short Tile, int Frame);
};

class FrameEditor: public wxFrame
{
public:
    FrameEditor();
//    RPG::TreeMap maptree;
//    LDB_data ldbdata;
    wxString ProjectDirectory;
//    std::vector<wxImage> MemoryPaltete;
//    std::vector<int> PaletteSelection;
private:
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
    wxToolBar* pnPaletteToolbar;
    wxSplitterWindow* swEditor;
    ScrolledPalette* pnPalette;
    wxPanel* pnMapTree;
    wxTreeCtrl* tcMapTree;
    ScrolledCanvas* pnCanvas;
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
