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
	wxBoxSizer* szSystem;
	szSystem = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szSystemVehicleGraphic;
	szSystemVehicleGraphic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Vehicle graphic") ), wxHORIZONTAL );
	
	wxStaticBoxSizer* szSystemVehicleGrahicSmallShip;
	szSystemVehicleGrahicSmallShip = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Small ship") ), wxVERTICAL );
	
	bmpSystemVehicleGraphicSmallShip = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	szSystemVehicleGrahicSmallShip->Add( bmpSystemVehicleGraphicSmallShip, 0, wxBOTTOM|wxALIGN_BOTTOM, 1 );
	
	btnSystemVehicleGraphicSmallShip = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemVehicleGraphicSmallShip->SetDefault(); 
	szSystemVehicleGrahicSmallShip->Add( btnSystemVehicleGraphicSmallShip, 0, wxTOP|wxALIGN_RIGHT, 1 );
	
	szSystemVehicleGraphic->Add( szSystemVehicleGrahicSmallShip, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSystemVehicleGraphicBigShip;
	szSystemVehicleGraphicBigShip = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Big ship") ), wxVERTICAL );
	
	bmpSystemVehicleGraphicBigShip = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	szSystemVehicleGraphicBigShip->Add( bmpSystemVehicleGraphicBigShip, 0, wxBOTTOM|wxALIGN_BOTTOM, 1 );
	
	btnSystemVehicleGraphicBigShip = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemVehicleGraphicBigShip->SetDefault(); 
	szSystemVehicleGraphicBigShip->Add( btnSystemVehicleGraphicBigShip, 0, wxTOP|wxALIGN_RIGHT, 1 );
	
	szSystemVehicleGraphic->Add( szSystemVehicleGraphicBigShip, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSystemVehicleGraphicAirship;
	szSystemVehicleGraphicAirship = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Airship") ), wxVERTICAL );
	
	bmpSystemVehicleGraphicAirship = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	szSystemVehicleGraphicAirship->Add( bmpSystemVehicleGraphicAirship, 0, wxBOTTOM|wxALIGN_BOTTOM, 1 );
	
	btnSystemVehicleGraphicAirship = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemVehicleGraphicAirship->SetDefault(); 
	szSystemVehicleGraphicAirship->Add( btnSystemVehicleGraphicAirship, 0, wxTOP|wxALIGN_RIGHT, 1 );
	
	szSystemVehicleGraphic->Add( szSystemVehicleGraphicAirship, 1, wxLEFT|wxEXPAND, 1 );
	
	szTop->Add( szSystemVehicleGraphic, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSystemTitleGraphic;
	szSystemTitleGraphic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Title graphic") ), wxHORIZONTAL );
	
	bmpSystemTitleGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 120 ), wxSUNKEN_BORDER );
	szSystemTitleGraphic->Add( bmpSystemTitleGraphic, 0, wxRIGHT|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 1 );
	
	btnSystemTitleGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemTitleGraphic->SetDefault(); 
	szSystemTitleGraphic->Add( btnSystemTitleGraphic, 0, wxLEFT|wxALIGN_BOTTOM, 1 );
	
	szTop->Add( szSystemTitleGraphic, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSystemGameOverGraphic;
	szSystemGameOverGraphic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Game over graphic") ), wxHORIZONTAL );
	
	bmpSystemGameOverGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 120 ), wxSUNKEN_BORDER );
	szSystemGameOverGraphic->Add( bmpSystemGameOverGraphic, 0, wxRIGHT|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 1 );
	
	btnSystemGameOverGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemGameOverGraphic->SetDefault(); 
	szSystemGameOverGraphic->Add( btnSystemGameOverGraphic, 0, wxLEFT|wxALIGN_BOTTOM, 1 );
	
	szTop->Add( szSystemGameOverGraphic, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szSystem->Add( szTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szSystemStartingParty;
	szSystemStartingParty = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Starting party") ), wxVERTICAL );
	
	wxStaticBoxSizer* szSystemStartingPartyActor1;
	szSystemStartingPartyActor1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor 1") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartingPartyActor1Choices;
	chSystemStartingPartyActor1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartingPartyActor1Choices, 0 );
	chSystemStartingPartyActor1->SetSelection( 0 );
	szSystemStartingPartyActor1->Add( chSystemStartingPartyActor1, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemStartingParty->Add( szSystemStartingPartyActor1, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemStartingPartyActor2;
	szSystemStartingPartyActor2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor 2") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartingPartyActor2Choices;
	chSystemStartingPartyActor2 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartingPartyActor2Choices, 0 );
	chSystemStartingPartyActor2->SetSelection( 0 );
	szSystemStartingPartyActor2->Add( chSystemStartingPartyActor2, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemStartingParty->Add( szSystemStartingPartyActor2, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemStartingPartyActor3;
	szSystemStartingPartyActor3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor 3") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartingPartyActor3Choices;
	chSystemStartingPartyActor3 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartingPartyActor3Choices, 0 );
	chSystemStartingPartyActor3->SetSelection( 0 );
	szSystemStartingPartyActor3->Add( chSystemStartingPartyActor3, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemStartingParty->Add( szSystemStartingPartyActor3, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemStartingPartyActor4;
	szSystemStartingPartyActor4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor 4") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartingPartyActor4Choices;
	chSystemStartingPartyActor4 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartingPartyActor4Choices, 0 );
	chSystemStartingPartyActor4->SetSelection( 0 );
	szSystemStartingPartyActor4->Add( chSystemStartingPartyActor4, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemStartingParty->Add( szSystemStartingPartyActor4, 1, wxEXPAND, 0 );
	
	szMiddle->Add( szSystemStartingParty, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSystemMusic;
	szSystemMusic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("System music") ), wxHORIZONTAL );
	
	wxGridSizer* szSystemMusic2;
	szSystemMusic2 = new wxGridSizer( 4, 2, 0, 2 );
	
	wxStaticBoxSizer* szSystemMusicTitle;
	szSystemMusicTitle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Title") ), wxHORIZONTAL );
	
	tcSystemMusicTitle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemMusicTitle->Add( tcSystemMusicTitle, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicTitle = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicTitle->SetDefault(); 
	szSystemMusicTitle->Add( btnSystemMusicTitle, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemMusic2->Add( szSystemMusicTitle, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemMusicSmallShip;
	szSystemMusicSmallShip = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Small ship") ), wxHORIZONTAL );
	
	tcSystemMusicSmallShip = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemMusicSmallShip->Add( tcSystemMusicSmallShip, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicSmallShip = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicSmallShip->SetDefault(); 
	szSystemMusicSmallShip->Add( btnSystemMusicSmallShip, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemMusic2->Add( szSystemMusicSmallShip, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemMusicBattle;
	szSystemMusicBattle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Battle") ), wxHORIZONTAL );
	
	tcSystemMusicBattle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemMusicBattle->Add( tcSystemMusicBattle, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicBattle = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicBattle->SetDefault(); 
	szSystemMusicBattle->Add( btnSystemMusicBattle, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemMusic2->Add( szSystemMusicBattle, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemMusicBigShop;
	szSystemMusicBigShop = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Big ship") ), wxHORIZONTAL );
	
	tcSystemMusicBigShip = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemMusicBigShop->Add( tcSystemMusicBigShip, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicBigShip = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicBigShip->SetDefault(); 
	szSystemMusicBigShop->Add( btnSystemMusicBigShip, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemMusic2->Add( szSystemMusicBigShop, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemMusicVictory;
	szSystemMusicVictory = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Victory") ), wxHORIZONTAL );
	
	tcSystemMusicVictory = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemMusicVictory->Add( tcSystemMusicVictory, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicVictory = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicVictory->SetDefault(); 
	szSystemMusicVictory->Add( btnSystemMusicVictory, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemMusic2->Add( szSystemMusicVictory, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemMusicAirshop;
	szSystemMusicAirshop = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Airship") ), wxHORIZONTAL );
	
	tcSystemMusicAirship = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemMusicAirshop->Add( tcSystemMusicAirship, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicAirship = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicAirship->SetDefault(); 
	szSystemMusicAirshop->Add( btnSystemMusicAirship, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemMusic2->Add( szSystemMusicAirshop, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemMusicInn;
	szSystemMusicInn = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Inn") ), wxHORIZONTAL );
	
	tcSystemMusicInn = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemMusicInn->Add( tcSystemMusicInn, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicInn = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicInn->SetDefault(); 
	szSystemMusicInn->Add( btnSystemMusicInn, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemMusic2->Add( szSystemMusicInn, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemMusicGameOver;
	szSystemMusicGameOver = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Game over") ), wxHORIZONTAL );
	
	tcSystemMusicGameOver = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemMusicGameOver->Add( tcSystemMusicGameOver, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemMusicGameOver = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemMusicGameOver->SetDefault(); 
	szSystemMusicGameOver->Add( btnSystemMusicGameOver, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemMusic2->Add( szSystemMusicGameOver, 1, wxEXPAND, 0 );
	
	szSystemMusic->Add( szSystemMusic2, 1, wxEXPAND, 0 );
	
	szMiddle->Add( szSystemMusic, 2, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSystemSound;
	szSystemSound = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("System sounds") ), wxHORIZONTAL );
	
	wxGridSizer* szSystemSound2;
	szSystemSound2 = new wxGridSizer( 4, 3, 0, 2 );
	
	wxStaticBoxSizer* szSystemSoundCursor;
	szSystemSoundCursor = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Cursor") ), wxHORIZONTAL );
	
	tcSystemSoundCursor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundCursor->Add( tcSystemSoundCursor, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundCursor = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundCursor->SetDefault(); 
	szSystemSoundCursor->Add( btnSystemSoundCursor, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundCursor, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundStartBattle;
	szSystemSoundStartBattle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Start battle") ), wxHORIZONTAL );
	
	tcSystemSoundStartBattle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundStartBattle->Add( tcSystemSoundStartBattle, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundStartBattle = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundStartBattle->SetDefault(); 
	szSystemSoundStartBattle->Add( btnSystemSoundStartBattle, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundStartBattle, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundActorDamage;
	szSystemSoundActorDamage = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor damage") ), wxHORIZONTAL );
	
	tcSystemSoundActorDamage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundActorDamage->Add( tcSystemSoundActorDamage, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundActorDamage = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundActorDamage->SetDefault(); 
	szSystemSoundActorDamage->Add( btnSystemSoundActorDamage, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundActorDamage, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundOK;
	szSystemSoundOK = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("OK") ), wxHORIZONTAL );
	
	tcSystemSoundOK = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundOK->Add( tcSystemSoundOK, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundOK = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundOK->SetDefault(); 
	szSystemSoundOK->Add( btnSystemSoundOK, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundOK, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundEscape;
	szSystemSoundEscape = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Escape") ), wxHORIZONTAL );
	
	tcSystemSoundEscape = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundEscape->Add( tcSystemSoundEscape, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundEscape = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundEscape->SetDefault(); 
	szSystemSoundEscape->Add( btnSystemSoundEscape, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundEscape, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundDodge;
	szSystemSoundDodge = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Dodge") ), wxHORIZONTAL );
	
	tcSystemSoundDodge = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundDodge->Add( tcSystemSoundDodge, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundDodge = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundDodge->SetDefault(); 
	szSystemSoundDodge->Add( btnSystemSoundDodge, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundDodge, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundCancel;
	szSystemSoundCancel = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Cancel") ), wxHORIZONTAL );
	
	tcSystemSoundCancel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundCancel->Add( tcSystemSoundCancel, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundCancel = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundCancel->SetDefault(); 
	szSystemSoundCancel->Add( btnSystemSoundCancel, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundCancel, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundEnemyAttack;
	szSystemSoundEnemyAttack = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy attack") ), wxHORIZONTAL );
	
	tcSystemSoundEnemyAttack = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundEnemyAttack->Add( tcSystemSoundEnemyAttack, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundEnemyAttack = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundEnemyAttack->SetDefault(); 
	szSystemSoundEnemyAttack->Add( btnSystemSoundEnemyAttack, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundEnemyAttack, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundEnemyDeath;
	szSystemSoundEnemyDeath = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy death") ), wxHORIZONTAL );
	
	tcSystemSoundEnemyDeath = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundEnemyDeath->Add( tcSystemSoundEnemyDeath, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundEnemyDeath = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundEnemyDeath->SetDefault(); 
	szSystemSoundEnemyDeath->Add( btnSystemSoundEnemyDeath, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundEnemyDeath, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundError;
	szSystemSoundError = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Error") ), wxHORIZONTAL );
	
	tcSystemSoundError = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundError->Add( tcSystemSoundError, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundError = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundError->SetDefault(); 
	szSystemSoundError->Add( btnSystemSoundError, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundError, 1, wxALL|wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundEnemyDamage;
	szSystemSoundEnemyDamage = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy damage") ), wxHORIZONTAL );
	
	tcSystemSoundEnemyDamage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundEnemyDamage->Add( tcSystemSoundEnemyDamage, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundEnemyDamage = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundEnemyDamage->SetDefault(); 
	szSystemSoundEnemyDamage->Add( btnSystemSoundEnemyDamage, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundEnemyDamage, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemSoundUseObject;
	szSystemSoundUseObject = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Use object") ), wxHORIZONTAL );
	
	tcSystemSoundUseObject = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSystemSoundUseObject->Add( tcSystemSoundUseObject, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSystemSoundUseObject = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemSoundUseObject->SetDefault(); 
	szSystemSoundUseObject->Add( btnSystemSoundUseObject, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemSound2->Add( szSystemSoundUseObject, 1, wxEXPAND, 0 );
	
	szSystemSound->Add( szSystemSound2, 1, wxEXPAND, 0 );
	
	szMiddle->Add( szSystemSound, 3, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szSystem->Add( szMiddle, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szSystemGraphic;
	szSystemGraphic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("System graphic") ), wxHORIZONTAL );
	
	bmpSystemGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 80 ), wxSUNKEN_BORDER );
	szSystemGraphic->Add( bmpSystemGraphic, 0, wxRIGHT|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 1 );
	
	btnSystemGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSystemGraphic->SetDefault(); 
	szSystemGraphic->Add( btnSystemGraphic, 0, wxLEFT|wxALIGN_BOTTOM, 1 );
	
	szBottom->Add( szSystemGraphic, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSystemTransitionType;
	szSystemTransitionType = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Transition type") ), wxVERTICAL );
	
	wxStaticBoxSizer* szSystemTransitionTypeEraseScreen;
	szSystemTransitionTypeEraseScreen = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Erase screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemTransitionTypeEraseScreenChoices;
	chSystemTransitionTypeEraseScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemTransitionTypeEraseScreenChoices, 0 );
	chSystemTransitionTypeEraseScreen->SetSelection( 0 );
	szSystemTransitionTypeEraseScreen->Add( chSystemTransitionTypeEraseScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemTransitionType->Add( szSystemTransitionTypeEraseScreen, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemTransitionTypeShowScreen;
	szSystemTransitionTypeShowScreen = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Show screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemTransitionTypeShowScreenChoices;
	chSystemTransitionTypeShowScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemTransitionTypeShowScreenChoices, 0 );
	chSystemTransitionTypeShowScreen->SetSelection( 0 );
	szSystemTransitionTypeShowScreen->Add( chSystemTransitionTypeShowScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemTransitionType->Add( szSystemTransitionTypeShowScreen, 1, wxEXPAND, 0 );
	
	szBottom->Add( szSystemTransitionType, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSystemStartBattle;
	szSystemStartBattle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Start battle") ), wxVERTICAL );
	
	wxStaticBoxSizer* szSystemStartBattleEraseScreen;
	szSystemStartBattleEraseScreen = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Erase screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartBattleEraseScreenChoices;
	chSystemStartBattleEraseScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartBattleEraseScreenChoices, 0 );
	chSystemStartBattleEraseScreen->SetSelection( 0 );
	szSystemStartBattleEraseScreen->Add( chSystemStartBattleEraseScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemStartBattle->Add( szSystemStartBattleEraseScreen, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemStartBattleShowScreen;
	szSystemStartBattleShowScreen = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Show screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemStartBattleShowScreenChoices;
	chSystemStartBattleShowScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemStartBattleShowScreenChoices, 0 );
	chSystemStartBattleShowScreen->SetSelection( 0 );
	szSystemStartBattleShowScreen->Add( chSystemStartBattleShowScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemStartBattle->Add( szSystemStartBattleShowScreen, 1, wxEXPAND, 0 );
	
	szBottom->Add( szSystemStartBattle, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSystemEndBattle;
	szSystemEndBattle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("End battle") ), wxVERTICAL );
	
	wxStaticBoxSizer* szSystemEndBattleEraseScreen;
	szSystemEndBattleEraseScreen = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Erase screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemEndBattleEraseScreenChoices;
	chSystemEndBattleEraseScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemEndBattleEraseScreenChoices, 0 );
	chSystemEndBattleEraseScreen->SetSelection( 0 );
	szSystemEndBattleEraseScreen->Add( chSystemEndBattleEraseScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemEndBattle->Add( szSystemEndBattleEraseScreen, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSystemEndBattleShowScreen;
	szSystemEndBattleShowScreen = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Show screen") ), wxHORIZONTAL );
	
	wxArrayString chSystemEndBattleShowScreenChoices;
	chSystemEndBattleShowScreen = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemEndBattleShowScreenChoices, 0 );
	chSystemEndBattleShowScreen->SetSelection( 0 );
	szSystemEndBattleShowScreen->Add( chSystemEndBattleShowScreen, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSystemEndBattle->Add( szSystemEndBattleShowScreen, 1, wxEXPAND, 0 );
	
	szBottom->Add( szSystemEndBattle, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szSystem->Add( szBottom, 0, wxEXPAND, 0 );
	
	this->SetSizer( szSystem );
	this->Layout();
	szSystem->Fit( this );
}

pnSystem_Base::~pnSystem_Base()
{
}
