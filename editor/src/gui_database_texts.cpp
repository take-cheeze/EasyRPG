///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_texts.h"

///////////////////////////////////////////////////////////////////////////

pnText_Base::pnText_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* bSizer434;
	bSizer434 = new wxBoxSizer( wxHORIZONTAL );
	
	nbText = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	pnTextBattleMessages1And2 = new wxPanel( nbText, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer435;
	bSizer435 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer293;
	sbSizer293 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Battle messages 1") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer294;
	sbSizer294 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Start battle") ), wxHORIZONTAL );
	
	stTextBattleStartBattle = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleStartBattle->Wrap( -1 );
	sbSizer294->Add( stTextBattleStartBattle, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleStartBattle = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer294->Add( tcTextBattleStartBattle, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer293->Add( sbSizer294, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer295;
	sbSizer295 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Priority attack") ), wxHORIZONTAL );
	
	tcTextBattlePriorityAttack = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer295->Add( tcTextBattlePriorityAttack, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer293->Add( sbSizer295, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer296;
	sbSizer296 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Successful escape") ), wxHORIZONTAL );
	
	tcTextBattleSuccessfulEscape = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer296->Add( tcTextBattleSuccessfulEscape, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer293->Add( sbSizer296, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer297;
	sbSizer297 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Failed escape") ), wxHORIZONTAL );
	
	tcTextBattleFailedEscape = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer297->Add( tcTextBattleFailedEscape, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer293->Add( sbSizer297, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer298;
	sbSizer298 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Victory") ), wxHORIZONTAL );
	
	tcTextBattleVictory = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer298->Add( tcTextBattleVictory, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer293->Add( sbSizer298, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer299;
	sbSizer299 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Dead group") ), wxHORIZONTAL );
	
	tcTextBattleDeadGroup = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer299->Add( tcTextBattleDeadGroup, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer293->Add( sbSizer299, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer300;
	sbSizer300 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Experience") ), wxHORIZONTAL );
	
	stTextBattleExperience = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleExperience->Wrap( -1 );
	sbSizer300->Add( stTextBattleExperience, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	tcTextBattleExperience = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer300->Add( tcTextBattleExperience, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer293->Add( sbSizer300, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer301;
	sbSizer301 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Obtained money") ), wxHORIZONTAL );
	
	tcTextBattleObtainedMoney1 = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer301->Add( tcTextBattleObtainedMoney1, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTextBattleObtainedMoney = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(X) (Currency)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleObtainedMoney->Wrap( -1 );
	sbSizer301->Add( stTextBattleObtainedMoney, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	TextBattleObtainedMoney2 = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer301->Add( TextBattleObtainedMoney2, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer293->Add( sbSizer301, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer302;
	sbSizer302 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Obtained object") ), wxHORIZONTAL );
	
	stTextBattleObtainedObject = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Item name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleObtainedObject->Wrap( -1 );
	sbSizer302->Add( stTextBattleObtainedObject, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleObtainedObject = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer302->Add( tcTextBattleObtainedObject, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer293->Add( sbSizer302, 1, wxEXPAND, 0 );
	
	bSizer435->Add( sbSizer293, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer303;
	sbSizer303 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Battle messages 2") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer304;
	sbSizer304 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Normal attack") ), wxHORIZONTAL );
	
	stTextBattleNormalAttack = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(User name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleNormalAttack->Wrap( -1 );
	sbSizer304->Add( stTextBattleNormalAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleNormalAttack = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer304->Add( tcTextBattleNormalAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer303->Add( sbSizer304, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer305;
	sbSizer305 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Actor death") ), wxHORIZONTAL );
	
	tcTextBattleActorDeath = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer305->Add( tcTextBattleActorDeath, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer303->Add( sbSizer305, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer306;
	sbSizer306 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Enemy death") ), wxHORIZONTAL );
	
	tcTextBattleEnemyDeath = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer306->Add( tcTextBattleEnemyDeath, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer303->Add( sbSizer306, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer307;
	sbSizer307 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Defense") ), wxHORIZONTAL );
	
	stTextBattleDefense = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(User name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleDefense->Wrap( -1 );
	sbSizer307->Add( stTextBattleDefense, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleDefense = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer307->Add( tcTextBattleDefense, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer303->Add( sbSizer307, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer308;
	sbSizer308 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("State control") ), wxHORIZONTAL );
	
	stTextBattleStateControl = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleStateControl->Wrap( -1 );
	sbSizer308->Add( stTextBattleStateControl, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleStateControl = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer308->Add( tcTextBattleStateControl, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer303->Add( sbSizer308, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer309;
	sbSizer309 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Strength gain") ), wxHORIZONTAL );
	
	stTextBattleStrengthGain = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleStrengthGain->Wrap( -1 );
	sbSizer309->Add( stTextBattleStrengthGain, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleStrengthGain = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer309->Add( tcTextBattleStrengthGain, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer303->Add( sbSizer309, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer310;
	sbSizer310 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Autodestruction") ), wxHORIZONTAL );
	
	stTextBattleAutodestruction = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleAutodestruction->Wrap( -1 );
	sbSizer310->Add( stTextBattleAutodestruction, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleAutodestruction = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer310->Add( tcTextBattleAutodestruction, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer303->Add( sbSizer310, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer311;
	sbSizer311 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Enemy escape") ), wxHORIZONTAL );
	
	stTextBattleEnemyEscape = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleEnemyEscape->Wrap( -1 );
	sbSizer311->Add( stTextBattleEnemyEscape, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleEnemyEscape = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer311->Add( tcTextBattleEnemyEscape, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer303->Add( sbSizer311, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer312;
	sbSizer312 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Transformation") ), wxHORIZONTAL );
	
	stTextBattleTransformation = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleTransformation->Wrap( -1 );
	sbSizer312->Add( stTextBattleTransformation, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleTransformation = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer312->Add( tcTextBattleTransformation, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer303->Add( sbSizer312, 1, wxEXPAND, 0 );
	
	bSizer435->Add( sbSizer303, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	pnTextBattleMessages1And2->SetSizer( bSizer435 );
	pnTextBattleMessages1And2->Layout();
	bSizer435->Fit( pnTextBattleMessages1And2 );
	nbText->AddPage( pnTextBattleMessages1And2, _("Battle messages 1 && 2"), true );
	pnTextBattleMessages3And4 = new wxPanel( nbText, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer436;
	bSizer436 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer313;
	sbSizer313 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Battle messages 3") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer314;
	sbSizer314 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Actor attack") ), wxHORIZONTAL );
	
	stTextBattleActorAttack = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Enemy name) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleActorAttack->Wrap( -1 );
	sbSizer314->Add( stTextBattleActorAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleActorAttack = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer314->Add( tcTextBattleActorAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer313->Add( sbSizer314, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer315;
	sbSizer315 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Failed actor attack") ), wxHORIZONTAL );
	
	stTextBattleFailedActorAttack = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleFailedActorAttack->Wrap( -1 );
	sbSizer315->Add( stTextBattleFailedActorAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleFailedActorAttack = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer315->Add( tcTextBattleFailedActorAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer313->Add( sbSizer315, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer316;
	sbSizer316 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Enemy attack") ), wxHORIZONTAL );
	
	stTextBattleEnemyAttack = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Actor name) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleEnemyAttack->Wrap( -1 );
	sbSizer316->Add( stTextBattleEnemyAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleEnemyAttack = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer316->Add( tcTextBattleEnemyAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer313->Add( sbSizer316, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer317;
	sbSizer317 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Failed enemy attack") ), wxHORIZONTAL );
	
	stTextBattleFailedEnemyAttack = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Actor name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleFailedEnemyAttack->Wrap( -1 );
	sbSizer317->Add( stTextBattleFailedEnemyAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleFailedEnemyAttack = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer317->Add( tcTextBattleFailedEnemyAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer313->Add( sbSizer317, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer318;
	sbSizer318 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Failed skill A") ), wxHORIZONTAL );
	
	stTextBattleFailedSkillA = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleFailedSkillA->Wrap( -1 );
	sbSizer318->Add( stTextBattleFailedSkillA, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleFailedSkillA = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer318->Add( tcTextBattleFailedSkillA, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer313->Add( sbSizer318, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer319;
	sbSizer319 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Failed skill B") ), wxHORIZONTAL );
	
	stTextBattleFailedSkillB = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleFailedSkillB->Wrap( -1 );
	sbSizer319->Add( stTextBattleFailedSkillB, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleFailedSkillB = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer319->Add( tcTextBattleFailedSkillB, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer313->Add( sbSizer319, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer320;
	sbSizer320 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Failed skill C") ), wxHORIZONTAL );
	
	stTextBattleFailedSkillC = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleFailedSkillC->Wrap( -1 );
	sbSizer320->Add( stTextBattleFailedSkillC, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleFailedSkillC = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer320->Add( tcTextBattleFailedSkillC, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer313->Add( sbSizer320, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer321;
	sbSizer321 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Evade physical attack") ), wxHORIZONTAL );
	
	stTextBattleEvadePsysicalAttack = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Affected name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleEvadePsysicalAttack->Wrap( -1 );
	sbSizer321->Add( stTextBattleEvadePsysicalAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleEvadePsysicalAttack = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer321->Add( tcTextBattleEvadePsysicalAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer313->Add( sbSizer321, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer322;
	sbSizer322 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Use item") ), wxHORIZONTAL );
	
	stTextBattleUseItem = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Object name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleUseItem->Wrap( -1 );
	sbSizer322->Add( stTextBattleUseItem, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleUseItem = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer322->Add( tcTextBattleUseItem, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer313->Add( sbSizer322, 1, wxEXPAND, 0 );
	
	bSizer436->Add( sbSizer313, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer323;
	sbSizer323 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Battle messages 4") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer324;
	sbSizer324 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Recover HP") ), wxHORIZONTAL );
	
	stTextBattleRecoverHP = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (HP cost) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleRecoverHP->Wrap( -1 );
	sbSizer324->Add( stTextBattleRecoverHP, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleRecoverHP = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer324->Add( tcTextBattleRecoverHP, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer323->Add( sbSizer324, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer325;
	sbSizer325 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Parameter up") ), wxHORIZONTAL );
	
	stTextBattleParameterUp = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Parameter cost) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleParameterUp->Wrap( -1 );
	sbSizer325->Add( stTextBattleParameterUp, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleParameterUp = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer325->Add( tcTextBattleParameterUp, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer323->Add( sbSizer325, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer326;
	sbSizer326 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Parameter down") ), wxHORIZONTAL );
	
	stTextBattleParameterDown = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Parameter cost) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleParameterDown->Wrap( -1 );
	sbSizer326->Add( stTextBattleParameterDown, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleParameterDown = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer326->Add( tcTextBattleParameterDown, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer323->Add( sbSizer326, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer327;
	sbSizer327 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Parameter absorption (allied)") ), wxHORIZONTAL );
	
	stTextBattleParameterAbsorptionAllied = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Parameter cost) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleParameterAbsorptionAllied->Wrap( -1 );
	sbSizer327->Add( stTextBattleParameterAbsorptionAllied, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleParameterAbsorptionAllied = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer327->Add( tcTextBattleParameterAbsorptionAllied, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer323->Add( sbSizer327, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer328;
	sbSizer328 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Parameter absorption (enemy)") ), wxHORIZONTAL );
	
	stTextBattleParameterAbsorptionEnemy = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Parameter cost) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleParameterAbsorptionEnemy->Wrap( -1 );
	sbSizer328->Add( stTextBattleParameterAbsorptionEnemy, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleParameterAbsorptionEnemy = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer328->Add( tcTextBattleParameterAbsorptionEnemy, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer323->Add( sbSizer328, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer329;
	sbSizer329 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Defense up") ), wxHORIZONTAL );
	
	stTextBattleDefenseUp = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Defense)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleDefenseUp->Wrap( -1 );
	sbSizer329->Add( stTextBattleDefenseUp, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleDefenseUp = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer329->Add( tcTextBattleDefenseUp, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer323->Add( sbSizer329, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer330;
	sbSizer330 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Defense down") ), wxHORIZONTAL );
	
	stTextBattleDefenseDown = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Defense)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleDefenseDown->Wrap( -1 );
	sbSizer330->Add( stTextBattleDefenseDown, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleDefenseDown = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer330->Add( tcTextBattleDefenseDown, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer323->Add( sbSizer330, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer331;
	sbSizer331 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Level up") ), wxHORIZONTAL );
	
	stTextBattleLevelUp = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Actor name) (Level) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleLevelUp->Wrap( -1 );
	sbSizer331->Add( stTextBattleLevelUp, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleLevelUp = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer331->Add( tcTextBattleLevelUp, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer323->Add( sbSizer331, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer332;
	sbSizer332 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Learn skill") ), wxHORIZONTAL );
	
	stTextBattleLearnSkill = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Skill name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleLearnSkill->Wrap( -1 );
	sbSizer332->Add( stTextBattleLearnSkill, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleLearnSkill = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer332->Add( tcTextBattleLearnSkill, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer323->Add( sbSizer332, 1, wxEXPAND, 0 );
	
	bSizer436->Add( sbSizer323, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	pnTextBattleMessages3And4->SetSizer( bSizer436 );
	pnTextBattleMessages3And4->Layout();
	bSizer436->Fit( pnTextBattleMessages3And4 );
	nbText->AddPage( pnTextBattleMessages3And4, _("Battle messages 3 && 4"), true );
	pnTextCommerceMessages = new wxPanel( nbText, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer437;
	bSizer437 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer333;
	sbSizer333 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Commerce messages type A") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer334;
	sbSizer334 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesABuySelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer334->Add( tcTextCommerceMessagesABuySelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer333->Add( sbSizer334, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer335;
	sbSizer335 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy selection (second time and later)") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesABuySelectionSecondTimeAndLater = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer335->Add( tcTextCommerceMessagesABuySelectionSecondTimeAndLater, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer333->Add( sbSizer335, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer438;
	bSizer438 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer336;
	sbSizer336 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesABuy = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer336->Add( tcTextCommerceMessagesABuy, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer438->Add( sbSizer336, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer337;
	sbSizer337 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Sell") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesASell = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer337->Add( tcTextCommerceMessagesASell, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer438->Add( sbSizer337, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer338;
	sbSizer338 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Exit") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesAExit = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer338->Add( tcTextCommerceMessagesAExit, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer438->Add( sbSizer338, 1, wxLEFT|wxEXPAND, 1 );
	
	sbSizer333->Add( bSizer438, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer339;
	sbSizer339 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to buy selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesAItemToBuySelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer339->Add( tcTextCommerceMessagesAItemToBuySelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer333->Add( sbSizer339, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer340;
	sbSizer340 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to buy number selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesAItemToBuyNumberSelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer340->Add( tcTextCommerceMessagesAItemToBuyNumberSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer333->Add( sbSizer340, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer341;
	sbSizer341 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy completed") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesABuyCompleted = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer341->Add( tcTextCommerceMessagesABuyCompleted, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer333->Add( sbSizer341, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer342;
	sbSizer342 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to sell selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesAItemToSellSelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer342->Add( tcTextCommerceMessagesAItemToSellSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer333->Add( sbSizer342, 1, wxALL|wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer343;
	sbSizer343 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to sell number selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesAItemToSellNumberSelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer343->Add( tcTextCommerceMessagesAItemToSellNumberSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer333->Add( sbSizer343, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer344;
	sbSizer344 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Sell completed") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesASellCompleted = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer344->Add( tcTextCommerceMessagesASellCompleted, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer333->Add( sbSizer344, 1, wxEXPAND, 0 );
	
	bSizer437->Add( sbSizer333, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer345;
	sbSizer345 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Commerce messages type B") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer346;
	sbSizer346 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBBuySelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer346->Add( tcTextCommerceMessagesBBuySelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer345->Add( sbSizer346, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer347;
	sbSizer347 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy selection (second time and later)") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBBuySelectionSecondTimeAndLater = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer347->Add( tcTextCommerceMessagesBBuySelectionSecondTimeAndLater, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer345->Add( sbSizer347, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer439;
	bSizer439 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer348;
	sbSizer348 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBBuy = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer348->Add( tcTextCommerceMessagesBBuy, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer439->Add( sbSizer348, 1, wxRIGHT|wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer349;
	sbSizer349 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Sell") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBSell = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer349->Add( tcTextCommerceMessagesBSell, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer439->Add( sbSizer349, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer350;
	sbSizer350 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Exit") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBExit = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer350->Add( tcTextCommerceMessagesBExit, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer439->Add( sbSizer350, 1, wxLEFT|wxEXPAND, 1 );
	
	sbSizer345->Add( bSizer439, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer351;
	sbSizer351 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to buy selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBItemToBuySelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer351->Add( tcTextCommerceMessagesBItemToBuySelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer345->Add( sbSizer351, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer352;
	sbSizer352 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to buy number selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBItemToBuyNumberSelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer352->Add( tcTextCommerceMessagesBItemToBuyNumberSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer345->Add( sbSizer352, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer353;
	sbSizer353 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy completed") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBBuyCompleted = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer353->Add( tcTextCommerceMessagesBBuyCompleted, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer345->Add( sbSizer353, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer354;
	sbSizer354 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to sell selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBItemToSellSelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer354->Add( tcTextCommerceMessagesBItemToSellSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer345->Add( sbSizer354, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer355;
	sbSizer355 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to sell number selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBItemToSellNumberSelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer355->Add( tcTextCommerceMessagesBItemToSellNumberSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer345->Add( sbSizer355, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer356;
	sbSizer356 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Sell completed") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesBSellCompleted = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer356->Add( tcTextCommerceMessagesBSellCompleted, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer345->Add( sbSizer356, 1, wxEXPAND, 0 );
	
	bSizer437->Add( sbSizer345, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	pnTextCommerceMessages->SetSizer( bSizer437 );
	pnTextCommerceMessages->Layout();
	bSizer437->Fit( pnTextCommerceMessages );
	nbText->AddPage( pnTextCommerceMessages, _("Commerce messages"), true );
	pnTextCommerceAndInn = new wxPanel( nbText, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer440;
	bSizer440 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer357;
	sbSizer357 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Commerce messages type C") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer358;
	sbSizer358 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Buy selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCBuySelection = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer358->Add( tcTextCommerceMessagesCBuySelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer357->Add( sbSizer358, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer359;
	sbSizer359 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Buy selection (second time and later)") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCBuySelectionSecondTimeAndLater = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer359->Add( tcTextCommerceMessagesCBuySelectionSecondTimeAndLater, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer357->Add( sbSizer359, 1, wxEXPAND, 1 );
	
	wxBoxSizer* bSizer441;
	bSizer441 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer360;
	sbSizer360 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Buy") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCBuy = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer360->Add( tcTextCommerceMessagesCBuy, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer441->Add( sbSizer360, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer361;
	sbSizer361 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Sell") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCSell = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer361->Add( tcTextCommerceMessagesCSell, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer441->Add( sbSizer361, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer362;
	sbSizer362 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Exit") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCExit = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer362->Add( tcTextCommerceMessagesCExit, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer441->Add( sbSizer362, 1, wxLEFT|wxEXPAND, 1 );
	
	sbSizer357->Add( bSizer441, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer363;
	sbSizer363 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Item to buy selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCItemToBuySelection = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer363->Add( tcTextCommerceMessagesCItemToBuySelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer357->Add( sbSizer363, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer364;
	sbSizer364 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Item to buy number selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCItemToBuyNumberSelection = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer364->Add( tcTextCommerceMessagesCItemToBuyNumberSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer357->Add( sbSizer364, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer365;
	sbSizer365 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Buy completed") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCBuyCompleted = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer365->Add( tcTextCommerceMessagesCBuyCompleted, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer357->Add( sbSizer365, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer366;
	sbSizer366 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Item to sell selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCItemToSellSelection = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer366->Add( tcTextCommerceMessagesCItemToSellSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer357->Add( sbSizer366, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer367;
	sbSizer367 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Item to sell number selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCItemToSellNumberSelection = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer367->Add( tcTextCommerceMessagesCItemToSellNumberSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer357->Add( sbSizer367, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer368;
	sbSizer368 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Sell completed") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesCSellCompleted = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer368->Add( tcTextCommerceMessagesCSellCompleted, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer357->Add( sbSizer368, 1, wxEXPAND, 0 );
	
	bSizer440->Add( sbSizer357, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer442;
	bSizer442 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer369;
	sbSizer369 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Inn messages type A") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer370;
	sbSizer370 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Selected inn") ), wxVERTICAL );
	
	wxBoxSizer* bSizer443;
	bSizer443 = new wxBoxSizer( wxHORIZONTAL );
	
	tcTextInnMessagesASelectedInn1 = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer443->Add( tcTextInnMessagesASelectedInn1, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTextInnMessagesASelectedInn = new wxStaticText( pnTextCommerceAndInn, wxID_ANY, _("(X) (Currency)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextInnMessagesASelectedInn->Wrap( -1 );
	bSizer443->Add( stTextInnMessagesASelectedInn, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextInnMessagesASelectedInn2 = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer443->Add( tcTextInnMessagesASelectedInn2, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer370->Add( bSizer443, 0, wxBOTTOM|wxEXPAND, 1 );
	
	tcTextInnMessagesASelectedInn3 = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer370->Add( tcTextInnMessagesASelectedInn3, 0, wxTOP|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer369->Add( sbSizer370, 3, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer444;
	bSizer444 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer371;
	sbSizer371 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Stay") ), wxHORIZONTAL );
	
	tcTextInnMessagesAStay = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer371->Add( tcTextInnMessagesAStay, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer444->Add( sbSizer371, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer372;
	sbSizer372 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Don't stay") ), wxHORIZONTAL );
	
	tcTextInnMessagesADontStay = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer372->Add( tcTextInnMessagesADontStay, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer444->Add( sbSizer372, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	
	bSizer444->Add( 0,  0, 1, wxLEFT|wxEXPAND, 1 );
	
	sbSizer369->Add( bSizer444, 2, wxEXPAND, 0 );
	
	bSizer442->Add( sbSizer369, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer373;
	sbSizer373 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Inn messages type B") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer374;
	sbSizer374 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Selected inn") ), wxVERTICAL );
	
	wxBoxSizer* bSizer445;
	bSizer445 = new wxBoxSizer( wxHORIZONTAL );
	
	tcTextInnMessagesBSelectedInn1 = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer445->Add( tcTextInnMessagesBSelectedInn1, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTextInnMessagesBSelectedInn = new wxStaticText( pnTextCommerceAndInn, wxID_ANY, _("(X) (Currency)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextInnMessagesBSelectedInn->Wrap( -1 );
	bSizer445->Add( stTextInnMessagesBSelectedInn, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextInnMessagesBSelectedInn2 = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer445->Add( tcTextInnMessagesBSelectedInn2, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer374->Add( bSizer445, 0, wxBOTTOM|wxEXPAND, 1 );
	
	tcTextInnMessagesBSelectedInn3 = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer374->Add( tcTextInnMessagesBSelectedInn3, 0, wxTOP|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer373->Add( sbSizer374, 3, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer446;
	bSizer446 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer375;
	sbSizer375 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Stay") ), wxHORIZONTAL );
	
	tcTextInnMessagesBStay = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer375->Add( tcTextInnMessagesBStay, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer446->Add( sbSizer375, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer376;
	sbSizer376 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Don't stay") ), wxHORIZONTAL );
	
	tcTextInnMessagesBDontStay = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer376->Add( tcTextInnMessagesBDontStay, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer446->Add( sbSizer376, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	
	bSizer446->Add( 0,  0, 1, wxLEFT|wxEXPAND, 1 );
	
	sbSizer373->Add( bSizer446, 2, wxEXPAND, 0 );
	
	bSizer442->Add( sbSizer373, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer377;
	sbSizer377 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Commerce vocabulary") ), wxVERTICAL );
	
	wxBoxSizer* bSizer447;
	bSizer447 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer378;
	sbSizer378 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Possessed items") ), wxHORIZONTAL );
	
	tcTextCommercePossessedItems = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer378->Add( tcTextCommercePossessedItems, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer447->Add( sbSizer378, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer379;
	sbSizer379 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Equipped items") ), wxHORIZONTAL );
	
	tcTextCommerceEquipedItems = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer379->Add( tcTextCommerceEquipedItems, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer447->Add( sbSizer379, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer380;
	sbSizer380 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceAndInn, wxID_ANY, _("Currency") ), wxHORIZONTAL );
	
	tcTextCommerceCurrency = new wxTextCtrl( pnTextCommerceAndInn, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer380->Add( tcTextCommerceCurrency, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer447->Add( sbSizer380, 1, wxLEFT|wxEXPAND, 1 );
	
	sbSizer377->Add( bSizer447, 1, wxEXPAND, 0 );
	
	
	sbSizer377->Add( 0,  0, 1, wxEXPAND, 0 );
	
	bSizer442->Add( sbSizer377, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer440->Add( bSizer442, 1, wxEXPAND, 0 );
	
	pnTextCommerceAndInn->SetSizer( bSizer440 );
	pnTextCommerceAndInn->Layout();
	bSizer440->Fit( pnTextCommerceAndInn );
	nbText->AddPage( pnTextCommerceAndInn, _("Commerce && inn"), true );
	pnTextParametersAndOther = new wxPanel( nbText, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer448;
	bSizer448 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer381;
	sbSizer381 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Armors, equipment, etc.") ), wxHORIZONTAL );
	
	wxGridSizer* gSizer10;
	gSizer10 = new wxGridSizer( 9, 2, 0, 2 );
	
	wxStaticBoxSizer* sbSizer382;
	sbSizer382 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Level") ), wxHORIZONTAL );
	
	tcTextLevel = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer382->Add( tcTextLevel, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer382, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer383;
	sbSizer383 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Level (shorter)") ), wxHORIZONTAL );
	
	tcTextLevelShorter = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer383->Add( tcTextLevelShorter, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer383, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer384;
	sbSizer384 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("HP") ), wxHORIZONTAL );
	
	tcTextHP = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer384->Add( tcTextHP, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer384, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer385;
	sbSizer385 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("HP (shorter)") ), wxHORIZONTAL );
	
	tcTextHPShorter = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer385->Add( tcTextHPShorter, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer385, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer386;
	sbSizer386 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("MP") ), wxHORIZONTAL );
	
	tcTextMP = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer386->Add( tcTextMP, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer386, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer387;
	sbSizer387 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("MP (shorter)") ), wxHORIZONTAL );
	
	tcTextMPShorter = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer387->Add( tcTextMPShorter, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer387, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer388;
	sbSizer388 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Normal") ), wxHORIZONTAL );
	
	tcTextNormal = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer388->Add( tcTextNormal, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer388, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer389;
	sbSizer389 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("EXP (shorter)") ), wxHORIZONTAL );
	
	tcTextEXPShorter = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer389->Add( tcTextEXPShorter, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer389, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer390;
	sbSizer390 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("MP cost") ), wxHORIZONTAL );
	
	tcTextMPCost = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer390->Add( tcTextMPCost, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer390, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer391;
	sbSizer391 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Weapons") ), wxHORIZONTAL );
	
	tcTextWeapons = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer391->Add( tcTextWeapons, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer391, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer392;
	sbSizer392 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Attack") ), wxHORIZONTAL );
	
	tcTextAttack = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer392->Add( tcTextAttack, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer392, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer393;
	sbSizer393 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Shield") ), wxHORIZONTAL );
	
	tcTextShield = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer393->Add( tcTextShield, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer393, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer394;
	sbSizer394 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Defense") ), wxHORIZONTAL );
	
	tcTextDefense = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer394->Add( tcTextDefense, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer394, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer395;
	sbSizer395 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Armor") ), wxHORIZONTAL );
	
	tcTextArmor = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer395->Add( tcTextArmor, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer395, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer396;
	sbSizer396 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Intelligence") ), wxHORIZONTAL );
	
	tcTextIntelligence = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer396->Add( tcTextIntelligence, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer396, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer397;
	sbSizer397 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Helmet") ), wxHORIZONTAL );
	
	tcTextHelmet = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer397->Add( tcTextHelmet, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer397, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer398;
	sbSizer398 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Agility") ), wxHORIZONTAL );
	
	tcTextAgility = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer398->Add( tcTextAgility, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer398, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer399;
	sbSizer399 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Other") ), wxHORIZONTAL );
	
	tcTextOther = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer399->Add( tcTextOther, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer10->Add( sbSizer399, 1, wxEXPAND, 0 );
	
	sbSizer381->Add( gSizer10, 1, wxEXPAND, 0 );
	
	bSizer448->Add( sbSizer381, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer449;
	bSizer449 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer400;
	sbSizer400 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Commands") ), wxHORIZONTAL );
	
	wxGridSizer* gSizer11;
	gSizer11 = new wxGridSizer( 4, 4, 0, 2 );
	
	wxStaticBoxSizer* sbSizer401;
	sbSizer401 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Fight") ), wxHORIZONTAL );
	
	tcTextCommandFight = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer401->Add( tcTextCommandFight, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer401, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer402;
	sbSizer402 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Attack") ), wxHORIZONTAL );
	
	tcTextCommandAttack = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer402->Add( tcTextCommandAttack, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer402, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer403;
	sbSizer403 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Equipment") ), wxHORIZONTAL );
	
	tcTextCommandEquipment = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer403->Add( tcTextCommandEquipment, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer403, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer404;
	sbSizer404 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("New game") ), wxHORIZONTAL );
	
	tcTextCommandNewGame = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer404->Add( tcTextCommandNewGame, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer404, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer405;
	sbSizer405 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Automatic") ), wxHORIZONTAL );
	
	tcTextCommandAutomatic = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer405->Add( tcTextCommandAutomatic, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer405, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer406;
	sbSizer406 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Defense") ), wxHORIZONTAL );
	
	tcTextCommandDefense = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer406->Add( tcTextCommandDefense, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer406, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer407;
	sbSizer407 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Save") ), wxHORIZONTAL );
	
	tcTextCommandSave = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer407->Add( tcTextCommandSave, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer407, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer408;
	sbSizer408 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Load") ), wxHORIZONTAL );
	
	tcTextCommandLoad = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer408->Add( tcTextCommandLoad, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer408, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer409;
	sbSizer409 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Escape") ), wxHORIZONTAL );
	
	tcTextCommandEscape = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer409->Add( tcTextCommandEscape, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer409, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer410;
	sbSizer410 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Objects") ), wxHORIZONTAL );
	
	tcTextCommandObjects = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer410->Add( tcTextCommandObjects, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer410, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer411;
	sbSizer411 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Exit") ), wxHORIZONTAL );
	
	tcTextCommandExit = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer411->Add( tcTextCommandExit, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer411, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer412;
	sbSizer412 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("End") ), wxHORIZONTAL );
	
	tcTextCommandEnd = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer412->Add( tcTextCommandEnd, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer412, 1, wxEXPAND, 0 );
	
	
	gSizer11->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer413;
	sbSizer413 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Skills") ), wxHORIZONTAL );
	
	tcTextCommandSkills = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer413->Add( tcTextCommandSkills, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	gSizer11->Add( sbSizer413, 1, wxEXPAND, 0 );
	
	
	gSizer11->Add( 0,  0, 1, wxEXPAND, 0 );
	
	
	gSizer11->Add( 0,  0, 1, wxEXPAND, 0 );
	
	sbSizer400->Add( gSizer11, 1, wxEXPAND, 0 );
	
	bSizer449->Add( sbSizer400, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer414;
	sbSizer414 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Save, load, exit") ), wxHORIZONTAL );
	
	wxBoxSizer* bSizer450;
	bSizer450 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer415;
	sbSizer415 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Save slot selection") ), wxHORIZONTAL );
	
	tcTextSaveSlotSelection = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer415->Add( tcTextSaveSlotSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer450->Add( sbSizer415, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer416;
	sbSizer416 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Load slot selection") ), wxHORIZONTAL );
	
	tcTextLoadSlotSelection = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer416->Add( tcTextLoadSlotSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer450->Add( sbSizer416, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer417;
	sbSizer417 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Confirm exit") ), wxHORIZONTAL );
	
	tcTextConfirmExit = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer417->Add( tcTextConfirmExit, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer450->Add( sbSizer417, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer451;
	bSizer451 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer418;
	sbSizer418 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("File") ), wxHORIZONTAL );
	
	tcTextFile = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer418->Add( tcTextFile, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer451->Add( sbSizer418, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer419;
	sbSizer419 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("OK") ), wxHORIZONTAL );
	
	tcTextOK = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer419->Add( tcTextOK, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer451->Add( sbSizer419, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer420;
	sbSizer420 = new wxStaticBoxSizer( new wxStaticBox( pnTextParametersAndOther, wxID_ANY, _("Cancel") ), wxHORIZONTAL );
	
	tcTextCancel = new wxTextCtrl( pnTextParametersAndOther, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer420->Add( tcTextCancel, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer451->Add( sbSizer420, 1, wxLEFT|wxEXPAND, 1 );
	
	bSizer450->Add( bSizer451, 1, wxEXPAND, 0 );
	
	sbSizer414->Add( bSizer450, 3, wxEXPAND, 0 );
	
	
	sbSizer414->Add( 0,  0, 1, wxEXPAND, 0 );
	
	bSizer449->Add( sbSizer414, 1, wxALL|wxEXPAND, 1 );
	
	bSizer448->Add( bSizer449, 2, wxEXPAND, 0 );
	
	pnTextParametersAndOther->SetSizer( bSizer448 );
	pnTextParametersAndOther->Layout();
	bSizer448->Fit( pnTextParametersAndOther );
	nbText->AddPage( pnTextParametersAndOther, _("Parameters && other"), true );
	
	bSizer434->Add( nbText, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	this->SetSizer( bSizer434 );
	this->Layout();
	bSizer434->Fit( this );
}

pnText_Base::~pnText_Base()
{
}
