///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_editor.h"

///////////////////////////////////////////////////////////////////////////

frmEditor_Base::frmEditor_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 700,400 ), wxDefaultSize );
	
	frmEditorMenubar = new wxMenuBar( 0 );
	MenuProject = new wxMenu();
	wxMenuItem* MenuitemNew;
	MenuitemNew = new wxMenuItem( MenuProject, wxID_ANY, wxString( _("&New...") ) , _("Create a new project"), wxITEM_NORMAL );
	MenuProject->Append( MenuitemNew );
	
	wxMenuItem* MenuitemOpen;
	MenuitemOpen = new wxMenuItem( MenuProject, wxID_ANY, wxString( _("&Open...") ) , _("Open an existing project"), wxITEM_NORMAL );
	MenuProject->Append( MenuitemOpen );
	
	wxMenuItem* MenuitemClose;
	MenuitemClose = new wxMenuItem( MenuProject, wxID_ANY, wxString( _("&Close") ) , _("Close the current project"), wxITEM_NORMAL );
	MenuProject->Append( MenuitemClose );
	
	wxMenuItem* SeparatorProject;
	SeparatorProject = MenuProject->AppendSeparator();
	
	wxMenuItem* MenuitemMakeGameDisk;
	MenuitemMakeGameDisk = new wxMenuItem( MenuProject, wxID_ANY, wxString( _("&Make game disk...") ) , _("Compress game data and create a distributable file"), wxITEM_NORMAL );
	MenuProject->Append( MenuitemMakeGameDisk );
	
	wxMenuItem* SeparatorProject2;
	SeparatorProject2 = MenuProject->AppendSeparator();
	
	wxMenuItem* MenuitemExit;
	MenuitemExit = new wxMenuItem( MenuProject, wxID_ANY, wxString( _("&Exit") ) , _("Exit EasyRPG"), wxITEM_NORMAL );
	MenuProject->Append( MenuitemExit );
	
	frmEditorMenubar->Append( MenuProject, _("&Project") );
	
	MenuMap = new wxMenu();
	wxMenuItem* MenuitemSave;
	MenuitemSave = new wxMenuItem( MenuMap, wxID_ANY, wxString( _("&Save") ) , _("Save all changes in the project maps"), wxITEM_NORMAL );
	MenuMap->Append( MenuitemSave );
	
	wxMenuItem* MenuitemRevert;
	MenuitemRevert = new wxMenuItem( MenuMap, wxID_ANY, wxString( _("&Revert") ) , _("Discard all changes and reload the saved project maps"), wxITEM_NORMAL );
	MenuMap->Append( MenuitemRevert );
	
	wxMenuItem* SeparatorMap;
	SeparatorMap = MenuMap->AppendSeparator();
	
	MenuEdit = new wxMenu();
	wxMenuItem* MenuitemLowerLayer;
	MenuitemLowerLayer = new wxMenuItem( MenuEdit, wxID_ANY, wxString( _("&Lower layer") ) , _("Switch to the lower layer map editing mode"), wxITEM_NORMAL );
	MenuEdit->Append( MenuitemLowerLayer );
	
	wxMenuItem* MenuitemUpperLayer;
	MenuitemUpperLayer = new wxMenuItem( MenuEdit, wxID_ANY, wxString( _("&Upper layer") ) , _("Switch to the upper layer map editing mode"), wxITEM_NORMAL );
	MenuEdit->Append( MenuitemUpperLayer );
	
	wxMenuItem* MenuitemEvents;
	MenuitemEvents = new wxMenuItem( MenuEdit, wxID_ANY, wxString( _("&Events") ) , _("Switch to the event layer map editing mode"), wxITEM_NORMAL );
	MenuEdit->Append( MenuitemEvents );
	
	MenuMap->Append( -1, _("&Edit"), MenuEdit );
	
	MenuScale = new wxMenu();
	wxMenuItem* MenuitemScale11;
	MenuitemScale11 = new wxMenuItem( MenuScale, wxID_ANY, wxString( _("1:&1") ) , _("Display the map in 1:1 scale"), wxITEM_NORMAL );
	MenuScale->Append( MenuitemScale11 );
	
	wxMenuItem* MenuitemScale12;
	MenuitemScale12 = new wxMenuItem( MenuScale, wxID_ANY, wxString( _("1:&2") ) , _("Display the map in 1:2 scale"), wxITEM_NORMAL );
	MenuScale->Append( MenuitemScale12 );
	
	wxMenuItem* MenuitemScale14;
	MenuitemScale14 = new wxMenuItem( MenuScale, wxID_ANY, wxString( _("1:&4") ) , _("Display the map in 1:4 scale"), wxITEM_NORMAL );
	MenuScale->Append( MenuitemScale14 );
	
	wxMenuItem* MenuitemScale18;
	MenuitemScale18 = new wxMenuItem( MenuScale, wxID_ANY, wxString( _("1:&8") ) , _("Display the map in 1:8 scale"), wxITEM_NORMAL );
	MenuScale->Append( MenuitemScale18 );
	
	MenuMap->Append( -1, _("&Scale"), MenuScale );
	
	frmEditorMenubar->Append( MenuMap, _("&Map") );
	
	MenuTools = new wxMenu();
	wxMenuItem* MenuitemDatabase;
	MenuitemDatabase = new wxMenuItem( MenuTools, wxID_ANY, wxString( _("&Database") ) , _("Open the project database editor window"), wxITEM_NORMAL );
	MenuTools->Append( MenuitemDatabase );
	
	wxMenuItem* MenuitemMaterialManager;
	MenuitemMaterialManager = new wxMenuItem( MenuTools, wxID_ANY, wxString( _("&Material manager") ) , _("Add or remove material from the project"), wxITEM_NORMAL );
	MenuTools->Append( MenuitemMaterialManager );
	
	wxMenuItem* MenuitemMusicPlayer;
	MenuitemMusicPlayer = new wxMenuItem( MenuTools, wxID_ANY, wxString( _("Music &player") ) , _("Play background music while editing"), wxITEM_NORMAL );
	MenuTools->Append( MenuitemMusicPlayer );
	
	frmEditorMenubar->Append( MenuTools, _("&Tools") );
	
	MenuGame = new wxMenu();
	wxMenuItem* MenuitemPlayTest;
	MenuitemPlayTest = new wxMenuItem( MenuGame, wxID_ANY, wxString( _("&Play test") ) , _("Launch the game project for testing"), wxITEM_NORMAL );
	MenuGame->Append( MenuitemPlayTest );
	
	wxMenuItem* SeparatorGame;
	SeparatorGame = MenuGame->AppendSeparator();
	
	wxMenuItem* MenuitemFullScreen;
	MenuitemFullScreen = new wxMenuItem( MenuGame, wxID_ANY, wxString( _("&Full screen") ) , _("Enable or disable full screen in play test"), wxITEM_NORMAL );
	MenuGame->Append( MenuitemFullScreen );
	
	wxMenuItem* MenuitemShowTitle;
	MenuitemShowTitle = new wxMenuItem( MenuGame, wxID_ANY, wxString( _("&Show title") ) , _("Enable or disable background and music in the title in play test"), wxITEM_NORMAL );
	MenuGame->Append( MenuitemShowTitle );
	
	frmEditorMenubar->Append( MenuGame, _("&Game") );
	
	MenuHelp = new wxMenu();
	wxMenuItem* MenuitemHelpIndex;
	MenuitemHelpIndex = new wxMenuItem( MenuHelp, wxID_ANY, wxString( _("&Index") ) , _("Display the help index and contents of EasyRPG"), wxITEM_NORMAL );
	MenuHelp->Append( MenuitemHelpIndex );
	
	wxMenuItem* SeparatorHelp;
	SeparatorHelp = MenuHelp->AppendSeparator();
	
	wxMenuItem* MenuitemAbout;
	MenuitemAbout = new wxMenuItem( MenuHelp, wxID_ANY, wxString( _("&About") ) , _("About EasyRPG Editor"), wxITEM_NORMAL );
	MenuHelp->Append( MenuitemAbout );
	
	frmEditorMenubar->Append( MenuHelp, _("&Help") );
	
	this->SetMenuBar( frmEditorMenubar );
	
	frmEditorStatusbar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	frmEditorToolbar = this->CreateToolBar( wxTB_FLAT|wxTB_HORIZONTAL, wxID_ANY );
	frmEditorToolbar->SetToolSeparation( 0 );
	frmEditorToolbar->SetToolPacking( 0 );
	frmEditorToolbar->AddTool( wxID_NEW, _("New"), wxBitmap( wxT("../share/toolbar/new.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("New project"), _("Create a new project") );
	frmEditorToolbar->AddTool( wxID_OPEN, _("Open"), wxBitmap( wxT("../share/toolbar/open.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Open project"), _("Open an existing project") );
	frmEditorToolbar->AddTool( wxID_CLOSE, _("Close"), wxBitmap( wxT("../share/toolbar/close.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Close project"), _("Close the current project") );
	frmEditorToolbar->AddSeparator();
	frmEditorToolbar->AddTool( ID_MAKE_GAME_DISK, _("Make game disk"), wxBitmap( wxT("../share/toolbar/makegamedisk.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Make game disk "), _("Make a redistributable package from the current project") );
	frmEditorToolbar->AddSeparator();
	frmEditorToolbar->AddTool( wxID_SAVE, _("Save"), wxBitmap( wxT("../share/toolbar/save.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Save map changes"), _("Save all changes in the project maps") );
	frmEditorToolbar->AddTool( wxID_REVERT, _("Revert"), wxBitmap( wxT("../share/toolbar/revert.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Revert map changes"), _("Discard all changes and reload the saved project maps") );
	frmEditorToolbar->AddSeparator();
	frmEditorToolbar->AddTool( ID_LOWER_LAYER, _("Lower layer"), wxBitmap( wxT("../share/toolbar/lowerlayer.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Lower layer editing"), _("Switch to the lower layer map editing mode") );
	frmEditorToolbar->AddTool( ID_UPPER_LAYER, _("Upper layer"), wxBitmap( wxT("../share/toolbar/upperlayer.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Upper layer editing"), _("Switch to the upper layer map editing mode") );
	frmEditorToolbar->AddTool( ID_EVENTS, _("Events"), wxBitmap( wxT("../share/toolbar/eventlayer.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Event layer editing"), _("Switch to the event layer map editing mode") );
	frmEditorToolbar->AddSeparator();
	frmEditorToolbar->AddTool( wxID_ZOOM_100, _("1:1"), wxBitmap( wxT("../share/toolbar/11scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:1 scale"), _("Display the map in 1:1 scale") );
	frmEditorToolbar->AddTool( ID_ZOOM_12, _("1:2"), wxBitmap( wxT("../share/toolbar/12scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:2 scale"), _("Display the map in 1:2 scale") );
	frmEditorToolbar->AddTool( ID_ZOOM_14, _("1:4"), wxBitmap( wxT("../share/toolbar/14scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:4 scale"), _("Display the map in 1:4 scale") );
	frmEditorToolbar->AddTool( ID_ZOOM_18, _("1:8"), wxBitmap( wxT("../share/toolbar/18scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:8 scale"), _("Display the map in 1:8 scale") );
	frmEditorToolbar->AddSeparator();
	frmEditorToolbar->AddTool( ID_DATABASE, _("Database"), wxBitmap( wxT("../share/toolbar/database.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Database editor"), _("Open the project database editor window") );
	frmEditorToolbar->AddTool( ID_MATERIAL_MANAGER, _("Material"), wxBitmap( wxT("../share/toolbar/material.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Material manager"), _("Add or remove material from the project") );
	frmEditorToolbar->AddTool( ID_MUSIC_PLAYER, _("Music"), wxBitmap( wxT("../share/toolbar/music.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Music player"), _("Play background music while editing") );
	frmEditorToolbar->AddSeparator();
	frmEditorToolbar->AddTool( ID_PLAY_TEST, _("Play test"), wxBitmap( wxT("../share/toolbar/playtest.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Play test"), _("Launch the game project for testing") );
	frmEditorToolbar->AddSeparator();
	frmEditorToolbar->AddTool( ID_FULL_SCREEN, _("Full screen"), wxBitmap( wxT("../share/toolbar/fullscreen.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_CHECK, _("Full screen"), _("Enable or disable full screen in play test") );
	frmEditorToolbar->AddTool( ID_SHOW_TITLE, _("Title"), wxBitmap( wxT("../share/toolbar/title.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_CHECK, _("Show title"), _("Enable or disable background and music in the title in play test") );
	frmEditorToolbar->AddSeparator();
	frmEditorToolbar->AddTool( wxID_HELP, _("Help"), wxBitmap( wxT("../share/toolbar/help.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Help contents"), _("Display the help index and contents of EasyRPG") );
	frmEditorToolbar->Realize();
	
	wxBoxSizer* szEditor;
	szEditor = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szEditorLeft;
	szEditorLeft = new wxBoxSizer( wxVERTICAL );
	
	frmEditorToolbar2 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL ); 
	frmEditorToolbar2->AddTool( wxID_UNDO, _("Undo"), wxBitmap( wxT("../share/toolbar/undo.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Undo the last action"), _("Revert last drawing in the actual map") );
	frmEditorToolbar2->AddSeparator();
	frmEditorToolbar2->AddTool( ID_SELECT, _("Select"), wxBitmap( wxT("../share/toolbar/select.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Selection tool"), _("Select a map region by a rectangle selector") );
	frmEditorToolbar2->AddTool( wxID_ZOOM_FIT, _("Zoom"), wxBitmap( wxT("../share/toolbar/zoom.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Zoom tool"), _("Zoom in or out by left or right mouse click") );
	frmEditorToolbar2->AddTool( ID_PEN, _("Pen"), wxBitmap( wxT("../share/toolbar/pen.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Pen draw tool"), _("Draw on the map freely by hand") );
	frmEditorToolbar2->AddTool( ID_RECTANGLE, _("Rectangle"), wxBitmap( wxT("../share/toolbar/rectangle.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Rectangle draw tool"), _("Draw a rectangle on the map") );
	frmEditorToolbar2->AddTool( ID_CIRCLE, _("Circle"), wxBitmap( wxT("../share/toolbar/circle.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Circle draw tool"), _("Draw a circle on the map") );
	frmEditorToolbar2->AddTool( ID_FILL, _("Fill"), wxBitmap( wxT("../share/toolbar/fill.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Flood fill draw tool"), _("Draw tiles with same tile type on the map") );
	frmEditorToolbar2->Realize();
	
	szEditorLeft->Add( frmEditorToolbar2, 0, wxEXPAND, 5 );
	
	swEditor = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_BORDER|wxSP_LIVE_UPDATE );
	swEditor->SetMinimumPaneSize( 96 );
	swEditor->Connect( wxEVT_IDLE, wxIdleEventHandler( frmEditor_Base::swEditorOnIdle ), NULL, this );
	pnEditorTileset = new wxScrolledWindow( swEditor, wxID_ANY, wxDefaultPosition, wxSize( 217, -1 ), wxHSCROLL|wxVSCROLL );
	pnEditorTileset->SetScrollRate( 16, 16 );
	pnEditorMapTree = new wxPanel( swEditor, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szMapTree;
	szMapTree = new wxBoxSizer( wxHORIZONTAL );
	
	tcMapTree = new wxTreeCtrl( pnEditorMapTree, wxID_ANY, wxDefaultPosition, wxSize( 212, 150 ), wxTR_HAS_BUTTONS|wxTR_NO_LINES|wxTR_DEFAULT_STYLE|wxSUNKEN_BORDER );
	szMapTree->Add( tcMapTree, 0, wxEXPAND, 0 );
	
	pnEditorMapTree->SetSizer( szMapTree );
	pnEditorMapTree->Layout();
	szMapTree->Fit( pnEditorMapTree );
	swEditor->SplitHorizontally( pnEditorTileset, pnEditorMapTree, 6 );
	szEditorLeft->Add( swEditor, 1, wxEXPAND, 0 );
	
	szEditor->Add( szEditorLeft, 0, wxEXPAND, 0 );
	
	pnEditorMap = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	pnEditorMap->SetScrollRate( 5, 5 );
	szEditor->Add( pnEditorMap, 1, wxEXPAND, 0 );
	
	this->SetSizer( szEditor );
	this->Layout();
	szEditor->Fit( this );
	
	// Connect Events
	this->Connect( MenuitemNew->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::New_click ) );
	this->Connect( MenuitemOpen->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Open_click ) );
	this->Connect( MenuitemClose->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Close_click ) );
	this->Connect( MenuitemMakeGameDisk->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::MakeGameDisk_click ) );
	this->Connect( MenuitemExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Exit_click ) );
	this->Connect( MenuitemSave->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Save_click ) );
	this->Connect( MenuitemRevert->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Revert_click ) );
	this->Connect( MenuitemLowerLayer->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::LowerLayer_click ) );
	this->Connect( MenuitemUpperLayer->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::UpperLayer_click ) );
	this->Connect( MenuitemEvents->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Events_click ) );
	this->Connect( MenuitemScale11->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale11_click ) );
	this->Connect( MenuitemScale12->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale12_click ) );
	this->Connect( MenuitemScale14->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale14_click ) );
	this->Connect( MenuitemScale18->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale18_click ) );
	this->Connect( MenuitemDatabase->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Database_click ) );
	this->Connect( MenuitemMaterialManager->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::MaterialManager_click ) );
	this->Connect( MenuitemMusicPlayer->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::MusicPlayer_click ) );
	this->Connect( MenuitemPlayTest->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::PlayTest_click ) );
	this->Connect( MenuitemFullScreen->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::FullScreen_click ) );
	this->Connect( MenuitemShowTitle->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::ShowTitle_click ) );
	this->Connect( MenuitemHelpIndex->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::HelpIndex_click ) );
	this->Connect( MenuitemAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::About_click ) );
}

frmEditor_Base::~frmEditor_Base()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::New_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Open_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Close_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::MakeGameDisk_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Exit_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Save_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Revert_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::LowerLayer_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::UpperLayer_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Events_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale11_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale12_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale14_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale18_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Database_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::MaterialManager_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::MusicPlayer_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::PlayTest_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::FullScreen_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::ShowTitle_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::HelpIndex_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::About_click ) );
}

dlgMap_Base::dlgMap_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer191;
	bSizer191 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer192;
	bSizer192 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer193;
	bSizer193 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer103;
	sbSizer103 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer103->Add( tcName, 1, 0, 0 );
	
	bSizer193->Add( sbSizer103, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer104;
	sbSizer104 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Graphics") ), wxHORIZONTAL );
	
	wxArrayString chGraphicsChoices;
	chGraphics = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chGraphicsChoices, 0 );
	chGraphics->SetSelection( 0 );
	sbSizer104->Add( chGraphics, 1, 0, 0 );
	
	bSizer193->Add( sbSizer104, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer105;
	sbSizer105 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Size") ), wxHORIZONTAL );
	
	spinSizeWidth = new wxSpinCtrl( this, wxID_ANY, wxT("20"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 20,  500, 20 );
	sbSizer105->Add( spinSizeWidth, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stSize = new wxStaticText( this, wxID_ANY, _("X"), wxDefaultPosition, wxDefaultSize, 0 );
	stSize->Wrap( -1 );
	sbSizer105->Add( stSize, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinSizeHeight = new wxSpinCtrl( this, wxID_ANY, wxT("15"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 15,  500, 15 );
	sbSizer105->Add( spinSizeHeight, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer193->Add( sbSizer105, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer106;
	sbSizer106 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Loop time") ), wxHORIZONTAL );
	
	wxArrayString chLoopTimeChoices;
	chLoopTime = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chLoopTimeChoices, 0 );
	chLoopTime->SetSelection( 0 );
	sbSizer106->Add( chLoopTime, 1, 0, 0 );
	
	bSizer193->Add( sbSizer106, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer107;
	sbSizer107 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Troop encounters") ), wxVERTICAL );
	
	lcTroopEncounters = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), wxLC_REPORT|wxSUNKEN_BORDER );
	sbSizer107->Add( lcTroopEncounters, 1, wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer194;
	bSizer194 = new wxBoxSizer( wxHORIZONTAL );
	
	stEncounterSteps = new wxStaticText( this, wxID_ANY, _("Encounter steps"), wxDefaultPosition, wxDefaultSize, 0 );
	stEncounterSteps->Wrap( -1 );
	bSizer194->Add( stEncounterSteps, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinEncounterSteps = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 25 );
	bSizer194->Add( spinEncounterSteps, 1, wxLEFT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer107->Add( bSizer194, 0, wxEXPAND, 0 );
	
	bSizer193->Add( sbSizer107, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer192->Add( bSizer193, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer195;
	bSizer195 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer108;
	sbSizer108 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Panorama") ), wxVERTICAL );
	
	chbUsePanorama = new wxCheckBox( this, wxID_ANY, _("Use panorama"), wxDefaultPosition, wxDefaultSize, 0 );
	chbUsePanorama->SetValue(true); 
	sbSizer108->Add( chbUsePanorama, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer196;
	bSizer196 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer109;
	sbSizer109 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Panorama graphic") ), wxVERTICAL );
	
	bmpPanoramaGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 120 ), wxSUNKEN_BORDER );
	sbSizer109->Add( bmpPanoramaGraphic, 0, wxBOTTOM, 1 );
	
	btnPanoramaGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPanoramaGraphic->SetDefault(); 
	sbSizer109->Add( btnPanoramaGraphic, 0, wxTOP|wxALIGN_RIGHT, 1 );
	
	bSizer196->Add( sbSizer109, 0, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer110;
	sbSizer110 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Parallax options") ), wxVERTICAL );
	
	
	sbSizer110->Add( 0,  0, 1, wxEXPAND, 0 );
	
	chbParallaxHorizontal = new wxCheckBox( this, wxID_ANY, _("Horizontal"), wxDefaultPosition, wxDefaultSize, 0 );
	chbParallaxHorizontal->SetValue(true); 
	sbSizer110->Add( chbParallaxHorizontal, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* bSizer197;
	bSizer197 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer197->Add( 15,  15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbParallaxHorizontalAutomatic = new wxCheckBox( this, wxID_ANY, _("Automatic"), wxDefaultPosition, wxDefaultSize, 0 );
	chbParallaxHorizontalAutomatic->SetValue(true); 
	bSizer197->Add( chbParallaxHorizontalAutomatic, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer110->Add( bSizer197, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer198;
	bSizer198 = new wxBoxSizer( wxHORIZONTAL );
	
	stParallaxHorizontalSpeed = new wxStaticText( this, wxID_ANY, _("Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	stParallaxHorizontalSpeed->Wrap( -1 );
	bSizer198->Add( stParallaxHorizontalSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinParallaxHorizontalSpeed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 1 );
	bSizer198->Add( spinParallaxHorizontalSpeed, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer110->Add( bSizer198, 0, wxEXPAND, 0 );
	
	
	sbSizer110->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szParallaxSeparator = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	sbSizer110->Add( szParallaxSeparator, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	
	sbSizer110->Add( 0,  0, 1, wxEXPAND, 0 );
	
	chbParallaxVertical = new wxCheckBox( this, wxID_ANY, _("Vertical"), wxDefaultPosition, wxDefaultSize, 0 );
	chbParallaxVertical->SetValue(true); 
	sbSizer110->Add( chbParallaxVertical, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* bSizer199;
	bSizer199 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer199->Add( 15,  15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbParallaxVerticalAutomatic = new wxCheckBox( this, wxID_ANY, _("Automatic"), wxDefaultPosition, wxDefaultSize, 0 );
	chbParallaxVerticalAutomatic->SetValue(true); 
	bSizer199->Add( chbParallaxVerticalAutomatic, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer110->Add( bSizer199, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer200;
	bSizer200 = new wxBoxSizer( wxHORIZONTAL );
	
	stParallaxVerticalSpeed = new wxStaticText( this, wxID_ANY, _("Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	stParallaxVerticalSpeed->Wrap( -1 );
	bSizer200->Add( stParallaxVerticalSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinParallaxVerticalSpeed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 1 );
	bSizer200->Add( spinParallaxVerticalSpeed, 1, wxLEFT|wxTOP, 1 );
	
	sbSizer110->Add( bSizer200, 0, wxEXPAND, 0 );
	
	
	sbSizer110->Add( 0,  0, 1, wxEXPAND, 0 );
	
	bSizer196->Add( sbSizer110, 1, wxLEFT|wxEXPAND, 1 );
	
	sbSizer108->Add( bSizer196, 0, wxEXPAND, 0 );
	
	bSizer195->Add( sbSizer108, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer201;
	bSizer201 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer111;
	sbSizer111 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Map music") ), wxVERTICAL );
	
	rbtnMapMusicFromParentMap = new wxRadioButton( this, wxID_ANY, _("From parent map"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	rbtnMapMusicFromParentMap->SetValue( true ); 
	sbSizer111->Add( rbtnMapMusicFromParentMap, 0, wxALL|wxEXPAND, 1 );
	
	rbtnMapMusicNone = new wxRadioButton( this, wxID_ANY, _("None"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMapMusicNone->SetValue( true ); 
	sbSizer111->Add( rbtnMapMusicNone, 0, wxALL|wxEXPAND, 1 );
	
	rbtnMapMusicSelect = new wxRadioButton( this, wxID_ANY, _("Select"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMapMusicSelect->SetValue( true ); 
	sbSizer111->Add( rbtnMapMusicSelect, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer202;
	bSizer202 = new wxBoxSizer( wxHORIZONTAL );
	
	tcMapMusicSelect = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxTE_READONLY );
	bSizer202->Add( tcMapMusicSelect, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnMapMusicSelect = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( 25, -1 ), 0 );
	btnMapMusicSelect->SetDefault(); 
	bSizer202->Add( btnMapMusicSelect, 0, 0, 0 );
	
	sbSizer111->Add( bSizer202, 1, wxEXPAND, 0 );
	
	bSizer201->Add( sbSizer111, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer112;
	sbSizer112 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Battle background") ), wxVERTICAL );
	
	rbtnBattleBackgroundFromParentMap = new wxRadioButton( this, wxID_ANY, _("From parent map"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	rbtnBattleBackgroundFromParentMap->SetValue( true ); 
	sbSizer112->Add( rbtnBattleBackgroundFromParentMap, 0, wxALL|wxEXPAND, 1 );
	
	rbtnBattleBackgroundFromTerrain = new wxRadioButton( this, wxID_ANY, _("From terrain"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnBattleBackgroundFromTerrain->SetValue( true ); 
	sbSizer112->Add( rbtnBattleBackgroundFromTerrain, 0, wxALL|wxEXPAND, 1 );
	
	rbtnBattleBackgroundSelect = new wxRadioButton( this, wxID_ANY, _("Select"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnBattleBackgroundSelect->SetValue( true ); 
	sbSizer112->Add( rbtnBattleBackgroundSelect, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer203;
	bSizer203 = new wxBoxSizer( wxHORIZONTAL );
	
	tcBattleBackgroundSelect = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxTE_READONLY );
	bSizer203->Add( tcBattleBackgroundSelect, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnBattleBackgroundSelect = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( 25, -1 ), 0 );
	btnBattleBackgroundSelect->SetDefault(); 
	bSizer203->Add( btnBattleBackgroundSelect, 0, 0, 0 );
	
	sbSizer112->Add( bSizer203, 1, wxEXPAND, 0 );
	
	bSizer201->Add( sbSizer112, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer195->Add( bSizer201, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer204;
	bSizer204 = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbTeleportChoices[] = { _("From parent map"), _("Allowed"), _("Disallowed") };
	int rbTeleportNChoices = sizeof( rbTeleportChoices ) / sizeof( wxString );
	rbTeleport = new wxRadioBox( this, wxID_ANY, _("Teleport"), wxDefaultPosition, wxDefaultSize, rbTeleportNChoices, rbTeleportChoices, 1, wxRA_SPECIFY_COLS );
	rbTeleport->SetSelection( 0 );
	bSizer204->Add( rbTeleport, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	wxString rbEscapeChoices[] = { _("From parent map"), _("Allowed"), _("Disallowed") };
	int rbEscapeNChoices = sizeof( rbEscapeChoices ) / sizeof( wxString );
	rbEscape = new wxRadioBox( this, wxID_ANY, _("Escape"), wxDefaultPosition, wxDefaultSize, rbEscapeNChoices, rbEscapeChoices, 1, wxRA_SPECIFY_COLS );
	rbEscape->SetSelection( 0 );
	bSizer204->Add( rbEscape, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	wxString rbSaveChoices[] = { _("From parent map"), _("Allowed"), _("Disallowed") };
	int rbSaveNChoices = sizeof( rbSaveChoices ) / sizeof( wxString );
	rbSave = new wxRadioBox( this, wxID_ANY, _("Save"), wxDefaultPosition, wxDefaultSize, rbSaveNChoices, rbSaveChoices, 1, wxRA_SPECIFY_COLS );
	rbSave->SetSelection( 0 );
	bSizer204->Add( rbSave, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	bSizer195->Add( bSizer204, 0, wxEXPAND, 0 );
	
	bSizer192->Add( bSizer195, 0, wxEXPAND, 0 );
	
	bSizer191->Add( bSizer192, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer205;
	bSizer205 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer205->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer205->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer205->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer191->Add( bSizer205, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer191 );
	this->Layout();
	bSizer191->Fit( this );
}

dlgMap_Base::~dlgMap_Base()
{
}

dlgMaterial_Base::dlgMaterial_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer338;
	bSizer338 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer339;
	bSizer339 = new wxBoxSizer( wxHORIZONTAL );
	
	listFolders = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	listFolders->Append( _("Backdrop") );
	listFolders->Append( _("Battle") );
	listFolders->Append( _("CharSet") );
	listFolders->Append( _("ChipSet") );
	listFolders->Append( _("FaceSet") );
	listFolders->Append( _("GameOver") );
	listFolders->Append( _("Monster") );
	listFolders->Append( _("Movie") );
	listFolders->Append( _("Music") );
	listFolders->Append( _("Panorama") );
	listFolders->Append( _("Picture") );
	listFolders->Append( _("Sound") );
	listFolders->Append( _("System") );
	listFolders->Append( _("Title") );
	bSizer339->Add( listFolders, 1, wxALL|wxEXPAND, 1 );
	
	listFiles = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer339->Add( listFiles, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer340;
	bSizer340 = new wxBoxSizer( wxVERTICAL );
	
	btnImport = new wxButton( this, wxID_ANY, _("Import..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnImport->SetDefault(); 
	bSizer340->Add( btnImport, 0, wxALL|wxEXPAND, 1 );
	
	btnExport = new wxButton( this, wxID_ANY, _("Export..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnExport->SetDefault(); 
	bSizer340->Add( btnExport, 0, wxALL|wxEXPAND, 1 );
	
	btnDelete = new wxButton( this, wxID_ANY, _("Delete..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnDelete->SetDefault(); 
	bSizer340->Add( btnDelete, 0, wxALL|wxEXPAND, 1 );
	
	
	bSizer340->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxString rbFormatChoices[] = { _("PNG"), _("XYZ") };
	int rbFormatNChoices = sizeof( rbFormatChoices ) / sizeof( wxString );
	rbFormat = new wxRadioBox( this, wxID_ANY, _("Import/export as"), wxDefaultPosition, wxDefaultSize, rbFormatNChoices, rbFormatChoices, 1, wxRA_SPECIFY_COLS );
	rbFormat->SetSelection( 0 );
	bSizer340->Add( rbFormat, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer339->Add( bSizer340, 0, wxEXPAND, 0 );
	
	bSizer338->Add( bSizer339, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer341;
	bSizer341 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_CLOSE = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CLOSE->SetDefault(); 
	bSizer341->Add( wxID_CLOSE, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer341->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer338->Add( bSizer341, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer338 );
	this->Layout();
	bSizer338->Fit( this );
}

dlgMaterial_Base::~dlgMaterial_Base()
{
}
