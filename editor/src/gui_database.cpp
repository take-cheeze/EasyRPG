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
	
	btnBGM = new wxButton( this, wxID_ANY, _("BGM"), wxDefaultPosition, wxSize( -1, -1 ), wxBU_EXACTFIT|wxNO_BORDER );
	btnBGM->SetDefault(); 
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
	btnBGM->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::BGM_click ), NULL, this );
	btnOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::OK_click ), NULL, this );
	btnCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::Cancel_click ), NULL, this );
	btnApply->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::Apply_click ), NULL, this );
	btnHelp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::Help_click ), NULL, this );
}

dlgDb_Base::~dlgDb_Base()
{
	// Disconnect Events
	btnBGM->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgDb_Base::BGM_click ), NULL, this );
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
	
	spinMaxNumber = new wxSpinCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1,  5000, 0 );
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
}

dlgDbMaxNumber_Base::~dlgDbMaxNumber_Base()
{
}

dlgDbLearnSkill_Base::dlgDbLearnSkill_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer139;
	bSizer139 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer140;
	bSizer140 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer75;
	sbSizer75 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Skill") ), wxHORIZONTAL );
	
	wxArrayString chSkillChoices;
	chSkill = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSkillChoices, 0 );
	chSkill->SetSelection( 0 );
	sbSizer75->Add( chSkill, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer140->Add( sbSizer75, 2, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer76;
	sbSizer76 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Level") ), wxHORIZONTAL );
	
	spinLevel = new wxSpinCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1,  50, 1 );
	sbSizer76->Add( spinLevel, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer140->Add( sbSizer76, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer139->Add( bSizer140, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer141->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer141->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer141->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer139->Add( bSizer141, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer139 );
	this->Layout();
	bSizer139->Fit( this );
}

dlgDbLearnSkill_Base::~dlgDbLearnSkill_Base()
{
}

dlgDbSelectAnyGraphic_Base::dlgDbSelectAnyGraphic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer123;
	bSizer123 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer124;
	bSizer124 = new wxBoxSizer( wxHORIZONTAL );
	
	listGraphic = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer124->Add( listGraphic, 1, wxALL|wxEXPAND, 1 );
	
	bmpGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 480, 480 ), wxSUNKEN_BORDER );
	bSizer124->Add( bmpGraphic, 0, wxALL, 1 );
	
	bSizer123->Add( bSizer124, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer125;
	bSizer125 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer125->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer125->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	bSizer123->Add( bSizer125, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer123 );
	this->Layout();
	bSizer123->Fit( this );
}

dlgDbSelectAnyGraphic_Base::~dlgDbSelectAnyGraphic_Base()
{
}
