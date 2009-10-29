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
            chips.Add(wxT("../../player/ChipSet/basis.png"));
            if (!pnPalette->load_palette(chips))
            {
                wxMessageDialog* ErrMsg = new wxMessageDialog(this, _("Error: One or more Chipset Files are Lost"), _("Error"), wxOK);
                ErrMsg->ShowModal();
                ErrMsg->Destroy();
            }
            if (!pnCanvas->load_canvas(chips))
            {
                wxMessageDialog* ErrMsg = new wxMessageDialog(this, _("Error: One or more Chipset Files are Lost"), _("Error"), wxOK);
                ErrMsg->ShowModal();
                ErrMsg->Destroy();
            }
	
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
    wxIcon _icon;
    _icon.CopyFromBitmap(wxBitmap(wxT("../share/easyrpg.xpm"), wxBITMAP_TYPE_ANY));
    SetIcon(_icon);
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
	pnCanvas->SetScale(2);
	int x, y;
	pnCanvas->CalcScrolledPosition(0, 0, &x, &y);
	pnCanvas->SetScrollbars(32, 32, 100, 100, x, y);
	pnCanvas->Refresh();
}

void FrameEditor::zoom12_click(wxCommandEvent &WXUNUSED(event)) 
{
    MenuScale->Check(ID_ZOOM_12, true);
    frmEditorToolbar->ToggleTool(ID_ZOOM_12, true);
	pnCanvas->SetScale(1);
	int x, y;
	pnCanvas->CalcScrolledPosition(0, 0, &x, &y);
	pnCanvas->SetScrollbars(16, 16, 100, 100, x, y);
	pnCanvas->Refresh();
}

void FrameEditor::zoom14_click(wxCommandEvent &WXUNUSED(event)) 
{
    MenuScale->Check(ID_ZOOM_14, true);
    frmEditorToolbar->ToggleTool(ID_ZOOM_14, true);
	pnCanvas->SetScale(0.5);
	int x, y;
	pnCanvas->CalcScrolledPosition(0, 0, &x, &y);
	pnCanvas->SetScrollbars(8, 8, 100, 100, x, y);
	pnCanvas->Refresh();
}

void FrameEditor::zoom18_click(wxCommandEvent &WXUNUSED(event)) 
{
    MenuScale->Check(ID_ZOOM_18, true);
    frmEditorToolbar->ToggleTool(ID_ZOOM_18, true);
	pnCanvas->SetScale(0.25);
	int x, y;
	pnCanvas->CalcScrolledPosition(0, 0, &x, &y);
	pnCanvas->SetScrollbars(4, 4, 100, 100, x, y);
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
    SetScrollbars(0, 32, 0, OnScreenCanvas.size() / 100, 0, 0);
}
ScrolledCanvas::ScrolledCanvas()
{
    OnScreenCanvas.clear();
	SetScale(2);
}

bool ScrolledCanvas::load_canvas(wxArrayString Chipsets)
{
    for (unsigned int chipsetid = 0; chipsetid < Chipsets.GetCount(); chipsetid++)
    {
        //if (wxFile::Exists(Chipsets.Item(chipsetid))){
        wxBitmap Chipset = wxBitmap::wxBitmap(Chipsets.Item(chipsetid), wxBITMAP_TYPE_ANY);
        //wxImage Scaler = Chipset.ConvertToImage();
        //Scaler.Rescale(Chipset.GetWidth() * 2, Chipset.GetHeight() * 2);
        //Chipset = wxBitmap::wxBitmap(Scaler);
        OnScreenCanvas.clear();
        for (int i = 0; i < 1000; i++)
        {
            OnScreenCanvas.push_back(Chipset.GetSubBitmap(wxRect(wxPoint(0, 64), wxSize(16, 16))));
        }
        SetScrollbars(32, 32, 100, OnScreenCanvas.size() / 100, 0, 0);
    }
    //else{ SetScrollbars(32,32, 6, OnScreenCanvas.size() / 6, 0, 0); return false;}
	this->Refresh();
    return true;
}

void ScrolledCanvas::OnDraw(wxDC& dc)
{
    if (!OnScreenCanvas.empty())
	dc.SetUserScale(Scale, Scale);
    for (unsigned int id = 0; id < OnScreenCanvas.size(); id++)
    {
        dc.DrawBitmap(OnScreenCanvas.at(id), (id % 100) * 16, (id / 100) * 16, false);
    }
}

void ScrolledCanvas::SetScale(float zoom){
	Scale = zoom;
}
