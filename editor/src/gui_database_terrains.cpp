///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_terrains.h"

///////////////////////////////////////////////////////////////////////////

pnTerrain_Base::pnTerrain_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* szTerrain;
	szTerrain = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stTerrain = new wxStaticText( this, wxID_ANY, _("Terrains"), wxDefaultPosition, wxDefaultSize, 0 );
	stTerrain->Wrap( -1 );
	stTerrain->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stTerrain, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listTerrain = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szLeft->Add( listTerrain, 1, wxALL|wxEXPAND, 1 );
	
	btnTerrainMaxNumber = new wxButton( this, wxID_ANY, _("Max Number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTerrainMaxNumber->SetDefault(); 
	szLeft->Add( btnTerrainMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szTerrain->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightTop;
	szRightTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTerrainName;
	szTerrainName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcTerrainName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTerrainName->Add( tcTerrainName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szTerrainName, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTerrainDamage;
	szTerrainDamage = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Damage") ), wxHORIZONTAL );
	
	spinTerrainDamage = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	szTerrainDamage->Add( spinTerrainDamage, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szTerrainDamage, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTerrainEncounterRate;
	szTerrainEncounterRate = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Encounter %") ), wxHORIZONTAL );
	
	spinTerrainEncounterRate = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szTerrainEncounterRate->Add( spinTerrainEncounterRate, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTerrainEncounterRate = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTerrainEncounterRate->Wrap( -1 );
	szTerrainEncounterRate->Add( stTerrainEncounterRate, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szRightTop->Add( szTerrainEncounterRate, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRight->Add( szRightTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTerrainBattleBackground;
	szTerrainBattleBackground = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Battle background graphic") ), wxVERTICAL );
	
	bmpTerrainBattleBackgroundGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 320, 160 ), wxSUNKEN_BORDER );
	szTerrainBattleBackground->Add( bmpTerrainBattleBackgroundGraphic, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 1 );
	
	wxBoxSizer* szTerrainBattleBackgroundGraphic;
	szTerrainBattleBackgroundGraphic = new wxBoxSizer( wxHORIZONTAL );
	
	stTerrainBattleBackgroundGraphic = new wxStaticText( this, wxID_ANY, _("Terrain background"), wxDefaultPosition, wxDefaultSize, 0 );
	stTerrainBattleBackgroundGraphic->Wrap( -1 );
	szTerrainBattleBackgroundGraphic->Add( stTerrainBattleBackgroundGraphic, 1, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnTerrainBattleBackgroundGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTerrainBattleBackgroundGraphic->SetDefault(); 
	szTerrainBattleBackgroundGraphic->Add( btnTerrainBattleBackgroundGraphic, 0, wxLEFT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTerrainBattleBackground->Add( szTerrainBattleBackgroundGraphic, 0, wxEXPAND, 0 );
	
	szRight->Add( szTerrainBattleBackground, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szRightBottom;
	szRightBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTerrainVehiclePermissions;
	szTerrainVehiclePermissions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Vehicle permissions") ), wxVERTICAL );
	
	chbTerrainVehicleSmallShip = new wxCheckBox( this, wxID_ANY, _("Small ship"), wxDefaultPosition, wxDefaultSize, 0 );
	chbTerrainVehicleSmallShip->SetValue(true); 
	szTerrainVehiclePermissions->Add( chbTerrainVehicleSmallShip, 1, wxBOTTOM|wxEXPAND, 1 );
	
	chbTerrainVehicleBigShip = new wxCheckBox( this, wxID_ANY, _("Big ship"), wxDefaultPosition, wxDefaultSize, 0 );
	chbTerrainVehicleBigShip->SetValue(true); 
	szTerrainVehiclePermissions->Add( chbTerrainVehicleBigShip, 1, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbTerrainVehicleAirShip = new wxCheckBox( this, wxID_ANY, _("Airship"), wxDefaultPosition, wxDefaultSize, 0 );
	chbTerrainVehicleAirShip->SetValue(true); 
	szTerrainVehiclePermissions->Add( chbTerrainVehicleAirShip, 1, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbTerrainVehicleShipCanLand = new wxCheckBox( this, wxID_ANY, _("Ship can land"), wxDefaultPosition, wxDefaultSize, 0 );
	chbTerrainVehicleShipCanLand->SetValue(true); 
	szTerrainVehiclePermissions->Add( chbTerrainVehicleShipCanLand, 1, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	szRightBottom->Add( szTerrainVehiclePermissions, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxString rbTerrainTransparencyChoices[] = { _("Normal"), _("1/3 transparent"), _("1/2 transparent"), _("Fully transparent") };
	int rbTerrainTransparencyNChoices = sizeof( rbTerrainTransparencyChoices ) / sizeof( wxString );
	rbTerrainTransparency = new wxRadioBox( this, wxID_ANY, _("Transparency"), wxDefaultPosition, wxDefaultSize, rbTerrainTransparencyNChoices, rbTerrainTransparencyChoices, 1, wxRA_SPECIFY_COLS );
	rbTerrainTransparency->SetSelection( 0 );
	szRightBottom->Add( rbTerrainTransparency, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szRight->Add( szRightBottom, 0, wxEXPAND, 0 );
	
	szTerrain->Add( szRight, 0, wxEXPAND, 0 );
	
	this->SetSizer( szTerrain );
	this->Layout();
	szTerrain->Fit( this );
}

pnTerrain_Base::~pnTerrain_Base()
{
}
