///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
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
	MenuitemNew->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/new.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemNew->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/new.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuProject->Append( MenuitemNew );
	
	wxMenuItem* MenuitemOpen;
	MenuitemOpen = new wxMenuItem( MenuProject, wxID_OPEN, wxString( _("&Open...") ) , _("Open an existing project"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemOpen->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/open.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemOpen->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/open.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuProject->Append( MenuitemOpen );
	
	wxMenuItem* MenuitemClose;
	MenuitemClose = new wxMenuItem( MenuProject, wxID_CLOSE, wxString( _("&Close") ) , _("Close the current project"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemClose->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/close.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemClose->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/close.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuProject->Append( MenuitemClose );
	MenuitemClose->Enable( false );
	
	wxMenuItem* SeparatorProject;
	SeparatorProject = MenuProject->AppendSeparator();
	
	wxMenuItem* MenuitemPack;
	MenuitemPack = new wxMenuItem( MenuProject, ID_PACK, wxString( _("&Make game disk...") ) , _("Compress game data and create a distributable file"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemPack->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/makegamedisk.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemPack->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/makegamedisk.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuProject->Append( MenuitemPack );
	MenuitemPack->Enable( false );
	
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
	MenuitemSave->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/save.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemSave->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/save.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuMap->Append( MenuitemSave );
	MenuitemSave->Enable( false );
	
	wxMenuItem* MenuitemRevert;
	MenuitemRevert = new wxMenuItem( MenuMap, wxID_REVERT, wxString( _("&Revert") ) + wxT('\t') + wxT("Ctrl+R"), _("Discard all changes and reload the saved project maps"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemRevert->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/revert.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemRevert->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/revert.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuMap->Append( MenuitemRevert );
	MenuitemRevert->Enable( false );
	
	wxMenuItem* SeparatorMap;
	SeparatorMap = MenuMap->AppendSeparator();
	
	MenuEdit = new wxMenu();
	wxMenuItem* MenuitemLowerLayer;
	MenuitemLowerLayer = new wxMenuItem( MenuEdit, ID_LOWER_LAYER, wxString( _("&Lower layer") ) + wxT('\t') + wxT("F5"), _("Switch to the lower layer map editing mode"), wxITEM_RADIO );
	MenuEdit->Append( MenuitemLowerLayer );
	MenuitemLowerLayer->Enable( false );
	
	wxMenuItem* MenuitemUpperLayer;
	MenuitemUpperLayer = new wxMenuItem( MenuEdit, ID_UPPER_LAYER, wxString( _("&Upper layer") ) + wxT('\t') + wxT("F6"), _("Switch to the upper layer map editing mode"), wxITEM_RADIO );
	MenuEdit->Append( MenuitemUpperLayer );
	MenuitemUpperLayer->Enable( false );
	
	wxMenuItem* MenuitemEvents;
	MenuitemEvents = new wxMenuItem( MenuEdit, ID_EVENTS, wxString( _("&Events") ) + wxT('\t') + wxT("F7"), _("Switch to the event layer map editing mode"), wxITEM_RADIO );
	MenuEdit->Append( MenuitemEvents );
	MenuitemEvents->Enable( false );
	
	MenuMap->Append( -1, _("&Edit"), MenuEdit );
	
	MenuScale = new wxMenu();
	wxMenuItem* MenuitemScale11;
	MenuitemScale11 = new wxMenuItem( MenuScale, wxID_ZOOM_100, wxString( _("1:&1") ) , _("Display the map in 1:1 scale"), wxITEM_RADIO );
	MenuScale->Append( MenuitemScale11 );
	MenuitemScale11->Enable( false );
	
	wxMenuItem* MenuitemScale12;
	MenuitemScale12 = new wxMenuItem( MenuScale, SCALE_12, wxString( _("1:&2") ) , _("Display the map in 1:2 scale"), wxITEM_RADIO );
	MenuScale->Append( MenuitemScale12 );
	MenuitemScale12->Enable( false );
	
	wxMenuItem* MenuitemScale14;
	MenuitemScale14 = new wxMenuItem( MenuScale, SCALE_14, wxString( _("1:&4") ) , _("Display the map in 1:4 scale"), wxITEM_RADIO );
	MenuScale->Append( MenuitemScale14 );
	MenuitemScale14->Enable( false );
	
	wxMenuItem* MenuitemScale18;
	MenuitemScale18 = new wxMenuItem( MenuScale, SCALE_18, wxString( _("1:&8") ) , _("Display the map in 1:8 scale"), wxITEM_RADIO );
	MenuScale->Append( MenuitemScale18 );
	MenuitemScale18->Enable( false );
	
	MenuMap->Append( -1, _("&Scale"), MenuScale );
	
	frmEditorMenubar->Append( MenuMap, _("&Map") ); 
	
	MenuTools = new wxMenu();
	wxMenuItem* MenuitemDatabase;
	MenuitemDatabase = new wxMenuItem( MenuTools, ID_DATABASE, wxString( _("&Database") ) + wxT('\t') + wxT("F8"), _("Open the project database editor window"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemDatabase->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/database.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemDatabase->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/database.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuTools->Append( MenuitemDatabase );
	MenuitemDatabase->Enable( false );
	
	wxMenuItem* MenuitemMaterial;
	MenuitemMaterial = new wxMenuItem( MenuTools, ID_MATERIAL, wxString( _("&Material manager") ) , _("Add or remove material from the project"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemMaterial->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/material.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemMaterial->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/material.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuTools->Append( MenuitemMaterial );
	MenuitemMaterial->Enable( false );
	
	wxMenuItem* MenuitemMusic;
	MenuitemMusic = new wxMenuItem( MenuTools, ID_MUSIC, wxString( _("Music &player") ) , _("Play background music while editing"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemMusic->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/music.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemMusic->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/music.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuTools->Append( MenuitemMusic );
	MenuitemMusic->Enable( false );
	
	frmEditorMenubar->Append( MenuTools, _("&Tools") ); 
	
	MenuGame = new wxMenu();
	wxMenuItem* MenuitemPlayTest;
	MenuitemPlayTest = new wxMenuItem( MenuGame, ID_PLAY_TEST, wxString( _("&Play test") ) + wxT('\t') + wxT("F9"), _("Launch the game project for testing"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemPlayTest->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/playtest.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemPlayTest->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/playtest.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuGame->Append( MenuitemPlayTest );
	MenuitemPlayTest->Enable( false );
	
	wxMenuItem* SeparatorGame;
	SeparatorGame = MenuGame->AppendSeparator();
	
	wxMenuItem* MenuitemFullScreen;
	MenuitemFullScreen = new wxMenuItem( MenuGame, ID_FULL_SCREEN, wxString( _("&Full screen") ) , _("Enable or disable full screen in play test"), wxITEM_CHECK );
	MenuGame->Append( MenuitemFullScreen );
	MenuitemFullScreen->Enable( false );
	
	wxMenuItem* MenuitemShowTitle;
	MenuitemShowTitle = new wxMenuItem( MenuGame, ID_SHOW_TITLE, wxString( _("&Show title") ) , _("Enable or disable background and music in the title in play test"), wxITEM_CHECK );
	MenuGame->Append( MenuitemShowTitle );
	MenuitemShowTitle->Enable( false );
	
	frmEditorMenubar->Append( MenuGame, _("&Game") ); 
	
	MenuHelp = new wxMenu();
	wxMenuItem* MenuitemHelp;
	MenuitemHelp = new wxMenuItem( MenuHelp, wxID_HELP, wxString( _("&Index") ) + wxT('\t') + wxT("F1"), _("Display the help index and contents of EasyRPG"), wxITEM_NORMAL );
	#ifdef __WXMSW__
	MenuitemHelp->SetBitmaps( wxBitmap( wxT("../share/easyrpg/editor/toolbar/help.png"), wxBITMAP_TYPE_ANY ) );
	#elif defined( __WXGTK__ )
	MenuitemHelp->SetBitmap( wxBitmap( wxT("../share/easyrpg/editor/toolbar/help.png"), wxBITMAP_TYPE_ANY ) );
	#endif
	MenuHelp->Append( MenuitemHelp );
	
	wxMenuItem* SeparatorHelp;
	SeparatorHelp = MenuHelp->AppendSeparator();
	
	wxMenuItem* MenuitemAbout;
	MenuitemAbout = new wxMenuItem( MenuHelp, wxID_ABOUT, wxString( _("&About") ) , _("About EasyRPG Editor"), wxITEM_NORMAL );
	MenuHelp->Append( MenuitemAbout );
	
	frmEditorMenubar->Append( MenuHelp, _("&Help") ); 
	
	this->SetMenuBar( frmEditorMenubar );
	
	frmEditorStatusbar = this->CreateStatusBar( 3, wxST_SIZEGRIP, wxID_ANY );
	frmEditorToolbar = this->CreateToolBar( wxTB_FLAT, wxID_ANY ); 
	frmEditorToolbar->AddTool( wxID_NEW, _("New"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/new.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("New project"), _("Create a new project"), NULL ); 
	frmEditorToolbar->AddTool( wxID_OPEN, _("Open"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/open.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Open project"), _("Open an existing project"), NULL ); 
	frmEditorToolbar->AddTool( wxID_CLOSE, _("Close"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/close.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Close project"), _("Close the current project"), NULL ); 
	frmEditorToolbar->AddSeparator(); 
	frmEditorToolbar->AddTool( ID_PACK, _("Make game disk"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/makegamedisk.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Make game disk "), _("Make a redistributable package from the current project"), NULL ); 
	frmEditorToolbar->AddSeparator(); 
	frmEditorToolbar->AddTool( wxID_SAVE, _("Save"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/save.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Save map changes"), _("Save all changes in the project maps"), NULL ); 
	frmEditorToolbar->AddTool( wxID_REVERT, _("Revert"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/revert.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Revert map changes"), _("Discard all changes and reload the saved project maps"), NULL ); 
	frmEditorToolbar->AddSeparator(); 
	frmEditorToolbar->AddTool( ID_LOWER_LAYER, _("Lower layer"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/lowerlayer.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Lower layer editing"), _("Switch to the lower layer map editing mode"), NULL ); 
	frmEditorToolbar->AddTool( ID_UPPER_LAYER, _("Upper layer"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/upperlayer.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Upper layer editing"), _("Switch to the upper layer map editing mode"), NULL ); 
	frmEditorToolbar->AddTool( ID_EVENTS, _("Events"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/eventlayer.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Event layer editing"), _("Switch to the event layer map editing mode"), NULL ); 
	frmEditorToolbar->AddSeparator(); 
	frmEditorToolbar->AddTool( wxID_ZOOM_100, _("1:1"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/11scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:1 scale"), _("Display the map in 1:1 scale"), NULL ); 
	frmEditorToolbar->AddTool( ID_SCALE_12, _("1:2"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/12scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:2 scale"), _("Display the map in 1:2 scale"), NULL ); 
	frmEditorToolbar->AddTool( ID_SCALE_14, _("1:4"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/14scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:4 scale"), _("Display the map in 1:4 scale"), NULL ); 
	frmEditorToolbar->AddTool( ID_SCALE_18, _("1:8"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/18scale.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("1:8 scale"), _("Display the map in 1:8 scale"), NULL ); 
	frmEditorToolbar->AddSeparator(); 
	frmEditorToolbar->AddTool( ID_DATABASE, _("Database"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/database.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Database editor"), _("Open the project database editor window"), NULL ); 
	frmEditorToolbar->AddTool( ID_MATERIAL, _("Material"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/material.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Material manager"), _("Add or remove material from the project"), NULL ); 
	frmEditorToolbar->AddTool( ID_MUSIC, _("Music"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/music.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Music player"), _("Play background music while editing"), NULL ); 
	frmEditorToolbar->AddSeparator(); 
	frmEditorToolbar->AddTool( ID_PLAY_TEST, _("Play test"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/playtest.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Play test"), _("Launch the game project for testing"), NULL ); 
	frmEditorToolbar->AddSeparator(); 
	frmEditorToolbar->AddTool( ID_FULL_SCREEN, _("Full screen"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/fullscreen.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_CHECK, _("Full screen"), _("Enable or disable full screen in play test"), NULL ); 
	frmEditorToolbar->AddTool( ID_SHOW_TITLE, _("Title"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/title.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_CHECK, _("Show title"), _("Enable or disable background and music in the title in play test"), NULL ); 
	frmEditorToolbar->AddSeparator(); 
	frmEditorToolbar->AddTool( wxID_HELP, _("Help"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/help.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Help contents"), _("Display the help index and contents of EasyRPG"), NULL ); 
	frmEditorToolbar->Realize(); 
	
	wxBoxSizer* szEditor;
	szEditor = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szEditorLeft;
	szEditorLeft = new wxBoxSizer( wxVERTICAL );
	
	frmEditorToolbar2 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_FLAT ); 
	frmEditorToolbar2->AddTool( wxID_UNDO, _("Undo"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/undo.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, _("Undo the last action"), _("Revert last drawing in the actual map"), NULL ); 
	frmEditorToolbar2->AddSeparator(); 
	frmEditorToolbar2->AddTool( ID_SELECT, _("Select"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/select.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Selection tool"), _("Select a map region by a rectangle selector"), NULL ); 
	frmEditorToolbar2->AddTool( wxID_ZOOM_FIT, _("Zoom"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/zoom.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Zoom tool"), _("Zoom in or out by left or right mouse click"), NULL ); 
	frmEditorToolbar2->AddTool( ID_PEN, _("Pen"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/pen.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Pen draw tool"), _("Draw on the map freely by hand"), NULL ); 
	frmEditorToolbar2->AddTool( ID_RECTANGLE, _("Rectangle"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/rectangle.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Rectangle draw tool"), _("Draw a rectangle on the map"), NULL ); 
	frmEditorToolbar2->AddTool( ID_CIRCLE, _("Circle"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/circle.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Circle draw tool"), _("Draw a circle on the map"), NULL ); 
	frmEditorToolbar2->AddTool( ID_FILL, _("Fill"), wxBitmap( wxT("../share/easyrpg/editor/toolbar/fill.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, _("Flood fill draw tool"), _("Draw tiles with same tile type on the map"), NULL ); 
	frmEditorToolbar2->Realize(); 
	
	szEditorLeft->Add( frmEditorToolbar2, 0, wxEXPAND, 0 );
	
	swEditor = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_LIVE_UPDATE );
	swEditor->SetSashGravity( 1 );
	swEditor->SetMinimumPaneSize( 48 );
	
	pnTileset = new wxScrolledWindow( swEditor, wxID_ANY, wxDefaultPosition, wxSize( 217, -1 ), wxHSCROLL|wxVSCROLL );
	pnTileset->SetScrollRate( 16, 16 );
	pnTileset->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	
	pnMapTree = new wxPanel( swEditor, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szMapTree;
	szMapTree = new wxBoxSizer( wxHORIZONTAL );
	
	tcMapTree = new wxTreeCtrl( pnMapTree, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTR_DEFAULT_STYLE );
	szMapTree->Add( tcMapTree, 1, wxEXPAND, 0 );
	
	pnMapTree->SetSizer( szMapTree );
	pnMapTree->Layout();
	szMapTree->Fit( pnMapTree );
	swEditor->SplitHorizontally( pnTileset, pnMapTree, -1 );
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
	this->Connect( MenuitemPack->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Pack_click ) );
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
	this->Connect( wxID_NEW, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::New_click ) );
	this->Connect( wxID_OPEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Open_click ) );
	this->Connect( wxID_CLOSE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Close_click ) );
	this->Connect( ID_PACK, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Pack_click ) );
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
	tcMapTree->Connect( wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler( frmEditor_Base::tcMapTree_menu ), NULL, this );
	pnEditorMap->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( frmEditor_Base::pnEditorMap_rclick ), NULL, this );
}

frmEditor_Base::~frmEditor_Base()
{
	// Disconnect Events
	this->Disconnect( wxID_NEW, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::New_click ) );
	this->Disconnect( wxID_OPEN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Open_click ) );
	this->Disconnect( wxID_CLOSE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Close_click ) );
	this->Disconnect( ID_PACK, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Pack_click ) );
	this->Disconnect( wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Exit_click ) );
	this->Disconnect( wxID_SAVE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Save_click ) );
	this->Disconnect( wxID_REVERT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Revert_click ) );
	this->Disconnect( ID_LOWER_LAYER, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::LowerLayer_click ) );
	this->Disconnect( ID_UPPER_LAYER, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::UpperLayer_click ) );
	this->Disconnect( ID_EVENTS, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Events_click ) );
	this->Disconnect( wxID_ZOOM_100, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale11_click ) );
	this->Disconnect( SCALE_12, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale12_click ) );
	this->Disconnect( SCALE_14, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale14_click ) );
	this->Disconnect( SCALE_18, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Scale18_click ) );
	this->Disconnect( ID_DATABASE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Database_click ) );
	this->Disconnect( ID_MATERIAL, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Material_click ) );
	this->Disconnect( ID_MUSIC, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Music_click ) );
	this->Disconnect( ID_PLAY_TEST, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::PlayTest_click ) );
	this->Disconnect( ID_FULL_SCREEN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::FullScreen_click ) );
	this->Disconnect( ID_SHOW_TITLE, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::ShowTitle_click ) );
	this->Disconnect( wxID_HELP, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::Help_click ) );
	this->Disconnect( wxID_ABOUT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( frmEditor_Base::About_click ) );
	this->Disconnect( wxID_NEW, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::New_click ) );
	this->Disconnect( wxID_OPEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Open_click ) );
	this->Disconnect( wxID_CLOSE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Close_click ) );
	this->Disconnect( ID_PACK, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( frmEditor_Base::Pack_click ) );
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
	tcMapTree->Disconnect( wxEVT_COMMAND_TREE_ITEM_MENU, wxTreeEventHandler( frmEditor_Base::tcMapTree_menu ), NULL, this );
	pnEditorMap->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( frmEditor_Base::pnEditorMap_rclick ), NULL, this );
	
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
	
	spinSizeWidth = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 20,  500, 20 );
	szSize->Add( spinSizeWidth, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stSize = new wxStaticText( this, wxID_ANY, _("X"), wxDefaultPosition, wxDefaultSize, 0 );
	stSize->Wrap( -1 );
	szSize->Add( stSize, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinSizeHeight = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 15,  500, 15 );
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
	
	spinEncounterSteps = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 25 );
	szEncounterSteps->Add( spinEncounterSteps, 1, wxLEFT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTroopEncounters->Add( szEncounterSteps, 0, wxEXPAND, 0 );
	
	szMapTopLeft->Add( szTroopEncounters, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szMapTop->Add( szMapTopLeft, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szTopRight;
	szTopRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szPanorama;
	szPanorama = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Panorama") ), wxVERTICAL );
	
	chbUsePanorama = new wxCheckBox( this, wxID_ANY, _("Use panorama"), wxDefaultPosition, wxDefaultSize, 0 );
	chbUsePanorama->SetValue(true); 
	szPanorama->Add( chbUsePanorama, 0, wxEXPAND, 0 );
	
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
	
	spinParallaxHorizontalSpeed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 1 );
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
	
	spinParallaxVerticalSpeed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 1 );
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
	
	btnMapMusicSelect = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1,-1 ), wxBU_EXACTFIT );
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
	
	btnBattleBackgroundSelect = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1,-1 ), wxBU_EXACTFIT );
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
	
	btnOk = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOk->SetDefault(); 
	szBottom->Add( btnOk, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szMap->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szMap );
	this->Layout();
	szMap->Fit( this );
	
	// Connect Events
	chbUsePanorama->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( dlgMap_Base::chbUsePanorama_click ), NULL, this );
	bmpPanoramaGraphic->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( dlgMap_Base::bmpPanoramaGraphic_click ), NULL, this );
	btnPanoramaGraphic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::btnPanoramaGraphic_click ), NULL, this );
	btnOk->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::btnOK_click ), NULL, this );
	btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::btnCancel_click ), NULL, this );
	btnHelp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::btnHelp_click ), NULL, this );
}

dlgMap_Base::~dlgMap_Base()
{
	// Disconnect Events
	chbUsePanorama->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( dlgMap_Base::chbUsePanorama_click ), NULL, this );
	bmpPanoramaGraphic->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( dlgMap_Base::bmpPanoramaGraphic_click ), NULL, this );
	btnPanoramaGraphic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::btnPanoramaGraphic_click ), NULL, this );
	btnOk->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::btnOK_click ), NULL, this );
	btnCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::btnCancel_click ), NULL, this );
	btnHelp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMap_Base::btnHelp_click ), NULL, this );
	
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
	
	btnDelete = new wxButton( this, wxID_DELETE, _("Delete..."), wxDefaultPosition, wxDefaultSize, 0 );
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
	
	btnClose = new wxButton( this, wxID_CLOSE, _("&Close"), wxDefaultPosition, wxDefaultSize, 0 );
	btnClose->SetDefault(); 
	szMaterialBottom->Add( btnClose, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szMaterialBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szMaterial->Add( szMaterialBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szMaterial );
	this->Layout();
	szMaterial->Fit( this );
	
	// Connect Events
	listFolders->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::Folder_selected ), NULL, this );
	listFiles->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::File_selected ), NULL, this );
	btnImport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::btnImport_click ), NULL, this );
	btnExport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::btnExport_click ), NULL, this );
	btnDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::btnDelete_click ), NULL, this );
	rbImportAs->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::ImportAs_selected ), NULL, this );
	btnClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::btnClose_click ), NULL, this );
	btnHelp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::btnHelp_click ), NULL, this );
}

dlgMaterial_Base::~dlgMaterial_Base()
{
	// Disconnect Events
	listFolders->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::Folder_selected ), NULL, this );
	listFiles->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::File_selected ), NULL, this );
	btnImport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::btnImport_click ), NULL, this );
	btnExport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::btnExport_click ), NULL, this );
	btnDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::btnDelete_click ), NULL, this );
	rbImportAs->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( dlgMaterial_Base::ImportAs_selected ), NULL, this );
	btnClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::btnClose_click ), NULL, this );
	btnHelp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMaterial_Base::btnHelp_click ), NULL, this );
	
}

dlgNew_Base::dlgNew_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 300,-1 ), wxDefaultSize );
	
	wxBoxSizer* szNew;
	szNew = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szTopLeft;
	szTopLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szFolder;
	szFolder = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Folder") ), wxHORIZONTAL );
	
	tcFolder = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	szFolder->Add( tcFolder, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTopLeft->Add( szFolder, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTitle;
	szTitle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Title") ), wxHORIZONTAL );
	
	tcTitle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	szTitle->Add( tcTitle, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTopLeft->Add( szTitle, 1, wxEXPAND, 0 );
	
	szTop->Add( szTopLeft, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szTopRight;
	szTopRight = new wxBoxSizer( wxVERTICAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szTopRight->Add( btnOK, 0, wxALL, 3 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	szTopRight->Add( btnCancel, 0, wxALL, 3 );
	
	szTop->Add( szTopRight, 0, 0, 0 );
	
	szNew->Add( szTop, 2, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szPath;
	szPath = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Project path") ), wxHORIZONTAL );
	
	tcPath = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	szPath->Add( tcPath, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPath = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1,-1 ), wxBU_EXACTFIT );
	szPath->Add( btnPath, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szNew->Add( szPath, 1, wxEXPAND, 0 );
	
	this->SetSizer( szNew );
	this->Layout();
	szNew->Fit( this );
	
	// Connect Events
	btnOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgNew_Base::btnOK_click ), NULL, this );
	btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgNew_Base::btnCancel_click ), NULL, this );
}

dlgNew_Base::~dlgNew_Base()
{
	// Disconnect Events
	btnOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgNew_Base::btnOK_click ), NULL, this );
	btnCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgNew_Base::btnCancel_click ), NULL, this );
	
}

dlgOpen_Base::dlgOpen_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );
	
	wxBoxSizer* szOpen;
	szOpen = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szProject;
	szProject = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Project list") ), wxHORIZONTAL );
	
	lcProject = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( 300,150 ), wxLC_REPORT );
	szProject->Add( lcProject, 1, wxEXPAND, 0 );
	
	szTop->Add( szProject, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	btnOpen = new wxButton( this, wxID_OPEN, _("&Open"), wxDefaultPosition, wxDefaultSize, 0 );
	szRight->Add( btnOpen, 0, wxALL, 3 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	szRight->Add( btnCancel, 0, wxALL, 3 );
	
	
	szRight->Add( 0, 0, 1, wxEXPAND, 0 );
	
	btnRename = new wxButton( this, wxID_RENAME, _("&Rename..."), wxDefaultPosition, wxDefaultSize, 0 );
	szRight->Add( btnRename, 0, wxALL, 3 );
	
	btnDelete = new wxButton( this, wxID_DELETE, _("&Delete..."), wxDefaultPosition, wxDefaultSize, 0 );
	szRight->Add( btnDelete, 0, wxALL, 3 );
	
	szTop->Add( szRight, 0, wxEXPAND, 0 );
	
	szOpen->Add( szTop, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szPath;
	szPath = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Project path") ), wxHORIZONTAL );
	
	tcPath = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	szPath->Add( tcPath, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPath = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1,-1 ), wxBU_EXACTFIT );
	szPath->Add( btnPath, 0, 0, 0 );
	
	szOpen->Add( szPath, 0, wxEXPAND, 0 );
	
	this->SetSizer( szOpen );
	this->Layout();
	szOpen->Fit( this );
	
	// Connect Events
	btnOpen->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgOpen_Base::btnOpen_click ), NULL, this );
	btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgOpen_Base::btnCancel_click ), NULL, this );
	btnRename->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgOpen_Base::btnRename_click ), NULL, this );
	btnDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgOpen_Base::btnDelete_click ), NULL, this );
	tcPath->Connect( wxEVT_CHAR, wxKeyEventHandler( dlgOpen_Base::tcPath_key ), NULL, this );
	tcPath->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( dlgOpen_Base::tcPath_dclick ), NULL, this );
	btnPath->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgOpen_Base::btnPath_click ), NULL, this );
}

dlgOpen_Base::~dlgOpen_Base()
{
	// Disconnect Events
	btnOpen->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgOpen_Base::btnOpen_click ), NULL, this );
	btnCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgOpen_Base::btnCancel_click ), NULL, this );
	btnRename->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgOpen_Base::btnRename_click ), NULL, this );
	btnDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgOpen_Base::btnDelete_click ), NULL, this );
	tcPath->Disconnect( wxEVT_CHAR, wxKeyEventHandler( dlgOpen_Base::tcPath_key ), NULL, this );
	tcPath->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( dlgOpen_Base::tcPath_dclick ), NULL, this );
	btnPath->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgOpen_Base::btnPath_click ), NULL, this );
	
}

dlgRename_Base::dlgRename_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 240,-1 ), wxDefaultSize );
	
	wxBoxSizer* szRename;
	szRename = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szFolder;
	szFolder = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Folder name") ), wxHORIZONTAL );
	
	tcFolder = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	szFolder->Add( tcFolder, 1, 0, 0 );
	
	szRename->Add( szFolder, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTitle;
	szTitle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Game title") ), wxHORIZONTAL );
	
	tcTitle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	szTitle->Add( tcTitle, 1, 0, 0 );
	
	szRename->Add( szTitle, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	bSizer32->Add( btnOK, 0, wxALL, 3 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( btnCancel, 0, wxALL, 3 );
	
	szRename->Add( bSizer32, 0, wxALIGN_RIGHT, 0 );
	
	this->SetSizer( szRename );
	this->Layout();
	szRename->Fit( this );
	
	// Connect Events
	btnOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgRename_Base::btnOK_click ), NULL, this );
	btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgRename_Base::btnCancel_click ), NULL, this );
}

dlgRename_Base::~dlgRename_Base()
{
	// Disconnect Events
	btnOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgRename_Base::btnOK_click ), NULL, this );
	btnCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgRename_Base::btnCancel_click ), NULL, this );
	
}

dlgPack_Base::dlgPack_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szPack;
	szPack = new wxBoxSizer( wxVERTICAL );
	
	stPack = new wxStaticText( this, wxID_ANY, _("Compress data and make game disk"), wxDefaultPosition, wxDefaultSize, 0 );
	stPack->Wrap( -1 );
	szPack->Add( stPack, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxStaticBoxSizer* szPath;
	szPath = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Game disk path") ), wxHORIZONTAL );
	
	tcPath = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	szPath->Add( tcPath, 1, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPath = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1,-1 ), wxBU_EXACTFIT );
	szPath->Add( btnPath, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPack->Add( szPath, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	cbRTP = new wxCheckBox( this, wxID_ANY, _("Include RTP (Runtine Package Path) in the installer"), wxDefaultPosition, wxDefaultSize, 0 );
	szOptions->Add( cbRTP, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	szPack->Add( szOptions, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnPack = new wxButton( this, wxID_ANY, _("Start"), wxDefaultPosition, wxDefaultSize, 0 );
	btnPack->SetDefault(); 
	szBottom->Add( btnPack, 0, wxALL, 3 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnCancel, 0, wxALL, 3 );
	
	szPack->Add( szBottom, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	this->SetSizer( szPack );
	this->Layout();
	szPack->Fit( this );
	
	// Connect Events
	btnPack->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgPack_Base::btnPack_click ), NULL, this );
	btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgPack_Base::btnCancel_click ), NULL, this );
}

dlgPack_Base::~dlgPack_Base()
{
	// Disconnect Events
	btnPack->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgPack_Base::btnPack_click ), NULL, this );
	btnCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgPack_Base::btnCancel_click ), NULL, this );
	
}

dlgAbout_Base::dlgAbout_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szAbout;
	szAbout = new wxBoxSizer( wxVERTICAL );
	
	bmpAbout = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 512,256 ), 0 );
	szAbout->Add( bmpAbout, 0, wxALL, 12 );
	
	stAboutName = new wxStaticText( this, wxID_ANY, _("EasyRPG Editor 0.1.0"), wxDefaultPosition, wxDefaultSize, 0 );
	stAboutName->Wrap( -1 );
	stAboutName->SetFont( wxFont( 16, 70, 90, 92, false, wxEmptyString ) );
	
	szAbout->Add( stAboutName, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	stAboutDescription = new wxStaticText( this, wxID_ANY, _("EasyRPG Editor is a cross platform video role playing game editor for your desktop"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	stAboutDescription->Wrap( 400 );
	szAbout->Add( stAboutDescription, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	stAboutCopyright = new wxStaticText( this, wxID_ANY, _("Copyright © 2005-2011 EasyRPG Project"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	stAboutCopyright->Wrap( -1 );
	stAboutCopyright->SetFont( wxFont( 9, 70, 90, 90, false, wxEmptyString ) );
	
	szAbout->Add( stAboutCopyright, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	hlAbout = new wxHyperlinkCtrl( this, wxID_ANY, _("http://easy-rpg.org"), wxT("http://easy-rpg.org/"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );
	szAbout->Add( hlAbout, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnCredits = new wxButton( this, wxID_ABOUT, _("&Credits"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCredits->SetDefault(); 
	szBottom->Add( btnCredits, 0, wxALL, 12 );
	
	
	szBottom->Add( 0, 0, 1, wxEXPAND, 5 );
	
	btnClose = new wxButton( this, wxID_CLOSE, _("&Close"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnClose, 0, wxALL, 12 );
	
	szAbout->Add( szBottom, 1, wxEXPAND, 5 );
	
	this->SetSizer( szAbout );
	this->Layout();
	szAbout->Fit( this );
	
	// Connect Events
	btnCredits->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgAbout_Base::btnCredits_click ), NULL, this );
	btnClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgAbout_Base::btnClose_click ), NULL, this );
}

dlgAbout_Base::~dlgAbout_Base()
{
	// Disconnect Events
	btnCredits->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgAbout_Base::btnCredits_click ), NULL, this );
	btnClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgAbout_Base::btnClose_click ), NULL, this );
	
}

dlgCredits_Base::dlgCredits_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 400,-1 ), wxDefaultSize );
	
	wxBoxSizer* szCredits;
	szCredits = new wxBoxSizer( wxVERTICAL );
	
	nbCredits = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxSize( 350,200 ), 0 );
	pnWriters = new wxPanel( nbCredits, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szWriters;
	szWriters = new wxBoxSizer( wxVERTICAL );
	
	tcWriters = new wxTextCtrl( pnWriters, wxID_ANY, _("Francisco de la Peña"), wxDefaultPosition, wxDefaultSize, wxTE_DONTWRAP|wxTE_MULTILINE|wxTE_READONLY );
	szWriters->Add( tcWriters, 1, wxEXPAND, 0 );
	
	pnWriters->SetSizer( szWriters );
	pnWriters->Layout();
	szWriters->Fit( pnWriters );
	nbCredits->AddPage( pnWriters, _("Written by"), true );
	pnDocumenters = new wxPanel( nbCredits, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szDocumenters;
	szDocumenters = new wxBoxSizer( wxVERTICAL );
	
	tcDocumenters = new wxTextCtrl( pnDocumenters, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_DONTWRAP|wxTE_MULTILINE|wxTE_READONLY );
	szDocumenters->Add( tcDocumenters, 1, wxEXPAND, 0 );
	
	pnDocumenters->SetSizer( szDocumenters );
	pnDocumenters->Layout();
	szDocumenters->Fit( pnDocumenters );
	nbCredits->AddPage( pnDocumenters, _("Documented by"), false );
	pnTranslators = new wxPanel( nbCredits, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szTranslators;
	szTranslators = new wxBoxSizer( wxVERTICAL );
	
	tcTranslators = new wxTextCtrl( pnTranslators, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_DONTWRAP|wxTE_MULTILINE|wxTE_READONLY );
	szTranslators->Add( tcTranslators, 1, wxEXPAND, 0 );
	
	pnTranslators->SetSizer( szTranslators );
	pnTranslators->Layout();
	szTranslators->Fit( pnTranslators );
	nbCredits->AddPage( pnTranslators, _("Translated by"), false );
	
	szCredits->Add( nbCredits, 1, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 12 );
	
	btnClose = new wxButton( this, wxID_CLOSE, _("&Close"), wxDefaultPosition, wxDefaultSize, 0 );
	btnClose->SetDefault(); 
	szCredits->Add( btnClose, 0, wxALL|wxALIGN_RIGHT, 12 );
	
	this->SetSizer( szCredits );
	this->Layout();
	szCredits->Fit( this );
	
	// Connect Events
	btnClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgCredits_Base::btnClose_click ), NULL, this );
}

dlgCredits_Base::~dlgCredits_Base()
{
	// Disconnect Events
	btnClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgCredits_Base::btnClose_click ), NULL, this );
	
}

dlgMusic_Base::dlgMusic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szPlayMusic;
	szPlayMusic = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	listMusic = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 150,-1 ), 0, NULL, 0 ); 
	szTop->Add( listMusic, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szFadeIn;
	szFadeIn = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Fade in") ), wxVERTICAL );
	
	slFadeIn = new wxSlider( this, wxID_ANY, 0, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szFadeIn->Add( slFadeIn, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szFadeInBottom;
	szFadeInBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stFadeInNone = new wxStaticText( this, wxID_ANY, _("None"), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeInNone->Wrap( -1 );
	szFadeInBottom->Add( stFadeInNone, 0, wxRIGHT, 1 );
	
	
	szFadeInBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stFadeIn5Seconds = new wxStaticText( this, wxID_ANY, _("5 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeIn5Seconds->Wrap( -1 );
	szFadeInBottom->Add( stFadeIn5Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szFadeInBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stFadeIn10Seconds = new wxStaticText( this, wxID_ANY, _("10 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeIn10Seconds->Wrap( -1 );
	szFadeInBottom->Add( stFadeIn10Seconds, 0, wxLEFT, 1 );
	
	szFadeIn->Add( szFadeInBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szFadeIn, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szVolume;
	szVolume = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Volume") ), wxVERTICAL );
	
	slVolume = new wxSlider( this, wxID_ANY, 10, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szVolume->Add( slVolume, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szVolumeBottom;
	szVolumeBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stVolume0Percent = new wxStaticText( this, wxID_ANY, _("0%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume0Percent->Wrap( -1 );
	szVolumeBottom->Add( stVolume0Percent, 0, wxRIGHT, 1 );
	
	
	szVolumeBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVolume50Percent = new wxStaticText( this, wxID_ANY, _("50%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume50Percent->Wrap( -1 );
	szVolumeBottom->Add( stVolume50Percent, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szVolumeBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVolume100Percent = new wxStaticText( this, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume100Percent->Wrap( -1 );
	szVolumeBottom->Add( stVolume100Percent, 0, wxLEFT, 1 );
	
	szVolume->Add( szVolumeBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szVolume, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTempo;
	szTempo = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tempo") ), wxVERTICAL );
	
	slTempo = new wxSlider( this, wxID_ANY, 5, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szTempo->Add( slTempo, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szTempoBottom;
	szTempoBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stTempo50Percent = new wxStaticText( this, wxID_ANY, _("50%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo50Percent->Wrap( -1 );
	szTempoBottom->Add( stTempo50Percent, 0, wxRIGHT, 1 );
	
	
	szTempoBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTempo100Percent = new wxStaticText( this, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo100Percent->Wrap( -1 );
	szTempoBottom->Add( stTempo100Percent, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szTempoBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTempo150Percent = new wxStaticText( this, wxID_ANY, _("150%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo150Percent->Wrap( -1 );
	szTempoBottom->Add( stTempo150Percent, 0, wxLEFT, 1 );
	
	szTempo->Add( szTempoBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szTempo, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szBalance;
	szBalance = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Balance") ), wxVERTICAL );
	
	slBalance = new wxSlider( this, wxID_ANY, 0, -5,  5, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szBalance->Add( slBalance, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBalanceBottom;
	szBalanceBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stBalanceLeft = new wxStaticText( this, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceLeft->Wrap( -1 );
	szBalanceBottom->Add( stBalanceLeft, 0, wxRIGHT, 1 );
	
	
	szBalanceBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stBalanceCenter = new wxStaticText( this, wxID_ANY, _("Center"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceCenter->Wrap( -1 );
	szBalanceBottom->Add( stBalanceCenter, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szBalanceBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stBalanceRight = new wxStaticText( this, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceRight->Wrap( -1 );
	szBalanceBottom->Add( stBalanceRight, 0, wxLEFT, 1 );
	
	szBalance->Add( szBalanceBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szBalance, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szRightBottom;
	szRightBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnPlay = new wxButton( this, wxID_ANY, _("Play"), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlay->SetDefault(); 
	szRightBottom->Add( btnPlay, 0, wxALL, 1 );
	
	btnStop = new wxButton( this, wxID_ANY, _("Stop"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStop->SetDefault(); 
	szRightBottom->Add( btnStop, 0, wxALL, 1 );
	
	szRight->Add( szRightBottom, 0, wxEXPAND, 0 );
	
	szTop->Add( szRight, 0, wxEXPAND, 0 );
	
	szPlayMusic->Add( szTop, 1, wxEXPAND, 0 );
	
	linePlayMusic = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	szPlayMusic->Add( linePlayMusic, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnClose = new wxButton( this, wxID_CLOSE, _("&Close"), wxDefaultPosition, wxDefaultSize, 0 );
	btnClose->SetDefault(); 
	szBottom->Add( btnClose, 0, wxALL, 1 );
	
	szPlayMusic->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szPlayMusic );
	this->Layout();
	szPlayMusic->Fit( this );
	
	// Connect Events
	btnClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMusic_Base::btnClose_click ), NULL, this );
}

dlgMusic_Base::~dlgMusic_Base()
{
	// Disconnect Events
	btnClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgMusic_Base::btnClose_click ), NULL, this );
	
}

dlgVehicle_Base::dlgVehicle_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szVehicle;
	szVehicle = new wxBoxSizer( wxVERTICAL );
	
	wxString rbVehicleChoices[] = { _("Small ship"), _("Big ship"), _("Air ship") };
	int rbVehicleNChoices = sizeof( rbVehicleChoices ) / sizeof( wxString );
	rbVehicle = new wxRadioBox( this, wxID_ANY, _("Vehicle"), wxDefaultPosition, wxDefaultSize, rbVehicleNChoices, rbVehicleChoices, 1, wxRA_SPECIFY_ROWS );
	rbVehicle->SetSelection( 0 );
	szVehicle->Add( rbVehicle, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 3 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnCancel, 0, wxALL, 3 );
	
	szVehicle->Add( szBottom, 0, wxALIGN_RIGHT, 0 );
	
	this->SetSizer( szVehicle );
	this->Layout();
	szVehicle->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgVehicle_Base::btnCancel_click ), NULL, this );
}

dlgVehicle_Base::~dlgVehicle_Base()
{
	// Disconnect Events
	btnCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgVehicle_Base::btnCancel_click ), NULL, this );
	
}

dlgShiftMap_Base::dlgShiftMap_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szShiftMap;
	szShiftMap = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szDirection;
	szDirection = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Direction") ), wxVERTICAL );
	
	rbUp = new wxRadioButton( this, wxID_ANY, _("Up"), wxDefaultPosition, wxDefaultSize, 0 );
	szDirection->Add( rbUp, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	wxBoxSizer* szDirection2;
	szDirection2 = new wxBoxSizer( wxHORIZONTAL );
	
	rbLeft = new wxRadioButton( this, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	szDirection2->Add( rbLeft, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szDirection2->Add( 0, 0, 1, 0, 0 );
	
	rbRight = new wxRadioButton( this, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	szDirection2->Add( rbRight, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szDirection->Add( szDirection2, 1, wxEXPAND|wxALL, 0 );
	
	rbDown = new wxRadioButton( this, wxID_ANY, _("Down"), wxDefaultPosition, wxDefaultSize, 0 );
	szDirection->Add( rbDown, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	szTop->Add( szDirection, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTiles;
	szTiles = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("# of tiles") ), wxVERTICAL );
	
	spinTiles = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 500, 1 );
	szTiles->Add( spinTiles, 0, wxEXPAND, 0 );
	
	szTop->Add( szTiles, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szShiftMap->Add( szTop, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 3 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnCancel, 0, wxALL, 3 );
	
	szShiftMap->Add( szBottom, 0, wxALIGN_RIGHT, 0 );
	
	this->SetSizer( szShiftMap );
	this->Layout();
	szShiftMap->Fit( this );
}

dlgShiftMap_Base::~dlgShiftMap_Base()
{
}

dlgArea_Base::dlgArea_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szArea;
	szArea = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szName;
	szName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	szName->Add( tcName, 1, 0, 0 );
	
	szLeft->Add( szName, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSize;
	szSize = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Area dimensions") ), wxHORIZONTAL );
	
	tcSize = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	szSize->Add( tcSize, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSize = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1,-1 ), wxBU_EXACTFIT );
	szSize->Add( btnSize, 0, 0, 0 );
	
	szLeft->Add( szSize, 1, wxEXPAND, 0 );
	
	szTop->Add( szLeft, 1, 0, 0 );
	
	wxStaticBoxSizer* szTroop;
	szTroop = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Troop encounters") ), wxVERTICAL );
	
	listTroop = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	szTroop->Add( listTroop, 1, wxEXPAND, 0 );
	
	szTop->Add( szTroop, 1, wxEXPAND, 0 );
	
	szArea->Add( szTop, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 3 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnCancel, 0, wxALL, 3 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnHelp, 0, wxALL, 3 );
	
	szArea->Add( szBottom, 0, wxALIGN_RIGHT, 0 );
	
	this->SetSizer( szArea );
	this->Layout();
	szArea->Fit( this );
}

dlgArea_Base::~dlgArea_Base()
{
}

dlgEncounter_Base::dlgEncounter_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szEncounter;
	szEncounter = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTop;
	szTop = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Monster group") ), wxHORIZONTAL );
	
	wxArrayString chEncounterChoices;
	chEncounter = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chEncounterChoices, 0 );
	chEncounter->SetSelection( 0 );
	szTop->Add( chEncounter, 1, 0, 0 );
	
	szEncounter->Add( szTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 3 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 3 );
	
	szEncounter->Add( szBottom, 1, wxALIGN_RIGHT, 0 );
	
	this->SetSizer( szEncounter );
	this->Layout();
	szEncounter->Fit( this );
}

dlgEncounter_Base::~dlgEncounter_Base()
{
}

dlgPlayTest_Base::dlgPlayTest_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szPlayTest;
	szPlayTest = new wxBoxSizer( wxVERTICAL );
	
	stPlayTest = new wxStaticText( this, wxID_ANY, _("Under execution"), wxDefaultPosition, wxDefaultSize, 0 );
	stPlayTest->Wrap( -1 );
	szPlayTest->Add( stPlayTest, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 12 );
	
	this->SetSizer( szPlayTest );
	this->Layout();
	szPlayTest->Fit( this );
}

dlgPlayTest_Base::~dlgPlayTest_Base()
{
}

dlgSwitch_Base::dlgSwitch_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szSwitch;
	szSwitch = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stSwitch = new wxStaticText( this, wxID_ANY, _("Switch"), wxDefaultPosition, wxDefaultSize, 0 );
	stSwitch->Wrap( -1 );
	stSwitch->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stSwitch, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listSwitch = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	szLeft->Add( listSwitch, 1, wxALL|wxEXPAND, 0 );
	
	btnMaxNumber = new wxButton( this, wxID_ANY, _("Max number..."), wxDefaultPosition, wxDefaultSize, 0 );
	szLeft->Add( btnMaxNumber, 0, wxEXPAND, 0 );
	
	szTop->Add( szLeft, 1, wxEXPAND, 5 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	listSwitches = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	szRight->Add( listSwitches, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szName;
	szName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	szName->Add( tcName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnName = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1,-1 ), wxBU_EXACTFIT );
	szName->Add( btnName, 0, 0, 0 );
	
	szRight->Add( szName, 0, wxEXPAND, 0 );
	
	szTop->Add( szRight, 1, wxEXPAND, 0 );
	
	szSwitch->Add( szTop, 1, wxEXPAND, 5 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 3 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnCancel, 0, wxALL, 3 );
	
	btnApply = new wxButton( this, wxID_APPLY, _("&Apply"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnApply, 0, wxALL, 3 );
	
	szSwitch->Add( szBottom, 0, wxALIGN_RIGHT, 0 );
	
	this->SetSizer( szSwitch );
	this->Layout();
	
	this->Centre( wxBOTH );
}

dlgSwitch_Base::~dlgSwitch_Base()
{
}

dlgVariable_Base::dlgVariable_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szVariable;
	szVariable = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stVariable = new wxStaticText( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariable->Wrap( -1 );
	stVariable->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stVariable, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listVariable = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	szLeft->Add( listVariable, 1, wxALL|wxEXPAND, 0 );
	
	btnMaxNumber = new wxButton( this, wxID_ANY, _("Max number..."), wxDefaultPosition, wxDefaultSize, 0 );
	szLeft->Add( btnMaxNumber, 0, wxEXPAND, 0 );
	
	szTop->Add( szLeft, 1, wxEXPAND, 5 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	listVariables = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	szRight->Add( listVariables, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szName;
	szName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	szName->Add( tcName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnName = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1,-1 ), wxBU_EXACTFIT );
	szName->Add( btnName, 0, 0, 0 );
	
	szRight->Add( szName, 0, wxEXPAND, 0 );
	
	szTop->Add( szRight, 1, wxEXPAND, 0 );
	
	szVariable->Add( szTop, 1, wxEXPAND, 5 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 3 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnCancel, 0, wxALL, 3 );
	
	btnApply = new wxButton( this, wxID_APPLY, _("&Apply"), wxDefaultPosition, wxDefaultSize, 0 );
	szBottom->Add( btnApply, 0, wxALL, 3 );
	
	szVariable->Add( szBottom, 0, wxALIGN_RIGHT, 0 );
	
	this->SetSizer( szVariable );
	this->Layout();
	
	this->Centre( wxBOTH );
}

dlgVariable_Base::~dlgVariable_Base()
{
}
