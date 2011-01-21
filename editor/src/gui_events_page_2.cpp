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
	
	wxBoxSizer* bSizer301;
	bSizer301 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer156;
	sbSizer156 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy troop") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer35;
	fgSizer35 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer35->AddGrowableCol( 1 );
	fgSizer35->SetFlexibleDirection( wxBOTH );
	fgSizer35->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTroopFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTroopFixed->SetValue( true ); 
	fgSizer35->Add( rbtnTroopFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTroopFixedChoices;
	chTroopFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTroopFixedChoices, 0 );
	chTroopFixed->SetSelection( 0 );
	fgSizer35->Add( chTroopFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTroopVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTroopVariable->SetValue( true ); 
	fgSizer35->Add( rbtnTroopVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer302;
	bSizer302 = new wxBoxSizer( wxHORIZONTAL );
	
	tcTroopVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer302->Add( tcTroopVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTroopVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTroopVariable->SetDefault(); 
	bSizer302->Add( btnTroopVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer35->Add( bSizer302, 1, wxEXPAND, 0 );
	
	sbSizer156->Add( fgSizer35, 1, wxEXPAND, 0 );
	
	bSizer301->Add( sbSizer156, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer157;
	sbSizer157 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Battle background") ), wxHORIZONTAL );
	
	rbtnBackgroundFromTerrain = new wxRadioButton( this, wxID_ANY, _("From terrain"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnBackgroundFromTerrain->SetValue( true ); 
	sbSizer157->Add( rbtnBackgroundFromTerrain, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnBackgroundSelect = new wxRadioButton( this, wxID_ANY, _("Select"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnBackgroundSelect->SetValue( true ); 
	sbSizer157->Add( rbtnBackgroundSelect, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcBackground = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer157->Add( tcBackground, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnBackground = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnBackground->SetDefault(); 
	sbSizer157->Add( btnBackground, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer301->Add( sbSizer157, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbEscapeChoices[] = { _("Deny"), _("Allow"), _("Condition") };
	int rbEscapeNChoices = sizeof( rbEscapeChoices ) / sizeof( wxString );
	rbEscape = new wxRadioBox( this, wxID_ANY, _("Escape"), wxDefaultPosition, wxDefaultSize, rbEscapeNChoices, rbEscapeChoices, 1, wxRA_SPECIFY_ROWS );
	rbEscape->SetSelection( 0 );
	bSizer301->Add( rbEscape, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer303;
	bSizer303 = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbDefeatChoices[] = { _("Game over"), _("Condition") };
	int rbDefeatNChoices = sizeof( rbDefeatChoices ) / sizeof( wxString );
	rbDefeat = new wxRadioBox( this, wxID_ANY, _("On defeat"), wxDefaultPosition, wxDefaultSize, rbDefeatNChoices, rbDefeatChoices, 1, wxRA_SPECIFY_ROWS );
	rbDefeat->SetSelection( 0 );
	bSizer303->Add( rbDefeat, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer158;
	sbSizer158 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbAlliedFirst = new wxCheckBox( this, wxID_ANY, _("Allied first torn"), wxDefaultPosition, wxDefaultSize, 0 );
	chbAlliedFirst->SetValue(true); 
	sbSizer158->Add( chbAlliedFirst, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer303->Add( sbSizer158, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer301->Add( bSizer303, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer304;
	bSizer304 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer304->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer304->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer304->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer301->Add( bSizer304, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer301 );
	this->Layout();
	bSizer301->Fit( this );
}

dlgEvtCmdBattle_Base::~dlgEvtCmdBattle_Base()
{
}

dlgEvtCmdCommerce_Base::dlgEvtCmdCommerce_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer280;
	bSizer280 = new wxBoxSizer( wxVERTICAL );
	
	wxString rbTypeChoices[] = { _("Normal"), _("Doesn't sell"), _("Doesn't buy") };
	int rbTypeNChoices = sizeof( rbTypeChoices ) / sizeof( wxString );
	rbType = new wxRadioBox( this, wxID_ANY, _("Commerce type"), wxDefaultPosition, wxDefaultSize, rbTypeNChoices, rbTypeChoices, 1, wxRA_SPECIFY_ROWS );
	rbType->SetSelection( 0 );
	bSizer280->Add( rbType, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer142;
	sbSizer142 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Commerce style") ), wxHORIZONTAL );
	
	wxArrayString chStyleChoices;
	chStyle = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chStyleChoices, 0 );
	chStyle->SetSelection( 0 );
	sbSizer142->Add( chStyle, 1, 0, 0 );
	
	bSizer280->Add( sbSizer142, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer143;
	sbSizer143 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Objects to sell") ), wxHORIZONTAL );
	
	listSell = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), 0, NULL, 0 ); 
	sbSizer143->Add( listSell, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer281;
	bSizer281 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer281->Add( 0,  0, 1, wxEXPAND, 0 );
	
	btnAdd = new wxButton( this, wxID_ANY, _("< Add"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnAdd->SetDefault(); 
	bSizer281->Add( btnAdd, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	btnRemove = new wxButton( this, wxID_ANY, _("Remove >"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnRemove->SetDefault(); 
	bSizer281->Add( btnRemove, 0, wxLEFT|wxRIGHT|wxTOP|wxEXPAND, 1 );
	
	
	bSizer281->Add( 0,  0, 1, wxEXPAND, 0 );
	
	sbSizer143->Add( bSizer281, 0, wxEXPAND, 0 );
	
	listObjects = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), 0, NULL, 0 ); 
	sbSizer143->Add( listObjects, 1, wxLEFT|wxEXPAND, 1 );
	
	bSizer280->Add( sbSizer143, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer144;
	sbSizer144 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbDoNotResell = new wxCheckBox( this, wxID_ANY, _("Merchant doesn't sell goods already sold"), wxDefaultPosition, wxDefaultSize, 0 );
	chbDoNotResell->SetValue(true); 
	sbSizer144->Add( chbDoNotResell, 1, 0, 0 );
	
	bSizer280->Add( sbSizer144, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer282;
	bSizer282 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer282->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer282->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer282->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer280->Add( bSizer282, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer280 );
	this->Layout();
	bSizer280->Fit( this );
}

dlgEvtCmdCommerce_Base::~dlgEvtCmdCommerce_Base()
{
}

dlgEvtCmdInn_Base::dlgEvtCmdInn_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer188;
	bSizer188 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer100;
	sbSizer100 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Inn message type") ), wxHORIZONTAL );
	
	wxArrayString chMessageChoices;
	chMessage = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMessageChoices, 0 );
	chMessage->SetSelection( 0 );
	sbSizer100->Add( chMessage, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer188->Add( sbSizer100, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer189;
	bSizer189 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer101;
	sbSizer101 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Stay price") ), wxHORIZONTAL );
	
	spin_ctrl_1 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	sbSizer101->Add( spin_ctrl_1, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer189->Add( sbSizer101, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer102;
	sbSizer102 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	ChkCondition = new wxCheckBox( this, wxID_ANY, _("Create condition"), wxDefaultPosition, wxDefaultSize, 0 );
	ChkCondition->SetValue(true); 
	sbSizer102->Add( ChkCondition, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer189->Add( sbSizer102, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer188->Add( bSizer189, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer190;
	bSizer190 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer190->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer190->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer190->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer188->Add( bSizer190, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer188 );
	this->Layout();
	bSizer188->Fit( this );
}

dlgEvtCmdInn_Base::~dlgEvtCmdInn_Base()
{
}

dlgEvtCmdActorNameInput_Base::dlgEvtCmdActorNameInput_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer323;
	bSizer323 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer324;
	bSizer324 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer168;
	sbSizer168 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor") ), wxHORIZONTAL );
	
	wxArrayString chActorChoices;
	chActor = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 100, -1 ), chActorChoices, 0 );
	chActor->SetSelection( 0 );
	sbSizer168->Add( chActor, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer324->Add( sbSizer168, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbModeChoices[] = { _("Hiragana"), _("Katakana") };
	int rbModeNChoices = sizeof( rbModeChoices ) / sizeof( wxString );
	rbMode = new wxRadioBox( this, wxID_ANY, _("Initial mode"), wxDefaultPosition, wxDefaultSize, rbModeNChoices, rbModeChoices, 1, wxRA_SPECIFY_ROWS );
	rbMode->SetSelection( 0 );
	bSizer324->Add( rbMode, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer323->Add( bSizer324, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer169;
	sbSizer169 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbShowName = new wxCheckBox( this, wxID_ANY, _("Show initial name"), wxDefaultPosition, wxDefaultSize, 0 );
	chbShowName->SetValue(true); 
	sbSizer169->Add( chbShowName, 1, 0, 0 );
	
	bSizer323->Add( sbSizer169, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer325;
	bSizer325 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer325->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer325->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer325->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer323->Add( bSizer325, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer323 );
	this->Layout();
	bSizer323->Fit( this );
}

dlgEvtCmdActorNameInput_Base::~dlgEvtCmdActorNameInput_Base()
{
}

dlgEvtCmdTeleport_Base::dlgEvtCmdTeleport_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer171;
	bSizer171 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer172;
	bSizer172 = new wxBoxSizer( wxHORIZONTAL );
	
	treeMaps = new wxTreeCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( 150, -1 ), wxTR_HAS_BUTTONS|wxTR_NO_LINES|wxTR_LINES_AT_ROOT|wxTR_DEFAULT_STYLE|wxSUNKEN_BORDER );
	bSizer172->Add( treeMaps, 0, wxALL|wxEXPAND, 1 );
	
	pnMap = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( 320, 240 ), wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	bSizer172->Add( pnMap, 1, wxALL|wxEXPAND, 1 );
	
	bSizer171->Add( bSizer172, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer173;
	bSizer173 = new wxBoxSizer( wxHORIZONTAL );
	
	sTMap = new wxStaticText( this, wxID_ANY, _("XXXX:MAPXXXX (XXX,YYY)"), wxDefaultPosition, wxDefaultSize, 0 );
	sTMap->Wrap( -1 );
	bSizer173->Add( sTMap, 10, wxALL|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnScale11 = new wxToggleButton( this, wxID_ANY, _("1:1"), wxDefaultPosition, wxSize( 35, -1 ), 0 );
	btnScale11->SetValue( true ); 
	bSizer173->Add( btnScale11, 0, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnScale12 = new wxToggleButton( this, wxID_ANY, _("1:2"), wxDefaultPosition, wxSize( 35, -1 ), 0 );
	btnScale12->SetValue( true ); 
	bSizer173->Add( btnScale12, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnScale14 = new wxToggleButton( this, wxID_ANY, _("1:4"), wxDefaultPosition, wxSize( 35, -1 ), 0 );
	btnScale14->SetValue( true ); 
	bSizer173->Add( btnScale14, 0, wxRIGHT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	bSizer173->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer173->Add( wxID_OK, 0, wxALL|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer173->Add( wxID_CANCEL, 0, wxALL|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer171->Add( bSizer173, 0, wxRIGHT|wxBOTTOM|wxEXPAND, 3 );
	
	this->SetSizer( bSizer171 );
	this->Layout();
	bSizer171->Fit( this );
}

dlgEvtCmdTeleport_Base::~dlgEvtCmdTeleport_Base()
{
}

dlgEvtCmdMemorizePlace_Base::dlgEvtCmdMemorizePlace_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer309;
	bSizer309 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer161;
	sbSizer161 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Store in variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer36;
	fgSizer36 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer36->AddGrowableCol( 1 );
	fgSizer36->SetFlexibleDirection( wxBOTH );
	fgSizer36->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stVariableMapID = new wxStaticText( this, wxID_ANY, _("Map ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableMapID->Wrap( -1 );
	fgSizer36->Add( stVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer310;
	bSizer310 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableMapID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer310->Add( tcVariableMapID, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableMapID = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableMapID->SetDefault(); 
	bSizer310->Add( btnVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer36->Add( bSizer310, 1, wxEXPAND, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	fgSizer36->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer311;
	bSizer311 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer311->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	bSizer311->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer36->Add( bSizer311, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	fgSizer36->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer312;
	bSizer312 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer312->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	bSizer312->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer36->Add( bSizer312, 1, wxEXPAND, 0 );
	
	sbSizer161->Add( fgSizer36, 1, wxEXPAND, 0 );
	
	bSizer309->Add( sbSizer161, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer313;
	bSizer313 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer313->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer313->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer313->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer309->Add( bSizer313, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer309 );
	this->Layout();
	bSizer309->Fit( this );
}

dlgEvtCmdMemorizePlace_Base::~dlgEvtCmdMemorizePlace_Base()
{
}

dlgEvtCmdGoToMemorizedPlace_Base::dlgEvtCmdGoToMemorizedPlace_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer150;
	bSizer150 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer79;
	sbSizer79 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Place in variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer19;
	fgSizer19 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer19->AddGrowableCol( 1 );
	fgSizer19->SetFlexibleDirection( wxBOTH );
	fgSizer19->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stVariableMapID = new wxStaticText( this, wxID_ANY, _("Map ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableMapID->Wrap( -1 );
	fgSizer19->Add( stVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer151;
	bSizer151 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableMapID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer151->Add( tcVariableMapID, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableMapID = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableMapID->SetDefault(); 
	bSizer151->Add( btnVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer19->Add( bSizer151, 1, wxEXPAND, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	fgSizer19->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer152;
	bSizer152 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer152->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	bSizer152->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer19->Add( bSizer152, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	fgSizer19->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer153;
	bSizer153 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer153->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	bSizer153->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer19->Add( bSizer153, 1, wxEXPAND, 0 );
	
	sbSizer79->Add( fgSizer19, 1, wxEXPAND, 0 );
	
	bSizer150->Add( sbSizer79, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer154;
	bSizer154 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer154->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer154->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer154->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer150->Add( bSizer154, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer150 );
	this->Layout();
	bSizer150->Fit( this );
}

dlgEvtCmdGoToMemorizedPlace_Base::~dlgEvtCmdGoToMemorizedPlace_Base()
{
}

dlgEvtCmdVehiclePosition_Base::dlgEvtCmdVehiclePosition_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer225;
	bSizer225 = new wxBoxSizer( wxVERTICAL );
	
	wxString rbVehicleChoices[] = { _("Small ship"), _("Big ship"), _("Aeroship") };
	int rbVehicleNChoices = sizeof( rbVehicleChoices ) / sizeof( wxString );
	rbVehicle = new wxRadioBox( this, wxID_ANY, _("Vehicle"), wxDefaultPosition, wxDefaultSize, rbVehicleNChoices, rbVehicleChoices, 1, wxRA_SPECIFY_ROWS );
	rbVehicle->SetSelection( 0 );
	bSizer225->Add( rbVehicle, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer119;
	sbSizer119 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Vehicle position") ), wxVERTICAL );
	
	rbtnPositionSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnPositionSpecify->SetValue( true ); 
	sbSizer119->Add( rbtnPositionSpecify, 0, wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer226;
	bSizer226 = new wxBoxSizer( wxHORIZONTAL );
	
	tcPositionSpecify = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer226->Add( tcPositionSpecify, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPositionSpecify = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPositionSpecify->SetDefault(); 
	bSizer226->Add( btnPositionSpecify, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer119->Add( bSizer226, 0, wxEXPAND, 0 );
	
	rbtnPositionVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnPositionVariable->SetValue( true ); 
	sbSizer119->Add( rbtnPositionVariable, 0, wxTOP|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer120;
	sbSizer120 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Origin variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer25;
	fgSizer25 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer25->AddGrowableCol( 1 );
	fgSizer25->SetFlexibleDirection( wxBOTH );
	fgSizer25->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stPositionVariableMapID = new wxStaticText( this, wxID_ANY, _("Map ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	stPositionVariableMapID->Wrap( -1 );
	fgSizer25->Add( stPositionVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer227;
	bSizer227 = new wxBoxSizer( wxHORIZONTAL );
	
	tcPositionVariableMapID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer227->Add( tcPositionVariableMapID, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPositionVariableMapID = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPositionVariableMapID->SetDefault(); 
	bSizer227->Add( btnPositionVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer25->Add( bSizer227, 1, wxEXPAND, 0 );
	
	stPositionVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stPositionVariableX->Wrap( -1 );
	fgSizer25->Add( stPositionVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer228;
	bSizer228 = new wxBoxSizer( wxHORIZONTAL );
	
	tcPositionVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer228->Add( tcPositionVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPositionVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPositionVariableX->SetDefault(); 
	bSizer228->Add( btnPositionVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer25->Add( bSizer228, 1, wxEXPAND, 0 );
	
	stPositionVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stPositionVariableY->Wrap( -1 );
	fgSizer25->Add( stPositionVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer229;
	bSizer229 = new wxBoxSizer( wxHORIZONTAL );
	
	tcPositionVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer229->Add( tcPositionVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPositionVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPositionVariableY->SetDefault(); 
	bSizer229->Add( btnPositionVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer25->Add( bSizer229, 1, wxEXPAND, 0 );
	
	sbSizer120->Add( fgSizer25, 1, wxEXPAND, 0 );
	
	sbSizer119->Add( sbSizer120, 0, wxEXPAND, 0 );
	
	bSizer225->Add( sbSizer119, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer230;
	bSizer230 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer230->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer230->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer230->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer225->Add( bSizer230, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer225 );
	this->Layout();
	bSizer225->Fit( this );
}

dlgEvtCmdVehiclePosition_Base::~dlgEvtCmdVehiclePosition_Base()
{
}

dlgEvtCmdEventPosition_Base::dlgEvtCmdEventPosition_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer326;
	bSizer326 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer170;
	sbSizer170 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event") ), wxHORIZONTAL );
	
	wxArrayString chEventChoices;
	chEvent = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chEventChoices, 0 );
	chEvent->SetSelection( 0 );
	sbSizer170->Add( chEvent, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer326->Add( sbSizer170, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer171;
	sbSizer171 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event position") ), wxVERTICAL );
	
	wxBoxSizer* bSizer327;
	bSizer327 = new wxBoxSizer( wxHORIZONTAL );
	
	rbtnPositionEspecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnPositionEspecify->SetValue( true ); 
	bSizer327->Add( rbtnPositionEspecify, 0, wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcPositionEspecify = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer327->Add( tcPositionEspecify, 1, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnPositionEspecify = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPositionEspecify->SetDefault(); 
	bSizer327->Add( btnPositionEspecify, 0, wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer171->Add( bSizer327, 0, wxEXPAND, 0 );
	
	rbtnPositionVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnPositionVariable->SetValue( true ); 
	sbSizer171->Add( rbtnPositionVariable, 0, wxTOP|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer172;
	sbSizer172 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Origin variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer39;
	fgSizer39 = new wxFlexGridSizer( 2, 2, 2, 2 );
	fgSizer39->AddGrowableCol( 1 );
	fgSizer39->SetFlexibleDirection( wxBOTH );
	fgSizer39->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stPositionVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stPositionVariableX->Wrap( -1 );
	fgSizer39->Add( stPositionVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer328;
	bSizer328 = new wxBoxSizer( wxHORIZONTAL );
	
	tcPositionVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer328->Add( tcPositionVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPositionVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPositionVariableX->SetDefault(); 
	bSizer328->Add( btnPositionVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer39->Add( bSizer328, 1, wxEXPAND, 0 );
	
	stPositionVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stPositionVariableY->Wrap( -1 );
	fgSizer39->Add( stPositionVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer329;
	bSizer329 = new wxBoxSizer( wxHORIZONTAL );
	
	tcPositionVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer329->Add( tcPositionVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPositionVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPositionVariableY->SetDefault(); 
	bSizer329->Add( btnPositionVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer39->Add( bSizer329, 1, wxEXPAND, 0 );
	
	sbSizer172->Add( fgSizer39, 1, wxEXPAND, 0 );
	
	sbSizer171->Add( sbSizer172, 0, wxEXPAND, 0 );
	
	bSizer326->Add( sbSizer171, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer330;
	bSizer330 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer330->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer330->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer330->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer326->Add( bSizer330, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer326 );
	this->Layout();
	bSizer326->Fit( this );
}

dlgEvtCmdEventPosition_Base::~dlgEvtCmdEventPosition_Base()
{
}

dlgEvtCmdSwapEvents_Base::dlgEvtCmdSwapEvents_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer108;
	bSizer108 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer109;
	bSizer109 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer56;
	sbSizer56 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event 1") ), wxHORIZONTAL );
	
	wxArrayString chEvent1Choices;
	chEvent1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chEvent1Choices, 0 );
	chEvent1->SetSelection( 0 );
	sbSizer56->Add( chEvent1, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer109->Add( sbSizer56, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer57;
	sbSizer57 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event 2") ), wxHORIZONTAL );
	
	wxArrayString chEvent2Choices;
	chEvent2 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chEvent2Choices, 0 );
	chEvent2->SetSelection( 0 );
	sbSizer57->Add( chEvent2, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer109->Add( sbSizer57, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer108->Add( bSizer109, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer110;
	bSizer110 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer110->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer110->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer110->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer108->Add( bSizer110, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer108 );
	this->Layout();
	bSizer108->Fit( this );
}

dlgEvtCmdSwapEvents_Base::~dlgEvtCmdSwapEvents_Base()
{
}

dlgEvtCmdGetTerrainID_Base::dlgEvtCmdGetTerrainID_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer220;
	bSizer220 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer116;
	sbSizer116 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Place") ), wxVERTICAL );
	
	wxBoxSizer* bSizer221;
	bSizer221 = new wxBoxSizer( wxHORIZONTAL );
	
	rbtnPlaceSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnPlaceSpecify->SetValue( true ); 
	bSizer221->Add( rbtnPlaceSpecify, 0, wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcPlaceSpecify = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer221->Add( tcPlaceSpecify, 1, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnPlaceSpecify = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPlaceSpecify->SetDefault(); 
	bSizer221->Add( btnPlaceSpecify, 0, wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer116->Add( bSizer221, 0, wxEXPAND, 0 );
	
	rbtnPlaceVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnPlaceVariable->SetValue( true ); 
	sbSizer116->Add( rbtnPlaceVariable, 0, wxTOP|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer117;
	sbSizer117 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Origin variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer24;
	fgSizer24 = new wxFlexGridSizer( 2, 2, 2, 2 );
	fgSizer24->AddGrowableCol( 1 );
	fgSizer24->SetFlexibleDirection( wxBOTH );
	fgSizer24->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stlPlaceVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stlPlaceVariableX->Wrap( -1 );
	fgSizer24->Add( stlPlaceVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer222;
	bSizer222 = new wxBoxSizer( wxHORIZONTAL );
	
	tcPlaceVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer222->Add( tcPlaceVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPlaceVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPlaceVariableX->SetDefault(); 
	bSizer222->Add( btnPlaceVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer24->Add( bSizer222, 1, wxEXPAND, 0 );
	
	stPlaceVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stPlaceVariableY->Wrap( -1 );
	fgSizer24->Add( stPlaceVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer223;
	bSizer223 = new wxBoxSizer( wxHORIZONTAL );
	
	tcPlaceVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer223->Add( tcPlaceVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPlaceVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPlaceVariableY->SetDefault(); 
	bSizer223->Add( btnPlaceVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer24->Add( bSizer223, 1, wxEXPAND, 0 );
	
	sbSizer117->Add( fgSizer24, 1, wxEXPAND, 0 );
	
	sbSizer116->Add( sbSizer117, 0, wxEXPAND, 0 );
	
	bSizer220->Add( sbSizer116, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer118;
	sbSizer118 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Store ID in variable") ), wxHORIZONTAL );
	
	tcStoreVariableID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer118->Add( tcStoreVariableID, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnStoreVariableID = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnStoreVariableID->SetDefault(); 
	sbSizer118->Add( btnStoreVariableID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer220->Add( sbSizer118, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer224;
	bSizer224 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer224->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer224->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer224->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer220->Add( bSizer224, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer220 );
	this->Layout();
	bSizer220->Fit( this );
}

dlgEvtCmdGetTerrainID_Base::~dlgEvtCmdGetTerrainID_Base()
{
}

dlgEvtCmdGetPositionID_Base::dlgEvtCmdGetPositionID_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Place") ), wxVERTICAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	rbtnPlaceSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnPlaceSpecify->SetValue( true ); 
	bSizer13->Add( rbtnPlaceSpecify, 0, wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcPlaceSpecify = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer13->Add( tcPlaceSpecify, 1, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnPlaceSpecify = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPlaceSpecify->SetDefault(); 
	bSizer13->Add( btnPlaceSpecify, 0, wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer5->Add( bSizer13, 0, wxEXPAND, 0 );
	
	rbtnPlaceVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnPlaceVariable->SetValue( true ); 
	sbSizer5->Add( rbtnPlaceVariable, 0, wxTOP|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Origin variable") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	fgSizer2->AddGrowableCol( 1 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stPlaceVariableX = new wxStaticText( this, wxID_ANY, _("X ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stPlaceVariableX->Wrap( -1 );
	fgSizer2->Add( stPlaceVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	tcPlaceVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer14->Add( tcPlaceVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPlaceVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPlaceVariableX->SetDefault(); 
	bSizer14->Add( btnPlaceVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer2->Add( bSizer14, 1, wxEXPAND, 0 );
	
	stPlaceVariableY = new wxStaticText( this, wxID_ANY, _("Y ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stPlaceVariableY->Wrap( -1 );
	fgSizer2->Add( stPlaceVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	tcPlaceVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer15->Add( tcPlaceVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPlaceVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPlaceVariableY->SetDefault(); 
	bSizer15->Add( btnPlaceVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer2->Add( bSizer15, 1, wxEXPAND, 0 );
	
	sbSizer6->Add( fgSizer2, 1, wxEXPAND, 0 );
	
	sbSizer5->Add( sbSizer6, 0, wxEXPAND, 0 );
	
	bSizer12->Add( sbSizer5, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Store ID in variable") ), wxHORIZONTAL );
	
	tcStoreVariableID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer7->Add( tcStoreVariableID, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnStoreVariableID = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnStoreVariableID->SetDefault(); 
	sbSizer7->Add( btnStoreVariableID, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer12->Add( sbSizer7, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer16->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer16->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer16->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer12->Add( bSizer16, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer12 );
	this->Layout();
	bSizer12->Fit( this );
}

dlgEvtCmdGetPositionID_Base::~dlgEvtCmdGetPositionID_Base()
{
}

dlgEvtCmdBlankScreen_Base::dlgEvtCmdBlankScreen_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer135;
	bSizer135 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer73;
	sbSizer73 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Method") ), wxHORIZONTAL );
	
	wxArrayString chMethodChoices;
	chMethod = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMethodChoices, 0 );
	chMethod->SetSelection( 0 );
	sbSizer73->Add( chMethod, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer135->Add( sbSizer73, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer136;
	bSizer136 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer136->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer136->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer136->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer135->Add( bSizer136, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer135 );
	this->Layout();
	bSizer135->Fit( this );
}

dlgEvtCmdBlankScreen_Base::~dlgEvtCmdBlankScreen_Base()
{
}

dlgEvtCmdShowScreen_Base::dlgEvtCmdShowScreen_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer314;
	bSizer314 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer162;
	sbSizer162 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Method") ), wxHORIZONTAL );
	
	wxArrayString chMethodChoices;
	chMethod = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMethodChoices, 0 );
	chMethod->SetSelection( 0 );
	sbSizer162->Add( chMethod, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer314->Add( sbSizer162, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer315;
	bSizer315 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer315->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer315->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer315->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer314->Add( bSizer315, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer314 );
	this->Layout();
	bSizer314->Fit( this );
}

dlgEvtCmdShowScreen_Base::~dlgEvtCmdShowScreen_Base()
{
}

dlgEvtCmdTone_Base::dlgEvtCmdTone_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer158;
	bSizer158 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer82;
	sbSizer82 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tone") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 5, 4, 2, 2 );
	fgSizer20->AddGrowableCol( 1 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer20->Add( 0,  0, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer159;
	bSizer159 = new wxBoxSizer( wxHORIZONTAL );
	
	st0Percent = new wxStaticText( this, wxID_ANY, _("0%"), wxDefaultPosition, wxDefaultSize, 0 );
	st0Percent->Wrap( -1 );
	bSizer159->Add( st0Percent, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	bSizer159->Add( 0,  0, 1, wxEXPAND, 0 );
	
	st100Percent = new wxStaticText( this, wxID_ANY, _("  100%"), wxDefaultPosition, wxDefaultSize, 0 );
	st100Percent->Wrap( -1 );
	bSizer159->Add( st100Percent, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	bSizer159->Add( 0,  0, 1, wxEXPAND, 0 );
	
	st200Percent = new wxStaticText( this, wxID_ANY, _("200%"), wxDefaultPosition, wxDefaultSize, 0 );
	st200Percent->Wrap( -1 );
	bSizer159->Add( st200Percent, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	fgSizer20->Add( bSizer159, 1, wxEXPAND, 0 );
	
	
	fgSizer20->Add( 0,  0, 0, wxEXPAND, 0 );
	
	
	fgSizer20->Add( 0,  0, 0, wxEXPAND, 0 );
	
	stRed = new wxStaticText( this, wxID_ANY, _("Red"), wxDefaultPosition, wxDefaultSize, 0 );
	stRed->Wrap( -1 );
	fgSizer20->Add( stRed, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slRed = new wxSlider( this, wxID_ANY, 100, 0,  200, wxDefaultPosition, wxSize( 200, -1 ), wxSL_HORIZONTAL );
	fgSizer20->Add( slRed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinRed = new wxSpinCtrl( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  200, 100 );
	fgSizer20->Add( spinRed, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stRedPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stRedPercent->Wrap( -1 );
	fgSizer20->Add( stRedPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stGreen = new wxStaticText( this, wxID_ANY, _("Green"), wxDefaultPosition, wxDefaultSize, 0 );
	stGreen->Wrap( -1 );
	fgSizer20->Add( stGreen, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slGreen = new wxSlider( this, wxID_ANY, 100, 0,  200, wxDefaultPosition, wxSize( 200, -1 ), wxSL_HORIZONTAL );
	fgSizer20->Add( slGreen, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinGreen = new wxSpinCtrl( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  200, 100 );
	fgSizer20->Add( spinGreen, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stGreenPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stGreenPercent->Wrap( -1 );
	fgSizer20->Add( stGreenPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stBlue = new wxStaticText( this, wxID_ANY, _("Blue"), wxDefaultPosition, wxDefaultSize, 0 );
	stBlue->Wrap( -1 );
	fgSizer20->Add( stBlue, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slBlue = new wxSlider( this, wxID_ANY, 100, 0,  200, wxDefaultPosition, wxSize( 200, -1 ), wxSL_HORIZONTAL );
	fgSizer20->Add( slBlue, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinBlue = new wxSpinCtrl( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  200, 100 );
	fgSizer20->Add( spinBlue, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stBluePercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stBluePercent->Wrap( -1 );
	fgSizer20->Add( stBluePercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stSaturation = new wxStaticText( this, wxID_ANY, _("Saturation"), wxDefaultPosition, wxDefaultSize, 0 );
	stSaturation->Wrap( -1 );
	fgSizer20->Add( stSaturation, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slSaturation = new wxSlider( this, wxID_ANY, 100, 0,  200, wxDefaultPosition, wxSize( 200, -1 ), wxSL_HORIZONTAL );
	fgSizer20->Add( slSaturation, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSaturation = new wxSpinCtrl( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  200, 100 );
	fgSizer20->Add( spinSaturation, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stSaturationPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stSaturationPercent->Wrap( -1 );
	fgSizer20->Add( stSaturationPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer82->Add( fgSizer20, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer83;
	sbSizer83 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Preview") ), wxHORIZONTAL );
	
	bmpPreview = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 200, 32 ), wxSUNKEN_BORDER );
	sbSizer83->Add( bmpPreview, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	sbSizer82->Add( sbSizer83, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer158->Add( sbSizer82, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer160;
	bSizer160 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer84;
	sbSizer84 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Apply tone change") ), wxHORIZONTAL );
	
	SpinTime = new wxSpinCtrl( this, wxID_ANY, wxT("10"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 10 );
	sbSizer84->Add( SpinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	sbSizer84->Add( stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer160->Add( sbSizer84, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer85;
	sbSizer85 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait to end change"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	sbSizer85->Add( chbWait, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer160->Add( sbSizer85, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer158->Add( bSizer160, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer161;
	bSizer161 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer161->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer161->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer161->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer158->Add( bSizer161, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer158 );
	this->Layout();
	bSizer158->Fit( this );
}

dlgEvtCmdTone_Base::~dlgEvtCmdTone_Base()
{
}

dlgEvtCmdFlashScreen_Base::dlgEvtCmdFlashScreen_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer115;
	bSizer115 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer61;
	sbSizer61 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Flash color") ), wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer62;
	sbSizer62 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Sample") ), wxHORIZONTAL );
	
	bmpSample = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	sbSizer62->Add( bmpSample, 0, 0, 0 );
	
	sbSizer61->Add( sbSizer62, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 2 );
	
	wxFlexGridSizer* fgSizer16;
	fgSizer16 = new wxFlexGridSizer( 5, 3, 2, 2 );
	fgSizer16->AddGrowableCol( 1 );
	fgSizer16->SetFlexibleDirection( wxBOTH );
	fgSizer16->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer16->Add( 0,  0, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer116;
	bSizer116 = new wxBoxSizer( wxHORIZONTAL );
	
	stMin = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	stMin->Wrap( -1 );
	bSizer116->Add( stMin, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	bSizer116->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stMax = new wxStaticText( this, wxID_ANY, _("31"), wxDefaultPosition, wxDefaultSize, 0 );
	stMax->Wrap( -1 );
	bSizer116->Add( stMax, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	fgSizer16->Add( bSizer116, 1, wxEXPAND, 0 );
	
	
	fgSizer16->Add( 0,  0, 0, wxEXPAND, 0 );
	
	stRed = new wxStaticText( this, wxID_ANY, _("Red"), wxDefaultPosition, wxDefaultSize, 0 );
	stRed->Wrap( -1 );
	fgSizer16->Add( stRed, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slRed = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	fgSizer16->Add( slRed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinRed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	fgSizer16->Add( spinRed, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stGreen = new wxStaticText( this, wxID_ANY, _("Green"), wxDefaultPosition, wxDefaultSize, 0 );
	stGreen->Wrap( -1 );
	fgSizer16->Add( stGreen, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slGreen = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	fgSizer16->Add( slGreen, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinGreen = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	fgSizer16->Add( spinGreen, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stBlue = new wxStaticText( this, wxID_ANY, _("Blue"), wxDefaultPosition, wxDefaultSize, 0 );
	stBlue->Wrap( -1 );
	fgSizer16->Add( stBlue, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slBlue = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	fgSizer16->Add( slBlue, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinBlue = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	fgSizer16->Add( spinBlue, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stOpacity = new wxStaticText( this, wxID_ANY, _("Opacity"), wxDefaultPosition, wxDefaultSize, 0 );
	stOpacity->Wrap( -1 );
	fgSizer16->Add( stOpacity, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slOpacity = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	fgSizer16->Add( slOpacity, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOpacity = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	fgSizer16->Add( spinOpacity, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer61->Add( fgSizer16, 1, 0, 0 );
	
	bSizer115->Add( sbSizer61, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer117;
	bSizer117 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer63;
	sbSizer63 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Time") ), wxHORIZONTAL );
	
	spinTime = new wxSpinCtrl( this, wxID_ANY, wxT("10"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 10 );
	sbSizer63->Add( spinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	sbSizer63->Add( stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer117->Add( sbSizer63, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer64;
	sbSizer64 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait to end"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	sbSizer64->Add( chbWait, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer117->Add( sbSizer64, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer115->Add( bSizer117, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer118;
	bSizer118 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer118->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer118->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer118->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer115->Add( bSizer118, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer115 );
	this->Layout();
	bSizer115->Fit( this );
}

dlgEvtCmdFlashScreen_Base::~dlgEvtCmdFlashScreen_Base()
{
}

dlgEvtCmdShake_Base::dlgEvtCmdShake_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer8;
	sbSizer8 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Shaking strength") ), wxVERTICAL );
	
	slStrength = new wxSlider( this, wxID_ANY, 4, 0,  8, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS|wxSL_BOTTOM );
	sbSizer8->Add( slStrength, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );
	
	stStrengthLower = new wxStaticText( this, wxID_ANY, _("Lower"), wxDefaultPosition, wxDefaultSize, 0 );
	stStrengthLower->Wrap( -1 );
	bSizer19->Add( stStrengthLower, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	bSizer19->Add( 2,  0, 1, wxEXPAND, 0 );
	
	szStrengthNormal = new wxStaticText( this, wxID_ANY, _("Normal"), wxDefaultPosition, wxDefaultSize, 0 );
	szStrengthNormal->Wrap( -1 );
	bSizer19->Add( szStrengthNormal, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	bSizer19->Add( 2,  0, 1, wxEXPAND, 0 );
	
	stStrengthHigher = new wxStaticText( this, wxID_ANY, _("Higher"), wxDefaultPosition, wxDefaultSize, 0 );
	stStrengthHigher->Wrap( -1 );
	bSizer19->Add( stStrengthHigher, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer8->Add( bSizer19, 1, wxEXPAND, 0 );
	
	bSizer18->Add( sbSizer8, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Speed") ), wxVERTICAL );
	
	slSpeed = new wxSlider( this, wxID_ANY, 4, 0,  8, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS|wxSL_BOTTOM );
	sbSizer9->Add( slSpeed, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );
	
	stSpeedSlower = new wxStaticText( this, wxID_ANY, _("Slower"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpeedSlower->Wrap( -1 );
	bSizer20->Add( stSpeedSlower, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	bSizer20->Add( 2,  0, 1, wxEXPAND, 0 );
	
	stSpeedNormal = new wxStaticText( this, wxID_ANY, _("Normal"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpeedNormal->Wrap( -1 );
	bSizer20->Add( stSpeedNormal, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	bSizer20->Add( 2,  0, 1, wxEXPAND, 0 );
	
	stSpeedFaster = new wxStaticText( this, wxID_ANY, _("Faster"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpeedFaster->Wrap( -1 );
	bSizer20->Add( stSpeedFaster, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer9->Add( bSizer20, 1, wxEXPAND, 0 );
	
	bSizer18->Add( sbSizer9, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer17->Add( bSizer18, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer10;
	sbSizer10 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Shaking time") ), wxHORIZONTAL );
	
	spinTime = new wxSpinCtrl( this, wxID_ANY, wxT("2"), wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 2 );
	sbSizer10->Add( spinTime, 0, wxRIGHT, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	sbSizer10->Add( stTime, 0, wxLEFT, 1 );
	
	bSizer21->Add( sbSizer10, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer11;
	sbSizer11 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait until end"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	sbSizer11->Add( chbWait, 1, 0, 0 );
	
	bSizer21->Add( sbSizer11, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer17->Add( bSizer21, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer22->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer22->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer22->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer17->Add( bSizer22, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer17 );
	this->Layout();
	bSizer17->Fit( this );
}

dlgEvtCmdShake_Base::~dlgEvtCmdShake_Base()
{
}

dlgEvtCmdMoveScreen_Base::dlgEvtCmdMoveScreen_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer292;
	bSizer292 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer293;
	bSizer293 = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbOperationChoices[] = { _("Fix"), _("Cancel fix"), _("Move position"), _("Return to origin") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 2 );
	bSizer293->Add( rbOperation, 0, wxLEFT|wxRIGHT, 1 );
	
	wxStaticBoxSizer* sbSizer149;
	sbSizer149 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Direction") ), wxVERTICAL );
	
	wxGridSizer* gSizer6;
	gSizer6 = new wxGridSizer( 3, 3, 2, 2 );
	
	
	gSizer6->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnUp = new wxRadioButton( this, wxID_ANY, _("Up"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnUp->SetValue( true ); 
	gSizer6->Add( rbtnUp, 0, wxEXPAND, 0 );
	
	
	gSizer6->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnLeft = new wxRadioButton( this, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnLeft->SetValue( true ); 
	gSizer6->Add( rbtnLeft, 0, wxEXPAND, 0 );
	
	
	gSizer6->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnRight = new wxRadioButton( this, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnRight->SetValue( true ); 
	gSizer6->Add( rbtnRight, 0, wxEXPAND, 0 );
	
	
	gSizer6->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnDown = new wxRadioButton( this, wxID_ANY, _("Down"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnDown->SetValue( true ); 
	gSizer6->Add( rbtnDown, 0, wxEXPAND, 0 );
	
	
	gSizer6->Add( 0,  0, 1, wxEXPAND, 0 );
	
	sbSizer149->Add( gSizer6, 1, wxEXPAND, 0 );
	
	bSizer293->Add( sbSizer149, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer150;
	sbSizer150 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Number of tiles") ), wxHORIZONTAL );
	
	spinTiles = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 90, -1 ), wxSP_ARROW_KEYS, 0, 500, 0 );
	sbSizer150->Add( spinTiles, 1, 0, 0 );
	
	bSizer293->Add( sbSizer150, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer292->Add( bSizer293, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer294;
	bSizer294 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer151;
	sbSizer151 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Movement speed") ), wxHORIZONTAL );
	
	wxArrayString chSpeedChoices;
	chSpeed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSpeedChoices, 0 );
	chSpeed->SetSelection( 0 );
	sbSizer151->Add( chSpeed, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer294->Add( sbSizer151, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer152;
	sbSizer152 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait until end movement"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	sbSizer152->Add( chbWait, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer294->Add( sbSizer152, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer292->Add( bSizer294, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer295;
	bSizer295 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer295->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer295->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer295->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer292->Add( bSizer295, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer292 );
	this->Layout();
	bSizer292->Fit( this );
}

dlgEvtCmdMoveScreen_Base::~dlgEvtCmdMoveScreen_Base()
{
}

dlgEvtCmdWeather_Base::dlgEvtCmdWeather_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer231;
	bSizer231 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer232;
	bSizer232 = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbEffectChoices[] = { _("None"), _("Rain"), _("Snow") };
	int rbEffectNChoices = sizeof( rbEffectChoices ) / sizeof( wxString );
	rbEffect = new wxRadioBox( this, wxID_ANY, _("Effect type"), wxDefaultPosition, wxDefaultSize, rbEffectNChoices, rbEffectChoices, 1, wxRA_SPECIFY_COLS );
	rbEffect->SetSelection( 0 );
	bSizer232->Add( rbEffect, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxString rbIntensityChoices[] = { _("Low"), _("Medium"), _("High") };
	int rbIntensityNChoices = sizeof( rbIntensityChoices ) / sizeof( wxString );
	rbIntensity = new wxRadioBox( this, wxID_ANY, _("Intensity"), wxDefaultPosition, wxDefaultSize, rbIntensityNChoices, rbIntensityChoices, 1, wxRA_SPECIFY_COLS );
	rbIntensity->SetSelection( 0 );
	bSizer232->Add( rbIntensity, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer231->Add( bSizer232, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer233;
	bSizer233 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer233->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer233->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer233->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer231->Add( bSizer233, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer231 );
	this->Layout();
	bSizer231->Fit( this );
}

dlgEvtCmdWeather_Base::~dlgEvtCmdWeather_Base()
{
}

dlgEvtCmdPicture_Base::dlgEvtCmdPicture_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer262;
	bSizer262 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer263;
	bSizer263 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer134;
	sbSizer134 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Picture number") ), wxHORIZONTAL );
	
	spinNumber = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 90, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	sbSizer134->Add( spinNumber, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer263->Add( sbSizer134, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer135;
	sbSizer135 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Picture") ), wxHORIZONTAL );
	
	tcPicture = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer135->Add( tcPicture, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPicture = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPicture->SetDefault(); 
	sbSizer135->Add( btnPicture, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer263->Add( sbSizer135, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer262->Add( bSizer263, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer136;
	sbSizer136 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Picture position (coordinates)") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer30;
	fgSizer30 = new wxFlexGridSizer( 4, 3, 2, 2 );
	fgSizer30->AddGrowableCol( 2 );
	fgSizer30->SetFlexibleDirection( wxBOTH );
	fgSizer30->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSpecify->SetValue( true ); 
	fgSizer30->Add( rbtnSpecify, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	stSpecifyX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpecifyX->Wrap( -1 );
	fgSizer30->Add( stSpecifyX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyX = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 500, 0 );
	fgSizer30->Add( spinSpecifyX, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	fgSizer30->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stSpecifyY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpecifyY->Wrap( -1 );
	fgSizer30->Add( stSpecifyY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyY = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 500, 0 );
	fgSizer30->Add( spinSpecifyY, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	fgSizer30->Add( rbtnVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	fgSizer30->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer264;
	bSizer264 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer264->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	bSizer264->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer30->Add( bSizer264, 1, wxEXPAND, 0 );
	
	
	fgSizer30->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	fgSizer30->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer265;
	bSizer265 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer265->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	bSizer265->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer30->Add( bSizer265, 1, wxEXPAND, 0 );
	
	sbSizer136->Add( fgSizer30, 1, wxBOTTOM|wxEXPAND, 1 );
	
	linePicture = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	sbSizer136->Add( linePicture, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbScrollMapFix = new wxCheckBox( this, wxID_ANY, _("Scroll map fix"), wxDefaultPosition, wxDefaultSize, 0 );
	chbScrollMapFix->SetValue(true); 
	sbSizer136->Add( chbScrollMapFix, 0, wxTOP|wxEXPAND, 1 );
	
	bSizer262->Add( sbSizer136, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer266;
	bSizer266 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer137;
	sbSizer137 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Intensity") ), wxHORIZONTAL );
	
	spinIntensity = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	sbSizer137->Add( spinIntensity, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stIntensity = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stIntensity->Wrap( -1 );
	sbSizer137->Add( stIntensity, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer266->Add( sbSizer137, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer138;
	sbSizer138 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Transparency") ), wxHORIZONTAL );
	
	spinTrasparency = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	sbSizer138->Add( spinTrasparency, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTrasparency = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTrasparency->Wrap( -1 );
	sbSizer138->Add( stTrasparency, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer266->Add( sbSizer138, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbTrasparentColorChoices[] = { _("Yes"), _("No") };
	int rbTrasparentColorNChoices = sizeof( rbTrasparentColorChoices ) / sizeof( wxString );
	rbTrasparentColor = new wxRadioBox( this, wxID_ANY, _("Transparent color"), wxDefaultPosition, wxSize( 110, -1 ), rbTrasparentColorNChoices, rbTrasparentColorChoices, 1, wxRA_SPECIFY_ROWS );
	rbTrasparentColor->SetSelection( 0 );
	bSizer266->Add( rbTrasparentColor, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer262->Add( bSizer266, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer139;
	sbSizer139 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Other picture attributes") ), wxHORIZONTAL );
	
	tcAttributes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer139->Add( tcAttributes, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnAttributes = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnAttributes->SetDefault(); 
	sbSizer139->Add( btnAttributes, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer262->Add( sbSizer139, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer267;
	bSizer267 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer267->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer267->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer267->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer262->Add( bSizer267, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer262 );
	this->Layout();
	bSizer262->Fit( this );
}

dlgEvtCmdPicture_Base::~dlgEvtCmdPicture_Base()
{
}

dlgEvtCmdMovePicture_Base::dlgEvtCmdMovePicture_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer331;
	bSizer331 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer332;
	bSizer332 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer173;
	sbSizer173 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Picture number") ), wxHORIZONTAL );
	
	spinNumber = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 90, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	sbSizer173->Add( spinNumber, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer332->Add( sbSizer173, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer331->Add( bSizer332, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer174;
	sbSizer174 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Move to position (coordinates)") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer40;
	fgSizer40 = new wxFlexGridSizer( 4, 3, 2, 2 );
	fgSizer40->AddGrowableCol( 2 );
	fgSizer40->SetFlexibleDirection( wxBOTH );
	fgSizer40->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSpecify->SetValue( true ); 
	fgSizer40->Add( rbtnSpecify, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	stSpecifyX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpecifyX->Wrap( -1 );
	fgSizer40->Add( stSpecifyX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyX = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	fgSizer40->Add( spinSpecifyX, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	fgSizer40->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stSpecifyY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpecifyY->Wrap( -1 );
	fgSizer40->Add( stSpecifyY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyY = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	fgSizer40->Add( spinSpecifyY, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	fgSizer40->Add( rbtnVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	fgSizer40->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer333;
	bSizer333 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer333->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	bSizer333->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer40->Add( bSizer333, 1, wxEXPAND, 0 );
	
	
	fgSizer40->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	fgSizer40->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer334;
	bSizer334 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer334->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	bSizer334->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer40->Add( bSizer334, 1, wxEXPAND, 0 );
	
	sbSizer174->Add( fgSizer40, 1, wxBOTTOM|wxEXPAND, 1 );
	
	bSizer331->Add( sbSizer174, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer335;
	bSizer335 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer175;
	sbSizer175 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Intensity") ), wxHORIZONTAL );
	
	spinIntensity = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	sbSizer175->Add( spinIntensity, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stIntensity = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stIntensity->Wrap( -1 );
	sbSizer175->Add( stIntensity, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer335->Add( sbSizer175, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer176;
	sbSizer176 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Transparency") ), wxHORIZONTAL );
	
	spinTrasparency = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	sbSizer176->Add( spinTrasparency, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTrasparency = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTrasparency->Wrap( -1 );
	sbSizer176->Add( stTrasparency, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer335->Add( sbSizer176, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	
	bSizer335->Add( 110,  0, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer331->Add( bSizer335, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer177;
	sbSizer177 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Other picture attributes") ), wxHORIZONTAL );
	
	tcAttributes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer177->Add( tcAttributes, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnAttributes = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnAttributes->SetDefault(); 
	sbSizer177->Add( btnAttributes, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer331->Add( sbSizer177, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer336;
	bSizer336 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer178;
	sbSizer178 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Time") ), wxHORIZONTAL );
	
	spinTime = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 10 );
	sbSizer178->Add( spinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	sbSizer178->Add( stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer336->Add( sbSizer178, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer179;
	sbSizer179 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait to end"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	sbSizer179->Add( chbWait, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer336->Add( sbSizer179, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer331->Add( bSizer336, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer337;
	bSizer337 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer337->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer337->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer337->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer331->Add( bSizer337, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer331 );
	this->Layout();
	bSizer331->Fit( this );
}

dlgEvtCmdMovePicture_Base::~dlgEvtCmdMovePicture_Base()
{
}

dlgEvtCmdDeletePicture_Base::dlgEvtCmdDeletePicture_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer137;
	bSizer137 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer74;
	sbSizer74 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Picture number") ), wxHORIZONTAL );
	
	spinPicture = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	sbSizer74->Add( spinPicture, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer137->Add( sbSizer74, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer138;
	bSizer138 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer138->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer138->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer138->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer137->Add( bSizer138, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer137 );
	this->Layout();
	bSizer137->Fit( this );
}

dlgEvtCmdDeletePicture_Base::~dlgEvtCmdDeletePicture_Base()
{
}

dlgEvtCmdAnimation_Base::dlgEvtCmdAnimation_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer102;
	bSizer102 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer51;
	sbSizer51 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Animation") ), wxVERTICAL );
	
	bmpAnimation = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 320, 160 ), wxSUNKEN_BORDER );
	sbSizer51->Add( bmpAnimation, 0, wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chAnimationChoices;
	chAnimation = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chAnimationChoices, 0 );
	chAnimation->SetSelection( 0 );
	sbSizer51->Add( chAnimation, 0, wxBOTTOM|wxEXPAND, 1 );
	
	bSizer102->Add( sbSizer51, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer103;
	bSizer103 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer52;
	sbSizer52 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxArrayString chTargetChoices;
	chTarget = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chTargetChoices, 0 );
	chTarget->SetSelection( 0 );
	sbSizer52->Add( chTarget, 1, 0, 0 );
	
	bSizer103->Add( sbSizer52, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer53;
	sbSizer53 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait until end"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	sbSizer53->Add( chbWait, 0, wxBOTTOM|wxEXPAND, 1 );
	
	chbWholeMapRange = new wxCheckBox( this, wxID_ANY, _("Whole map range"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWholeMapRange->SetValue(true); 
	sbSizer53->Add( chbWholeMapRange, 0, wxTOP|wxEXPAND, 1 );
	
	bSizer103->Add( sbSizer53, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer102->Add( bSizer103, 1, wxEXPAND, 0 );
	
	bSizer101->Add( bSizer102, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer104;
	bSizer104 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer104->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer104->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer104->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer101->Add( bSizer104, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer101 );
	this->Layout();
	bSizer101->Fit( this );
}

dlgEvtCmdAnimation_Base::~dlgEvtCmdAnimation_Base()
{
}

dlgEvtCmdActorTransparency_Base::dlgEvtCmdActorTransparency_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer209;
	bSizer209 = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Transparent"), _("Normal") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	bSizer209->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer210;
	bSizer210 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer210->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer210->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer210->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer209->Add( bSizer210, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer209 );
	this->Layout();
	bSizer209->Fit( this );
}

dlgEvtCmdActorTransparency_Base::~dlgEvtCmdActorTransparency_Base()
{
}

dlgEvtCmdFlashCharacter_Base::dlgEvtCmdFlashCharacter_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer80;
	bSizer80 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer43;
	sbSizer43 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxArrayString chTargetChoices;
	chTarget = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chTargetChoices, 0 );
	chTarget->SetSelection( 0 );
	sbSizer43->Add( chTarget, 1, 0, 0 );
	
	bSizer80->Add( sbSizer43, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer44;
	sbSizer44 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Flash color") ), wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer45;
	sbSizer45 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Sample") ), wxHORIZONTAL );
	
	bmpSample = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	sbSizer45->Add( bmpSample, 0, 0, 0 );
	
	sbSizer44->Add( sbSizer45, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 2 );
	
	wxFlexGridSizer* fgSizer10;
	fgSizer10 = new wxFlexGridSizer( 5, 3, 2, 2 );
	fgSizer10->AddGrowableCol( 1 );
	fgSizer10->SetFlexibleDirection( wxBOTH );
	fgSizer10->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	
	fgSizer10->Add( 0,  0, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxHORIZONTAL );
	
	stColorMin = new wxStaticText( this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	stColorMin->Wrap( -1 );
	bSizer81->Add( stColorMin, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	bSizer81->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stColorMax = new wxStaticText( this, wxID_ANY, _("31"), wxDefaultPosition, wxDefaultSize, 0 );
	stColorMax->Wrap( -1 );
	bSizer81->Add( stColorMax, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	fgSizer10->Add( bSizer81, 1, wxEXPAND, 0 );
	
	
	fgSizer10->Add( 0,  0, 0, wxEXPAND, 0 );
	
	stRed = new wxStaticText( this, wxID_ANY, _("Red"), wxDefaultPosition, wxDefaultSize, 0 );
	stRed->Wrap( -1 );
	fgSizer10->Add( stRed, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slRed = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	fgSizer10->Add( slRed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinRed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	fgSizer10->Add( spinRed, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stGreen = new wxStaticText( this, wxID_ANY, _("Green"), wxDefaultPosition, wxDefaultSize, 0 );
	stGreen->Wrap( -1 );
	fgSizer10->Add( stGreen, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slGreen = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	fgSizer10->Add( slGreen, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinGreen = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	fgSizer10->Add( spinGreen, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stBlue = new wxStaticText( this, wxID_ANY, _("Blue"), wxDefaultPosition, wxDefaultSize, 0 );
	stBlue->Wrap( -1 );
	fgSizer10->Add( stBlue, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slBlue = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	fgSizer10->Add( slBlue, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinBlue = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	fgSizer10->Add( spinBlue, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stOpacity = new wxStaticText( this, wxID_ANY, _("Opacity"), wxDefaultPosition, wxDefaultSize, 0 );
	stOpacity->Wrap( -1 );
	fgSizer10->Add( stOpacity, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0 );
	
	slOpacity = new wxSlider( this, wxID_ANY, 31, 0,  31, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	fgSizer10->Add( slOpacity, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOpacity = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  31, 31 );
	fgSizer10->Add( spinOpacity, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer44->Add( fgSizer10, 1, 0, 0 );
	
	bSizer80->Add( sbSizer44, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer82;
	bSizer82 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer46;
	sbSizer46 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Time") ), wxHORIZONTAL );
	
	spinTime = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 10 );
	sbSizer46->Add( spinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	sbSizer46->Add( stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer82->Add( sbSizer46, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer47;
	sbSizer47 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait to end"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	sbSizer47->Add( chbWait, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer82->Add( sbSizer47, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer80->Add( bSizer82, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer83;
	bSizer83 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer83->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer83->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer83->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer80->Add( bSizer83, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer80 );
	this->Layout();
	bSizer80->Fit( this );
}

dlgEvtCmdFlashCharacter_Base::~dlgEvtCmdFlashCharacter_Base()
{
}

dlgEvtCmdEventMovement_Base::dlgEvtCmdEventMovement_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer183;
	bSizer183 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer184;
	bSizer184 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer97;
	sbSizer97 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Move target") ), wxHORIZONTAL );
	
	wxArrayString chTargetChoices;
	chTarget = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chTargetChoices, 0 );
	chTarget->SetSelection( 0 );
	sbSizer97->Add( chTarget, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer184->Add( sbSizer97, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbSpeedChoices[] = { _("1"), _("2"), _("3"), _("4"), _("5"), _("6"), _("7"), _("8") };
	int rbSpeedNChoices = sizeof( rbSpeedChoices ) / sizeof( wxString );
	rbSpeed = new wxRadioBox( this, wxID_ANY, _("Movement speed"), wxDefaultPosition, wxDefaultSize, rbSpeedNChoices, rbSpeedChoices, 1, wxRA_SPECIFY_ROWS );
	rbSpeed->SetSelection( 0 );
	bSizer184->Add( rbSpeed, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer183->Add( bSizer184, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer98;
	sbSizer98 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Path") ), wxHORIZONTAL );
	
	wxBoxSizer* bSizer185;
	bSizer185 = new wxBoxSizer( wxVERTICAL );
	
	listPath = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	listPath->Append( _("<>") );
	bSizer185->Add( listPath, 1, wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer186;
	bSizer186 = new wxBoxSizer( wxHORIZONTAL );
	
	btnDelete = new wxButton( this, wxID_ANY, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	btnDelete->SetDefault(); 
	bSizer186->Add( btnDelete, 1, wxRIGHT|wxTOP, 1 );
	
	btnClear = new wxButton( this, wxID_ANY, _("Clear"), wxDefaultPosition, wxDefaultSize, 0 );
	btnClear->SetDefault(); 
	bSizer186->Add( btnClear, 1, wxLEFT|wxRIGHT|wxTOP, 1 );
	
	bSizer185->Add( bSizer186, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer99;
	sbSizer99 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );
	
	chbLoop = new wxCheckBox( this, wxID_ANY, _("Repeat path"), wxDefaultPosition, wxDefaultSize, 0 );
	chbLoop->SetValue(true); 
	sbSizer99->Add( chbLoop, 0, wxBOTTOM|wxEXPAND, 1 );
	
	ChkIgnore = new wxCheckBox( this, wxID_ANY, _("Ignore if gets blocked"), wxDefaultPosition, wxDefaultSize, 0 );
	ChkIgnore->SetValue(true); 
	sbSizer99->Add( ChkIgnore, 0, wxTOP|wxEXPAND, 1 );
	
	bSizer185->Add( sbSizer99, 0, wxRIGHT|wxEXPAND, 1 );
	
	sbSizer98->Add( bSizer185, 0, wxEXPAND, 0 );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 14, 3, 0, 0 );
	
	btnUp = new wxButton( this, wxID_ANY, _("Up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnUp->SetDefault(); 
	gSizer2->Add( btnUp, 0, wxEXPAND, 0 );
	
	btnLookUp = new wxButton( this, wxID_ANY, _("Look up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLookUp->SetDefault(); 
	gSizer2->Add( btnLookUp, 0, wxEXPAND, 0 );
	
	btnStartJump = new wxButton( this, wxID_ANY, _("Start jump"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStartJump->SetDefault(); 
	gSizer2->Add( btnStartJump, 0, wxEXPAND, 0 );
	
	btnRight = new wxButton( this, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRight->SetDefault(); 
	gSizer2->Add( btnRight, 0, wxEXPAND, 0 );
	
	btnLookRight = new wxButton( this, wxID_ANY, _("Look Right"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLookRight->SetDefault(); 
	gSizer2->Add( btnLookRight, 0, wxEXPAND, 0 );
	
	btnEndJump = new wxButton( this, wxID_ANY, _("End jump"), wxDefaultPosition, wxDefaultSize, 0 );
	btnEndJump->SetDefault(); 
	gSizer2->Add( btnEndJump, 0, wxEXPAND, 0 );
	
	btnDown = new wxButton( this, wxID_ANY, _("Down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnDown->SetDefault(); 
	gSizer2->Add( btnDown, 0, wxEXPAND, 0 );
	
	btnLookDown = new wxButton( this, wxID_ANY, _("Look down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLookDown->SetDefault(); 
	gSizer2->Add( btnLookDown, 0, wxEXPAND, 0 );
	
	btnFixDirection = new wxButton( this, wxID_ANY, _("Fix direction"), wxDefaultPosition, wxDefaultSize, 0 );
	btnFixDirection->SetDefault(); 
	gSizer2->Add( btnFixDirection, 0, wxEXPAND, 0 );
	
	btnLeft = new wxButton( this, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLeft->SetDefault(); 
	gSizer2->Add( btnLeft, 0, wxEXPAND, 0 );
	
	btnLookLeft = new wxButton( this, wxID_ANY, _("Look left"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLookLeft->SetDefault(); 
	gSizer2->Add( btnLookLeft, 0, wxEXPAND, 0 );
	
	btnCancelFix = new wxButton( this, wxID_ANY, _("Cancel fix"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancelFix->SetDefault(); 
	gSizer2->Add( btnCancelFix, 0, wxEXPAND, 0 );
	
	btnRightUp = new wxButton( this, wxID_ANY, _("Right - Up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRightUp->SetDefault(); 
	gSizer2->Add( btnRightUp, 0, wxEXPAND, 0 );
	
	btn90Right = new wxButton( this, wxID_ANY, _("Rotate 90º Right"), wxDefaultPosition, wxDefaultSize, 0 );
	btn90Right->SetDefault(); 
	gSizer2->Add( btn90Right, 0, wxEXPAND, 0 );
	
	btnGhost = new wxButton( this, wxID_ANY, _("Ghost like"), wxDefaultPosition, wxDefaultSize, 0 );
	btnGhost->SetDefault(); 
	gSizer2->Add( btnGhost, 0, wxEXPAND, 0 );
	
	btnRightDown = new wxButton( this, wxID_ANY, _("Right - Down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRightDown->SetDefault(); 
	gSizer2->Add( btnRightDown, 0, wxEXPAND, 0 );
	
	btn90Left = new wxButton( this, wxID_ANY, _("Rotate 90º Left"), wxDefaultPosition, wxDefaultSize, 0 );
	btn90Left->SetDefault(); 
	gSizer2->Add( btn90Left, 0, wxEXPAND, 0 );
	
	btnEndGhost = new wxButton( this, wxID_ANY, _("End ghost like"), wxDefaultPosition, wxDefaultSize, 0 );
	btnEndGhost->SetDefault(); 
	gSizer2->Add( btnEndGhost, 0, wxEXPAND, 0 );
	
	btnLeftUp = new wxButton( this, wxID_ANY, _("Left - Up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLeftUp->SetDefault(); 
	gSizer2->Add( btnLeftUp, 0, wxEXPAND, 0 );
	
	btn180Right = new wxButton( this, wxID_ANY, _("Rotate 180º Right"), wxDefaultPosition, wxDefaultSize, 0 );
	btn180Right->SetDefault(); 
	gSizer2->Add( btn180Right, 0, wxEXPAND, 0 );
	
	btnStopAnimation = new wxButton( this, wxID_ANY, _("Stop animation"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStopAnimation->SetDefault(); 
	gSizer2->Add( btnStopAnimation, 0, wxEXPAND, 0 );
	
	btnLeftDown = new wxButton( this, wxID_ANY, _("Left - Down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLeftDown->SetDefault(); 
	gSizer2->Add( btnLeftDown, 0, wxEXPAND, 0 );
	
	btnRightLeft = new wxButton( this, wxID_ANY, _("Rotate 90º Rght-Lft"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRightLeft->SetDefault(); 
	gSizer2->Add( btnRightLeft, 0, wxEXPAND, 0 );
	
	btnContinueAnimation = new wxButton( this, wxID_ANY, _("Continue animation"), wxDefaultPosition, wxDefaultSize, 0 );
	btnContinueAnimation->SetDefault(); 
	gSizer2->Add( btnContinueAnimation, 0, wxEXPAND, 0 );
	
	btnRandom = new wxButton( this, wxID_ANY, _("Random step"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRandom->SetDefault(); 
	gSizer2->Add( btnRandom, 0, wxEXPAND, 0 );
	
	btnRandomDirection = new wxButton( this, wxID_ANY, _("Random direction"), wxDefaultPosition, wxDefaultSize, 0 );
	btnRandomDirection->SetDefault(); 
	gSizer2->Add( btnRandomDirection, 0, wxEXPAND, 0 );
	
	btnTrasparencyUp = new wxButton( this, wxID_ANY, _("Transparency up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTrasparencyUp->SetDefault(); 
	gSizer2->Add( btnTrasparencyUp, 0, wxEXPAND, 0 );
	
	btnFollowPlayer = new wxButton( this, wxID_ANY, _("Follow player"), wxDefaultPosition, wxDefaultSize, 0 );
	btnFollowPlayer->SetDefault(); 
	gSizer2->Add( btnFollowPlayer, 0, wxEXPAND, 0 );
	
	btnLookPlayer = new wxButton( this, wxID_ANY, _("Look player"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLookPlayer->SetDefault(); 
	gSizer2->Add( btnLookPlayer, 0, wxEXPAND, 0 );
	
	btnTrasparencyDown = new wxButton( this, wxID_ANY, _("Transparency down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTrasparencyDown->SetDefault(); 
	gSizer2->Add( btnTrasparencyDown, 0, wxEXPAND, 0 );
	
	btnEvadePlayer = new wxButton( this, wxID_ANY, _("Evade player"), wxDefaultPosition, wxDefaultSize, 0 );
	btnEvadePlayer->SetDefault(); 
	gSizer2->Add( btnEvadePlayer, 0, wxEXPAND, 0 );
	
	btnTurnBack = new wxButton( this, wxID_ANY, _("Turn back on player"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTurnBack->SetDefault(); 
	gSizer2->Add( btnTurnBack, 0, wxEXPAND, 0 );
	
	btnEnableSwitch = new wxButton( this, wxID_ANY, _("Enable switch"), wxDefaultPosition, wxDefaultSize, 0 );
	btnEnableSwitch->SetDefault(); 
	gSizer2->Add( btnEnableSwitch, 0, wxEXPAND, 0 );
	
	btnGo = new wxButton( this, wxID_ANY, _("Go"), wxDefaultPosition, wxDefaultSize, 0 );
	btnGo->SetDefault(); 
	gSizer2->Add( btnGo, 0, wxEXPAND, 0 );
	
	btnWait = new wxButton( this, wxID_ANY, _("Wait"), wxDefaultPosition, wxDefaultSize, 0 );
	btnWait->SetDefault(); 
	gSizer2->Add( btnWait, 0, wxEXPAND, 0 );
	
	btnDisableSwitch = new wxButton( this, wxID_ANY, _("Disable switch"), wxDefaultPosition, wxDefaultSize, 0 );
	btnDisableSwitch->SetDefault(); 
	gSizer2->Add( btnDisableSwitch, 0, wxEXPAND, 0 );
	
	btnSpeedUp = new wxButton( this, wxID_ANY, _("Speed up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnSpeedUp->SetDefault(); 
	gSizer2->Add( btnSpeedUp, 0, wxEXPAND, 0 );
	
	btnFrequencyUp = new wxButton( this, wxID_ANY, _("Frequency up"), wxDefaultPosition, wxDefaultSize, 0 );
	btnFrequencyUp->SetDefault(); 
	gSizer2->Add( btnFrequencyUp, 0, wxEXPAND, 0 );
	
	btnChangeGraphic = new wxButton( this, wxID_ANY, _("Change graphic..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnChangeGraphic->SetDefault(); 
	gSizer2->Add( btnChangeGraphic, 0, wxEXPAND, 0 );
	
	btnSpeedDown = new wxButton( this, wxID_ANY, _("Speed down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnSpeedDown->SetDefault(); 
	gSizer2->Add( btnSpeedDown, 0, wxEXPAND, 0 );
	
	btnFrequencyDown = new wxButton( this, wxID_ANY, _("Frequency down"), wxDefaultPosition, wxDefaultSize, 0 );
	btnFrequencyDown->SetDefault(); 
	gSizer2->Add( btnFrequencyDown, 0, wxEXPAND, 0 );
	
	btnSoundEffect = new wxButton( this, wxID_ANY, _("Sound effect..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSoundEffect->SetDefault(); 
	gSizer2->Add( btnSoundEffect, 0, wxEXPAND, 0 );
	
	sbSizer98->Add( gSizer2, 1, wxLEFT|wxEXPAND, 1 );
	
	bSizer183->Add( sbSizer98, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer187;
	bSizer187 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer187->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer187->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer187->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer183->Add( bSizer187, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer183 );
	this->Layout();
	bSizer183->Fit( this );
}

dlgEvtCmdEventMovement_Base::~dlgEvtCmdEventMovement_Base()
{
}

dlgEvtCmdWait_Base::dlgEvtCmdWait_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer19;
	sbSizer19 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Wait time") ), wxHORIZONTAL );
	
	spinTime = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 10 );
	sbSizer19->Add( spinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTime = new wxStaticText( this, wxID_ANY, _("x0.1 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTime->Wrap( -1 );
	sbSizer19->Add( stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer36->Add( sbSizer19, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer37->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer37->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer37->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer36->Add( bSizer37, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer36 );
	this->Layout();
	bSizer36->Fit( this );
}

dlgEvtCmdWait_Base::~dlgEvtCmdWait_Base()
{
}
