///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_events_page_2.h"

///////////////////////////////////////////////////////////////////////////

dlgEvtCmdBattle_Base::dlgEvtCmdBattle_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szBattle;
	szBattle = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTroop;
	szTroop = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy troop") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szTroop2;
	szTroop2 = new wxFlexGridSizer( 3, 2, 2, 2 );
	szTroop2->AddGrowableCol( 1 );
	szTroop2->SetFlexibleDirection( wxBOTH );
	szTroop2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTroopFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTroopFixed->SetValue( true ); 
	szTroop2->Add( rbtnTroopFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTroopFixedChoices;
	chTroopFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTroopFixedChoices, 0 );
	chTroopFixed->SetSelection( 0 );
	szTroop2->Add( chTroopFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTroopVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTroopVariable->SetValue( true ); 
	szTroop2->Add( rbtnTroopVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szTroopVariable;
	szTroopVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcTroopVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTroopVariable->Add( tcTroopVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTroopVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTroopVariable->SetDefault(); 
	szTroopVariable->Add( btnTroopVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTroop2->Add( szTroopVariable, 1, wxEXPAND, 0 );
	
	szTroop->Add( szTroop2, 1, wxEXPAND, 0 );
	
	szBattle->Add( szTroop, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szBackground;
	szBackground = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Battle background") ), wxHORIZONTAL );
	
	rbtnBackgroundFromTerrain = new wxRadioButton( this, wxID_ANY, _("From terrain"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnBackgroundFromTerrain->SetValue( true ); 
	szBackground->Add( rbtnBackgroundFromTerrain, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnBackgroundSelect = new wxRadioButton( this, wxID_ANY, _("Select"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnBackgroundSelect->SetValue( true ); 
	szBackground->Add( rbtnBackgroundSelect, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcBackground = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szBackground->Add( tcBackground, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnBackground = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnBackground->SetDefault(); 
	szBackground->Add( btnBackground, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szBattle->Add( szBackground, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbEscapeChoices[] = { _("Deny"), _("Allow"), _("Condition") };
	int rbEscapeNChoices = sizeof( rbEscapeChoices ) / sizeof( wxString );
	rbEscape = new wxRadioBox( this, wxID_ANY, _("Escape"), wxDefaultPosition, wxDefaultSize, rbEscapeNChoices, rbEscapeChoices, 1, wxRA_SPECIFY_ROWS );
	rbEscape->SetSelection( 0 );
	szBattle->Add( rbEscape, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbDefeatChoices[] = { _("Game over"), _("Condition") };
	int rbDefeatNChoices = sizeof( rbDefeatChoices ) / sizeof( wxString );
	rbDefeat = new wxRadioBox( this, wxID_ANY, _("On defeat"), wxDefaultPosition, wxDefaultSize, rbDefeatNChoices, rbDefeatChoices, 1, wxRA_SPECIFY_ROWS );
	rbDefeat->SetSelection( 0 );
	szMiddle->Add( rbDefeat, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbAlliedFirst = new wxCheckBox( this, wxID_ANY, _("Allied first torn"), wxDefaultPosition, wxDefaultSize, 0 );
	chbAlliedFirst->SetValue(true); 
	szOptions->Add( chbAlliedFirst, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMiddle->Add( szOptions, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szBattle->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szBattle->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szBattle );
	this->Layout();
	szBattle->Fit( this );
}

dlgEvtCmdBattle_Base::~dlgEvtCmdBattle_Base()
{
}

dlgEvtCmdCommerce_Base::dlgEvtCmdCommerce_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szCommerce;
	szCommerce = new wxBoxSizer( wxVERTICAL );
	
	wxString rbTypeChoices[] = { _("Normal"), _("Doesn't sell"), _("Doesn't buy") };
	int rbTypeNChoices = sizeof( rbTypeChoices ) / sizeof( wxString );
	rbType = new wxRadioBox( this, wxID_ANY, _("Commerce type"), wxDefaultPosition, wxDefaultSize, rbTypeNChoices, rbTypeChoices, 1, wxRA_SPECIFY_ROWS );
	rbType->SetSelection( 0 );
	szCommerce->Add( rbType, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStyle;
	szStyle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Commerce style") ), wxHORIZONTAL );
	
	wxArrayString chStyleChoices;
	chStyle = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chStyleChoices, 0 );
	chStyle->SetSelection( 0 );
	szStyle->Add( chStyle, 1, 0, 0 );
	
	szCommerce->Add( szStyle, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szObjects;
	szObjects = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Objects to sell") ), wxHORIZONTAL );
	
	listSell = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), 0, NULL, 0 ); 
	szObjects->Add( listSell, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szAddRemove;
	szAddRemove = new wxBoxSizer( wxVERTICAL );
	
	
	szAddRemove->Add( 0,  0, 1, wxEXPAND, 0 );
	
	btnAdd = new wxButton( this, wxID_ANY, _("< Add"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnAdd->SetDefault(); 
	szAddRemove->Add( btnAdd, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	btnRemove = new wxButton( this, wxID_ANY, _("Remove >"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnRemove->SetDefault(); 
	szAddRemove->Add( btnRemove, 0, wxLEFT|wxRIGHT|wxTOP|wxEXPAND, 1 );
	
	
	szAddRemove->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szObjects->Add( szAddRemove, 0, wxEXPAND, 0 );
	
	listObjects = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), 0, NULL, 0 ); 
	szObjects->Add( listObjects, 1, wxLEFT|wxEXPAND, 1 );
	
	szCommerce->Add( szObjects, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbDoNotResell = new wxCheckBox( this, wxID_ANY, _("Merchant doesn't sell goods already sold"), wxDefaultPosition, wxDefaultSize, 0 );
	chbDoNotResell->SetValue(true); 
	szOptions->Add( chbDoNotResell, 1, 0, 0 );
	
	szCommerce->Add( szOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
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
	
	szCommerce->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szCommerce );
	this->Layout();
	szCommerce->Fit( this );
}

dlgEvtCmdCommerce_Base::~dlgEvtCmdCommerce_Base()
{
}

dlgEvtCmdInn_Base::dlgEvtCmdInn_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szInn;
	szInn = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szMessage;
	szMessage = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Inn message type") ), wxHORIZONTAL );
	
	wxArrayString chMessageChoices;
	chMessage = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMessageChoices, 0 );
	chMessage->SetSelection( 0 );
	szMessage->Add( chMessage, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szInn->Add( szMessage, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szPrice;
	szPrice = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Stay price") ), wxHORIZONTAL );
	
	spinPrice = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	szPrice->Add( spinPrice, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMiddle->Add( szPrice, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	ChkCondition = new wxCheckBox( this, wxID_ANY, _("Create condition"), wxDefaultPosition, wxDefaultSize, 0 );
	ChkCondition->SetValue(true); 
	szOptions->Add( ChkCondition, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMiddle->Add( szOptions, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szInn->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szInn->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szInn );
	this->Layout();
	szInn->Fit( this );
}

dlgEvtCmdInn_Base::~dlgEvtCmdInn_Base()
{
}

dlgEvtCmdActorNameInput_Base::dlgEvtCmdActorNameInput_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szActorNameInput;
	szActorNameInput = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szActor;
	szActor = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor") ), wxHORIZONTAL );
	
	wxArrayString chActorChoices;
	chActor = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 100, -1 ), chActorChoices, 0 );
	chActor->SetSelection( 0 );
	szActor->Add( chActor, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szActor, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbModeChoices[] = { _("Hiragana"), _("Katakana") };
	int rbModeNChoices = sizeof( rbModeChoices ) / sizeof( wxString );
	rbMode = new wxRadioBox( this, wxID_ANY, _("Initial mode"), wxDefaultPosition, wxDefaultSize, rbModeNChoices, rbModeChoices, 1, wxRA_SPECIFY_ROWS );
	rbMode->SetSelection( 0 );
	szTop->Add( rbMode, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szActorNameInput->Add( szTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szShowName;
	szShowName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbShowName = new wxCheckBox( this, wxID_ANY, _("Show initial name"), wxDefaultPosition, wxDefaultSize, 0 );
	chbShowName->SetValue(true); 
	szShowName->Add( chbShowName, 1, 0, 0 );
	
	szActorNameInput->Add( szShowName, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szActorNameInput->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szActorNameInput );
	this->Layout();
	szActorNameInput->Fit( this );
}

dlgEvtCmdActorNameInput_Base::~dlgEvtCmdActorNameInput_Base()
{
}

dlgEvtCmdTeleport_Base::dlgEvtCmdTeleport_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szTeleport;
	szTeleport = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	treeMaps = new wxTreeCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( 150, -1 ), wxTR_HAS_BUTTONS|wxTR_NO_LINES|wxTR_LINES_AT_ROOT|wxTR_DEFAULT_STYLE|wxSUNKEN_BORDER );
	szTop->Add( treeMaps, 0, wxALL|wxEXPAND, 1 );
	
	pnMap = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 320, 240 ), wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	szTop->Add( pnMap, 1, wxALL|wxEXPAND, 1 );
	
	szTeleport->Add( szTop, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	sTMap = new wxStaticText( this, wxID_ANY, _("XXXX:MAPXXXX (XXX,YYY)"), wxDefaultPosition, wxDefaultSize, 0 );
	sTMap->Wrap( -1 );
	szBottom->Add( sTMap, 10, wxALL|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnScale11 = new wxToggleButton( this, wxID_ANY, _("1:1"), wxDefaultPosition, wxSize( 35, -1 ), 0 );
	szBottom->Add( btnScale11, 0, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnScale12 = new wxToggleButton( this, wxID_ANY, _("1:2"), wxDefaultPosition, wxSize( 35, -1 ), 0 );
	btnScale12->SetValue( true ); 
	szBottom->Add( btnScale12, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnScale14 = new wxToggleButton( this, wxID_ANY, _("1:4"), wxDefaultPosition, wxSize( 35, -1 ), 0 );
	btnScale14->SetValue( true ); 
	szBottom->Add( btnScale14, 0, wxRIGHT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTeleport->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxEXPAND, 3 );
	
	this->SetSizer( szTeleport );
	this->Layout();
	szTeleport->Fit( this );
}

dlgEvtCmdTeleport_Base::~dlgEvtCmdTeleport_Base()
{
}

dlgEvtCmdMemorizePlace_Base::dlgEvtCmdMemorizePlace_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szMemorizePlace;
	szMemorizePlace = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szStore;
	szStore = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Store in variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szStore2;
	szStore2 = new wxFlexGridSizer( 3, 2, 2, 2 );
	szStore2->AddGrowableCol( 1 );
	szStore2->SetFlexibleDirection( wxBOTH );
	szStore2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stVariableMapID = new wxStaticText( this, wxID_ANY, _("Map ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableMapID->Wrap( -1 );
	szStore2->Add( stVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableMapID;
	szVariableMapID = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableMapID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableMapID->Add( tcVariableMapID, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableMapID = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableMapID->SetDefault(); 
	szVariableMapID->Add( btnVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szStore2->Add( szVariableMapID, 1, wxEXPAND, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	szStore2->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableX;
	szVariableX = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableX->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	szVariableX->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szStore2->Add( szVariableX, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	szStore2->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableY;
	szVariableY = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableY->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	szVariableY->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szStore2->Add( szVariableY, 1, wxEXPAND, 0 );
	
	szStore->Add( szStore2, 1, wxEXPAND, 0 );
	
	szMemorizePlace->Add( szStore, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szMemorizePlace->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szMemorizePlace );
	this->Layout();
	szMemorizePlace->Fit( this );
}

dlgEvtCmdMemorizePlace_Base::~dlgEvtCmdMemorizePlace_Base()
{
}

dlgEvtCmdGoToMemorizedPlace_Base::dlgEvtCmdGoToMemorizedPlace_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szGoToMemorizedPlace;
	szGoToMemorizedPlace = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szPlace;
	szPlace = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Place in variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szPlace2;
	szPlace2 = new wxFlexGridSizer( 3, 2, 2, 2 );
	szPlace2->AddGrowableCol( 1 );
	szPlace2->SetFlexibleDirection( wxBOTH );
	szPlace2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stVariableMapID = new wxStaticText( this, wxID_ANY, _("Map ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableMapID->Wrap( -1 );
	szPlace2->Add( stVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableMapID;
	szVariableMapID = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableMapID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableMapID->Add( tcVariableMapID, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableMapID = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableMapID->SetDefault(); 
	szVariableMapID->Add( btnVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPlace2->Add( szVariableMapID, 1, wxEXPAND, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	szPlace2->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableX;
	szVariableX = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableX->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	szVariableX->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPlace2->Add( szVariableX, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	szPlace2->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableY;
	szVariableY = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableY->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	szVariableY->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPlace2->Add( szVariableY, 1, wxEXPAND, 0 );
	
	szPlace->Add( szPlace2, 1, wxEXPAND, 0 );
	
	szGoToMemorizedPlace->Add( szPlace, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szGoToMemorizedPlace->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szGoToMemorizedPlace );
	this->Layout();
	szGoToMemorizedPlace->Fit( this );
}

dlgEvtCmdGoToMemorizedPlace_Base::~dlgEvtCmdGoToMemorizedPlace_Base()
{
}

dlgEvtCmdVehiclePosition_Base::dlgEvtCmdVehiclePosition_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szVehiclePosition;
	szVehiclePosition = new wxBoxSizer( wxVERTICAL );
	
	wxString rbVehicleChoices[] = { _("Small ship"), _("Big ship"), _("Aeroship") };
	int rbVehicleNChoices = sizeof( rbVehicleChoices ) / sizeof( wxString );
	rbVehicle = new wxRadioBox( this, wxID_ANY, _("Vehicle"), wxDefaultPosition, wxDefaultSize, rbVehicleNChoices, rbVehicleChoices, 1, wxRA_SPECIFY_ROWS );
	rbVehicle->SetSelection( 0 );
	szVehiclePosition->Add( rbVehicle, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szPosition;
	szPosition = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Vehicle position") ), wxVERTICAL );
	
	rbtnSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSpecify->SetValue( true ); 
	szPosition->Add( rbtnSpecify, 0, wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szSpecify;
	szSpecify = new wxBoxSizer( wxHORIZONTAL );
	
	tcSpecify = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSpecify->Add( tcSpecify, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSpecify = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSpecify->SetDefault(); 
	szSpecify->Add( btnSpecify, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPosition->Add( szSpecify, 0, wxEXPAND, 0 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szPosition->Add( rbtnVariable, 0, wxTOP|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szVariable;
	szVariable = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Origin variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szVariable2;
	szVariable2 = new wxFlexGridSizer( 3, 2, 2, 2 );
	szVariable2->AddGrowableCol( 1 );
	szVariable2->SetFlexibleDirection( wxBOTH );
	szVariable2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stVariableMapID = new wxStaticText( this, wxID_ANY, _("Map ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableMapID->Wrap( -1 );
	szVariable2->Add( stVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableMapID;
	szVariableMapID = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableMapID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableMapID->Add( tcVariableMapID, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableMapID = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableMapID->SetDefault(); 
	szVariableMapID->Add( btnVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szVariable2->Add( szVariableMapID, 1, wxEXPAND, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	szVariable2->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableX;
	szVariableX = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableX->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	szVariableX->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szVariable2->Add( szVariableX, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	szVariable2->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableY;
	szVariableY = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableY->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	szVariableY->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szVariable2->Add( szVariableY, 1, wxEXPAND, 0 );
	
	szVariable->Add( szVariable2, 1, wxEXPAND, 0 );
	
	szPosition->Add( szVariable, 0, wxEXPAND, 0 );
	
	szVehiclePosition->Add( szPosition, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szVehiclePosition->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szVehiclePosition );
	this->Layout();
	szVehiclePosition->Fit( this );
}

dlgEvtCmdVehiclePosition_Base::~dlgEvtCmdVehiclePosition_Base()
{
}

dlgEvtCmdEventPosition_Base::dlgEvtCmdEventPosition_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szEventPosition;
	szEventPosition = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szEvent;
	szEvent = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event") ), wxHORIZONTAL );
	
	wxArrayString chEventChoices;
	chEvent = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chEventChoices, 0 );
	chEvent->SetSelection( 0 );
	szEvent->Add( chEvent, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szEventPosition->Add( szEvent, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szPosition;
	szPosition = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event position") ), wxVERTICAL );
	
	wxBoxSizer* szSpecify;
	szSpecify = new wxBoxSizer( wxHORIZONTAL );
	
	rbtnSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSpecify->SetValue( true ); 
	szSpecify->Add( rbtnSpecify, 0, wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcSpecify = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSpecify->Add( tcSpecify, 1, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSpecify = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSpecify->SetDefault(); 
	szSpecify->Add( btnSpecify, 0, wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szPosition->Add( szSpecify, 0, wxEXPAND, 0 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szPosition->Add( rbtnVariable, 0, wxTOP|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szVariable;
	szVariable = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Origin variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szVariable2;
	szVariable2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	szVariable2->AddGrowableCol( 1 );
	szVariable2->SetFlexibleDirection( wxBOTH );
	szVariable2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	szVariable2->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableX;
	szVariableX = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableX->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	szVariableX->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szVariable2->Add( szVariableX, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	szVariable2->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableY;
	szVariableY = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableY->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	szVariableY->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szVariable2->Add( szVariableY, 1, wxEXPAND, 0 );
	
	szVariable->Add( szVariable2, 1, wxEXPAND, 0 );
	
	szPosition->Add( szVariable, 0, wxEXPAND, 0 );
	
	szEventPosition->Add( szPosition, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szEventPosition->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szEventPosition );
	this->Layout();
	szEventPosition->Fit( this );
}

dlgEvtCmdEventPosition_Base::~dlgEvtCmdEventPosition_Base()
{
}

dlgEvtCmdSwapEvents_Base::dlgEvtCmdSwapEvents_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szSwapEvents;
	szSwapEvents = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szEvent1;
	szEvent1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event 1") ), wxHORIZONTAL );
	
	wxArrayString chEvent1Choices;
	chEvent1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chEvent1Choices, 0 );
	chEvent1->SetSelection( 0 );
	szEvent1->Add( chEvent1, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szEvent1, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szEvent2;
	szEvent2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event 2") ), wxHORIZONTAL );
	
	wxArrayString chEvent2Choices;
	chEvent2 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chEvent2Choices, 0 );
	chEvent2->SetSelection( 0 );
	szEvent2->Add( chEvent2, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szEvent2, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szSwapEvents->Add( szTop, 1, wxEXPAND, 0 );
	
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
	
	szSwapEvents->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szSwapEvents );
	this->Layout();
	szSwapEvents->Fit( this );
}

dlgEvtCmdSwapEvents_Base::~dlgEvtCmdSwapEvents_Base()
{
}

dlgEvtCmdGetTerrainID_Base::dlgEvtCmdGetTerrainID_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szGetTerrainID;
	szGetTerrainID = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szPlace;
	szPlace = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Place") ), wxVERTICAL );
	
	wxBoxSizer* szSpecify;
	szSpecify = new wxBoxSizer( wxHORIZONTAL );
	
	rbtnSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSpecify->SetValue( true ); 
	szSpecify->Add( rbtnSpecify, 0, wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcSpecify = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSpecify->Add( tcSpecify, 1, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSpecify = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSpecify->SetDefault(); 
	szSpecify->Add( btnSpecify, 0, wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szPlace->Add( szSpecify, 0, wxEXPAND, 0 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szPlace->Add( rbtnVariable, 0, wxTOP|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szVariable;
	szVariable = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Origin variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szVariable2;
	szVariable2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	szVariable2->AddGrowableCol( 1 );
	szVariable2->SetFlexibleDirection( wxBOTH );
	szVariable2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	szVariable2->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableX;
	szVariableX = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableX->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	szVariableX->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szVariable2->Add( szVariableX, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	szVariable2->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableY;
	szVariableY = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableY->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	szVariableY->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szVariable2->Add( szVariableY, 1, wxEXPAND, 0 );
	
	szVariable->Add( szVariable2, 1, wxEXPAND, 0 );
	
	szPlace->Add( szVariable, 0, wxEXPAND, 0 );
	
	szGetTerrainID->Add( szPlace, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szVariableID;
	szVariableID = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Store ID in variable") ), wxHORIZONTAL );
	
	tcVariableID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableID->Add( tcVariableID, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableID = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableID->SetDefault(); 
	szVariableID->Add( btnVariableID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szGetTerrainID->Add( szVariableID, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szGetTerrainID->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szGetTerrainID );
	this->Layout();
	szGetTerrainID->Fit( this );
}

dlgEvtCmdGetTerrainID_Base::~dlgEvtCmdGetTerrainID_Base()
{
}

dlgEvtCmdGetPositionID_Base::dlgEvtCmdGetPositionID_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szGetPositionID;
	szGetPositionID = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szPlace;
	szPlace = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Place") ), wxVERTICAL );
	
	wxBoxSizer* szSpecify;
	szSpecify = new wxBoxSizer( wxHORIZONTAL );
	
	rbtnSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSpecify->SetValue( true ); 
	szSpecify->Add( rbtnSpecify, 0, wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcSpecify = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSpecify->Add( tcSpecify, 1, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSpecify = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSpecify->SetDefault(); 
	szSpecify->Add( btnSpecify, 0, wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szPlace->Add( szSpecify, 0, wxEXPAND, 0 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szPlace->Add( rbtnVariable, 0, wxTOP|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szVariable;
	szVariable = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Origin variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szVariable2;
	szVariable2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	szVariable2->AddGrowableCol( 1 );
	szVariable2->SetFlexibleDirection( wxBOTH );
	szVariable2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	szVariable2->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableX;
	szVariableX = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableX->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	szVariableX->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szVariable2->Add( szVariableX, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	szVariable2->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableY;
	szVariableY = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableY->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	szVariableY->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szVariable2->Add( szVariableY, 1, wxEXPAND, 0 );
	
	szVariable->Add( szVariable2, 1, wxEXPAND, 0 );
	
	szPlace->Add( szVariable, 0, wxEXPAND, 0 );
	
	szGetPositionID->Add( szPlace, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szVariableID;
	szVariableID = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Store ID in variable") ), wxHORIZONTAL );
	
	tcVariableID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableID->Add( tcVariableID, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableID = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableID->SetDefault(); 
	szVariableID->Add( btnVariableID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szGetPositionID->Add( szVariableID, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szGetPositionID->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szGetPositionID );
	this->Layout();
	szGetPositionID->Fit( this );
}

dlgEvtCmdGetPositionID_Base::~dlgEvtCmdGetPositionID_Base()
{
}

dlgEvtCmdBlankScreen_Base::dlgEvtCmdBlankScreen_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szBlankScreen;
	szBlankScreen = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szMethod;
	szMethod = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Method") ), wxHORIZONTAL );
	
	wxArrayString chMethodChoices;
	chMethod = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMethodChoices, 0 );
	chMethod->SetSelection( 0 );
	szMethod->Add( chMethod, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szBlankScreen->Add( szMethod, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
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
	
	szBlankScreen->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szBlankScreen );
	this->Layout();
	szBlankScreen->Fit( this );
}

dlgEvtCmdBlankScreen_Base::~dlgEvtCmdBlankScreen_Base()
{
}

dlgEvtCmdShowScreen_Base::dlgEvtCmdShowScreen_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szShowScreen;
	szShowScreen = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szMethod;
	szMethod = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Method") ), wxHORIZONTAL );
	
	wxArrayString chMethodChoices;
	chMethod = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMethodChoices, 0 );
	chMethod->SetSelection( 0 );
	szMethod->Add( chMethod, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szShowScreen->Add( szMethod, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_ANY, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szShowScreen->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szShowScreen );
	this->Layout();
	szShowScreen->Fit( this );
}

dlgEvtCmdShowScreen_Base::~dlgEvtCmdShowScreen_Base()
{
}

dlgEvtCmdTone_Base::dlgEvtCmdTone_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szTone;
	szTone = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTone2;
	szTone2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tone") ), wxVERTICAL );
	
	wxFlexGridSizer* szTone3;
	szTone3 = new wxFlexGridSizer( 5, 4, 2, 2 );
	szTone3->AddGrowableCol( 1 );
	szTone3->SetFlexibleDirection( wxBOTH );
	szTone3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	szTone3->Add( 0,  0, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szPercent;
	szPercent = new wxBoxSizer( wxHORIZONTAL );
	
	st0Percent = new wxStaticText( this, wxID_ANY, _("0%"), wxDefaultPosition, wxDefaultSize, 0 );
	st0Percent->Wrap( -1 );
	szPercent->Add( st0Percent, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szPercent->Add( 0,  0, 1, wxEXPAND, 0 );
	
	st100Percent = new wxStaticText( this, wxID_ANY, _("  100%"), wxDefaultPosition, wxDefaultSize, 0 );
	st100Percent->Wrap( -1 );
	szPercent->Add( st100Percent, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szPercent->Add( 0,  0, 1, wxEXPAND, 0 );
	
	st200Percent = new wxStaticText( this, wxID_ANY, _("200%"), wxDefaultPosition, wxDefaultSize, 0 );
	st200Percent->Wrap( -1 );
	szPercent->Add( st200Percent, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTone3->Add( szPercent, 1, wxEXPAND, 0 );
	
	
	szTone3->Add( 0,  0, 0, wxEXPAND, 0 );
	
	
	szTone3->Add( 0,  0, 0, wxEXPAND, 0 );
	
	stRed = new wxStaticText( this, wxID_ANY, _("Red"), wxDefaultPosition, wxDefaultSize, 0 );
	stRed->Wrap( -1 );
	szTone3->Add( stRed, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slRed = new wxSlider( this, wxID_ANY, 100, 0,  200, wxDefaultPosition, wxSize( 200, -1 ), wxSL_HORIZONTAL );
	szTone3->Add( slRed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinRed = new wxSpinCtrl( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  200, 100 );
	szTone3->Add( spinRed, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stRedPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stRedPercent->Wrap( -1 );
	szTone3->Add( stRedPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stGreen = new wxStaticText( this, wxID_ANY, _("Green"), wxDefaultPosition, wxDefaultSize, 0 );
	stGreen->Wrap( -1 );
	szTone3->Add( stGreen, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slGreen = new wxSlider( this, wxID_ANY, 100, 0,  200, wxDefaultPosition, wxSize( 200, -1 ), wxSL_HORIZONTAL );
	szTone3->Add( slGreen, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinGreen = new wxSpinCtrl( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  200, 100 );
	szTone3->Add( spinGreen, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stGreenPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stGreenPercent->Wrap( -1 );
	szTone3->Add( stGreenPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stBlue = new wxStaticText( this, wxID_ANY, _("Blue"), wxDefaultPosition, wxDefaultSize, 0 );
	stBlue->Wrap( -1 );
	szTone3->Add( stBlue, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slBlue = new wxSlider( this, wxID_ANY, 100, 0,  200, wxDefaultPosition, wxSize( 200, -1 ), wxSL_HORIZONTAL );
	szTone3->Add( slBlue, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinBlue = new wxSpinCtrl( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  200, 100 );
	szTone3->Add( spinBlue, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stBluePercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stBluePercent->Wrap( -1 );
	szTone3->Add( stBluePercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stSaturation = new wxStaticText( this, wxID_ANY, _("Saturation"), wxDefaultPosition, wxDefaultSize, 0 );
	stSaturation->Wrap( -1 );
	szTone3->Add( stSaturation, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slSaturation = new wxSlider( this, wxID_ANY, 100, 0,  200, wxDefaultPosition, wxSize( 200, -1 ), wxSL_HORIZONTAL );
	szTone3->Add( slSaturation, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSaturation = new wxSpinCtrl( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  200, 100 );
	szTone3->Add( spinSaturation, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stSaturationPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stSaturationPercent->Wrap( -1 );
	szTone3->Add( stSaturationPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTone2->Add( szTone3, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szPreview;
	szPreview = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Preview") ), wxHORIZONTAL );
	
	bmpPreview = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 200, 32 ), wxSUNKEN_BORDER );
	szPreview->Add( bmpPreview, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	szTone2->Add( szPreview, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szTone->Add( szTone2, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTime;
	szTime = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Apply tone change") ), wxHORIZONTAL );
	
	SpinTime = new wxSpinCtrl( this, wxID_ANY, wxT("10"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 10 );
	szTime->Add( SpinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	szTime->Add( stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddle->Add( szTime, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait to end change"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	szOptions->Add( chbWait, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMiddle->Add( szOptions, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szTone->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szTone->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szTone );
	this->Layout();
	szTone->Fit( this );
}

dlgEvtCmdTone_Base::~dlgEvtCmdTone_Base()
{
}

dlgEvtCmdFlashScreen_Base::dlgEvtCmdFlashScreen_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szFlashScreen;
	szFlashScreen = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szFlash;
	szFlash = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Flash color") ), wxHORIZONTAL );
	
	wxStaticBoxSizer* szSample;
	szSample = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Sample") ), wxHORIZONTAL );
	
	bmpSample = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	szSample->Add( bmpSample, 0, 0, 0 );
	
	szFlash->Add( szSample, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 2 );
	
	wxFlexGridSizer* szFlashRight;
	szFlashRight = new wxFlexGridSizer( 5, 3, 2, 2 );
	szFlashRight->AddGrowableCol( 1 );
	szFlashRight->SetFlexibleDirection( wxBOTH );
	szFlashRight->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	szFlashRight->Add( 0,  0, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szMinMax;
	szMinMax = new wxBoxSizer( wxHORIZONTAL );
	
	stMin = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	stMin->Wrap( -1 );
	szMinMax->Add( stMin, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szMinMax->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stMax = new wxStaticText( this, wxID_ANY, _("31"), wxDefaultPosition, wxDefaultSize, 0 );
	stMax->Wrap( -1 );
	szMinMax->Add( stMax, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szFlashRight->Add( szMinMax, 1, wxEXPAND, 0 );
	
	
	szFlashRight->Add( 0,  0, 0, wxEXPAND, 0 );
	
	stRed = new wxStaticText( this, wxID_ANY, _("Red"), wxDefaultPosition, wxDefaultSize, 0 );
	stRed->Wrap( -1 );
	szFlashRight->Add( stRed, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slRed = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	szFlashRight->Add( slRed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinRed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	szFlashRight->Add( spinRed, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stGreen = new wxStaticText( this, wxID_ANY, _("Green"), wxDefaultPosition, wxDefaultSize, 0 );
	stGreen->Wrap( -1 );
	szFlashRight->Add( stGreen, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slGreen = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	szFlashRight->Add( slGreen, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinGreen = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	szFlashRight->Add( spinGreen, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stBlue = new wxStaticText( this, wxID_ANY, _("Blue"), wxDefaultPosition, wxDefaultSize, 0 );
	stBlue->Wrap( -1 );
	szFlashRight->Add( stBlue, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slBlue = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	szFlashRight->Add( slBlue, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinBlue = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	szFlashRight->Add( spinBlue, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stOpacity = new wxStaticText( this, wxID_ANY, _("Opacity"), wxDefaultPosition, wxDefaultSize, 0 );
	stOpacity->Wrap( -1 );
	szFlashRight->Add( stOpacity, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slOpacity = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	szFlashRight->Add( slOpacity, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOpacity = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	szFlashRight->Add( spinOpacity, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szFlash->Add( szFlashRight, 1, 0, 0 );
	
	szFlashScreen->Add( szFlash, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTime;
	szTime = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Time") ), wxHORIZONTAL );
	
	spinTime = new wxSpinCtrl( this, wxID_ANY, wxT("10"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 10 );
	szTime->Add( spinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	szTime->Add( stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddle->Add( szTime, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait to end"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	szOptions->Add( chbWait, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMiddle->Add( szOptions, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szFlashScreen->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szFlashScreen->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szFlashScreen );
	this->Layout();
	szFlashScreen->Fit( this );
}

dlgEvtCmdFlashScreen_Base::~dlgEvtCmdFlashScreen_Base()
{
}

dlgEvtCmdShake_Base::dlgEvtCmdShake_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szShake;
	szShake = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szStrength;
	szStrength = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Shaking strength") ), wxVERTICAL );
	
	slStrength = new wxSlider( this, wxID_ANY, 4, 0,  8, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS|wxSL_BOTTOM );
	szStrength->Add( slStrength, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szStrengthBottom;
	szStrengthBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stStrengthLower = new wxStaticText( this, wxID_ANY, _("Lower"), wxDefaultPosition, wxDefaultSize, 0 );
	stStrengthLower->Wrap( -1 );
	szStrengthBottom->Add( stStrengthLower, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szStrengthBottom->Add( 2,  0, 1, wxEXPAND, 0 );
	
	szStrengthNormal = new wxStaticText( this, wxID_ANY, _("Normal"), wxDefaultPosition, wxDefaultSize, 0 );
	szStrengthNormal->Wrap( -1 );
	szStrengthBottom->Add( szStrengthNormal, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szStrengthBottom->Add( 2,  0, 1, wxEXPAND, 0 );
	
	stStrengthHigher = new wxStaticText( this, wxID_ANY, _("Higher"), wxDefaultPosition, wxDefaultSize, 0 );
	stStrengthHigher->Wrap( -1 );
	szStrengthBottom->Add( stStrengthHigher, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szStrength->Add( szStrengthBottom, 1, wxEXPAND, 0 );
	
	szTop->Add( szStrength, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSpeed;
	szSpeed = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Speed") ), wxVERTICAL );
	
	slSpeed = new wxSlider( this, wxID_ANY, 4, 0,  8, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS|wxSL_BOTTOM );
	szSpeed->Add( slSpeed, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szSpeedBottom;
	szSpeedBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stSpeedSlower = new wxStaticText( this, wxID_ANY, _("Slower"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpeedSlower->Wrap( -1 );
	szSpeedBottom->Add( stSpeedSlower, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szSpeedBottom->Add( 2,  0, 1, wxEXPAND, 0 );
	
	stSpeedNormal = new wxStaticText( this, wxID_ANY, _("Normal"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpeedNormal->Wrap( -1 );
	szSpeedBottom->Add( stSpeedNormal, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szSpeedBottom->Add( 2,  0, 1, wxEXPAND, 0 );
	
	stSpeedFaster = new wxStaticText( this, wxID_ANY, _("Faster"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpeedFaster->Wrap( -1 );
	szSpeedBottom->Add( stSpeedFaster, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSpeed->Add( szSpeedBottom, 1, wxEXPAND, 0 );
	
	szTop->Add( szSpeed, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szShake->Add( szTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTime;
	szTime = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Shaking time") ), wxHORIZONTAL );
	
	spinTime = new wxSpinCtrl( this, wxID_ANY, wxT("2"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 2 );
	szTime->Add( spinTime, 0, wxRIGHT, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	szTime->Add( stTime, 0, wxLEFT, 1 );
	
	szMiddle->Add( szTime, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait until end"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	szOptions->Add( chbWait, 1, 0, 0 );
	
	szMiddle->Add( szOptions, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szShake->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szShake->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szShake );
	this->Layout();
	szShake->Fit( this );
}

dlgEvtCmdShake_Base::~dlgEvtCmdShake_Base()
{
}

dlgEvtCmdMoveScreen_Base::dlgEvtCmdMoveScreen_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szMoveScreen;
	szMoveScreen = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbOperationChoices[] = { _("Fix"), _("Cancel fix"), _("Move position"), _("Return to origin") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 2 );
	szTop->Add( rbOperation, 0, wxLEFT|wxRIGHT, 1 );
	
	wxStaticBoxSizer* szDirection;
	szDirection = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Direction") ), wxVERTICAL );
	
	wxGridSizer* szDirection2;
	szDirection2 = new wxGridSizer( 3, 3, 2, 2 );
	
	
	szDirection2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnUp = new wxRadioButton( this, wxID_ANY, _("Up"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnUp->SetValue( true ); 
	szDirection2->Add( rbtnUp, 0, wxEXPAND, 0 );
	
	
	szDirection2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnLeft = new wxRadioButton( this, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnLeft->SetValue( true ); 
	szDirection2->Add( rbtnLeft, 0, wxEXPAND, 0 );
	
	
	szDirection2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnRight = new wxRadioButton( this, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnRight->SetValue( true ); 
	szDirection2->Add( rbtnRight, 0, wxEXPAND, 0 );
	
	
	szDirection2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnDown = new wxRadioButton( this, wxID_ANY, _("Down"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnDown->SetValue( true ); 
	szDirection2->Add( rbtnDown, 0, wxEXPAND, 0 );
	
	
	szDirection2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szDirection->Add( szDirection2, 1, wxEXPAND, 0 );
	
	szTop->Add( szDirection, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTiles;
	szTiles = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Number of tiles") ), wxHORIZONTAL );
	
	spinTiles = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 90, -1 ), wxSP_ARROW_KEYS, 0, 500, 0 );
	szTiles->Add( spinTiles, 1, 0, 0 );
	
	szTop->Add( szTiles, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szMoveScreen->Add( szTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szSpeed;
	szSpeed = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Movement speed") ), wxHORIZONTAL );
	
	wxArrayString chSpeedChoices;
	chSpeed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSpeedChoices, 0 );
	chSpeed->SetSelection( 0 );
	szSpeed->Add( chSpeed, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMiddle->Add( szSpeed, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait until end movement"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	szOptions->Add( chbWait, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMiddle->Add( szOptions, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szMoveScreen->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szMoveScreen->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szMoveScreen );
	this->Layout();
	szMoveScreen->Fit( this );
}

dlgEvtCmdMoveScreen_Base::~dlgEvtCmdMoveScreen_Base()
{
}

dlgEvtCmdWeather_Base::dlgEvtCmdWeather_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szWeather;
	szWeather = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbEffectChoices[] = { _("None"), _("Rain"), _("Snow") };
	int rbEffectNChoices = sizeof( rbEffectChoices ) / sizeof( wxString );
	rbEffect = new wxRadioBox( this, wxID_ANY, _("Effect type"), wxDefaultPosition, wxDefaultSize, rbEffectNChoices, rbEffectChoices, 1, wxRA_SPECIFY_COLS );
	rbEffect->SetSelection( 0 );
	szTop->Add( rbEffect, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxString rbIntensityChoices[] = { _("Low"), _("Medium"), _("High") };
	int rbIntensityNChoices = sizeof( rbIntensityChoices ) / sizeof( wxString );
	rbIntensity = new wxRadioBox( this, wxID_ANY, _("Intensity"), wxDefaultPosition, wxDefaultSize, rbIntensityNChoices, rbIntensityChoices, 1, wxRA_SPECIFY_COLS );
	rbIntensity->SetSelection( 0 );
	szTop->Add( rbIntensity, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szWeather->Add( szTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szWeather->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szWeather );
	this->Layout();
	szWeather->Fit( this );
}

dlgEvtCmdWeather_Base::~dlgEvtCmdWeather_Base()
{
}

dlgEvtCmdPicture_Base::dlgEvtCmdPicture_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szPicture;
	szPicture = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szNumber;
	szNumber = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Picture number") ), wxHORIZONTAL );
	
	spinNumber = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 90, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	szNumber->Add( spinNumber, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szNumber, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szPicture;
	szPicture = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Picture") ), wxHORIZONTAL );
	
	tcPicture = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szPicture->Add( tcPicture, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPicture = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPicture->SetDefault(); 
	szPicture->Add( btnPicture, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szPicture, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szPicture->Add( szTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szPosition;
	szPosition = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Picture position (coordinates)") ), wxVERTICAL );
	
	wxFlexGridSizer* szPosition2;
	szPosition2 = new wxFlexGridSizer( 4, 3, 2, 2 );
	szPosition2->AddGrowableCol( 2 );
	szPosition2->SetFlexibleDirection( wxBOTH );
	szPosition2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSpecify->SetValue( true ); 
	szPosition2->Add( rbtnSpecify, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	stSpecifyX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpecifyX->Wrap( -1 );
	szPosition2->Add( stSpecifyX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyX = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 500, 0 );
	szPosition2->Add( spinSpecifyX, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szPosition2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stSpecifyY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpecifyY->Wrap( -1 );
	szPosition2->Add( stSpecifyY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyY = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 500, 0 );
	szPosition2->Add( spinSpecifyY, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szPosition2->Add( rbtnVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	szPosition2->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableX;
	szVariableX = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableX->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	szVariableX->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPosition2->Add( szVariableX, 1, wxEXPAND, 0 );
	
	
	szPosition2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	szPosition2->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableY;
	szVariableY = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableY->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	szVariableY->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPosition2->Add( szVariableY, 1, wxEXPAND, 0 );
	
	szPosition->Add( szPosition2, 1, wxBOTTOM|wxEXPAND, 1 );
	
	linePicture = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	szPosition->Add( linePicture, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbScrollMapFix = new wxCheckBox( this, wxID_ANY, _("Scroll map fix"), wxDefaultPosition, wxDefaultSize, 0 );
	chbScrollMapFix->SetValue(true); 
	szPosition->Add( chbScrollMapFix, 0, wxTOP|wxEXPAND, 1 );
	
	szPicture->Add( szPosition, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szIntensity;
	szIntensity = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Intensity") ), wxHORIZONTAL );
	
	spinIntensity = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szIntensity->Add( spinIntensity, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stIntensity = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stIntensity->Wrap( -1 );
	szIntensity->Add( stIntensity, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddle->Add( szIntensity, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTransparency;
	szTransparency = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Transparency") ), wxHORIZONTAL );
	
	spinTrasparency = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szTransparency->Add( spinTrasparency, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTrasparency = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTrasparency->Wrap( -1 );
	szTransparency->Add( stTrasparency, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddle->Add( szTransparency, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbTrasparentColorChoices[] = { _("Yes"), _("No") };
	int rbTrasparentColorNChoices = sizeof( rbTrasparentColorChoices ) / sizeof( wxString );
	rbTrasparentColor = new wxRadioBox( this, wxID_ANY, _("Transparent color"), wxDefaultPosition, wxSize( 110, -1 ), rbTrasparentColorNChoices, rbTrasparentColorChoices, 1, wxRA_SPECIFY_ROWS );
	rbTrasparentColor->SetSelection( 0 );
	szMiddle->Add( rbTrasparentColor, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szPicture->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szAttributes;
	szAttributes = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Other picture attributes") ), wxHORIZONTAL );
	
	tcAttributes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szAttributes->Add( tcAttributes, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnAttributes = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnAttributes->SetDefault(); 
	szAttributes->Add( btnAttributes, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPicture->Add( szAttributes, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szPicture->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szPicture );
	this->Layout();
	szPicture->Fit( this );
}

dlgEvtCmdPicture_Base::~dlgEvtCmdPicture_Base()
{
}

dlgEvtCmdMovePicture_Base::dlgEvtCmdMovePicture_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szMovePicture;
	szMovePicture = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szNumber;
	szNumber = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Picture number") ), wxHORIZONTAL );
	
	spinNumber = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 90, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	szNumber->Add( spinNumber, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szNumber, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szMovePicture->Add( szTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szPosition;
	szPosition = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Move to position (coordinates)") ), wxVERTICAL );
	
	wxFlexGridSizer* szPosition2;
	szPosition2 = new wxFlexGridSizer( 4, 3, 2, 2 );
	szPosition2->AddGrowableCol( 2 );
	szPosition2->SetFlexibleDirection( wxBOTH );
	szPosition2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSpecify->SetValue( true ); 
	szPosition2->Add( rbtnSpecify, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	stSpecifyX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpecifyX->Wrap( -1 );
	szPosition2->Add( stSpecifyX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyX = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	szPosition2->Add( spinSpecifyX, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szPosition2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stSpecifyY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpecifyY->Wrap( -1 );
	szPosition2->Add( stSpecifyY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyY = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	szPosition2->Add( spinSpecifyY, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szPosition2->Add( rbtnVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	szPosition2->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableX;
	szVariableX = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableX->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	szVariableX->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPosition2->Add( szVariableX, 1, wxEXPAND, 0 );
	
	
	szPosition2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	szPosition2->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableY;
	szVariableY = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableY->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	szVariableY->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPosition2->Add( szVariableY, 1, wxEXPAND, 0 );
	
	szPosition->Add( szPosition2, 1, wxBOTTOM|wxEXPAND, 1 );
	
	szMovePicture->Add( szPosition, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szIntensity;
	szIntensity = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Intensity") ), wxHORIZONTAL );
	
	spinIntensity = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szIntensity->Add( spinIntensity, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stIntensity = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stIntensity->Wrap( -1 );
	szIntensity->Add( stIntensity, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddle->Add( szIntensity, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTransparency;
	szTransparency = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Transparency") ), wxHORIZONTAL );
	
	spinTrasparency = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szTransparency->Add( spinTrasparency, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTrasparency = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTrasparency->Wrap( -1 );
	szTransparency->Add( stTrasparency, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddle->Add( szTransparency, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	
	szMiddle->Add( 110,  0, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szMovePicture->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szAttributes;
	szAttributes = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Other picture attributes") ), wxHORIZONTAL );
	
	tcAttributes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szAttributes->Add( tcAttributes, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnAttributes = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnAttributes->SetDefault(); 
	szAttributes->Add( btnAttributes, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMovePicture->Add( szAttributes, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddle2;
	szMiddle2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTime;
	szTime = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Time") ), wxHORIZONTAL );
	
	spinTime = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 10 );
	szTime->Add( spinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	szTime->Add( stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddle2->Add( szTime, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait to end"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	szOptions->Add( chbWait, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMiddle2->Add( szOptions, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szMovePicture->Add( szMiddle2, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szMovePicture->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szMovePicture );
	this->Layout();
	szMovePicture->Fit( this );
}

dlgEvtCmdMovePicture_Base::~dlgEvtCmdMovePicture_Base()
{
}

dlgEvtCmdDeletePicture_Base::dlgEvtCmdDeletePicture_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szDeletePicture;
	szDeletePicture = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szPicture;
	szPicture = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Picture number") ), wxHORIZONTAL );
	
	spinPicture = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	szPicture->Add( spinPicture, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szDeletePicture->Add( szPicture, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
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
	
	szDeletePicture->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szDeletePicture );
	this->Layout();
	szDeletePicture->Fit( this );
}

dlgEvtCmdDeletePicture_Base::~dlgEvtCmdDeletePicture_Base()
{
}

dlgEvtCmdAnimation_Base::dlgEvtCmdAnimation_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szAnimation;
	szAnimation = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szLeft;
	szLeft = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Animation") ), wxVERTICAL );
	
	bmpAnimation = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 320, 160 ), wxSUNKEN_BORDER );
	szLeft->Add( bmpAnimation, 0, wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chAnimationChoices;
	chAnimation = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chAnimationChoices, 0 );
	chAnimation->SetSelection( 0 );
	szLeft->Add( chAnimation, 0, wxBOTTOM|wxEXPAND, 1 );
	
	szTop->Add( szLeft, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTarget;
	szTarget = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxArrayString chTargetChoices;
	chTarget = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chTargetChoices, 0 );
	chTarget->SetSelection( 0 );
	szTarget->Add( chTarget, 1, 0, 0 );
	
	szRight->Add( szTarget, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait until end"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	szOptions->Add( chbWait, 0, wxBOTTOM|wxEXPAND, 1 );
	
	chbWholeMapRange = new wxCheckBox( this, wxID_ANY, _("Whole map range"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWholeMapRange->SetValue(true); 
	szOptions->Add( chbWholeMapRange, 0, wxTOP|wxEXPAND, 1 );
	
	szRight->Add( szOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szTop->Add( szRight, 1, wxEXPAND, 0 );
	
	szAnimation->Add( szTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szAnimation->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szAnimation );
	this->Layout();
	szAnimation->Fit( this );
}

dlgEvtCmdAnimation_Base::~dlgEvtCmdAnimation_Base()
{
}

dlgEvtCmdActorTransparency_Base::dlgEvtCmdActorTransparency_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szActorTransparency;
	szActorTransparency = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Transparent"), _("Normal") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szActorTransparency->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szActorTransparency->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szActorTransparency );
	this->Layout();
	szActorTransparency->Fit( this );
}

dlgEvtCmdActorTransparency_Base::~dlgEvtCmdActorTransparency_Base()
{
}

dlgEvtCmdFlashCharacter_Base::dlgEvtCmdFlashCharacter_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szFlashCharacter;
	szFlashCharacter = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTarget;
	szTarget = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxArrayString chTargetChoices;
	chTarget = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chTargetChoices, 0 );
	chTarget->SetSelection( 0 );
	szTarget->Add( chTarget, 1, 0, 0 );
	
	szFlashCharacter->Add( szTarget, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szFlash;
	szFlash = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Flash color") ), wxHORIZONTAL );
	
	wxStaticBoxSizer* szSample;
	szSample = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Sample") ), wxHORIZONTAL );
	
	bmpSample = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	szSample->Add( bmpSample, 0, 0, 0 );
	
	szFlash->Add( szSample, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 2 );
	
	wxFlexGridSizer* szFlash2;
	szFlash2 = new wxFlexGridSizer( 5, 3, 2, 2 );
	szFlash2->AddGrowableCol( 1 );
	szFlash2->SetFlexibleDirection( wxBOTH );
	szFlash2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	szFlash2->Add( 0,  0, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szFlashTop;
	szFlashTop = new wxBoxSizer( wxHORIZONTAL );
	
	stColorMin = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	stColorMin->Wrap( -1 );
	szFlashTop->Add( stColorMin, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szFlashTop->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stColorMax = new wxStaticText( this, wxID_ANY, _("31"), wxDefaultPosition, wxDefaultSize, 0 );
	stColorMax->Wrap( -1 );
	szFlashTop->Add( stColorMax, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szFlash2->Add( szFlashTop, 1, wxEXPAND, 0 );
	
	
	szFlash2->Add( 0,  0, 0, wxEXPAND, 0 );
	
	stRed = new wxStaticText( this, wxID_ANY, _("Red"), wxDefaultPosition, wxDefaultSize, 0 );
	stRed->Wrap( -1 );
	szFlash2->Add( stRed, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slRed = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	szFlash2->Add( slRed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinRed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	szFlash2->Add( spinRed, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stGreen = new wxStaticText( this, wxID_ANY, _("Green"), wxDefaultPosition, wxDefaultSize, 0 );
	stGreen->Wrap( -1 );
	szFlash2->Add( stGreen, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slGreen = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	szFlash2->Add( slGreen, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinGreen = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	szFlash2->Add( spinGreen, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stBlue = new wxStaticText( this, wxID_ANY, _("Blue"), wxDefaultPosition, wxDefaultSize, 0 );
	stBlue->Wrap( -1 );
	szFlash2->Add( stBlue, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slBlue = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	szFlash2->Add( slBlue, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinBlue = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	szFlash2->Add( spinBlue, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stOpacity = new wxStaticText( this, wxID_ANY, _("Opacity"), wxDefaultPosition, wxDefaultSize, 0 );
	stOpacity->Wrap( -1 );
	szFlash2->Add( stOpacity, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slOpacity = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	szFlash2->Add( slOpacity, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOpacity = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	szFlash2->Add( spinOpacity, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szFlash->Add( szFlash2, 1, 0, 0 );
	
	szFlashCharacter->Add( szFlash, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTime;
	szTime = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Time") ), wxHORIZONTAL );
	
	spinTime = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 10 );
	szTime->Add( spinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	szTime->Add( stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddle->Add( szTime, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait to end"), wxDefaultPosition, wxDefaultSize, 0 );
	szOptions->Add( chbWait, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMiddle->Add( szOptions, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szFlashCharacter->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szFlashCharacter->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szFlashCharacter );
	this->Layout();
	szFlashCharacter->Fit( this );
}

dlgEvtCmdFlashCharacter_Base::~dlgEvtCmdFlashCharacter_Base()
{
}

dlgEvtCmdEventMovement_Base::dlgEvtCmdEventMovement_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szEventMovement;
	szEventMovement = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTarget;
	szTarget = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Move target") ), wxHORIZONTAL );
	
	wxArrayString chTargetChoices;
	chTarget = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chTargetChoices, 0 );
	chTarget->SetSelection( 0 );
	szTarget->Add( chTarget, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szTarget, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbSpeedChoices[] = { _("1"), _("2"), _("3"), _("4"), _("5"), _("6"), _("7"), _("8") };
	int rbSpeedNChoices = sizeof( rbSpeedChoices ) / sizeof( wxString );
	rbSpeed = new wxRadioBox( this, wxID_ANY, _("Movement speed"), wxDefaultPosition, wxDefaultSize, rbSpeedNChoices, rbSpeedChoices, 1, wxRA_SPECIFY_ROWS );
	rbSpeed->SetSelection( 0 );
	szTop->Add( rbSpeed, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szEventMovement->Add( szTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szPath;
	szPath = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Path") ), wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	listPath = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	listPath->Append( _("<>") );
	szLeft->Add( listPath, 1, wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szLeftMiddle;
	szLeftMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	btnDelete = new wxButton( this, wxID_ANY, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	btnDelete->SetDefault(); 
	szLeftMiddle->Add( btnDelete, 1, wxRIGHT|wxTOP, 1 );
	
	btnClear = new wxButton( this, wxID_ANY, _("Clear"), wxDefaultPosition, wxDefaultSize, 0 );
	btnClear->SetDefault(); 
	szLeftMiddle->Add( btnClear, 1, wxLEFT|wxRIGHT|wxTOP, 1 );
	
	szLeft->Add( szLeftMiddle, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );
	
	chbLoop = new wxCheckBox( this, wxID_ANY, _("Repeat path"), wxDefaultPosition, wxDefaultSize, 0 );
	chbLoop->SetValue(true); 
	szOptions->Add( chbLoop, 0, wxBOTTOM|wxEXPAND, 1 );
	
	ChkIgnore = new wxCheckBox( this, wxID_ANY, _("Ignore if gets blocked"), wxDefaultPosition, wxDefaultSize, 0 );
	ChkIgnore->SetValue(true); 
	szOptions->Add( ChkIgnore, 0, wxTOP|wxEXPAND, 1 );
	
	szLeft->Add( szOptions, 0, wxRIGHT|wxEXPAND, 1 );
	
	szPath->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxGridSizer* szRight;
	szRight = new wxGridSizer( 14, 3, 0, 0 );
	
	btnUp = new wxButton( this, wxID_ANY, _("Up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnUp->SetDefault(); 
	szRight->Add( btnUp, 0, wxEXPAND, 0 );
	
	btnLookUp = new wxButton( this, wxID_ANY, _("Look up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLookUp->SetDefault(); 
	szRight->Add( btnLookUp, 0, wxEXPAND, 0 );
	
	btnStartJump = new wxButton( this, wxID_ANY, _("Start jump"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStartJump->SetDefault(); 
	szRight->Add( btnStartJump, 0, wxEXPAND, 0 );
	
	btnRight = new wxButton( this, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRight->SetDefault(); 
	szRight->Add( btnRight, 0, wxEXPAND, 0 );
	
	btnLookRight = new wxButton( this, wxID_ANY, _("Look Right"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLookRight->SetDefault(); 
	szRight->Add( btnLookRight, 0, wxEXPAND, 0 );
	
	btnEndJump = new wxButton( this, wxID_ANY, _("End jump"), wxDefaultPosition, wxDefaultSize, 0 );
	btnEndJump->SetDefault(); 
	szRight->Add( btnEndJump, 0, wxEXPAND, 0 );
	
	btnDown = new wxButton( this, wxID_ANY, _("Down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnDown->SetDefault(); 
	szRight->Add( btnDown, 0, wxEXPAND, 0 );
	
	btnLookDown = new wxButton( this, wxID_ANY, _("Look down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLookDown->SetDefault(); 
	szRight->Add( btnLookDown, 0, wxEXPAND, 0 );
	
	btnFixDirection = new wxButton( this, wxID_ANY, _("Fix direction"), wxDefaultPosition, wxDefaultSize, 0 );
	btnFixDirection->SetDefault(); 
	szRight->Add( btnFixDirection, 0, wxEXPAND, 0 );
	
	btnLeft = new wxButton( this, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLeft->SetDefault(); 
	szRight->Add( btnLeft, 0, wxEXPAND, 0 );
	
	btnLookLeft = new wxButton( this, wxID_ANY, _("Look left"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLookLeft->SetDefault(); 
	szRight->Add( btnLookLeft, 0, wxEXPAND, 0 );
	
	btnCancelFix = new wxButton( this, wxID_ANY, _("Cancel fix"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancelFix->SetDefault(); 
	szRight->Add( btnCancelFix, 0, wxEXPAND, 0 );
	
	btnRightUp = new wxButton( this, wxID_ANY, _("Right - Up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRightUp->SetDefault(); 
	szRight->Add( btnRightUp, 0, wxEXPAND, 0 );
	
	btn90Right = new wxButton( this, wxID_ANY, _("Rotate 90º Right"), wxDefaultPosition, wxDefaultSize, 0 );
	btn90Right->SetDefault(); 
	szRight->Add( btn90Right, 0, wxEXPAND, 0 );
	
	btnGhost = new wxButton( this, wxID_ANY, _("Ghost like"), wxDefaultPosition, wxDefaultSize, 0 );
	btnGhost->SetDefault(); 
	szRight->Add( btnGhost, 0, wxEXPAND, 0 );
	
	btnRightDown = new wxButton( this, wxID_ANY, _("Right - Down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRightDown->SetDefault(); 
	szRight->Add( btnRightDown, 0, wxEXPAND, 0 );
	
	btn90Left = new wxButton( this, wxID_ANY, _("Rotate 90º Left"), wxDefaultPosition, wxDefaultSize, 0 );
	btn90Left->SetDefault(); 
	szRight->Add( btn90Left, 0, wxEXPAND, 0 );
	
	btnEndGhost = new wxButton( this, wxID_ANY, _("End ghost like"), wxDefaultPosition, wxDefaultSize, 0 );
	btnEndGhost->SetDefault(); 
	szRight->Add( btnEndGhost, 0, wxEXPAND, 0 );
	
	btnLeftUp = new wxButton( this, wxID_ANY, _("Left - Up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLeftUp->SetDefault(); 
	szRight->Add( btnLeftUp, 0, wxEXPAND, 0 );
	
	btn180Right = new wxButton( this, wxID_ANY, _("Rotate 180º Right"), wxDefaultPosition, wxDefaultSize, 0 );
	btn180Right->SetDefault(); 
	szRight->Add( btn180Right, 0, wxEXPAND, 0 );
	
	btnStopAnimation = new wxButton( this, wxID_ANY, _("Stop animation"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStopAnimation->SetDefault(); 
	szRight->Add( btnStopAnimation, 0, wxEXPAND, 0 );
	
	btnLeftDown = new wxButton( this, wxID_ANY, _("Left - Down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLeftDown->SetDefault(); 
	szRight->Add( btnLeftDown, 0, wxEXPAND, 0 );
	
	btnRightLeft = new wxButton( this, wxID_ANY, _("Rotate 90º Rght-Lft"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRightLeft->SetDefault(); 
	szRight->Add( btnRightLeft, 0, wxEXPAND, 0 );
	
	btnContinueAnimation = new wxButton( this, wxID_ANY, _("Continue animation"), wxDefaultPosition, wxDefaultSize, 0 );
	btnContinueAnimation->SetDefault(); 
	szRight->Add( btnContinueAnimation, 0, wxEXPAND, 0 );
	
	btnRandom = new wxButton( this, wxID_ANY, _("Random step"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRandom->SetDefault(); 
	szRight->Add( btnRandom, 0, wxEXPAND, 0 );
	
	btnRandomDirection = new wxButton( this, wxID_ANY, _("Random direction"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRandomDirection->SetDefault(); 
	szRight->Add( btnRandomDirection, 0, wxEXPAND, 0 );
	
	btnTrasparencyUp = new wxButton( this, wxID_ANY, _("Transparency up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTrasparencyUp->SetDefault(); 
	szRight->Add( btnTrasparencyUp, 0, wxEXPAND, 0 );
	
	btnFollowPlayer = new wxButton( this, wxID_ANY, _("Follow player"), wxDefaultPosition, wxDefaultSize, 0 );
	btnFollowPlayer->SetDefault(); 
	szRight->Add( btnFollowPlayer, 0, wxEXPAND, 0 );
	
	btnLookPlayer = new wxButton( this, wxID_ANY, _("Look player"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLookPlayer->SetDefault(); 
	szRight->Add( btnLookPlayer, 0, wxEXPAND, 0 );
	
	btnTrasparencyDown = new wxButton( this, wxID_ANY, _("Transparency down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTrasparencyDown->SetDefault(); 
	szRight->Add( btnTrasparencyDown, 0, wxEXPAND, 0 );
	
	btnEvadePlayer = new wxButton( this, wxID_ANY, _("Evade player"), wxDefaultPosition, wxDefaultSize, 0 );
	btnEvadePlayer->SetDefault(); 
	szRight->Add( btnEvadePlayer, 0, wxEXPAND, 0 );
	
	btnTurnBack = new wxButton( this, wxID_ANY, _("Turn back on player"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTurnBack->SetDefault(); 
	szRight->Add( btnTurnBack, 0, wxEXPAND, 0 );
	
	btnEnableSwitch = new wxButton( this, wxID_ANY, _("Enable switch"), wxDefaultPosition, wxDefaultSize, 0 );
	btnEnableSwitch->SetDefault(); 
	szRight->Add( btnEnableSwitch, 0, wxEXPAND, 0 );
	
	btnGo = new wxButton( this, wxID_ANY, _("Go"), wxDefaultPosition, wxDefaultSize, 0 );
	btnGo->SetDefault(); 
	szRight->Add( btnGo, 0, wxEXPAND, 0 );
	
	btnWait = new wxButton( this, wxID_ANY, _("Wait"), wxDefaultPosition, wxDefaultSize, 0 );
	btnWait->SetDefault(); 
	szRight->Add( btnWait, 0, wxEXPAND, 0 );
	
	btnDisableSwitch = new wxButton( this, wxID_ANY, _("Disable switch"), wxDefaultPosition, wxDefaultSize, 0 );
	btnDisableSwitch->SetDefault(); 
	szRight->Add( btnDisableSwitch, 0, wxEXPAND, 0 );
	
	btnSpeedUp = new wxButton( this, wxID_ANY, _("Speed up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnSpeedUp->SetDefault(); 
	szRight->Add( btnSpeedUp, 0, wxEXPAND, 0 );
	
	btnFrequencyUp = new wxButton( this, wxID_ANY, _("Frequency up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnFrequencyUp->SetDefault(); 
	szRight->Add( btnFrequencyUp, 0, wxEXPAND, 0 );
	
	btnChangeGraphic = new wxButton( this, wxID_ANY, _("Change graphic..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnChangeGraphic->SetDefault(); 
	szRight->Add( btnChangeGraphic, 0, wxEXPAND, 0 );
	
	btnSpeedDown = new wxButton( this, wxID_ANY, _("Speed down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnSpeedDown->SetDefault(); 
	szRight->Add( btnSpeedDown, 0, wxEXPAND, 0 );
	
	btnFrequencyDown = new wxButton( this, wxID_ANY, _("Frequency down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnFrequencyDown->SetDefault(); 
	szRight->Add( btnFrequencyDown, 0, wxEXPAND, 0 );
	
	btnSoundEffect = new wxButton( this, wxID_ANY, _("Sound effect..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSoundEffect->SetDefault(); 
	szRight->Add( btnSoundEffect, 0, wxEXPAND, 0 );
	
	szPath->Add( szRight, 1, wxLEFT|wxEXPAND, 1 );
	
	szEventMovement->Add( szPath, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
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
	
	szEventMovement->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szEventMovement );
	this->Layout();
	szEventMovement->Fit( this );
}

dlgEvtCmdEventMovement_Base::~dlgEvtCmdEventMovement_Base()
{
}

dlgEvtCmdWait_Base::dlgEvtCmdWait_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szWait;
	szWait = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTime;
	szTime = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Wait time") ), wxHORIZONTAL );
	
	spinTime = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 10 );
	szTime->Add( spinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	szTime->Add( stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szWait->Add( szTime, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
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
	
	szWait->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szWait );
	this->Layout();
	szWait->Fit( this );
}

dlgEvtCmdWait_Base::~dlgEvtCmdWait_Base()
{
}
