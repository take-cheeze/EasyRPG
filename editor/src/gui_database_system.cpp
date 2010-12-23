///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_system.h"

///////////////////////////////////////////////////////////////////////////

pnSystem_Base::pnSystem_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* bSizer452;
	bSizer452 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer453;
	bSizer453 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer421;
	sbSizer421 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Vehicle graphic") ), wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer422;
	sbSizer422 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Small ship") ), wxVERTICAL );
	
	bmpVehicleGraphicSmallShip = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	sbSizer422->Add( bmpVehicleGraphicSmallShip, 0, wxBOTTOM|wxALIGN_BOTTOM, 1 );
	
	btnVehicleGraphicSmallShip = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVehicleGraphicSmallShip->SetDefault(); 
	sbSizer422->Add( btnVehicleGraphicSmallShip, 0, wxTOP|wxALIGN_RIGHT, 1 );
	
	sbSizer421->Add( sbSizer422, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer423;
	sbSizer423 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Big ship") ), wxVERTICAL );
	
	bmpVehicleGraphicBigShip = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	sbSizer423->Add( bmpVehicleGraphicBigShip, 0, wxBOTTOM|wxALIGN_BOTTOM, 1 );
	
	btnVehicleGraphicBigShip = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVehicleGraphicBigShip->SetDefault(); 
	sbSizer423->Add( btnVehicleGraphicBigShip, 0, wxTOP|wxALIGN_RIGHT, 1 );
	
	sbSizer421->Add( sbSizer423, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer424;
	sbSizer424 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Airship") ), wxVERTICAL );
	
	bmpVehicleGraphicAirship = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	sbSizer424->Add( bmpVehicleGraphicAirship, 0, wxBOTTOM|wxALIGN_BOTTOM, 1 );
	
	btnVehicleGraphicAirship = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVehicleGraphicAirship->SetDefault(); 
	sbSizer424->Add( btnVehicleGraphicAirship, 0, wxTOP|wxALIGN_RIGHT, 1 );
	
	sbSizer421->Add( sbSizer424, 1, wxLEFT|wxEXPAND, 1 );
	
	bSizer453->Add( sbSizer421, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer425;
	sbSizer425 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Title graphic") ), wxHORIZONTAL );
	
	bmpSystemTitleGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 120 ), wxSUNKEN_BORDER );
	sbSizer425->Add( bmpSystemTitleGraphic, 0, wxRIGHT|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 1 );
	
	btnSystemTitleGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemTitleGraphic->SetDefault(); 
	sbSizer425->Add( btnSystemTitleGraphic, 0, wxLEFT|wxALIGN_BOTTOM, 1 );
	
	bSizer453->Add( sbSizer425, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer426;
	sbSizer426 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Game over graphic") ), wxHORIZONTAL );
	
	bmpSystemGameOverGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 120 ), wxSUNKEN_BORDER );
	sbSizer426->Add( bmpSystemGameOverGraphic, 0, wxRIGHT|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 1 );
	
	btnSystemGameOverGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemGameOverGraphic->SetDefault(); 
	sbSizer426->Add( btnSystemGameOverGraphic, 0, wxLEFT|wxALIGN_BOTTOM, 1 );
	
	bSizer453->Add( sbSizer426, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer452->Add( bSizer453, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer454;
	bSizer454 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer427;
	sbSizer427 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Starting party") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer428;
	sbSizer428 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor 1") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartingPartyActor1Choices;
	chSystemStartingPartyActor1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartingPartyActor1Choices, 0 );
	chSystemStartingPartyActor1->SetSelection( 0 );
	sbSizer428->Add( chSystemStartingPartyActor1, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer427->Add( sbSizer428, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer429;
	sbSizer429 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor 2") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartingPartyActor2Choices;
	chSystemStartingPartyActor2 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartingPartyActor2Choices, 0 );
	chSystemStartingPartyActor2->SetSelection( 0 );
	sbSizer429->Add( chSystemStartingPartyActor2, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer427->Add( sbSizer429, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer430;
	sbSizer430 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor 3") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartingPartyActor3Choices;
	chSystemStartingPartyActor3 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartingPartyActor3Choices, 0 );
	chSystemStartingPartyActor3->SetSelection( 0 );
	sbSizer430->Add( chSystemStartingPartyActor3, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer427->Add( sbSizer430, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer431;
	sbSizer431 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor 4") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartingPartyActor4Choices;
	chSystemStartingPartyActor4 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartingPartyActor4Choices, 0 );
	chSystemStartingPartyActor4->SetSelection( 0 );
	sbSizer431->Add( chSystemStartingPartyActor4, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer427->Add( sbSizer431, 1, wxEXPAND, 0 );
	
	bSizer454->Add( sbSizer427, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer432;
	sbSizer432 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("System music") ), wxHORIZONTAL );
	
	wxGridSizer* gSizer12;
	gSizer12 = new wxGridSizer( 4, 2, 0, 2 );
	
	wxStaticBoxSizer* sbSizer433;
	sbSizer433 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Title") ), wxHORIZONTAL );
	
	tcSystemMusicTitle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer433->Add( tcSystemMusicTitle, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicTitle = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicTitle->SetDefault(); 
	sbSizer433->Add( btnSystemMusicTitle, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer12->Add( sbSizer433, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer434;
	sbSizer434 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Small ship") ), wxHORIZONTAL );
	
	tcSystemMusicSmallShip = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer434->Add( tcSystemMusicSmallShip, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicSmallShip = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicSmallShip->SetDefault(); 
	sbSizer434->Add( btnSystemMusicSmallShip, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer12->Add( sbSizer434, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer435;
	sbSizer435 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Battle") ), wxHORIZONTAL );
	
	tcSystemMusicBattle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer435->Add( tcSystemMusicBattle, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicBattle = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicBattle->SetDefault(); 
	sbSizer435->Add( btnSystemMusicBattle, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer12->Add( sbSizer435, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer436;
	sbSizer436 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Big ship") ), wxHORIZONTAL );
	
	tcSystemMusicBigShip = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer436->Add( tcSystemMusicBigShip, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicBigShip = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicBigShip->SetDefault(); 
	sbSizer436->Add( btnSystemMusicBigShip, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer12->Add( sbSizer436, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer437;
	sbSizer437 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Victory") ), wxHORIZONTAL );
	
	tcSystemMusicVictory = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer437->Add( tcSystemMusicVictory, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicVictory = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicVictory->SetDefault(); 
	sbSizer437->Add( btnSystemMusicVictory, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer12->Add( sbSizer437, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer438;
	sbSizer438 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Airship") ), wxHORIZONTAL );
	
	tcSystemMusicAirship = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer438->Add( tcSystemMusicAirship, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicAirship = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicAirship->SetDefault(); 
	sbSizer438->Add( btnSystemMusicAirship, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer12->Add( sbSizer438, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer439;
	sbSizer439 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Inn") ), wxHORIZONTAL );
	
	tcSystemMusicInn = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer439->Add( tcSystemMusicInn, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicInn = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicInn->SetDefault(); 
	sbSizer439->Add( btnSystemMusicInn, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer12->Add( sbSizer439, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer440;
	sbSizer440 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Game over") ), wxHORIZONTAL );
	
	tcSystemMusicGameOver = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer440->Add( tcSystemMusicGameOver, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicGameOver = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicGameOver->SetDefault(); 
	sbSizer440->Add( btnSystemMusicGameOver, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer12->Add( sbSizer440, 1, wxEXPAND, 0 );
	
	sbSizer432->Add( gSizer12, 1, wxEXPAND, 0 );
	
	bSizer454->Add( sbSizer432, 2, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer441;
	sbSizer441 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("System sounds") ), wxHORIZONTAL );
	
	wxGridSizer* gSizer13;
	gSizer13 = new wxGridSizer( 4, 3, 0, 2 );
	
	wxStaticBoxSizer* sbSizer442;
	sbSizer442 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Cursor") ), wxHORIZONTAL );
	
	tcSystemSoundCursor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer442->Add( tcSystemSoundCursor, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundCursor = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundCursor->SetDefault(); 
	sbSizer442->Add( btnSystemSoundCursor, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer442, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer443;
	sbSizer443 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Start battle") ), wxHORIZONTAL );
	
	tcSystemSoundStartBattle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer443->Add( tcSystemSoundStartBattle, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundStartBattle = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundStartBattle->SetDefault(); 
	sbSizer443->Add( btnSystemSoundStartBattle, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer443, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer444;
	sbSizer444 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor damage") ), wxHORIZONTAL );
	
	tcSystemSoundActorDamage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer444->Add( tcSystemSoundActorDamage, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundActorDamage = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundActorDamage->SetDefault(); 
	sbSizer444->Add( btnSystemSoundActorDamage, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer444, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer445;
	sbSizer445 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("OK") ), wxHORIZONTAL );
	
	tcSystemSoundOK = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer445->Add( tcSystemSoundOK, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundOK = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundOK->SetDefault(); 
	sbSizer445->Add( btnSystemSoundOK, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer445, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer446;
	sbSizer446 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Escape") ), wxHORIZONTAL );
	
	tcSystemSoundEscape = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer446->Add( tcSystemSoundEscape, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundEscape = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundEscape->SetDefault(); 
	sbSizer446->Add( btnSystemSoundEscape, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer446, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer447;
	sbSizer447 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Dodge") ), wxHORIZONTAL );
	
	tcSystemSoundDodge = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer447->Add( tcSystemSoundDodge, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundDodge = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundDodge->SetDefault(); 
	sbSizer447->Add( btnSystemSoundDodge, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer447, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer448;
	sbSizer448 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Cancel") ), wxHORIZONTAL );
	
	tcSystemSoundCancel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer448->Add( tcSystemSoundCancel, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundCancel = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundCancel->SetDefault(); 
	sbSizer448->Add( btnSystemSoundCancel, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer448, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer449;
	sbSizer449 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy attack") ), wxHORIZONTAL );
	
	tcSystemSoundEnemyAttack = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer449->Add( tcSystemSoundEnemyAttack, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundEnemyAttack = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundEnemyAttack->SetDefault(); 
	sbSizer449->Add( btnSystemSoundEnemyAttack, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer449, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer450;
	sbSizer450 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy death") ), wxHORIZONTAL );
	
	tcSystemSoundEnemyDeath = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer450->Add( tcSystemSoundEnemyDeath, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundEnemyDeath = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundEnemyDeath->SetDefault(); 
	sbSizer450->Add( btnSystemSoundEnemyDeath, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer450, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer451;
	sbSizer451 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Error") ), wxHORIZONTAL );
	
	tcSystemSoundError = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer451->Add( tcSystemSoundError, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundError = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundError->SetDefault(); 
	sbSizer451->Add( btnSystemSoundError, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer451, 1, wxALL|wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer452;
	sbSizer452 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy damage") ), wxHORIZONTAL );
	
	tcSystemSoundEnemyDamage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer452->Add( tcSystemSoundEnemyDamage, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundEnemyDamage = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundEnemyDamage->SetDefault(); 
	sbSizer452->Add( btnSystemSoundEnemyDamage, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer452, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer453;
	sbSizer453 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Use object") ), wxHORIZONTAL );
	
	tcSystemSoundUseObject = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer453->Add( tcSystemSoundUseObject, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundUseObject = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundUseObject->SetDefault(); 
	sbSizer453->Add( btnSystemSoundUseObject, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer13->Add( sbSizer453, 1, wxEXPAND, 0 );
	
	sbSizer441->Add( gSizer13, 1, wxEXPAND, 0 );
	
	bSizer454->Add( sbSizer441, 3, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer452->Add( bSizer454, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer455;
	bSizer455 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer454;
	sbSizer454 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("System graphic") ), wxHORIZONTAL );
	
	bmpSystemGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 80 ), wxSUNKEN_BORDER );
	sbSizer454->Add( bmpSystemGraphic, 0, wxRIGHT|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 1 );
	
	btnSystemGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemGraphic->SetDefault(); 
	sbSizer454->Add( btnSystemGraphic, 0, wxLEFT|wxALIGN_BOTTOM, 1 );
	
	bSizer455->Add( sbSizer454, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer455;
	sbSizer455 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Transition type") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer456;
	sbSizer456 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Erase screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemTransitionTypeEraseScreenChoices;
	chSystemTransitionTypeEraseScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemTransitionTypeEraseScreenChoices, 0 );
	chSystemTransitionTypeEraseScreen->SetSelection( 0 );
	sbSizer456->Add( chSystemTransitionTypeEraseScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer455->Add( sbSizer456, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer457;
	sbSizer457 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Show screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemTransitionTypeShowScreenChoices;
	chSystemTransitionTypeShowScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemTransitionTypeShowScreenChoices, 0 );
	chSystemTransitionTypeShowScreen->SetSelection( 0 );
	sbSizer457->Add( chSystemTransitionTypeShowScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer455->Add( sbSizer457, 1, wxEXPAND, 0 );
	
	bSizer455->Add( sbSizer455, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer458;
	sbSizer458 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Start battle") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer459;
	sbSizer459 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Erase screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartBattleEraseScreenChoices;
	chSystemStartBattleEraseScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartBattleEraseScreenChoices, 0 );
	chSystemStartBattleEraseScreen->SetSelection( 0 );
	sbSizer459->Add( chSystemStartBattleEraseScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer458->Add( sbSizer459, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer460;
	sbSizer460 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Show screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartBattleShowScreenChoices;
	chSystemStartBattleShowScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartBattleShowScreenChoices, 0 );
	chSystemStartBattleShowScreen->SetSelection( 0 );
	sbSizer460->Add( chSystemStartBattleShowScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer458->Add( sbSizer460, 1, wxEXPAND, 0 );
	
	bSizer455->Add( sbSizer458, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer461;
	sbSizer461 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("End battle") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer462;
	sbSizer462 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Erase screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemEndBattleEraseScreenChoices;
	chSystemEndBattleEraseScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemEndBattleEraseScreenChoices, 0 );
	chSystemEndBattleEraseScreen->SetSelection( 0 );
	sbSizer462->Add( chSystemEndBattleEraseScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer461->Add( sbSizer462, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer463;
	sbSizer463 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Show screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemEndBattleShowScreenChoices;
	chSystemEndBattleShowScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemEndBattleShowScreenChoices, 0 );
	chSystemEndBattleShowScreen->SetSelection( 0 );
	sbSizer463->Add( chSystemEndBattleShowScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer461->Add( sbSizer463, 1, wxEXPAND, 0 );
	
	bSizer455->Add( sbSizer461, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer452->Add( bSizer455, 0, wxEXPAND, 0 );
	
	this->SetSizer( bSizer452 );
	this->Layout();
	bSizer452->Fit( this );
}

pnSystem_Base::~pnSystem_Base()
{
}
