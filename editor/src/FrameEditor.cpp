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
#include <iostream>
#include "FrameEditor.h"
#include "DialogMaterial.h"

FrameEditor::FrameEditor():
        wxFrame(NULL, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize)
{
    swEditor = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_BORDER|wxSP_LIVE_UPDATE);
    pnPalette = new ScrolledPalette(swEditor, wxID_ANY);
    pnMapTree = new wxPanel(swEditor, wxID_ANY);
    tcMapTree = new wxTreeCtrl(pnMapTree, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_HAS_BUTTONS|wxTR_NO_LINES|wxTR_DEFAULT_STYLE|wxSUNKEN_BORDER);
    pnCanvas = new ScrolledCanvas(this, wxID_ANY);
    
    frmEditorMenubar = new wxMenuBar();
    wxMenu* MenuProject = new wxMenu();
    MenuProject->Append(wxID_NEW, _("&New..."), _("Create a new project"), wxITEM_NORMAL);
    MenuProject->Append(wxID_OPEN, _("&Open..."), _("Open an existing project"), wxITEM_NORMAL);
    MenuProject->Append(wxID_CLOSE, _("&Close"), _("Close the current project"), wxITEM_NORMAL);
    MenuProject->AppendSeparator();
    MenuProject->Append(wxID_ANY, _("&Make game disk..."), _("Compress game data and create a distributable file"), wxITEM_NORMAL);
    MenuProject->AppendSeparator();
    MenuProject->Append(wxID_EXIT, _("&Exit"), _("Exit EasyRPG"), wxITEM_NORMAL);
    frmEditorMenubar->Append(MenuProject, _("&Project"));
    wxMenu* wxglade_tmp_menu_1 = new wxMenu();
    wxglade_tmp_menu_1->Append(wxID_SAVE, _("&Save\tCtrl+S"), _("Save all changes in the project maps"), wxITEM_NORMAL);
    wxglade_tmp_menu_1->Append(wxID_REVERT, _("&Revert\tCtrl+R"), _("Discard all changes and reload the saved project maps"), wxITEM_NORMAL);
    wxglade_tmp_menu_1->AppendSeparator();
    MenuEdit = new wxMenu();
    MenuEdit->Append(ID_LOWER_LAYER, _("&Lower layer\tF5"), _("Switch to the lower layer map editing mode"), wxITEM_RADIO);
    MenuEdit->Append(ID_UPPER_LAYER, _("&Upper layer\tF6"), _("Switch to the upper layer map editing mode"), wxITEM_RADIO);
    MenuEdit->Append(ID_EVENTS, _("&Events\tF7"), _("Switch to the event layer map editing mode"), wxITEM_RADIO);
    wxglade_tmp_menu_1->Append(wxID_ANY, _("&Edit"), MenuEdit, wxEmptyString);
    MenuScale = new wxMenu();
    MenuScale->Append(wxID_ZOOM_100, _("1:&1"), _("Display the map in 1:1 scale"), wxITEM_RADIO);
    MenuScale->Append(ID_ZOOM_12, _("1:&2"), _("Display the map in 1:2 scale"), wxITEM_RADIO);
    MenuScale->Append(ID_ZOOM_14, _("1:&4"), _("Display the map in 1:4 scale"), wxITEM_RADIO);
    MenuScale->Append(ID_ZOOM_18, _("1:&8"), _("Display the map in 1:8 scale"), wxITEM_RADIO);
    wxglade_tmp_menu_1->Append(wxID_ANY, _("&Scale"), MenuScale, wxEmptyString);
    frmEditorMenubar->Append(wxglade_tmp_menu_1, _("&Map"));
    wxMenu* MenuTools = new wxMenu();
    MenuTools->Append(ID_DATABASE, _("&Database\tF8"), _("Open the project database editor window"), wxITEM_NORMAL);
    MenuTools->Append(ID_MATERIAL_MANAGER, _("&Material manager"), _("Add or remove material from the project"), wxITEM_NORMAL);
    MenuTools->Append(wxID_ANY, _("Music &player"), _("Play background music while editing"), wxITEM_NORMAL);
    frmEditorMenubar->Append(MenuTools, _("&Tools"));
    MenuGame = new wxMenu();
    MenuGame->Append(wxID_ANY, _("&Play test\tF9"), _("Launch the game project for testing"), wxITEM_NORMAL);
    MenuGame->AppendSeparator();
    MenuGame->Append(ID_FULL_SCREEN, _("&Full screen"), _("Enable or disable full screen in play test"), wxITEM_CHECK);
    MenuGame->Append(ID_SHOW_TITLE, _("&Show title"), _("Enable or disable background and music in the title in play test"), wxITEM_CHECK);
    frmEditorMenubar->Append(MenuGame, _("&Game"));
    wxMenu* MenuHelp = new wxMenu();
    MenuHelp->Append(wxID_HELP, _("&Index"), _("Display the help index and contents of EasyRPG"), wxITEM_NORMAL);
    MenuHelp->AppendSeparator();
    MenuHelp->Append(wxID_ABOUT, _("&About"), _("About EasyRPG Editor"), wxITEM_NORMAL);
    frmEditorMenubar->Append(MenuHelp, _("&Help"));
    SetMenuBar(frmEditorMenubar);
    frmEditorStatusbar = CreateStatusBar(1, wxST_SIZEGRIP);
    frmEditorToolbar = new wxToolBar(this, -1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxTB_FLAT);
    SetToolBar(frmEditorToolbar);
    frmEditorToolbar->AddTool(wxID_NEW, _("New"), wxBitmap(wxT("../share/toolbar/new.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("New project"), _("Create a new project"));
    frmEditorToolbar->AddTool(wxID_OPEN, _("Open"), wxBitmap(wxT("../share/toolbar/open.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Open project"), _("Open an existing project"));
    frmEditorToolbar->AddTool(wxID_CLOSE, _("Close"), wxBitmap(wxT("../share/toolbar/close.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Close project"), _("Close the current project"));
    frmEditorToolbar->AddSeparator();
    frmEditorToolbar->AddTool(wxID_ANY, _("Make game disk"), wxBitmap(wxT("../share/toolbar/makegamedisk.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Make game disk "), _("Make a redistributable package from the current project"));
    frmEditorToolbar->AddSeparator();
    frmEditorToolbar->AddTool(wxID_SAVE, _("Save"), wxBitmap(wxT("../share/toolbar/save.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Save map changes"), _("Save all changes in the project maps"));
    frmEditorToolbar->AddTool(wxID_REVERT, _("Revert"), wxBitmap(wxT("../share/toolbar/revert.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Revert map changes"), _("Discard all changes and reload the saved project maps"));
    frmEditorToolbar->AddSeparator();
    frmEditorToolbar->AddTool(ID_LOWER_LAYER, _("Lower layer"), wxBitmap(wxT("../share/toolbar/lowerlayer.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_RADIO, _("Lower layer editing"), _("Switch to the lower layer map editing mode"));
    frmEditorToolbar->AddTool(ID_UPPER_LAYER, _("Upper layer"), wxBitmap(wxT("../share/toolbar/upperlayer.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_RADIO, _("Upper layer editing"), _("Switch to the upper layer map editing mode"));
    frmEditorToolbar->AddTool(ID_EVENTS, _("Events"), wxBitmap(wxT("../share/toolbar/eventlayer.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_RADIO, _("Event layer editing"), _("Switch to the event layer map editing mode"));
    frmEditorToolbar->AddSeparator();
    frmEditorToolbar->AddTool(wxID_ZOOM_100, _("1:1"), wxBitmap(wxT("../share/toolbar/11scale.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_RADIO, _("1:1 scale"), _("Display the map in 1:1 scale"));
    frmEditorToolbar->AddTool(ID_ZOOM_12, _("1:2"), wxBitmap(wxT("../share/toolbar/12scale.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_RADIO, _("1:2 scale"), _("Display the map in 1:2 scale"));
    frmEditorToolbar->AddTool(ID_ZOOM_14, _("1:4"), wxBitmap(wxT("../share/toolbar/14scale.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_RADIO, _("1:4 scale"), _("Display the map in 1:4 scale"));
    frmEditorToolbar->AddTool(ID_ZOOM_18, _("1:8"), wxBitmap(wxT("../share/toolbar/18scale.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_RADIO, _("1:8 scale"), _("Display the map in 1:8 scale"));
    frmEditorToolbar->AddSeparator();
    frmEditorToolbar->AddTool(ID_DATABASE, _("Database"), wxBitmap(wxT("../share/toolbar/database.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Database editor"), _("Open the project database editor window"));
    frmEditorToolbar->AddTool(ID_MATERIAL_MANAGER, _("Material"), wxBitmap(wxT("../share/toolbar/material.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Material manager"), _("Add or remove material from the project"));
    frmEditorToolbar->AddTool(wxID_ANY, _("Music"), wxBitmap(wxT("../share/toolbar/music.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Music player"), _("Play background music while editing"));
    frmEditorToolbar->AddSeparator();
    frmEditorToolbar->AddTool(wxID_ANY, _("Play test"), wxBitmap(wxT("../share/toolbar/playtest.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Play test"), _("Launch the game project for testing"));
    frmEditorToolbar->AddSeparator();
    frmEditorToolbar->AddTool(ID_FULL_SCREEN2, _("Full screen"), wxBitmap(wxT("../share/toolbar/fullscreen.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_CHECK, _("Full screen"), _("Enable or disable full screen in play test"));
    frmEditorToolbar->AddTool(ID_SHOW_TITLE2, _("Title"), wxBitmap(wxT("../share/toolbar/title.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_CHECK, _("Show title"), _("Enable or disable background and music in the title in play test"));
    frmEditorToolbar->AddSeparator();
    frmEditorToolbar->AddTool(wxID_HELP, _("Help"), wxBitmap(wxT("../share/toolbar/help.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Help contents"), _("Display the help index and contents of EasyRPG"));
    frmEditorToolbar->Realize();
    pnPaletteToolbar = new wxToolBar(this, -1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxTB_FLAT);
    pnPaletteToolbar->AddTool(wxID_UNDO, _("Undo"), wxBitmap(wxT("../share/toolbar/undo.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Undo last action"), _("Revert last drawing in the actual map"));
    pnPaletteToolbar->AddSeparator();
    pnPaletteToolbar->AddTool(-1, _("Select"), wxBitmap(wxT("../share/toolbar/select.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Selection tool"), _("Select a map region by a rectangle selector"));
    pnPaletteToolbar->AddTool(-1, _("Zoom"), wxBitmap(wxT("../share/toolbar/zoom.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Zoom tool"), _("Zoom in or out by left or right mouse click"));
    pnPaletteToolbar->AddTool(-1, _("Brush"), wxBitmap(wxT("../share/toolbar/pen.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Pen draw tool"), _("Draw on the map freely by hand"));
    pnPaletteToolbar->AddTool(-1, _("Rectangle"), wxBitmap(wxT("../share/toolbar/rectangle.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Rectangle draw tool"), _("Draw a rectangle on the map"));
    pnPaletteToolbar->AddTool(-1, _("Circle"), wxBitmap(wxT("../share/toolbar/circle.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Circle draw tool"), _("Draw a circle on the map"));
    pnPaletteToolbar->AddTool(-1, _("Fill"), wxBitmap(wxT("../share/toolbar/fill.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Flood fill draw tool"), _("Draw tiles with same tile type on the map"));
    pnPaletteToolbar->Realize();

    set_properties();
    do_layout();

        /* TESTING */
            wxArrayString chips;
            chips.Add(wxT("../../player/bin/testgame/ChipSet/Basis.png"));
            if (!pnPalette->load_palette(chips))
            {
                wxMessageDialog* ErrMsg = new wxMessageDialog(this, _("Error: One or more Chipset Files are Lost"), _("Error"), wxOK);
                ErrMsg->ShowModal();
                ErrMsg->Destroy();
            }
 /*           if (!pnCanvas->load_canvas(chips))
            {
                wxMessageDialog* ErrMsg = new wxMessageDialog(this, _("Error: One or more Chipset Files are Lost"), _("Error"), wxOK);
                ErrMsg->ShowModal();
                ErrMsg->Destroy();
            }
*/
	pnCanvas->load_map(wxT("../../player/bin/testgame/Map0001.lmu"));
	pnCanvas->Refresh();
        /* END TEST */
        
    Connect(wxID_OPEN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::open_click));
    Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::exit_click));

    /* Connect toolbar buttons */
    Connect(ID_DATABASE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::database_click));
    Connect(ID_MATERIAL_MANAGER, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::material_click));
    Connect(wxID_ZOOM_100, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::zoom11_click));
    Connect(ID_ZOOM_12, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::zoom12_click));
    Connect(ID_ZOOM_14, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::zoom14_click));
    Connect(ID_ZOOM_18, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::zoom18_click));

    Connect(ID_UPPER_LAYER, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::upperlayer_click));
    Connect(ID_LOWER_LAYER, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::lowerlayer_click));
    Connect(ID_EVENTS, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::eventlayer_click));

    Connect(ID_FULL_SCREEN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::fullscreen_click));
    Connect(ID_FULL_SCREEN2, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::fullscreen_click));

    Connect(ID_SHOW_TITLE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::showtitle_click));
    Connect(ID_SHOW_TITLE2, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::showtitle_click));

    dlgDb = new DialogDb(this, wxID_ANY, wxEmptyString);
    dlgDb->CentreOnParent();
}

void FrameEditor::set_properties()
{
    ProjectDirectory = wxEmptyString;
    SetTitle(_("EasyRPG"));

#ifdef __WXMSW__
    SetIcon(wxICON(aaaa));
#else
    wxIcon _icon;
    _icon.CopyFromBitmap(wxBitmap(wxT("../share/easyrpg.xpm"), wxBITMAP_TYPE_XPM));
    SetIcon(_icon);
#endif    

    int frmEditorStatusbar_widths[] = { -1 };
    frmEditorStatusbar->SetStatusWidths(1, frmEditorStatusbar_widths);
    const wxString frmEditorStatusbar_fields[] = {
        wxEmptyString
    };
    for (int i = 0; i < frmEditorStatusbar->GetFieldsCount(); ++i) {
        frmEditorStatusbar->SetStatusText(frmEditorStatusbar_fields[i], i);
    }
    pnPalette->SetMinSize(wxSize(212, 96));
    pnMapTree->SetMinSize(wxSize(212, 96));
    //pnCanvas->SetMinSize(wxSize(212,96));
    //pnCanvas->SetScrollRate(32, 32);
    SetMinSize(wxSize(700, 400));
    //Using native stock icons for treectrl for better looking
    //wxArtProvider does not load native Win32 icons, so we will get from our own technique
#ifdef __WXMSW__
    //Win32 TreeCtrl works only with 16x16 images
    wxImageList* ilMapTree = new wxImageList(16, 16);
    // The number next filename and semicolon is the resource index number
    // The returned bitmap is an icon, not resource icon due previous resource index selection
    // 16x16 is desired size, gets the 16x16 icon version instead of 32x32
    ilMapTree->Add(wxIcon(_T("shell32.dll;3"), wxBITMAP_TYPE_ICO, 16, 16)); // 3 is closed folder
    ilMapTree->Add(wxIcon(_T("shell32.dll;4"), wxBITMAP_TYPE_ICO, 16, 16)); // 4 is opened folder
    ilMapTree->Add(wxIcon(_T("shell32.dll;0"), wxBITMAP_TYPE_ICO, 16, 16)); // 0 is normal file
#else
    wxImageList* ilMapTree = new wxImageList(16, 16);
    ilMapTree->Add(wxArtProvider::GetBitmap(wxART_FOLDER, wxART_OTHER, wxSize(16, 16)));
    ilMapTree->Add(wxArtProvider::GetBitmap(wxART_FILE_OPEN, wxART_OTHER, wxSize(16, 16)));
    ilMapTree->Add(wxArtProvider::GetBitmap(wxART_NORMAL_FILE, wxART_OTHER, wxSize(16, 16)));
#endif
    tcMapTree->AssignImageList(ilMapTree);
}

void FrameEditor::do_layout()
{
    wxBoxSizer* szEditor = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szEditorLeft = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szEditorRight = new wxBoxSizer(wxVERTICAL);
    
    wxBoxSizer* szMapTree = new wxBoxSizer(wxHORIZONTAL);
    szMapTree->Add(tcMapTree, 1, wxEXPAND, 0);
    pnMapTree->SetSizer(szMapTree);
    
    swEditor->SetMinimumPaneSize(96);
    swEditor->SplitHorizontally(pnPalette, pnMapTree);
    
    szEditorLeft->Add(pnPaletteToolbar, 0, wxEXPAND, 0);
    szEditorLeft->Add(swEditor, 1, wxEXPAND, 0);
    szEditorRight->Add(pnCanvas, 1, wxEXPAND, 0);
    
    szEditor->Add(szEditorLeft, 0, wxEXPAND, 0);
    szEditor->Add(szEditorRight, 1, wxEXPAND, 0);
    SetSizer(szEditor);
    szEditor->Fit(this);
    Layout();
    
    wxTreeItemId tiMapTreeRoot = tcMapTree->AddRoot(_T("Root"), 1, 0);
    tcMapTree->AppendItem(tiMapTreeRoot, _T("Node 1"), 2);
    tcMapTree->AppendItem(tiMapTreeRoot, _T("Node 2"), 2);
    tcMapTree->AppendItem(tiMapTreeRoot, _T("Node 3"), 2);
    tcMapTree->ExpandAll();
}

void FrameEditor::fill_lmtTree()
{
    tcMapTree->DeleteAllItems();
    int current_node;
    wxTreeItemId root = tcMapTree->AddRoot(my_lmt.tree_list[0].name, 1, 0);
    for (current_node = 1; current_node < my_lmt.total_nodes; current_node++)
    {
        tcMapTree->AppendItem(root, my_lmt.tree_list[current_node].name, 2);
    }
    tcMapTree->ExpandAll();
}

void FrameEditor::open_click(wxCommandEvent &WXUNUSED(event))
{
    wxFileDialog *dlgOpen = new wxFileDialog(this);
    dlgOpen->SetMessage(_("Select LcfMapTree file"));
#ifdef __WXGTK__
    // GTK+ is file name case sensitive
    dlgOpen->SetWildcard(_("LMT files (*.lmt)|*.[lL][mM][tT]"));
#else
    dlgOpen->SetWildcard(_("LMT files (*.lmt)|*.lmt"));
#endif
    if (dlgOpen->ShowModal() == wxID_OK)
    {
        lmt_reader lmt_read;
        std::string fileName = std::string(dlgOpen->GetPath().mb_str());
        lmt_read.load(fileName, &my_lmt);
        lmt_read.print(&my_lmt);
        fileName.replace(fileName.length() - 3, fileName.length(),"ldb");
        //load ldb
        LDB_reader my_ldb;
        my_ldb.Load(fileName, &ldbdata);
        ProjectDirectory = dlgOpen->GetDirectory();
        fill_lmtTree();
    }
    dlgOpen->Destroy();
}

void FrameEditor::exit_click(wxCommandEvent &WXUNUSED(event))
{
    dlgDb->Destroy();
    Close();
}

void FrameEditor::zoom11_click(wxCommandEvent &WXUNUSED(event)) 
{
    MenuScale->Check(wxID_ZOOM_100, true);
    frmEditorToolbar->ToggleTool(wxID_ZOOM_100, true);
	pnCanvas->SetScale(2.0);
	pnCanvas->Refresh();
}

void FrameEditor::zoom12_click(wxCommandEvent &WXUNUSED(event)) 
{
    MenuScale->Check(ID_ZOOM_12, true);
    frmEditorToolbar->ToggleTool(ID_ZOOM_12, true);
	pnCanvas->SetScale(1.0);
	pnCanvas->Refresh();
}

void FrameEditor::zoom14_click(wxCommandEvent &WXUNUSED(event)) 
{
    MenuScale->Check(ID_ZOOM_14, true);
    frmEditorToolbar->ToggleTool(ID_ZOOM_14, true);
	pnCanvas->SetScale(0.5);
	pnCanvas->Refresh();
}

void FrameEditor::zoom18_click(wxCommandEvent &WXUNUSED(event)) 
{
    MenuScale->Check(ID_ZOOM_18, true);
    frmEditorToolbar->ToggleTool(ID_ZOOM_18, true);
	pnCanvas->SetScale(0.25);
	pnCanvas->Refresh();
}

void FrameEditor::database_click(wxCommandEvent &WXUNUSED(event))
{
    if (ProjectDirectory == wxEmptyString) return;
    dlgDb->fill_data(ProjectDirectory);
    dlgDb->SetFocus();
    dlgDb->ShowModal();
}

void FrameEditor::upperlayer_click(wxCommandEvent &WXUNUSED(event)) 
{
    MenuEdit->Check(ID_UPPER_LAYER, true);
    frmEditorToolbar->ToggleTool(ID_UPPER_LAYER, true);
}

void FrameEditor::lowerlayer_click(wxCommandEvent &WXUNUSED(event)) 
{

    MenuEdit->Check(ID_LOWER_LAYER, true);
    frmEditorToolbar->ToggleTool(ID_LOWER_LAYER, true);
}

void FrameEditor::eventlayer_click(wxCommandEvent &WXUNUSED(event)) 
{
    MenuEdit->Check(ID_EVENTS, true);
    frmEditorToolbar->ToggleTool(ID_EVENTS, true);
}

void FrameEditor::fullscreen_click(wxCommandEvent& event)
{
    bool b = MenuGame->IsChecked(ID_FULL_SCREEN); 
    if (event.GetId() == ID_FULL_SCREEN) 
    {
        frmEditorToolbar->ToggleTool(ID_FULL_SCREEN2, b);
    }
    else
    {
        MenuGame->Check(ID_FULL_SCREEN, !b);
    }    
}

void FrameEditor::showtitle_click(wxCommandEvent& event)
{
    bool b = MenuGame->IsChecked(ID_SHOW_TITLE); 
    if (event.GetId() == ID_SHOW_TITLE) 
    {
        frmEditorToolbar->ToggleTool(ID_SHOW_TITLE2, b);
    }
    else
    {
        MenuGame->Check(ID_SHOW_TITLE, !b);
    }    
}

void FrameEditor::material_click(wxCommandEvent &WXUNUSED(event))
{
    DialogMaterial *dlgMaterial = new DialogMaterial(this,  wxID_ANY, wxEmptyString);
    dlgMaterial->SetFocus();
    dlgMaterial->ShowModal();
    dlgMaterial->Destroy();
}

ScrolledPalette::ScrolledPalette(wxWindow* parent, wxWindowID id) : wxScrolledWindow(parent, id)
{
    /* init scrolled area size, scrolling speed, etc. */
    SetScrollbars(0, 32, 0, 51, 0, 0);
}
ScrolledPalette::ScrolledPalette()
{
    OnScreenPalette = wxNullBitmap;
}

bool ScrolledPalette::load_palette(wxArrayString Chipsets)
{
	//Load Image From File
	wxBitmap Chipset = wxNullBitmap;
	Chipset = wxBitmap::wxBitmap(Chipsets.Item(0), wxBITMAP_TYPE_ANY);
	//Scale to x2
	wxImage Scaler = Chipset.ConvertToImage();
	Scaler.Rescale( Chipset.GetWidth() * 2, Chipset.GetHeight() * 2);
	Chipset = wxNullBitmap;
	Chipset = wxBitmap::wxBitmap(Scaler);
	//Create a Bitmap to Save the Palete
	OnScreenPalette = wxBitmap::wxBitmap(192, 2560);
	//Link the Bitmap to a DC
	wxMemoryDC memDC;
	memDC.SelectObject(OnScreenPalette);
	//Start Drawing
	//First tile row
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  0,   0), wxSize(32, 32))), 0, 0, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  96,   0), wxSize(32, 32))), 32, 0, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  0,   192), wxSize(32, 32))), 64, 0, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  96,   128), wxSize(32, 32))), 96, 0, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  128,   128), wxSize(32, 32))), 128, 0, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  160,   128), wxSize(32, 32))), 160, 0, false);
	//Second tile row
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  0,   256), wxSize(32, 32))), 0, 32, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  96,   256), wxSize(32, 32))), 32, 32, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  0,   384), wxSize(32, 32))), 64, 32, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  96,   384), wxSize(32, 32))), 96, 32, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  192,   0), wxSize(32, 32))), 128, 32, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint(  288,   0), wxSize(32, 32))), 160, 32, false);
	//Third tile row
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint( 192, 128), wxSize(32, 32))), 0, 64, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint( 288, 128), wxSize(32, 32))), 32, 64, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint( 192, 256), wxSize(32, 32))), 64, 64, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint( 288, 256), wxSize(32, 32))), 96, 64, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint( 192, 384), wxSize(32, 32))), 128, 64, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint( 288, 384), wxSize(32, 32))), 160, 64, false);
	//3 blocks of 6 subcols each, 16 rows
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint( 384, 0), wxSize(192, 512))), 0, 96, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint( 576, 0), wxSize(192, 512))), 0, 608, false);
	memDC.DrawBitmap(Chipset.GetSubBitmap(wxRect(wxPoint( 768, 0), wxSize(192, 512))), 0, 1120, false);
	//Release Bitmap
	memDC.SelectObject(wxNullBitmap);
    return true;
}

void ScrolledPalette::OnDraw(wxDC& dc)
{
	dc.DrawBitmap(OnScreenPalette, 0, 0, false);
}

ScrolledCanvas::ScrolledCanvas(wxWindow* parent, wxWindowID id) : wxScrolledWindow(parent, id, wxDefaultPosition, wxDefaultSize, wxFULL_REPAINT_ON_RESIZE | wxHSCROLL | wxVSCROLL)
{
    /* init scrolled area size, scrolling speed, etc. */
    SetScrollbars(0, 32, 0, 0, 0, 0);
}
ScrolledCanvas::ScrolledCanvas()
{
	MapLoaded = false;
	SetScale(2);
	m_data.MapHeight = 0;
	m_data.MapWidth = 0;
	m_data.clear_events();
}
/* DEPRECATED
bool ScrolledCanvas::load_canvas(wxArrayString Chipsets)
{

	if (wxFile::Exists(Chipsets.Item(0))){
	wxBitmap Chipset = wxBitmap::wxBitmap(Chipsets.Item(0), wxBITMAP_TYPE_ANY);
	SetScrollbars(32, 32, 100, 100, 0, 0);
	Scale = 2;
    return true;}
	
    else{ SetScrollbars(32,32, 6, 6, 0, 0); return false;}

}*/

// Empty implementation, to prevent flicker
void ScrolledCanvas::OnEraseBackground(wxEraseEvent& event)
{
}

void ScrolledCanvas::DrawLayer(wxDC& dc, int layer)
{
	//Initialize variables;
	
	wxBitmap TileToDraw = wxBitmap(16 , 16);
	unsigned short* TilePointer;
	int xEnd, yEnd;

	xEnd = m_data.MapWidth;  //Draw the hole Layer
    yEnd = m_data.MapHeight; //Draw the hole Layer
	
	if (!layer) {//Case Lower Layer
		TilePointer = &m_data.LowerLayer[0]; //Select first tile
		//StepPerY = m_data.MapWidth - (xEnd - xStart);
		
		for (int y = 0; y < yEnd; y++)
			for (int x = 0; x < xEnd ; x++, TilePointer++){
				TileToDraw = RenderTile(*TilePointer, 0);
				if (!TileToDraw.IsOk()) continue;
				dc.DrawBitmap(TileToDraw, x * 16, y * 16 , false); }}
	else {       //Case Upper Layer
		//Draw UpperLayer
		TilePointer = &m_data.UpperLayer[0];
		
		for (int y = 0; y < yEnd; y++)
			for (int x = 0; x < xEnd ; x++, TilePointer++){
				TileToDraw = RenderTile(*TilePointer, 0);
				if (!TileToDraw.IsOk()) continue;
				dc.DrawBitmap(TileToDraw, x * 16 , y * 16 , false); }
				
				}
				
			
		/*this line works to show the pre_chipset*/
	//dc.DrawBitmap(real_chipset, 0, 0);   
}

void ScrolledCanvas::SetScale(float zoom){
	Scale = zoom;
	zoom *= 16;
	if (MapLoaded == false) return;
	this->SetScrollbars(zoom, zoom, this->m_data.MapWidth, this->m_data.MapHeight, 0, 0);
	
	
	// Prepare for drawing
	wxMemoryDC dc;
		/* Renerate lower & upper layers */
		//Draw Layers on cache bitmaps */
		bm_lower_layer = wxBitmap(m_data.MapWidth * 16, m_data.MapHeight * 16);
		bm_upper_layer = wxBitmap(m_data.MapWidth * 16, m_data.MapHeight * 16);
		
		// Prepare for drawing
		dc.SelectObject(bm_lower_layer);  //First draw lower layer
		dc.DrawRectangle(0, 0, m_data.MapWidth * 16, m_data.MapHeight * 16);  //Clear the bitmap before drawing
		
		DrawLayer(dc, 0); //Draw Lower layer
		
		dc.SelectObject(bm_upper_layer);  //Then draw upper layer
		dc.DrawRectangle(0, 0, m_data.MapWidth * 16, m_data.MapHeight * 16);  //Clear the bitmap before drawing
		
		DrawLayer(dc, 1); //Draw Lower layer
		
		/*Now Make Zoom*/
		dc.SelectObject(wxNullBitmap);
		
		wxImage img;
		//Lower Layer
		img = bm_lower_layer.ConvertToImage();
		img.Rescale(m_data.MapWidth * 16 * Scale, m_data.MapHeight * 16 * Scale);
		bm_lower_layer = wxBitmap(img);
		//UpperLayer
		img = bm_upper_layer.ConvertToImage();
		img.Rescale(m_data.MapWidth * 16 * Scale, m_data.MapHeight * 16 * Scale);
		bm_upper_layer = wxBitmap(img);
		Mask.Create(bm_upper_layer, KeyColor);
		bm_upper_layer.SetMask(&Mask);
		
		
}

bool ScrolledCanvas::load_map(wxString FileName)
{
	if (wxFile::Exists(FileName)){
		std::string s = std::string(FileName.mb_str());
		m_reader.Load(s, &m_data);
		//Change Canvas Dimentions
		this->SetScrollbars(16 * Scale, 16 * Scale, this->m_data.MapWidth, this->m_data.MapHeight, 0, 0);
		// Load Chipset File
		base_chipset.LoadFile( wxT("../../player/bin/testgame/ChipSet/Basis.png"), wxBITMAP_TYPE_PNG);
		
		// Create Chipset data base
		real_chipset = wxBitmap(32*16, 45*16);
		
		// Prepare for drawing
		wxMemoryDC dc;
		dc.SelectObject(real_chipset);
		
		/* Generate real_chipset */
		DrawRealChipset(dc);
		dc.SelectObject(wxNullBitmap);
		/* Now generate lower & upper layers */
		//Draw Layers on cache bitmaps */

		MapLoaded = true;
		/*Now Generate Scaled Layers*/
		SetScale(2);

        return true;}
		
	else return false;
}

void ScrolledCanvas::DrawRealChipset(wxDC & dc)
{
		//Find Key Color
		wxImage img;
		img = base_chipset.ConvertToImage();
		unsigned char r = img.GetRed(368,112), g = img.GetGreen(368,112), b = img.GetBlue(368,112);
		KeyColor = wxColour(r,g,b);
		
		//Clear Surface
		dc.SetPen(wxPen(KeyColor));
		dc.SetBrush(wxBrush(KeyColor));
		dc.DrawRectangle(0,0,32*16,45*16);
		
		// Start Tile Generation
		int CurrentTile = 0;
		
		// Generate water A
        for (int j=0; j<3; j++)
            for (int i=0; i<47; i++, CurrentTile++)
				dc.DrawBitmap(draw_water(j, 0, 0, i), (CurrentTile%32)*16, (CurrentTile/32)*16, false);
				
		// Generate water B
        for (int j=0; j<3; j++)
            for (int i=0; i<47; i++, CurrentTile++)
				dc.DrawBitmap(draw_water(j, 1, 0, i), (CurrentTile%32)*16, (CurrentTile/32)*16, false);
				
		// Generate water C
        for (int j=0; j<3; j++)
            for (int i=0; i<47; i++, CurrentTile++)
				dc.DrawBitmap(draw_water(j, 0, 3, i), (CurrentTile%32)*16, (CurrentTile/32)*16, false);
				
		// Generate water depth tiles
        for (int i=0; i<48; i++, CurrentTile++)
            dc.DrawBitmap(draw_deep_water(i/16, 2, i%16), (CurrentTile%32)*16, (CurrentTile/32)*16, false);
			
		for (int i=0; i<48; i++, CurrentTile++)
			dc.DrawBitmap(draw_deep_water(i/16, 1, i%16), (CurrentTile%32)*16, (CurrentTile/32)*16, false);
			
        // Generate animated tiles
        for (int j=0; j<3; j++)
            for (int i=0; i<4; i++, CurrentTile++)
				dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(48+j*16, 64+i*16, 16, 16)), (CurrentTile%32)*16, (CurrentTile/32)*16, false);
		
        // Generate terrain tiles
        for (int j=0; j<12; j++)
            for (int i=0; i<50; i++, CurrentTile++)
                dc.DrawBitmap(draw_autotile(j, i), (CurrentTile%32)*16, (CurrentTile/32)*16);
				
        // Generate common tiles
        for (int i=0; i<288; i++, CurrentTile++)
				dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(192+((i%6)*16)+(i/96)*96, ((i/6)%16)*16, 16, 16)), (CurrentTile%32)*16, (CurrentTile/32)*16, false);
		
        // Done
}

wxBitmap ScrolledCanvas::draw_water(int Frame, int Border, int Water, int Combination)
{
	//Create returned bitmap
	wxBitmap pretile = wxBitmap(16, 16);
	//Prepare bitmap to be drawn on
	wxMemoryDC dc;
	dc.SelectObject(pretile);
	dc.SetPen(wxPen(KeyColor));
	dc.SetBrush(wxBrush(KeyColor));
	dc.DrawRectangle(0,0,16,16);
	
	/* INITIALIZE DRAWING */
	
	int SFrame = Frame*16, SBorder = Border*48;
	
	Combination &= 0x3F;
	
        // Since this function isn't meant to be used in realtime, we can allow
        // use nasty code here. First off, draw the water tile, for the background.
		dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame, 64+(Water*16), 16, 16)), 0, 0, false);
		
		        // Now, get the combination from the tile and draw it using this stupidly
        // hard coded routine. I've found out that this was easier than just find
        // out a damn algorithm.
        if (Combination & 0x20)
        {
            // This is where it gets nasty :S
            if (Combination > 0x29)
            {
                // Multiple edge possibilities
                switch(Combination)
                {
                    case 0x2A:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 0, 16, 8)), 0, 0, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 24, 16, 18)), 0, 0, false);
                        break;
                    case 0x2B:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 0, 8, 16)), 0, 0, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 32, 8, 16)), 8, 0, false);
                        break;
                    case 0x2C:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 8, 16, 8)), 0, 8, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 16, 16, 8)), 0, 0, false);
                        break;
                    case 0x2D:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 0, 8, 16)), 8, 0, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 32, 8, 16)), 0, 0, false);
                        break;
                    case 0x2E:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 0, 16, 16)), 0, 0, false);
                        break;
                }
            } else {
                // Wall + inner edges
                switch((Combination>>1)&0x07)
                {
                    case 0x00:
                        if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 32, 16, 16)), 0, 0, false);
                        else 				  dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 16, 16, 16)), 0, 0, false);
                        break;
                    case 0x01:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 0, 8, 8)), 0, 0, false);		// Corner
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 24, 8, 8)), 0, 8, false);	// Left/Right frame
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 32, 8, 8)), 8, 0, false);	// Top/Bottom frame

                        if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 48+8, 8, 8)), 8, 8, false);
                        break;
                    case 0x02:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 0, 8, 8)), 8, 0, false);	// Corner
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 24, 8, 8)), 8, 8, false);	// Left/Right frame
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 32, 8, 8)), 0, 0, false);	// Top/Bottom frame

                        if (Combination&0x01)
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 48+8, 8, 8)), 0, 8, false);
                        break;
                    case 0x03:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 8, 8, 8)), 8, 8, false);		// Corner
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 16, 8, 8)), 8, 0, false);	// Left/Right frame
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 40, 8, 8)), 0, 8, false);	// Top/Bottom frame

                        if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 48, 8, 8)), 0, 0, false);
                        break;
                    case 0x04:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 8, 8, 8)), 0, 8, false);		// Corner
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 16, 8, 8)), 0, 0, false);	// Left/Right frame
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 40, 8, 8)), 8, 8, false);	// Top/Bottom frame

                        if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 48, 8, 8)), 8, 0, false);
                        break;
                }
            }
        } else if (Combination & 0x10)
        {
            // Wall + inner edge cases. They're also easier to find out the
            // values here too
            switch((Combination>>2)&0x03)
            {
                case 0x00:
                    // Render left wall
					dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 16, 8, 16)), 0, 0, false);

                    // Render top right corner and bottom right corner
                    if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 48, 8, 8)), 8, 0, false);
                    if (Combination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 48+8, 8, 8)), 8, 8, false);
                    break;
                case 0x01:
                    // Render top wall
					dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 32, 16, 8)), 0, 0, false);

                    // Render bottom right corner and bottom left corner
                    if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 48+8, 8, 8)), 8, 8, false);
                    if (Combination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 48+8, 8, 8)), 0, 8, false);
                    break;
                case 0x02:
                    // Right wall
                    dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 16, 8, 16)), 8, 0, false);

                    // Render bottom left corner and top left corner
                    if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 48+8, 8, 8)), 0, 8, false);
                    if (Combination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 48, 8, 8)), 0, 0, false);
                    break;
                case 0x03:
                    // Bottom wall
					dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 32+8, 16, 8)), 0, 8, false);

                    // Render top left corner and top right corner
                    if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 48, 8, 8)), 0, 0, false);
                    if (Combination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 48, 8, 8)), 8, 0, false);
                    break;
            }
        } else {
            // Single inner edge cases. They're easier to find out the values
            // this way.
            if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 48, 8, 8)), 0, 0, false);
            if (Combination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 48, 8, 8)), 8, 0, false);
            if (Combination&0x04) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder+8, 48+8, 8, 8)), 8, 8, false);
            if (Combination&0x08) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+SBorder, 48+8, 8, 8)), 0, 8, false);
        }
		
		/* End of Drawing. Reselase and return bitmap*/
		
		dc.SelectObject(wxNullBitmap);
		return (pretile);
}

wxBitmap ScrolledCanvas::draw_deep_water(int Frame, int Depth, int DepthCombination)
{
	//Create returned bitmap
	wxBitmap pretile = wxBitmap(16, 16);
	//Prepare bitmap to be drawn on
	wxMemoryDC dc;
	dc.SelectObject(pretile);
	dc.SetPen(wxPen(KeyColor));
	dc.SetBrush(wxBrush(KeyColor));
	dc.DrawRectangle(0,0,16,16);
	/* INITIALIZE DRAWING */
	
	int SFrame = Frame*16;

	// Now render the depth part
	if (DepthCombination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame, 64+(Depth*16), 8, 8)), 0, 0, false);
	if (DepthCombination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+8, 64+(Depth*16), 8, 8)), 8, 0, false);
	if (DepthCombination&0x04) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame, 64+(Depth*16)+8, 8, 8)), 0, 8, false);
	if (DepthCombination&0x08) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(SFrame+8, 64+(Depth*16)+8, 8, 8)), 8, 8, false);

		/* End of Drawing. Reselase and return bitmap*/
		
		dc.SelectObject(wxNullBitmap);
		return (pretile);

}

wxBitmap ScrolledCanvas::draw_autotile(int Terrain, int Combination)
{
	//Create returned bitmap
	wxBitmap pretile = wxBitmap(16, 16);
	//Prepare bitmap to be drawn on
	wxMemoryDC dc;
	dc.SelectObject(pretile);
	
	/* INITIALIZE DRAWING */
	
	Terrain += 4;
	int XTerrain = ((Terrain%2)*48)+(Terrain/8)*96, YTerrain = ((Terrain/2)%4)*64;
	
	
	// Since this function isn't meant to be used in realtime, we can allow
	// use nasty code here. First off, draw the water tile, for the background.
	dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+16, YTerrain+32, 16, 16)), 0, 0, false);
        // Now, get the combination from the tile and draw it using this stupidly
        // hard coded routine. I've found out that this was easier than just find
        // out a damn algorithm.
        if (Combination & 0x20)
        {
            // This is where it gets nasty :S
            if (Combination > 0x29)
            {
                // Multiple edge possibilities
                switch(Combination)
                {
                    case 0x2A:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain+16, 8, 16)), 0, 0, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain+16, 8, 16)), 8, 0, false);
                        break;
                    case 0x2B:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain+16, 16, 8)), 0, 0, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain+56, 16, 8)), 0, 8, false);
                        break;
                    case 0x2C:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain+48, 8, 16)), 0, 0, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain+48, 8, 16)), 8, 0, false);
                        break;
                    case 0x2D:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain+16, 16, 8)), 0, 0, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain+56, 16, 8)), 0, 8, false);
                        break;
                    case 0x2E:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain+16, 8, 8)), 0, 0, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain+16, 8, 8)), 8, 0, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain+56, 8, 8)), 0, 8, false);
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain+56, 8, 8)), 8, 8, false);
                        break;
                    case 0x31:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain, 16, 16)), 0, 0, false);
                        break;
                }
            } else {
                // Wall + inner edges
                switch((Combination>>1)&0x07)
                {
                    case 0x00:
                        if (Combination&0x01)
                        {
							dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+16, YTerrain+16, 16, 8)), 0, 0, false);
							dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+16, YTerrain+56, 16, 8)), 0, 8, false);
                        } else {
							dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain+32, 8, 16)), 0, 0, false);
							dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain+32, 8, 16)), 8, 0, false);
                        }
                        break;
                    case 0x01:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain+16, 16, 16)), 0, 0, false);
                        if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain+8, 8, 8)), 8, 8, false);
                        break;
                    case 0x02:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain+16, 16, 16)), 0, 0, false);
                        if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain+8, 8, 8)), 0, 8, false);
                        break;
                    case 0x03:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain+48, 16, 16)), 0, 0, false);
                        if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain, 8, 8)), 0, 0, false);
                        break;
                    case 0x04:
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain+48, 16, 16)), 0, 0, false);
                        if (Combination&0x01) 
						dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain, 8, 8)), 8, 0, false);
                        break;
                }
            }
        } else if (Combination & 0x10)
        {
            // Wall + inner edge cases. They're also easier to find out the
            // values here too
            switch((Combination>>2)&0x03)
            {
                case 0x00:
                    // Render left wall
					dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain, YTerrain+32, 16, 16)), 0, 0, false);

                    // Render top right corner and bottom right corner
                    if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain, 8, 8)), 8, 0, false);
                    if (Combination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain+8, 8, 8)), 8, 8, false);
                    break;
                case 0x01:
                    // Render top wall
					dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+16, YTerrain+16, 16, 16)), 0, 0, false);

                    // Render bottom right corner and bottom left corner
                    if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain+8, 8, 8)), 8, 8, false);
                    if (Combination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain+8, 8, 8)), 0, 8, false);
                    break;
                case 0x02:
                    // Right wall
					dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain+32, 16, 16)), 0, 0, false);

                    // Render bottom left corner and top left corner
                    if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain+8, 8, 8)), 0, 8, false);
                    if (Combination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain, 8, 8)), 0, 0, false);
                    break;
                case 0x03:
                    // Bottom wall
					dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+16, YTerrain+48, 16, 16)), 0, 0, false);

                    // Render top left corner and top right corner
                    if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain, 8, 8)), 0, 0, false);
                    if (Combination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain, 8, 8)), 8, 0, false);
                    break;
            }
        } else {
            // Single inner edge cases. They're easier to find out the values
            // this way.
            if (Combination&0x01) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain, 8, 8)), 0, 0, false);
            if (Combination&0x02) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain, 8, 8)), 8, 0, false);
            if (Combination&0x04) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+40, YTerrain+8, 8, 8)), 8, 8, false);
            if (Combination&0x08) dc.DrawBitmap(base_chipset.GetSubBitmap(wxRect(XTerrain+32, YTerrain+8, 8, 8)), 0, 8, false);
        }
		
		/* End of Drawing. Reselase and return bitmap*/
		
		dc.SelectObject(wxNullBitmap);
		return (pretile);
}

wxBitmap ScrolledCanvas::RenderTile(unsigned short Tile, int Frame)
{
	//Create Object to be returned
	wxBitmap Returned = wxNullBitmap;
	
	if (Tile >= 0x2710) // Upper layer tiles
    {
        Tile -= 0x2710;
        Tile += 0x04FB;
		Returned = real_chipset.GetSubBitmap(wxRect(((Tile & 0x1F) << 4), ((Tile >> 5) << 4), 16, 16));
    }
    else if (Tile >= 0x1388) // Lower layer tiles
    {
        Tile -= 0x1388;
        Tile += 0x046B;
		Returned = real_chipset.GetSubBitmap(wxRect(((Tile & 0x1F) << 4), ((Tile >> 5) << 4), 16, 16));
    }
    else if (Tile >= 0x0FA0) // Terrain tiles
    {
        Tile -= 0x0FA0;
        Tile += 0x0213;
		Returned = real_chipset.GetSubBitmap(wxRect(((Tile & 0x1F) << 4), ((Tile >> 5) << 4), 16, 16));
    }
    else if (Tile >= 0x0BB8) // Animated tiles
    {
        Frame %= 4;
        Tile = 0x0207 + (((Tile - 0x0BB8) / 50) << 2) + Frame;
		Returned = real_chipset.GetSubBitmap(wxRect(((Tile & 0x1F) << 4), ((Tile >> 5) << 4), 16, 16));
    }
    else // Water tiles
    {

        Frame %= 3;
        int WaterTile = Tile % 50;
        int WaterType = (Tile / 50) / 20;
        int Shadow = Tile / 50;

        Tile = WaterType * 141 + WaterTile + (Frame * 47);
		Returned = real_chipset.GetSubBitmap(wxRect((Tile & 0x1F) << 4, (Tile >> 5) << 4, 16, 16));
        Tile = 3 * 141 + Shadow - (20 * WaterType) + (Frame * 16) + 48;
        if (WaterType == 2) Tile -= 48; // if is a deph water title redraw the shadow.
		wxMemoryDC dc;
		dc.SelectObject(Returned);
		dc.DrawBitmap(real_chipset.GetSubBitmap(wxRect((Tile & 0x1F) << 4, (Tile >> 5) << 4, 16, 16)), 0, 0);
		dc.SelectObject(wxNullBitmap);
    }
	
	//Done
	return Returned;
}

void ScrolledCanvas::OnDraw(wxDC&dc)
{
	dc.DrawBitmap(bm_lower_layer, wxPoint(0,0), false);
	dc.DrawBitmap(bm_upper_layer, wxPoint(0,0), true);
}
