///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_troops.h"

///////////////////////////////////////////////////////////////////////////

pnTroop_Base::pnTroop_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* szTroop;
	szTroop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stTroop = new wxStaticText( this, wxID_ANY, _("Troops"), wxDefaultPosition, wxDefaultSize, 0 );
	stTroop->Wrap( -1 );
	stTroop->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stTroop, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listTroop = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szLeft->Add( listTroop, 1, wxALL|wxEXPAND, 1 );
	
	btnTroopMaxNumber = new wxButton( this, wxID_ANY, _("Max number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTroopMaxNumber->SetDefault(); 
	szLeft->Add( btnTroopMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szTroop->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightTop;
	szRightTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTroopName;
	szTroopName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcTroopName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTroopName->Add( tcTroopName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szTroopName, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	btnTroopAutocomplete = new wxButton( this, wxID_ANY, _("Autocomplete"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTroopAutocomplete->SetDefault(); 
	szRightTop->Add( btnTroopAutocomplete, 1, wxALL|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnTroopTestBattle = new wxButton( this, wxID_ANY, _("Test battle..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTroopTestBattle->SetDefault(); 
	szRightTop->Add( btnTroopTestBattle, 1, wxALL|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnTroopChangeBackground = new wxButton( this, wxID_ANY, _("Change background..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTroopChangeBackground->SetDefault(); 
	szRightTop->Add( btnTroopChangeBackground, 1, wxALL|wxALIGN_CENTER_VERTICAL, 1 );
	
	szRight->Add( szRightTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRightMiddle;
	szRightMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	bmpTroop = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 320, 160 ), wxSUNKEN_BORDER );
	szRightMiddle->Add( bmpTroop, 0, wxALL, 1 );
	
	wxBoxSizer* szRightMiddleCenter;
	szRightMiddleCenter = new wxBoxSizer( wxVERTICAL );
	
	
	szRightMiddleCenter->Add( 0,  0, 1, wxEXPAND, 0 );
	
	btnTroopAdd = new wxButton( this, wxID_ANY, _("Add"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTroopAdd->SetDefault(); 
	szRightMiddleCenter->Add( btnTroopAdd, 0, wxALL|wxEXPAND, 1 );
	
	btnTroopRemove = new wxButton( this, wxID_ANY, _("Remove"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTroopRemove->SetDefault(); 
	szRightMiddleCenter->Add( btnTroopRemove, 0, wxALL|wxEXPAND, 1 );
	
	btnTroopEmpty = new wxButton( this, wxID_ANY, _("Empty"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTroopEmpty->SetDefault(); 
	szRightMiddleCenter->Add( btnTroopEmpty, 0, wxALL|wxEXPAND, 1 );
	
	btnTroopAlign = new wxButton( this, wxID_ANY, _("Align"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTroopAlign->SetDefault(); 
	szRightMiddleCenter->Add( btnTroopAlign, 0, wxALL|wxEXPAND, 1 );
	
	
	szRightMiddleCenter->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szRightMiddle->Add( szRightMiddleCenter, 0, wxEXPAND, 0 );
	
	listTroopMonster = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szRightMiddle->Add( listTroopMonster, 1, wxALL|wxEXPAND, 1 );
	
	szRight->Add( szRightMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRightBottom;
	szRightBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTroopEncountersOn;
	szTroopEncountersOn = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Encounters on") ), wxHORIZONTAL );
	
	listTroopEncountersOn = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szTroopEncountersOn->Add( listTroopEncountersOn, 1, wxEXPAND, 0 );
	
	szRightBottom->Add( szTroopEncountersOn, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTroopBattleEvents;
	szTroopBattleEvents = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Battle events") ), wxVERTICAL );
	
	wxBoxSizer* szTroopBattleEventsButtons;
	szTroopBattleEventsButtons = new wxBoxSizer( wxHORIZONTAL );
	
	szTroopBattleEventsNewPage = new wxButton( this, wxID_ANY, _("New page"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	szTroopBattleEventsNewPage->SetDefault(); 
	szTroopBattleEventsButtons->Add( szTroopBattleEventsNewPage, 1, wxRIGHT|wxBOTTOM, 1 );
	
	szTroopBattleEventsCopyPage = new wxButton( this, wxID_ANY, _("Copy"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	szTroopBattleEventsCopyPage->SetDefault(); 
	szTroopBattleEventsButtons->Add( szTroopBattleEventsCopyPage, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	szTroopBattleEventsPastePage = new wxButton( this, wxID_ANY, _("Paste"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	szTroopBattleEventsPastePage->SetDefault(); 
	szTroopBattleEventsButtons->Add( szTroopBattleEventsPastePage, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	szTroopBattleEventsDeletePage = new wxButton( this, wxID_ANY, _("Delete"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	szTroopBattleEventsDeletePage->SetDefault(); 
	szTroopBattleEventsButtons->Add( szTroopBattleEventsDeletePage, 1, wxLEFT|wxBOTTOM, 1 );
	
	szTroopBattleEvents->Add( szTroopBattleEventsButtons, 0, wxEXPAND, 0 );
	
	nbTroopBattleEvents = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	pnTroopBattleEvents = new wxPanel( nbTroopBattleEvents, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szTroopBattleEventsConditions;
	szTroopBattleEventsConditions = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTroopBattleEventsConditionsSelect;
	szTroopBattleEventsConditionsSelect = new wxBoxSizer( wxHORIZONTAL );
	
	stTroopBattleEventsConditions = new wxStaticText( pnTroopBattleEvents, wxID_ANY, _("Conditions"), wxDefaultPosition, wxDefaultSize, 0 );
	stTroopBattleEventsConditions->Wrap( -1 );
	szTroopBattleEventsConditionsSelect->Add( stTroopBattleEventsConditions, 0, wxALL|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTroopBattleEventsConditions = new wxTextCtrl( pnTroopBattleEvents, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTroopBattleEventsConditionsSelect->Add( tcTroopBattleEventsConditions, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnTroopBattleEventsConditions = new wxButton( pnTroopBattleEvents, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTroopBattleEventsConditions->SetDefault(); 
	szTroopBattleEventsConditionsSelect->Add( btnTroopBattleEventsConditions, 0, wxRIGHT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTroopBattleEventsConditions->Add( szTroopBattleEventsConditionsSelect, 0, wxEXPAND, 0 );
	
	listTroopBattleEvents = new wxListBox( pnTroopBattleEvents, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szTroopBattleEventsConditions->Add( listTroopBattleEvents, 1, wxALL|wxEXPAND, 1 );
	
	pnTroopBattleEvents->SetSizer( szTroopBattleEventsConditions );
	pnTroopBattleEvents->Layout();
	szTroopBattleEventsConditions->Fit( pnTroopBattleEvents );
	nbTroopBattleEvents->AddPage( pnTroopBattleEvents, _("1"), true );
	
	szTroopBattleEvents->Add( nbTroopBattleEvents, 1, wxTOP|wxEXPAND, 1 );
	
	szRightBottom->Add( szTroopBattleEvents, 2, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szRight->Add( szRightBottom, 1, wxEXPAND, 0 );
	
	szTroop->Add( szRight, 1, wxEXPAND, 0 );
	
	this->SetSizer( szTroop );
	this->Layout();
	szTroop->Fit( this );
}

pnTroop_Base::~pnTroop_Base()
{
}
