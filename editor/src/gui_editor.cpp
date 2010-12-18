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
	this->SetSizeHints( wxSize( 660,400 ), wxDefaultSize );
	
	frmEditorMenubar = new wxMenuBar( 0 );
	MenuProject = new wxMenu();
	wxMenuItem* MenuitemNew;
	MenuitemNew = new wxMenuItem( MenuProject, wxID_NEW, wxString( _("&New...") ) , _("Create a new project"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemNew->SetBitmaps( wxBitmap( wxT("../share/toolbar/new.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemNew->SetBitmap( wxBitmap( wxT("../share/toolbar/new.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuProject->Append( MenuitemNew );
	
	wxMenuItem* MenuitemOpen;
	MenuitemOpen = new wxMenuItem( MenuProject, wxID_OPEN, wxString( _("&Open...") ) , _("Open an existing project"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemOpen->SetBitmaps( wxBitmap( wxT("../share/toolbar/open.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemOpen->SetBitmap( wxBitmap( wxT("../share/toolbar/open.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuProject->Append( MenuitemOpen );
	
	wxMenuItem* MenuitemClose;
	MenuitemClose = new wxMenuItem( MenuProject, wxID_CLOSE, wxString( _("&Close") ) , _("Close the current project"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemClose->SetBitmaps( wxBitmap( wxT("../share/toolbar/close.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemClose->SetBitmap( wxBitmap( wxT("../share/toolbar/close.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuProject->Append( MenuitemClose );
	
	wxMenuItem* SeparatorProject;
	SeparatorProject = MenuProject->AppendSeparator();
	
	wxMenuItem* MenuitemMakeGameDisk;
	MenuitemMakeGameDisk = new wxMenuItem( MenuProject, ID_MAKE_GAME_DISK, wxString( _("&Make game disk...") ) , _("Compress game data and create a distributable file"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemMakeGameDisk->SetBitmaps( wxBitmap( wxT("../share/toolbar/makegamedisk.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemMakeGameDisk->SetBitmap( wxBitmap( wxT("../share/toolbar/makegamedisk.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuProject->Append( MenuitemMakeGameDisk );
	
	wxMenuItem* SeparatorProject2;
	SeparatorProject2 = MenuProject->AppendSeparator();
	
	wxMenuItem* MenuitemExit;
	MenuitemExit = new wxMenuItem( MenuProject, wxID_EXIT, wxString( _("&Exit") ) , _("Exit EasyRPG"), wxITEM_NORMAL );
	MenuProject->Append( MenuitemExit );
	
	frmEditorMenubar->Append( MenuProject, _("&Project") );
	
	MenuMap = new wxMenu();
	wxMenuItem* MenuitemSave;
	MenuitemSave = new wxMenuItem( MenuMap, wxID_SAVE, wxString( _("&Save") ) + wxT('\t') + wxT("Ctrl+S"), _("Save all changes in the project maps"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemSave->SetBitmaps( wxBitmap( wxT("../share/toolbar/save.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemSave->SetBitmap( wxBitmap( wxT("../share/toolbar/save.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuMap->Append( MenuitemSave );
	
	wxMenuItem* MenuitemRevert;
	MenuitemRevert = new wxMenuItem( MenuMap, wxID_REVERT, wxString( _("&Revert") ) + wxT('\t') + wxT("Ctrl+R"), _("Discard all changes and reload the saved project maps"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemRevert->SetBitmaps( wxBitmap( wxT("../share/toolbar/revert.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemRevert->SetBitmap( wxBitmap( wxT("../share/toolbar/revert.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuMap->Append( MenuitemRevert );
	
	wxMenuItem* SeparatorMap;
	SeparatorMap = MenuMap->AppendSeparator();
	
	MenuEdit = new wxMenu();
	wxMenuItem* MenuitemLowerLayer;
	MenuitemLowerLayer = new wxMenuItem( MenuEdit, ID_LOWER_LAYER, wxString( _("&Lower layer") ) + wxT('\t') + wxT("F5"), _("Switch to the lower layer map editing mode"), wxITEM_RADIO );
	MenuEdit->Append( MenuitemLowerLayer );
	
	wxMenuItem* MenuitemUpperLayer;
	MenuitemUpperLayer = new wxMenuItem( MenuEdit, ID_UPPER_LAYER, wxString( _("&Upper layer") ) + wxT('\t') + wxT("F6"), _("Switch to the upper layer map editing mode"), wxITEM_RADIO );
	MenuEdit->Append( MenuitemUpperLayer );
	
	wxMenuItem* MenuitemEvents;
	MenuitemEvents = new wxMenuItem( MenuEdit, ID_EVENTS, wxString( _("&Events") ) + wxT('\t') + wxT("F7"), _("Switch to the event layer map editing mode"), wxITEM_RADIO );
	MenuEdit->Append( MenuitemEvents );
	
	MenuMap->Append( -1, _("&Edit"), MenuEdit );
	
	MenuScale = new wxMenu();
	wxMenuItem* MenuitemScale11;
	MenuitemScale11 = new wxMenuItem( MenuScale, wxID_ZOOM_100, wxString( _("1:&1") ) , _("Display the map in 1:1 scale"), wxITEM_RADIO );
	MenuScale->Append( MenuitemScale11 );
	
	wxMenuItem* MenuitemScale12;
	MenuitemScale12 = new wxMenuItem( MenuScale, SCALE_12, wxString( _("1:&2") ) , _("Display the map in 1:2 scale"), wxITEM_RADIO );
	MenuScale->Append( MenuitemScale12 );
	
	wxMenuItem* MenuitemScale14;
	MenuitemScale14 = new wxMenuItem( MenuScale, SCALE_14, wxString( _("1:&4") ) , _("Display the map in 1:4 scale"), wxITEM_RADIO );
	MenuScale->Append( MenuitemScale14 );
	
	wxMenuItem* MenuitemScale18;
	MenuitemScale18 = new wxMenuItem( MenuScale, SCALE_18, wxString( _("1:&8") ) , _("Display the map in 1:8 scale"), wxITEM_RADIO );
	MenuScale->Append( MenuitemScale18 );
	
	MenuMap->Append( -1, _("&Scale"), MenuScale );
	
	frmEditorMenubar->Append( MenuMap, _("&Map") );
	
	MenuTools = new wxMenu();
	wxMenuItem* MenuitemDatabase;
	MenuitemDatabase = new wxMenuItem( MenuTools, ID_DATABASE, wxString( _("&Database") ) + wxT('\t') + wxT("F8"), _("Open the project database editor window"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemDatabase->SetBitmaps( wxBitmap( wxT("../share/toolbar/database.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemDatabase->SetBitmap( wxBitmap( wxT("../share/toolbar/database.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuTools->Append( MenuitemDatabase );
	
	wxMenuItem* MenuitemMaterial;
	MenuitemMaterial = new wxMenuItem( MenuTools, ID_MATERIAL, wxString( _("&Material manager") ) , _("Add or remove material from the project"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemMaterial->SetBitmaps( wxBitmap( wxT("../share/toolbar/material.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemMaterial->SetBitmap( wxBitmap( wxT("../share/toolbar/material.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuTools->Append( MenuitemMaterial );
	
	wxMenuItem* MenuitemMusic;
	MenuitemMusic = new wxMenuItem( MenuTools, ID_MUSIC, wxString( _("Music &player") ) , _("Play background music while editing"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemMusic->SetBitmaps( wxBitmap( wxT("../share/toolbar/music.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemMusic->SetBitmap( wxBitmap( wxT("../share/toolbar/music.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuTools->Append( MenuitemMusic );
	
	frmEditorMenubar->Append( MenuTools, _("&Tools") );
	
	MenuGame = new wxMenu();
	wxMenuItem* MenuitemPlayTest;
	MenuitemPlayTest = new wxMenuItem( MenuGame, ID_PLAY_TEST, wxString( _("&Play test") ) + wxT('\t') + wxT("F9"), _("Launch the game project for testing"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemPlayTest->SetBitmaps( wxBitmap( wxT("../share/toolbar/playtest.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemPlayTest->SetBitmap( wxBitmap( wxT("../share/toolbar/playtest.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuGame->Append( MenuitemPlayTest );
	
	wxMenuItem* SeparatorGame;
	SeparatorGame = MenuGame->AppendSeparator();
	
	wxMenuItem* MenuitemFullScreen;
	MenuitemFullScreen = new wxMenuItem( MenuGame, ID_FULL_SCREEN, wxString( _("&Full screen") ) , _("Enable or disable full screen in play test"), wxITEM_CHECK );
	MenuGame->Append( MenuitemFullScreen );
	
	wxMenuItem* MenuitemShowTitle;
	MenuitemShowTitle = new wxMenuItem( MenuGame, ID_SHOW_TITLE, wxString( _("&Show title") ) , _("Enable or disable background and music in the title in play test"), wxITEM_CHECK );
	MenuGame->Append( MenuitemShowTitle );
	
	frmEditorMenubar->Append( MenuGame, _("&Game") );
	
	MenuHelp = new wxMenu();
	wxMenuItem* MenuitemHelp;
	MenuitemHelp = new wxMenuItem( MenuHelp, wxID_HELP, wxString( _("&Index") ) + wxT('\t') + wxT("F1"), _("Display the help index and contents of EasyRPG"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemHelp->SetBitmaps( wxBitmap( wxT("../share/toolbar/help.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemHelp->SetBitmap( wxBitmap( wxT("../share/toolbar/help.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuHelp->Append( MenuitemHelp );
	
	wxMenuItem* SeparatorHelp;
	SeparatorHelp = MenuHelp->AppendSeparator();
	
	wxMenuItem* MenuitemAbout;
	MenuitemAbout = new wxMenuItem( MenuHelp, wxID_ABOUT, wxString( _("&About") ) , _("About EasyRPG Editor"), wxITEM_NORMAL );
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
	frmEditorToolbar->AddTool( ID_SCALE_12, _("1:2"), wxBitmap( wxT("../share/toolbar/12scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:2 scale"), _("Display the map in 1:2 scale") );
	frmEditorToolbar->AddTool( ID_SCALE_14, _("1:4"), wxBitmap( wxT("../share/toolbar/14scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:4 scale"), _("Display the map in 1:4 scale") );
	frmEditorToolbar->AddTool( ID_SCALE_18, _("1:8"), wxBitmap( wxT("../share/toolbar/18scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:8 scale"), _("Display the map in 1:8 scale") );
	frmEditorToolbar->AddSeparator();
	frmEditorToolbar->AddTool( ID_DATABASE, _("Database"), wxBitmap( wxT("../share/toolbar/database.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Database editor"), _("Open the project database editor window") );
	frmEditorToolbar->AddTool( ID_MATERIAL, _("Material"), wxBitmap( wxT("../share/toolbar/material.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Material manager"), _("Add or remove material from the project") );
	frmEditorToolbar->AddTool( ID_MUSIC, _("Music"), wxBitmap( wxT("../share/toolbar/music.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Music player"), _("Play background music while editing") );
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
	frmEditorToolbar2->AddTool( ID_SELECT, _("Select"), wxBitmap( wxT("../share/toolbar/select.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Selection tool"), _("Select a map region by a rectangle selector") );
	frmEditorToolbar2->AddTool( wxID_ZOOM_FIT, _("Zoom"), wxBitmap( wxT("../share/toolbar/zoom.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Zoom tool"), _("Zoom in or out by left or right mouse click") );
	frmEditorToolbar2->AddTool( ID_PEN, _("Pen"), wxBitmap( wxT("../share/toolbar/pen.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Pen draw tool"), _("Draw on the map freely by hand") );
	frmEditorToolbar2->AddTool( ID_RECTANGLE, _("Rectangle"), wxBitmap( wxT("../share/toolbar/rectangle.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Rectangle draw tool"), _("Draw a rectangle on the map") );
	frmEditorToolbar2->AddTool( ID_CIRCLE, _("Circle"), wxBitmap( wxT("../share/toolbar/circle.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Circle draw tool"), _("Draw a circle on the map") );
	frmEditorToolbar2->AddTool( ID_FILL, _("Fill"), wxBitmap( wxT("../share/toolbar/fill.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Flood fill draw tool"), _("Draw tiles with same tile type on the map") );
	frmEditorToolbar2->Realize();
	
	szEditorLeft->Add( frmEditorToolbar2, 0, wxEXPAND, 5 );
	
	swEditor = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_BORDER|wxSP_LIVE_UPDATE );
	swEditor->SetSashGravity( 1 );
	swEditor->SetMinimumPaneSize( 96 );
	swEditor->Connect( wxEVT_IDLE, wxIdleEventHandler( frmEditor_Base::swEditorOnIdle ), NULL, this );
	pnEditorTileset = new wxScrolledWindow( swEditor, wxID_ANY, wxDefaultPosition, wxSize( 217, -1 ), wxHSCROLL|wxVSCROLL );
	pnEditorTileset->SetScrollRate( 16, 16 );
	pnEditorTileset->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	
	pnEditorMapTree = new wxPanel( swEditor, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szMapTree;
	szMapTree = new wxBoxSizer( wxHORIZONTAL );
	
	tcMapTree = new wxTreeCtrl( pnEditorMapTree, wxID_ANY, wxDefaultPosition, wxSize( 212,96 ), wxTR_HAS_BUTTONS|wxTR_NO_LINES|wxTR_DEFAULT_STYLE|wxSUNKEN_BORDER );
	szMapTree->Add( tcMapTree, 0, wxEXPAND, 0 );
	
	pnEditorMapTree->SetSizer( szMapTree );
	pnEditorMapTree->Layout();
	szMapTree->Fit( pnEditorMapTree );
	swEditor->SplitHorizontally( pnEditorTileset, pnEditorMapTree, 0 );
	szEditorLeft->Add( swEditor, 1, wxEXPAND, 0 );
	
	szEditor->Add( szEditorLeft, 0, wxEXPAND, 0 );
	
	pnEditorMap = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	pnEditorMap->SetScrollRate( 5, 5 );
	pnEditorMap->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	
	szEditor->Add( pnEditorMap, 1, wxEXPAND, 0 );
	
	this->SetSizer( szEditor );
	this->Layout();
	
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
	this->Connect( MenuitemMaterial->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Material_click ) );
	this->Connect( MenuitemMusic->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Music_click ) );
	this->Connect( MenuitemPlayTest->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::PlayTest_click ) );
	this->Connect( MenuitemFullScreen->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::FullScreen_click ) );
	this->Connect( MenuitemShowTitle->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::ShowTitle_click ) );
	this->Connect( MenuitemHelp->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Help_click ) );
	this->Connect( MenuitemAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::About_click ) );
	this->Connect( wxID_NEW, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::New_Click ) );
	this->Connect( wxID_OPEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Open_click ) );
	this->Connect( wxID_CLOSE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Close_click ) );
	this->Connect( ID_MAKE_GAME_DISK, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::MakeGameDisk_click ) );
	this->Connect( wxID_SAVE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Save_click ) );
	this->Connect( wxID_REVERT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Revert_click ) );
	this->Connect( ID_LOWER_LAYER, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::LowerLayer_click ) );
	this->Connect( ID_UPPER_LAYER, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::UpperLayer_click ) );
	this->Connect( ID_EVENTS, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Events_click ) );
	this->Connect( wxID_ZOOM_100, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Scale11_click ) );
	this->Connect( ID_SCALE_12, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Scale12_click ) );
	this->Connect( ID_SCALE_14, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Scale14_click ) );
	this->Connect( ID_SCALE_18, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Scale18_click ) );
	this->Connect( ID_DATABASE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Database_click ) );
	this->Connect( ID_MATERIAL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Material_click ) );
	this->Connect( ID_MUSIC, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Music_click ) );
	this->Connect( ID_PLAY_TEST, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::PlayTest_click ) );
	this->Connect( ID_FULL_SCREEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::FullScreen_click ) );
	this->Connect( ID_SHOW_TITLE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::ShowTitle_click ) );
	this->Connect( wxID_HELP, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Help_click ) );
	this->Connect( wxID_UNDO, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Undo_click ) );
	this->Connect( ID_SELECT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Select_click ) );
	this->Connect( wxID_ZOOM_FIT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Zoom_click ) );
	this->Connect( ID_PEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Pen_click ) );
	this->Connect( ID_RECTANGLE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Rectangle_click ) );
	this->Connect( ID_CIRCLE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Circle_click ) );
	this->Connect( ID_FILL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Fill_click ) );
	tcMapTree->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( frmEditor_Base::MapTree_menu_click ), NULL, this );
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
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Material_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Music_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::PlayTest_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::FullScreen_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::ShowTitle_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Help_click ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::About_click ) );
	this->Disconnect( wxID_NEW, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::New_Click ) );
	this->Disconnect( wxID_OPEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Open_click ) );
	this->Disconnect( wxID_CLOSE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Close_click ) );
	this->Disconnect( ID_MAKE_GAME_DISK, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::MakeGameDisk_click ) );
	this->Disconnect( wxID_SAVE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Save_click ) );
	this->Disconnect( wxID_REVERT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Revert_click ) );
	this->Disconnect( ID_LOWER_LAYER, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::LowerLayer_click ) );
	this->Disconnect( ID_UPPER_LAYER, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::UpperLayer_click ) );
	this->Disconnect( ID_EVENTS, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Events_click ) );
	this->Disconnect( wxID_ZOOM_100, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Scale11_click ) );
	this->Disconnect( ID_SCALE_12, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Scale12_click ) );
	this->Disconnect( ID_SCALE_14, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Scale14_click ) );
	this->Disconnect( ID_SCALE_18, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Scale18_click ) );
	this->Disconnect( ID_DATABASE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Database_click ) );
	this->Disconnect( ID_MATERIAL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Material_click ) );
	this->Disconnect( ID_MUSIC, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Music_click ) );
	this->Disconnect( ID_PLAY_TEST, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::PlayTest_click ) );
	this->Disconnect( ID_FULL_SCREEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::FullScreen_click ) );
	this->Disconnect( ID_SHOW_TITLE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::ShowTitle_click ) );
	this->Disconnect( wxID_HELP, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Help_click ) );
	this->Disconnect( wxID_UNDO, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Undo_click ) );
	this->Disconnect( ID_SELECT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Select_click ) );
	this->Disconnect( wxID_ZOOM_FIT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Zoom_click ) );
	this->Disconnect( ID_PEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Pen_click ) );
	this->Disconnect( ID_RECTANGLE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Rectangle_click ) );
	this->Disconnect( ID_CIRCLE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Circle_click ) );
	this->Disconnect( ID_FILL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Fill_click ) );
	tcMapTree->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( frmEditor_Base::MapTree_menu_click ), NULL, this );
}

dlgMap_Base::dlgMap_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szMap;
	szMap = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szMapTop;
	szMapTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szMapTopLeft;
	szMapTopLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szName;
	szName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szName->Add( tcName, 1, 0, 0 );
	
	szMapTopLeft->Add( szName, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szGraphics;
	szGraphics = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Graphics") ), wxHORIZONTAL );
	
	wxArrayString chGraphicsChoices;
	chGraphics = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chGraphicsChoices, 0 );
	chGraphics->SetSelection( 0 );
	szGraphics->Add( chGraphics, 1, 0, 0 );
	
	szMapTopLeft->Add( szGraphics, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSize;
	szSize = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Size") ), wxHORIZONTAL );
	
	spinSizeWidth = new wxSpinCtrl( this, wxID_ANY, wxT("20"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 20,  500, 20 );
	szSize->Add( spinSizeWidth, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stSize = new wxStaticText( this, wxID_ANY, _("X"), wxDefaultPosition, wxDefaultSize, 0 );
	stSize->Wrap( -1 );
	szSize->Add( stSize, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinSizeHeight = new wxSpinCtrl( this, wxID_ANY, wxT("15"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 15,  500, 15 );
	szSize->Add( spinSizeHeight, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMapTopLeft->Add( szSize, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szLoopTime;
	szLoopTime = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Loop time") ), wxHORIZONTAL );
	
	wxArrayString chLoopTimeChoices;
	chLoopTime = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chLoopTimeChoices, 0 );
	chLoopTime->SetSelection( 0 );
	szLoopTime->Add( chLoopTime, 1, 0, 0 );
	
	szMapTopLeft->Add( szLoopTime, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTroopEncounters;
	szTroopEncounters = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Troop encounters") ), wxVERTICAL );
	
	lcTroopEncounters = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), wxLC_REPORT|wxSUNKEN_BORDER );
	szTroopEncounters->Add( lcTroopEncounters, 1, wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szEncounterSteps;
	szEncounterSteps = new wxBoxSizer( wxHORIZONTAL );
	
	stEncounterSteps = new wxStaticText( this, wxID_ANY, _("Encounter steps"), wxDefaultPosition, wxDefaultSize, 0 );
	stEncounterSteps->Wrap( -1 );
	szEncounterSteps->Add( stEncounterSteps, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinEncounterSteps = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 25 );
	szEncounterSteps->Add( spinEncounterSteps, 1, wxLEFT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTroopEncounters->Add( szEncounterSteps, 0, wxEXPAND, 0 );
	
	szMapTopLeft->Add( szTroopEncounters, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szMapTop->Add( szMapTopLeft, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szTopRight;
	szTopRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szPanorama;
	szPanorama = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Panorama") ), wxVERTICAL );
	
	chbPanorama = new wxCheckBox( this, wxID_ANY, _("Use panorama"), wxDefaultPosition, wxDefaultSize, 0 );
	chbPanorama->SetValue(true); 
	szPanorama->Add( chbPanorama, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szUsePanorama;
	szUsePanorama = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szPanoramaGraphic;
	szPanoramaGraphic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Panorama graphic") ), wxVERTICAL );
	
	bmpPanoramaGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 120 ), wxSUNKEN_BORDER );
	szPanoramaGraphic->Add( bmpPanoramaGraphic, 0, wxBOTTOM, 1 );
	
	btnPanoramaGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPanoramaGraphic->SetDefault(); 
	szPanoramaGraphic->Add( btnPanoramaGraphic, 0, wxTOP|wxALIGN_RIGHT, 1 );
	
	szUsePanorama->Add( szPanoramaGraphic, 0, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szParallaxOptions;
	szParallaxOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Parallax options") ), wxVERTICAL );
	
	
	szParallaxOptions->Add( 0,  0, 1, wxEXPAND, 0 );
	
	chbParallaxHorizontal = new wxCheckBox( this, wxID_ANY, _("Horizontal"), wxDefaultPosition, wxDefaultSize, 0 );
	chbParallaxHorizontal->SetValue(true); 
	szParallaxOptions->Add( chbParallaxHorizontal, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szParallaxHorizontalAutomatic;
	szParallaxHorizontalAutomatic = new wxBoxSizer( wxHORIZONTAL );
	
	
	szParallaxHorizontalAutomatic->Add( 15,  15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbParallaxHorizontalAutomatic = new wxCheckBox( this, wxID_ANY, _("Automatic"), wxDefaultPosition, wxDefaultSize, 0 );
	chbParallaxHorizontalAutomatic->SetValue(true); 
	szParallaxHorizontalAutomatic->Add( chbParallaxHorizontalAutomatic, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szParallaxOptions->Add( szParallaxHorizontalAutomatic, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szParallaxHorizontalSpeed;
	szParallaxHorizontalSpeed = new wxBoxSizer( wxHORIZONTAL );
	
	stParallaxHorizontalSpeed = new wxStaticText( this, wxID_ANY, _("Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	stParallaxHorizontalSpeed->Wrap( -1 );
	szParallaxHorizontalSpeed->Add( stParallaxHorizontalSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinParallaxHorizontalSpeed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 1 );
	szParallaxHorizontalSpeed->Add( spinParallaxHorizontalSpeed, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szParallaxOptions->Add( szParallaxHorizontalSpeed, 0, wxEXPAND, 0 );
	
	
	szParallaxOptions->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szParallaxSeparator = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	szParallaxOptions->Add( szParallaxSeparator, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	
	szParallaxOptions->Add( 0,  0, 1, wxEXPAND, 0 );
	
	chbParallaxVertical = new wxCheckBox( this, wxID_ANY, _("Vertical"), wxDefaultPosition, wxDefaultSize, 0 );
	chbParallaxVertical->SetValue(true); 
	szParallaxOptions->Add( chbParallaxVertical, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szParallaxVerticalAutomatic;
	szParallaxVerticalAutomatic = new wxBoxSizer( wxHORIZONTAL );
	
	
	szParallaxVerticalAutomatic->Add( 15,  15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbParallaxVerticalAutomatic = new wxCheckBox( this, wxID_ANY, _("Automatic"), wxDefaultPosition, wxDefaultSize, 0 );
	chbParallaxVerticalAutomatic->SetValue(true); 
	szParallaxVerticalAutomatic->Add( chbParallaxVerticalAutomatic, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szParallaxOptions->Add( szParallaxVerticalAutomatic, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szParallaxVerticalSpeed;
	szParallaxVerticalSpeed = new wxBoxSizer( wxHORIZONTAL );
	
	stParallaxVerticalSpeed = new wxStaticText( this, wxID_ANY, _("Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	stParallaxVerticalSpeed->Wrap( -1 );
	szParallaxVerticalSpeed->Add( stParallaxVerticalSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinParallaxVerticalSpeed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 1 );
	szParallaxVerticalSpeed->Add( spinParallaxVerticalSpeed, 1, wxLEFT|wxTOP, 1 );
	
	szParallaxOptions->Add( szParallaxVerticalSpeed, 0, wxEXPAND, 0 );
	
	
	szParallaxOptions->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szUsePanorama->Add( szParallaxOptions, 1, wxLEFT|wxEXPAND, 1 );
	
	szPanorama->Add( szUsePanorama, 0, wxEXPAND, 0 );
	
	szTopRight->Add( szPanorama, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szTopRightMiddle;
	szTopRightMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szMapMusic;
	szMapMusic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Map music") ), wxVERTICAL );
	
	rbtnMapMusicFromParentMap = new wxRadioButton( this, wxID_ANY, _("From parent map"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	rbtnMapMusicFromParentMap->SetValue( true ); 
	szMapMusic->Add( rbtnMapMusicFromParentMap, 0, wxALL|wxEXPAND, 1 );
	
	rbtnMapMusicNone = new wxRadioButton( this, wxID_ANY, _("None"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMapMusicNone->SetValue( true ); 
	szMapMusic->Add( rbtnMapMusicNone, 0, wxALL|wxEXPAND, 1 );
	
	rbtnMapMusicSelect = new wxRadioButton( this, wxID_ANY, _("Select"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMapMusicSelect->SetValue( true ); 
	szMapMusic->Add( rbtnMapMusicSelect, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szMapMusicSelect;
	szMapMusicSelect = new wxBoxSizer( wxHORIZONTAL );
	
	tcMapMusicSelect = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxTE_READONLY );
	szMapMusicSelect->Add( tcMapMusicSelect, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnMapMusicSelect = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( 25, -1 ), 0 );
	btnMapMusicSelect->SetDefault(); 
	szMapMusicSelect->Add( btnMapMusicSelect, 0, 0, 0 );
	
	szMapMusic->Add( szMapMusicSelect, 1, wxEXPAND, 0 );
	
	szTopRightMiddle->Add( szMapMusic, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szBattleBackground;
	szBattleBackground = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Battle background") ), wxVERTICAL );
	
	rbtnBattleBackgroundFromParentMap = new wxRadioButton( this, wxID_ANY, _("From parent map"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	rbtnBattleBackgroundFromParentMap->SetValue( true ); 
	szBattleBackground->Add( rbtnBattleBackgroundFromParentMap, 0, wxALL|wxEXPAND, 1 );
	
	rbtnBattleBackgroundFromTerrain = new wxRadioButton( this, wxID_ANY, _("From terrain"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnBattleBackgroundFromTerrain->SetValue( true ); 
	szBattleBackground->Add( rbtnBattleBackgroundFromTerrain, 0, wxALL|wxEXPAND, 1 );
	
	rbtnBattleBackgroundSelect = new wxRadioButton( this, wxID_ANY, _("Select"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnBattleBackgroundSelect->SetValue( true ); 
	szBattleBackground->Add( rbtnBattleBackgroundSelect, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szBattleBackgroundSelect;
	szBattleBackgroundSelect = new wxBoxSizer( wxHORIZONTAL );
	
	tcBattleBackgroundSelect = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxTE_READONLY );
	szBattleBackgroundSelect->Add( tcBattleBackgroundSelect, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnBattleBackgroundSelect = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( 25, -1 ), 0 );
	btnBattleBackgroundSelect->SetDefault(); 
	szBattleBackgroundSelect->Add( btnBattleBackgroundSelect, 0, 0, 0 );
	
	szBattleBackground->Add( szBattleBackgroundSelect, 1, wxEXPAND, 0 );
	
	szTopRightMiddle->Add( szBattleBackground, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szTopRight->Add( szTopRightMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szTopRightBottom;
	szTopRightBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbTeleportChoices[] = { _("From parent map"), _("Allowed"), _("Disallowed") };
	int rbTeleportNChoices = sizeof( rbTeleportChoices ) / sizeof( wxString );
	rbTeleport = new wxRadioBox( this, wxID_ANY, _("Teleport"), wxDefaultPosition, wxDefaultSize, rbTeleportNChoices, rbTeleportChoices, 1, wxRA_SPECIFY_COLS );
	rbTeleport->SetSelection( 0 );
	szTopRightBottom->Add( rbTeleport, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	wxString rbEscapeChoices[] = { _("From parent map"), _("Allowed"), _("Disallowed") };
	int rbEscapeNChoices = sizeof( rbEscapeChoices ) / sizeof( wxString );
	rbEscape = new wxRadioBox( this, wxID_ANY, _("Escape"), wxDefaultPosition, wxDefaultSize, rbEscapeNChoices, rbEscapeChoices, 1, wxRA_SPECIFY_COLS );
	rbEscape->SetSelection( 0 );
	szTopRightBottom->Add( rbEscape, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	wxString rbSaveChoices[] = { _("From parent map"), _("Allowed"), _("Disallowed") };
	int rbSaveNChoices = sizeof( rbSaveChoices ) / sizeof( wxString );
	rbSave = new wxRadioBox( this, wxID_ANY, _("Save"), wxDefaultPosition, wxDefaultSize, rbSaveNChoices, rbSaveChoices, 1, wxRA_SPECIFY_COLS );
	rbSave->SetSelection( 0 );
	szTopRightBottom->Add( rbSave, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	szTopRight->Add( szTopRightBottom, 0, wxEXPAND, 0 );
	
	szMapTop->Add( szTopRight, 0, wxEXPAND, 0 );
	
	szMap->Add( szMapTop, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	szBottom->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	szBottom->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	szBottom->Add( wxID_HELP, 0, wxALL, 1 );
	
	szMap->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szMap );
	this->Layout();
	szMap->Fit( this );
	
	// Connect Events
	wxID_OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::OK_click ), NULL, this );
	wxID_CANCEL->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::Cancel_click ), NULL, this );
	wxID_HELP->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::Help_click ), NULL, this );
}

dlgMap_Base::~dlgMap_Base()
{
	// Disconnect Events
	wxID_OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::OK_click ), NULL, this );
	wxID_CANCEL->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::Cancel_click ), NULL, this );
	wxID_HELP->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::Help_click ), NULL, this );
}

dlgMaterial_Base::dlgMaterial_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szMaterial;
	szMaterial = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szMaterialTop;
	szMaterialTop = new wxBoxSizer( wxHORIZONTAL );
	
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
	szMaterialTop->Add( listFolders, 1, wxALL|wxEXPAND, 1 );
	
	listFiles = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	szMaterialTop->Add( listFiles, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szMaterialTopRight;
	szMaterialTopRight = new wxBoxSizer( wxVERTICAL );
	
	btnImport = new wxButton( this, wxID_ANY, _("Import..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnImport->SetDefault(); 
	szMaterialTopRight->Add( btnImport, 0, wxALL|wxEXPAND, 1 );
	
	btnExport = new wxButton( this, wxID_ANY, _("Export..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnExport->SetDefault(); 
	szMaterialTopRight->Add( btnExport, 0, wxALL|wxEXPAND, 1 );
	
	btnDelete = new wxButton( this, wxID_ANY, _("Delete..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnDelete->SetDefault(); 
	szMaterialTopRight->Add( btnDelete, 0, wxALL|wxEXPAND, 1 );
	
	
	szMaterialTopRight->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxString rbImportAsChoices[] = { _("PNG"), _("XYZ") };
	int rbImportAsNChoices = sizeof( rbImportAsChoices ) / sizeof( wxString );
	rbImportAs = new wxRadioBox( this, wxID_ANY, _("Import as"), wxDefaultPosition, wxDefaultSize, rbImportAsNChoices, rbImportAsChoices, 1, wxRA_SPECIFY_COLS );
	rbImportAs->SetSelection( 0 );
	szMaterialTopRight->Add( rbImportAs, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szMaterialTop->Add( szMaterialTopRight, 0, wxEXPAND, 0 );
	
	szMaterial->Add( szMaterialTop, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szMaterialBottom;
	szMaterialBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_CLOSE = new wxButton( this, wxID_ANY, _("&Close"), wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CLOSE->SetDefault(); 
	szMaterialBottom->Add( wxID_CLOSE, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	szMaterialBottom->Add( wxID_HELP, 0, wxALL, 1 );
	
	szMaterial->Add( szMaterialBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szMaterial );
	this->Layout();
	szMaterial->Fit( this );
	
	// Connect Events
	listFolders->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::Folder_selected ), NULL, this );
	listFiles->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::File_selected ), NULL, this );
	btnImport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::Import_click ), NULL, this );
	btnExport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::Export_click ), NULL, this );
	btnDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::Delete_click ), NULL, this );
	rbImportAs->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::ImportAs_selected ), NULL, this );
	wxID_CLOSE->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::Close_click ), NULL, this );
	wxID_HELP->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::Help_click ), NULL, this );
}

dlgMaterial_Base::~dlgMaterial_Base()
{
	// Disconnect Events
	listFolders->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::Folder_selected ), NULL, this );
	listFiles->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::File_selected ), NULL, this );
	btnImport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::Import_click ), NULL, this );
	btnExport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::Export_click ), NULL, this );
	btnDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::Delete_click ), NULL, this );
	rbImportAs->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::ImportAs_selected ), NULL, this );
	wxID_CLOSE->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::Close_click ), NULL, this );
	wxID_HELP->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::Help_click ), NULL, this );
}
