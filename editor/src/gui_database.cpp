///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database.h"

///////////////////////////////////////////////////////////////////////////

dlgDb_Base::dlgDb_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szDb;
	szDb = new wxBoxSizer( wxVERTICAL );
	
	nbDb = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	szDb->Add( nbDb, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnBGM = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("../share/toolbar/music.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|wxNO_BORDER );
	szBottom->Add( btnBGM, 0, wxALL, 1 );
	
	
	szBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnApply = new wxButton( this, wxID_APPLY, _("&Apply"), wxDefaultPosition, wxDefaultSize, 0 );
	btnApply->SetDefault(); 
	szBottom->Add( btnApply, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szDb->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxEXPAND|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szDb );
	this->Layout();
	szDb->Fit( this );
	
	// Connect Events
	btnOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::OK_click ), NULL, this );
	btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::Cancel_click ), NULL, this );
	btnApply->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::Apply_click ), NULL, this );
	btnHelp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::Help_click ), NULL, this );
}

dlgDb_Base::~dlgDb_Base()
{
	// Disconnect Events
	btnOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::OK_click ), NULL, this );
	btnCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::Cancel_click ), NULL, this );
	btnApply->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::Apply_click ), NULL, this );
	btnHelp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::Help_click ), NULL, this );
	
}

dlgDbMaxNumber_Base::dlgDbMaxNumber_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szDbMaxNumber;
	szDbMaxNumber = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	stMaxNumber = new wxStaticText( this, wxID_ANY, _("Max number:"), wxDefaultPosition, wxDefaultSize, 0 );
	stMaxNumber->Wrap( -1 );
	szTop->Add( stMaxNumber, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinMaxNumber = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1,  5000, 1 );
	szTop->Add( spinMaxNumber, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szDbMaxNumber->Add( szTop, 1, wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	szDbMaxNumber->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szDbMaxNumber );
	this->Layout();
	szDbMaxNumber->Fit( this );
	
	// Connect Events
	btnOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbMaxNumber_Base::OK_click ), NULL, this );
	btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbMaxNumber_Base::Cancel_click ), NULL, this );
}

dlgDbMaxNumber_Base::~dlgDbMaxNumber_Base()
{
	// Disconnect Events
	btnOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbMaxNumber_Base::OK_click ), NULL, this );
	btnCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbMaxNumber_Base::Cancel_click ), NULL, this );
	
}

dlgDbLearnSkill_Base::dlgDbLearnSkill_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szDbLearnSkill;
	szDbLearnSkill = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szSkill;
	szSkill = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Skill") ), wxHORIZONTAL );
	
	wxArrayString chSkillChoices;
	chSkill = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSkillChoices, 0 );
	chSkill->SetSelection( 0 );
	szSkill->Add( chSkill, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szSkill, 2, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szLevel;
	szLevel = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Level") ), wxHORIZONTAL );
	
	spinLevel = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1,  50, 1 );
	szLevel->Add( spinLevel, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szLevel, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szDbLearnSkill->Add( szTop, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szDbLearnSkill->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szDbLearnSkill );
	this->Layout();
	szDbLearnSkill->Fit( this );
	
	// Connect Events
	btnOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbLearnSkill_Base::OK_click ), NULL, this );
	btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbLearnSkill_Base::Cancel_click ), NULL, this );
	btnHelp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbLearnSkill_Base::Help_click ), NULL, this );
}

dlgDbLearnSkill_Base::~dlgDbLearnSkill_Base()
{
	// Disconnect Events
	btnOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbLearnSkill_Base::OK_click ), NULL, this );
	btnCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbLearnSkill_Base::Cancel_click ), NULL, this );
	btnHelp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbLearnSkill_Base::Help_click ), NULL, this );
	
}

dlgDbSelectAnyGraphic_Base::dlgDbSelectAnyGraphic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* SelectAnyGraphic;
	SelectAnyGraphic = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	listGraphic = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	szTop->Add( listGraphic, 1, wxALL|wxEXPAND, 1 );
	
	bmpGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 480, 480 ), wxSUNKEN_BORDER );
	szTop->Add( bmpGraphic, 0, wxALL, 1 );
	
	SelectAnyGraphic->Add( szTop, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	szBottom->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	SelectAnyGraphic->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( SelectAnyGraphic );
	this->Layout();
	SelectAnyGraphic->Fit( this );
	
	// Connect Events
	btnOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbSelectAnyGraphic_Base::OK_click ), NULL, this );
	wxID_CANCEL->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbSelectAnyGraphic_Base::Cancel_click ), NULL, this );
}

dlgDbSelectAnyGraphic_Base::~dlgDbSelectAnyGraphic_Base()
{
	// Disconnect Events
	btnOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbSelectAnyGraphic_Base::OK_click ), NULL, this );
	wxID_CANCEL->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDbSelectAnyGraphic_Base::Cancel_click ), NULL, this );
	
}
