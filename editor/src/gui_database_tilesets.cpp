///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_tilesets.h"

///////////////////////////////////////////////////////////////////////////

pnTileset_Base::pnTileset_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* szTileset;
	szTileset = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stTileset = new wxStaticText( this, wxID_ANY, _("Tilesets"), wxDefaultPosition, wxDefaultSize, 0 );
	stTileset->Wrap( -1 );
	stTileset->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stTileset, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listTileset = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szLeft->Add( listTileset, 1, wxALL|wxEXPAND, 1 );
	
	btnTilesetMaxNumber = new wxButton( this, wxID_ANY, _("Max Number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTilesetMaxNumber->SetDefault(); 
	szLeft->Add( btnTilesetMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szTileset->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightTop;
	szRightTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTilesetName;
	szTilesetName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcTilesetName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTilesetName->Add( tcTilesetName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szTilesetName, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTilesetGraphic;
	szTilesetGraphic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tileset graphic") ), wxHORIZONTAL );
	
	tcTilesetGraphic = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTilesetGraphic->Add( tcTilesetGraphic, 1, wxALL|wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szTilesetGraphic, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szRight->Add( szRightTop, 0, wxEXPAND, 0 );
	
	nbTileset = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	nbTilesetLowerLayer = new wxPanel( nbTileset, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szTilesetLowerLayer;
	szTilesetLowerLayer = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szTilesetLowerLayerLeft;
	szTilesetLowerLayerLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szModifyLower;
	szModifyLower = new wxStaticBoxSizer( new wxStaticBox( nbTilesetLowerLayer, wxID_ANY, _("Modify") ), wxVERTICAL );
	
	btnTilesetLowerLayerTerrainType = new wxButton( nbTilesetLowerLayer, wxID_ANY, _("Terrain type"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTilesetLowerLayerTerrainType->SetDefault(); 
	szModifyLower->Add( btnTilesetLowerLayerTerrainType, 0, wxBOTTOM|wxEXPAND, 1 );
	
	btnTilesetLowerLayerBlocking = new wxButton( nbTilesetLowerLayer, wxID_ANY, _("Blocking"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTilesetLowerLayerBlocking->SetDefault(); 
	szModifyLower->Add( btnTilesetLowerLayerBlocking, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	btnTilesetLowerLayerFourDirections = new wxButton( nbTilesetLowerLayer, wxID_ANY, _("Four directions"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTilesetLowerLayerFourDirections->SetDefault(); 
	szModifyLower->Add( btnTilesetLowerLayerFourDirections, 0, wxTOP|wxEXPAND, 1 );
	
	szTilesetLowerLayerLeft->Add( szModifyLower, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	btnTilesetLowerLayerChangeEverything = new wxButton( nbTilesetLowerLayer, wxID_ANY, _("Change everything to..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTilesetLowerLayerChangeEverything->SetDefault(); 
	szTilesetLowerLayerLeft->Add( btnTilesetLowerLayerChangeEverything, 0, wxALL|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szWaterAnimation;
	szWaterAnimation = new wxStaticBoxSizer( new wxStaticBox( nbTilesetLowerLayer, wxID_ANY, _("Water animation") ), wxVERTICAL );
	
	bmpTilesetWaterAnimation = new wxStaticBitmap( nbTilesetLowerLayer, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 32, 32 ), wxSUNKEN_BORDER );
	szWaterAnimation->Add( bmpTilesetWaterAnimation, 0, 0, 0 );
	
	wxString rbTilesetWaterAnimationSequenceChoices[] = { _("1-2-3-2"), _("1-2-3") };
	int rbTilesetWaterAnimationSequenceNChoices = sizeof( rbTilesetWaterAnimationSequenceChoices ) / sizeof( wxString );
	rbTilesetWaterAnimationSequence = new wxRadioBox( nbTilesetLowerLayer, wxID_ANY, _("Sequence"), wxDefaultPosition, wxDefaultSize, rbTilesetWaterAnimationSequenceNChoices, rbTilesetWaterAnimationSequenceChoices, 1, wxRA_SPECIFY_COLS );
	rbTilesetWaterAnimationSequence->SetSelection( 0 );
	szWaterAnimation->Add( rbTilesetWaterAnimationSequence, 0, wxEXPAND, 0 );
	
	wxString rbTilesetWaterAnimationSpeedChoices[] = { _("Slow"), _("Fast") };
	int rbTilesetWaterAnimationSpeedNChoices = sizeof( rbTilesetWaterAnimationSpeedChoices ) / sizeof( wxString );
	rbTilesetWaterAnimationSpeed = new wxRadioBox( nbTilesetLowerLayer, wxID_ANY, _("Speed"), wxDefaultPosition, wxDefaultSize, rbTilesetWaterAnimationSpeedNChoices, rbTilesetWaterAnimationSpeedChoices, 1, wxRA_SPECIFY_COLS );
	rbTilesetWaterAnimationSpeed->SetSelection( 0 );
	szWaterAnimation->Add( rbTilesetWaterAnimationSpeed, 0, wxEXPAND, 0 );
	
	szTilesetLowerLayerLeft->Add( szWaterAnimation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szTilesetLowerLayer->Add( szTilesetLowerLayerLeft, 0, wxEXPAND, 0 );
	
	listTilesetLowerLayerGraphic = new wxListBox( nbTilesetLowerLayer, wxID_ANY, wxDefaultPosition, wxSize( 192, 50 ), 0, NULL, 0 ); 
	szTilesetLowerLayer->Add( listTilesetLowerLayerGraphic, 0, wxALL|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTilesetLowerLayerTerrain;
	szTilesetLowerLayerTerrain = new wxStaticBoxSizer( new wxStaticBox( nbTilesetLowerLayer, wxID_ANY, _("Terrain") ), wxHORIZONTAL );
	
	listTilesetLowerLayerTerrain = new wxListBox( nbTilesetLowerLayer, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szTilesetLowerLayerTerrain->Add( listTilesetLowerLayerTerrain, 1, wxEXPAND, 0 );
	
	szTilesetLowerLayer->Add( szTilesetLowerLayerTerrain, 1, wxALL|wxEXPAND, 1 );
	
	nbTilesetLowerLayer->SetSizer( szTilesetLowerLayer );
	nbTilesetLowerLayer->Layout();
	szTilesetLowerLayer->Fit( nbTilesetLowerLayer );
	nbTileset->AddPage( nbTilesetLowerLayer, _("Lower layer"), true );
	nbTilesetUpperLayer = new wxPanel( nbTileset, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szTilesetUpperLayer;
	szTilesetUpperLayer = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szModifyUpper;
	szModifyUpper = new wxStaticBoxSizer( new wxStaticBox( nbTilesetUpperLayer, wxID_ANY, _("Modify") ), wxVERTICAL );
	
	btnTileseUpperLayerModifyBlocking = new wxButton( nbTilesetUpperLayer, wxID_ANY, _("Blocking"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTileseUpperLayerModifyBlocking->SetDefault(); 
	szModifyUpper->Add( btnTileseUpperLayerModifyBlocking, 0, wxBOTTOM|wxEXPAND, 1 );
	
	btnTileseUpperLayerModifyFourDirections = new wxButton( nbTilesetUpperLayer, wxID_ANY, _("Four directions"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTileseUpperLayerModifyFourDirections->SetDefault(); 
	szModifyUpper->Add( btnTileseUpperLayerModifyFourDirections, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	btnTileseUpperLayerModifyCounterFlag = new wxButton( nbTilesetUpperLayer, wxID_ANY, _("Counter flag"), wxDefaultPosition, wxDefaultSize, 0 );
	btnTileseUpperLayerModifyCounterFlag->SetDefault(); 
	szModifyUpper->Add( btnTileseUpperLayerModifyCounterFlag, 0, wxTOP|wxEXPAND, 1 );
	
	szTilesetUpperLayer->Add( szModifyUpper, 0, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	listTilesetUpperLayerGraphic = new wxListBox( nbTilesetUpperLayer, wxID_ANY, wxDefaultPosition, wxSize( 192, 50 ), 0, NULL, 0 ); 
	szTilesetUpperLayer->Add( listTilesetUpperLayerGraphic, 0, wxALL|wxEXPAND, 1 );
	
	nbTilesetUpperLayer->SetSizer( szTilesetUpperLayer );
	nbTilesetUpperLayer->Layout();
	szTilesetUpperLayer->Fit( nbTilesetUpperLayer );
	nbTileset->AddPage( nbTilesetUpperLayer, _("Upper layer"), true );
	
	szRight->Add( nbTileset, 1, wxALL|wxEXPAND, 1 );
	
	szTileset->Add( szRight, 1, wxEXPAND, 0 );
	
	this->SetSizer( szTileset );
	this->Layout();
	szTileset->Fit( this );
}

pnTileset_Base::~pnTileset_Base()
{
}
