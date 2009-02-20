#include <wx/wx.h>
#include "FrameEditor.h"
#include "DialogDb.h"

FrameEditor::FrameEditor():
    wxFrame(NULL, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize)
{
    swEditor = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_BORDER);
    pnEditorMapTree = new wxPanel(swEditor, wxID_ANY);
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
    wxglade_tmp_menu_1->Append(wxID_SAVE, _("&Save"), _("Save all changes in the project maps"), wxITEM_NORMAL);
    wxglade_tmp_menu_1->Append(wxID_REVERT, _("&Revert"), _("Discard all changes and reload the saved project maps"), wxITEM_NORMAL);
    wxglade_tmp_menu_1->AppendSeparator();
    wxMenu* MenuEdit = new wxMenu();
    MenuEdit->Append(ID_UPPER_LAYER, _("&Lower layer"), _("Switch to the lower layer map editing mode"), wxITEM_RADIO);
    MenuEdit->Append(ID_LOWER_LAYER, _("&Upper layer"), _("Switch to the upper layer map editing mode"), wxITEM_RADIO);
    MenuEdit->Append(ID_EVENTS, _("&Events"), _("Switch to the event layer map editing mode"), wxITEM_RADIO);
    wxglade_tmp_menu_1->Append(wxID_ANY, _("&Edit"), MenuEdit, wxEmptyString);
    wxMenu* MenuScale = new wxMenu();
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
    wxMenu* MenuGame = new wxMenu();
    MenuGame->Append(wxID_ANY, _("&Play test"), _("Launch the game project for testing"), wxITEM_NORMAL);
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
    frmEditorToolbar->AddTool(ID_UPPER_LAYER, _("Lower layer"), wxBitmap(wxT("../share/toolbar/lowerlayer.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_RADIO, _("Lower layer editing"), _("Switch to the lower layer map editing mode"));
    frmEditorToolbar->AddTool(ID_LOWER_LAYER, _("Upper layer"), wxBitmap(wxT("../share/toolbar/upperlayer.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_RADIO, _("Upper layer editing"), _("Switch to the upper layer map editing mode"));
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
    frmEditorToolbar->AddTool(ID_FULL_SCREEN, _("Full screen"), wxBitmap(wxT("../share/toolbar/fullscreen.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_CHECK, _("Full screen"), _("Enable or disable full screen in play test"));
    frmEditorToolbar->AddTool(ID_SHOW_TITLE, _("Title"), wxBitmap(wxT("../share/toolbar/title.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_CHECK, _("Show title"), _("Enable or disable background and music in the title in play test"));
    frmEditorToolbar->AddSeparator();
    frmEditorToolbar->AddTool(wxID_HELP, _("Help"), wxBitmap(wxT("../share/toolbar/help.png"), wxBITMAP_TYPE_ANY), wxNullBitmap, wxITEM_NORMAL, _("Help contents"), _("Display the help index and contents of EasyRPG"));
    frmEditorToolbar->Realize();
    pnEditorTileset = new wxScrolledWindow(swEditor, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    tcMapTree = new wxTreeCtrl(pnEditorMapTree, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_HAS_BUTTONS|wxTR_NO_LINES|wxTR_DEFAULT_STYLE|wxSUNKEN_BORDER);
    pnEditorMap = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);

    set_properties();
    do_layout();

   	Connect(ID_DATABASE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(FrameEditor::database_click));
}

void FrameEditor::set_properties()
{
    SetTitle(_("EasyRPG"));
    wxIcon _icon;
    _icon.CopyFromBitmap(wxBitmap(wxT("../share/easyrpg.xpm"), wxBITMAP_TYPE_ANY));
    SetIcon(_icon);
    int frmEditorStatusbar_widths[] = { -1 };
    frmEditorStatusbar->SetStatusWidths(1, frmEditorStatusbar_widths);
    const wxString frmEditorStatusbar_fields[] = {
        wxEmptyString
    };
    for(int i = 0; i < frmEditorStatusbar->GetFieldsCount(); ++i) {
        frmEditorStatusbar->SetStatusText(frmEditorStatusbar_fields[i], i);
    }
    pnEditorTileset->SetMinSize(wxSize(217, 96));
    pnEditorTileset->SetScrollRate(32, 32);
    tcMapTree->SetMinSize(wxSize(212, 128));
    pnEditorMap->SetScrollRate(32, 32);
    SetMinSize(wxSize(700, 400));
}

void FrameEditor::do_layout()
{
    wxBoxSizer* szEditor = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szMapTree = new wxBoxSizer(wxHORIZONTAL);
    szMapTree->Add(tcMapTree, 0, wxEXPAND, 0);
    pnEditorMapTree->SetSizer(szMapTree);
    swEditor->SplitHorizontally(pnEditorTileset, pnEditorMapTree);
    szEditor->Add(swEditor, 0, wxEXPAND, 0);
    szEditor->Add(pnEditorMap, 1, wxEXPAND, 0);
    SetSizer(szEditor);
    szEditor->Fit(this);
    Layout();
}

void FrameEditor::database_click(wxCommandEvent &WXUNUSED(event))
{
    DialogDb *dlgDb = new DialogDb(this, wxID_ANY, wxEmptyString);
    dlgDb->SetFocus();
    dlgDb->ShowModal();
    dlgDb->Destroy();
}
