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
	wxBoxSizer* szText;
	szText = new wxBoxSizer( wxHORIZONTAL );
	
	nbText = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	pnTextBattleMessages1And2 = new wxPanel( nbText, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szTextBattleMessages1and2;
	szTextBattleMessages1and2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szszTextBattleMessages1;
	szszTextBattleMessages1 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Battle messages 1") ), wxVERTICAL );
	
	wxStaticBoxSizer* szTextBattleStartBattle;
	szTextBattleStartBattle = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Start battle") ), wxHORIZONTAL );
	
	stTextBattleStartBattle = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleStartBattle->Wrap( -1 );
	szTextBattleStartBattle->Add( stTextBattleStartBattle, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleStartBattle = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleStartBattle->Add( tcTextBattleStartBattle, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szszTextBattleMessages1->Add( szTextBattleStartBattle, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattlePriorityAttack;
	szTextBattlePriorityAttack = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Priority attack") ), wxHORIZONTAL );
	
	tcTextBattlePriorityAttack = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattlePriorityAttack->Add( tcTextBattlePriorityAttack, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szszTextBattleMessages1->Add( szTextBattlePriorityAttack, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleSuccessfulEscape;
	szTextBattleSuccessfulEscape = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Successful escape") ), wxHORIZONTAL );
	
	tcTextBattleSuccessfulEscape = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleSuccessfulEscape->Add( tcTextBattleSuccessfulEscape, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szszTextBattleMessages1->Add( szTextBattleSuccessfulEscape, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleFailedEscape;
	szTextBattleFailedEscape = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Failed escape") ), wxHORIZONTAL );
	
	tcTextBattleFailedEscape = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleFailedEscape->Add( tcTextBattleFailedEscape, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szszTextBattleMessages1->Add( szTextBattleFailedEscape, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleVictory;
	szTextBattleVictory = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Victory") ), wxHORIZONTAL );
	
	tcTextBattleVictory = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleVictory->Add( tcTextBattleVictory, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szszTextBattleMessages1->Add( szTextBattleVictory, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleDeadGroup;
	szTextBattleDeadGroup = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Dead group") ), wxHORIZONTAL );
	
	tcTextBattleDeadGroup = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleDeadGroup->Add( tcTextBattleDeadGroup, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szszTextBattleMessages1->Add( szTextBattleDeadGroup, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleExperience;
	szTextBattleExperience = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Experience") ), wxHORIZONTAL );
	
	stTextBattleExperience = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleExperience->Wrap( -1 );
	szTextBattleExperience->Add( stTextBattleExperience, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	tcTextBattleExperience = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleExperience->Add( tcTextBattleExperience, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szszTextBattleMessages1->Add( szTextBattleExperience, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleObtainedMoney;
	szTextBattleObtainedMoney = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Obtained money") ), wxHORIZONTAL );
	
	tcTextBattleObtainedMoney1 = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleObtainedMoney->Add( tcTextBattleObtainedMoney1, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTextBattleObtainedMoney = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(X) (Currency)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleObtainedMoney->Wrap( -1 );
	szTextBattleObtainedMoney->Add( stTextBattleObtainedMoney, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	TextBattleObtainedMoney2 = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleObtainedMoney->Add( TextBattleObtainedMoney2, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szszTextBattleMessages1->Add( szTextBattleObtainedMoney, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleObtainedObject;
	szTextBattleObtainedObject = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Obtained object") ), wxHORIZONTAL );
	
	stTextBattleObtainedObject = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Item name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleObtainedObject->Wrap( -1 );
	szTextBattleObtainedObject->Add( stTextBattleObtainedObject, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleObtainedObject = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleObtainedObject->Add( tcTextBattleObtainedObject, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szszTextBattleMessages1->Add( szTextBattleObtainedObject, 1, wxEXPAND, 0 );
	
	szTextBattleMessages1and2->Add( szszTextBattleMessages1, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTextBattleMessages2;
	szTextBattleMessages2 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Battle messages 2") ), wxVERTICAL );
	
	wxStaticBoxSizer* szTextBattleNormalAttack;
	szTextBattleNormalAttack = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Normal attack") ), wxHORIZONTAL );
	
	stTextBattleNormalAttack = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(User name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleNormalAttack->Wrap( -1 );
	szTextBattleNormalAttack->Add( stTextBattleNormalAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleNormalAttack = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleNormalAttack->Add( tcTextBattleNormalAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages2->Add( szTextBattleNormalAttack, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleActorDeath;
	szTextBattleActorDeath = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Actor death") ), wxHORIZONTAL );
	
	tcTextBattleActorDeath = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleActorDeath->Add( tcTextBattleActorDeath, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextBattleMessages2->Add( szTextBattleActorDeath, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleEnemyDeath;
	szTextBattleEnemyDeath = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Enemy death") ), wxHORIZONTAL );
	
	tcTextBattleEnemyDeath = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleEnemyDeath->Add( tcTextBattleEnemyDeath, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextBattleMessages2->Add( szTextBattleEnemyDeath, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleDefense;
	szTextBattleDefense = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Defense") ), wxHORIZONTAL );
	
	stTextBattleDefense = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(User name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleDefense->Wrap( -1 );
	szTextBattleDefense->Add( stTextBattleDefense, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleDefense = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleDefense->Add( tcTextBattleDefense, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages2->Add( szTextBattleDefense, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleStateControl;
	szTextBattleStateControl = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("State control") ), wxHORIZONTAL );
	
	stTextBattleStateControl = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleStateControl->Wrap( -1 );
	szTextBattleStateControl->Add( stTextBattleStateControl, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleStateControl = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleStateControl->Add( tcTextBattleStateControl, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages2->Add( szTextBattleStateControl, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleStrengthGain;
	szTextBattleStrengthGain = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Strength gain") ), wxHORIZONTAL );
	
	stTextBattleStrengthGain = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleStrengthGain->Wrap( -1 );
	szTextBattleStrengthGain->Add( stTextBattleStrengthGain, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleStrengthGain = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleStrengthGain->Add( tcTextBattleStrengthGain, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages2->Add( szTextBattleStrengthGain, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleAutodestruction;
	szTextBattleAutodestruction = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Autodestruction") ), wxHORIZONTAL );
	
	stTextBattleAutodestruction = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleAutodestruction->Wrap( -1 );
	szTextBattleAutodestruction->Add( stTextBattleAutodestruction, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleAutodestruction = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleAutodestruction->Add( tcTextBattleAutodestruction, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages2->Add( szTextBattleAutodestruction, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleEnemyEscape;
	szTextBattleEnemyEscape = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Enemy escape") ), wxHORIZONTAL );
	
	stTextBattleEnemyEscape = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleEnemyEscape->Wrap( -1 );
	szTextBattleEnemyEscape->Add( stTextBattleEnemyEscape, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleEnemyEscape = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleEnemyEscape->Add( tcTextBattleEnemyEscape, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages2->Add( szTextBattleEnemyEscape, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleTransformation;
	szTextBattleTransformation = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages1And2, wxID_ANY, _("Transformation") ), wxHORIZONTAL );
	
	stTextBattleTransformation = new wxStaticText( pnTextBattleMessages1And2, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleTransformation->Wrap( -1 );
	szTextBattleTransformation->Add( stTextBattleTransformation, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleTransformation = new wxTextCtrl( pnTextBattleMessages1And2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleTransformation->Add( tcTextBattleTransformation, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages2->Add( szTextBattleTransformation, 1, wxEXPAND, 0 );
	
	szTextBattleMessages1and2->Add( szTextBattleMessages2, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	pnTextBattleMessages1And2->SetSizer( szTextBattleMessages1and2 );
	pnTextBattleMessages1And2->Layout();
	szTextBattleMessages1and2->Fit( pnTextBattleMessages1And2 );
	nbText->AddPage( pnTextBattleMessages1And2, _("Battle messages 1 && 2"), false );
	pnTextBattleMessages3And4 = new wxPanel( nbText, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szTextBattleMessages3and4;
	szTextBattleMessages3and4 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTextBattleMessages3;
	szTextBattleMessages3 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Battle messages 3") ), wxVERTICAL );
	
	wxStaticBoxSizer* szTextBattleActorAttack;
	szTextBattleActorAttack = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Actor attack") ), wxHORIZONTAL );
	
	stTextBattleActorAttack = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Enemy name) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleActorAttack->Wrap( -1 );
	szTextBattleActorAttack->Add( stTextBattleActorAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleActorAttack = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleActorAttack->Add( tcTextBattleActorAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages3->Add( szTextBattleActorAttack, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTestBattleFailedActorAttack;
	szTestBattleFailedActorAttack = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Failed actor attack") ), wxHORIZONTAL );
	
	stTextBattleFailedActorAttack = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleFailedActorAttack->Wrap( -1 );
	szTestBattleFailedActorAttack->Add( stTextBattleFailedActorAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleFailedActorAttack = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTestBattleFailedActorAttack->Add( tcTextBattleFailedActorAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages3->Add( szTestBattleFailedActorAttack, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleEnemyAttack;
	szTextBattleEnemyAttack = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Enemy attack") ), wxHORIZONTAL );
	
	stTextBattleEnemyAttack = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Actor name) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleEnemyAttack->Wrap( -1 );
	szTextBattleEnemyAttack->Add( stTextBattleEnemyAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleEnemyAttack = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleEnemyAttack->Add( tcTextBattleEnemyAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages3->Add( szTextBattleEnemyAttack, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleFailedEnemyAttack;
	szTextBattleFailedEnemyAttack = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Failed enemy attack") ), wxHORIZONTAL );
	
	stTextBattleFailedEnemyAttack = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Actor name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleFailedEnemyAttack->Wrap( -1 );
	szTextBattleFailedEnemyAttack->Add( stTextBattleFailedEnemyAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleFailedEnemyAttack = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleFailedEnemyAttack->Add( tcTextBattleFailedEnemyAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages3->Add( szTextBattleFailedEnemyAttack, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleFailedSkillA;
	szTextBattleFailedSkillA = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Failed skill A") ), wxHORIZONTAL );
	
	stTextBattleFailedSkillA = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleFailedSkillA->Wrap( -1 );
	szTextBattleFailedSkillA->Add( stTextBattleFailedSkillA, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleFailedSkillA = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleFailedSkillA->Add( tcTextBattleFailedSkillA, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages3->Add( szTextBattleFailedSkillA, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleFailedSkillB;
	szTextBattleFailedSkillB = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Failed skill B") ), wxHORIZONTAL );
	
	stTextBattleFailedSkillB = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleFailedSkillB->Wrap( -1 );
	szTextBattleFailedSkillB->Add( stTextBattleFailedSkillB, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleFailedSkillB = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleFailedSkillB->Add( tcTextBattleFailedSkillB, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages3->Add( szTextBattleFailedSkillB, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleFailedSkillC;
	szTextBattleFailedSkillC = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Failed skill C") ), wxHORIZONTAL );
	
	stTextBattleFailedSkillC = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleFailedSkillC->Wrap( -1 );
	szTextBattleFailedSkillC->Add( stTextBattleFailedSkillC, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleFailedSkillC = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleFailedSkillC->Add( tcTextBattleFailedSkillC, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages3->Add( szTextBattleFailedSkillC, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleEvadePhysicalAttack;
	szTextBattleEvadePhysicalAttack = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Evade physical attack") ), wxHORIZONTAL );
	
	stTextBattleEvadePhysicalAttack = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Affected name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleEvadePhysicalAttack->Wrap( -1 );
	szTextBattleEvadePhysicalAttack->Add( stTextBattleEvadePhysicalAttack, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleEvadePhysicalAttack = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleEvadePhysicalAttack->Add( tcTextBattleEvadePhysicalAttack, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages3->Add( szTextBattleEvadePhysicalAttack, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleUseItem;
	szTextBattleUseItem = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Use item") ), wxHORIZONTAL );
	
	stTextBattleUseItem = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Object name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleUseItem->Wrap( -1 );
	szTextBattleUseItem->Add( stTextBattleUseItem, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleUseItem = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleUseItem->Add( tcTextBattleUseItem, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages3->Add( szTextBattleUseItem, 1, wxEXPAND, 0 );
	
	szTextBattleMessages3and4->Add( szTextBattleMessages3, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTextBattleMessages4;
	szTextBattleMessages4 = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Battle messages 4") ), wxVERTICAL );
	
	wxStaticBoxSizer* szTextBattleRecoverHP;
	szTextBattleRecoverHP = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Recover HP") ), wxHORIZONTAL );
	
	stTextBattleRecoverHP = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (HP cost) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleRecoverHP->Wrap( -1 );
	szTextBattleRecoverHP->Add( stTextBattleRecoverHP, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleRecoverHP = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleRecoverHP->Add( tcTextBattleRecoverHP, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages4->Add( szTextBattleRecoverHP, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleParameterUp;
	szTextBattleParameterUp = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Parameter up") ), wxHORIZONTAL );
	
	stTextBattleParameterUp = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Parameter cost) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleParameterUp->Wrap( -1 );
	szTextBattleParameterUp->Add( stTextBattleParameterUp, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleParameterUp = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleParameterUp->Add( tcTextBattleParameterUp, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages4->Add( szTextBattleParameterUp, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleParameterDown;
	szTextBattleParameterDown = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Parameter down") ), wxHORIZONTAL );
	
	stTextBattleParameterDown = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Parameter cost) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleParameterDown->Wrap( -1 );
	szTextBattleParameterDown->Add( stTextBattleParameterDown, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleParameterDown = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleParameterDown->Add( tcTextBattleParameterDown, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages4->Add( szTextBattleParameterDown, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleParameterAbsorptionAllied;
	szTextBattleParameterAbsorptionAllied = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Parameter absorption (allied)") ), wxHORIZONTAL );
	
	stTextBattleParameterAbsorptionAllied = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Parameter cost) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleParameterAbsorptionAllied->Wrap( -1 );
	szTextBattleParameterAbsorptionAllied->Add( stTextBattleParameterAbsorptionAllied, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleParameterAbsorptionAllied = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleParameterAbsorptionAllied->Add( tcTextBattleParameterAbsorptionAllied, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages4->Add( szTextBattleParameterAbsorptionAllied, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleParameterAbsorptionEnemy;
	szTextBattleParameterAbsorptionEnemy = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Parameter absorption (enemy)") ), wxHORIZONTAL );
	
	stTextBattleParameterAbsorptionEnemy = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Parameter cost) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleParameterAbsorptionEnemy->Wrap( -1 );
	szTextBattleParameterAbsorptionEnemy->Add( stTextBattleParameterAbsorptionEnemy, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleParameterAbsorptionEnemy = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleParameterAbsorptionEnemy->Add( tcTextBattleParameterAbsorptionEnemy, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages4->Add( szTextBattleParameterAbsorptionEnemy, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleDefenseUp;
	szTextBattleDefenseUp = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Defense up") ), wxHORIZONTAL );
	
	stTextBattleDefenseUp = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Defense)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleDefenseUp->Wrap( -1 );
	szTextBattleDefenseUp->Add( stTextBattleDefenseUp, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleDefenseUp = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleDefenseUp->Add( tcTextBattleDefenseUp, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages4->Add( szTextBattleDefenseUp, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleDefenseDown;
	szTextBattleDefenseDown = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Defense down") ), wxHORIZONTAL );
	
	stTextBattleDefenseDown = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(User name) (Defense)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleDefenseDown->Wrap( -1 );
	szTextBattleDefenseDown->Add( stTextBattleDefenseDown, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleDefenseDown = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleDefenseDown->Add( tcTextBattleDefenseDown, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages4->Add( szTextBattleDefenseDown, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleLevelUp;
	szTextBattleLevelUp = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Level up") ), wxHORIZONTAL );
	
	stTextBattleLevelUp = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Actor name) (Level) (X)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleLevelUp->Wrap( -1 );
	szTextBattleLevelUp->Add( stTextBattleLevelUp, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleLevelUp = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleLevelUp->Add( tcTextBattleLevelUp, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages4->Add( szTextBattleLevelUp, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextBattleLearnSkill;
	szTextBattleLearnSkill = new wxStaticBoxSizer( new wxStaticBox( pnTextBattleMessages3And4, wxID_ANY, _("Learn skill") ), wxHORIZONTAL );
	
	stTextBattleLearnSkill = new wxStaticText( pnTextBattleMessages3And4, wxID_ANY, _("(Skill name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stTextBattleLearnSkill->Wrap( -1 );
	szTextBattleLearnSkill->Add( stTextBattleLearnSkill, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcTextBattleLearnSkill = new wxTextCtrl( pnTextBattleMessages3And4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextBattleLearnSkill->Add( tcTextBattleLearnSkill, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTextBattleMessages4->Add( szTextBattleLearnSkill, 1, wxEXPAND, 0 );
	
	szTextBattleMessages3and4->Add( szTextBattleMessages4, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	pnTextBattleMessages3And4->SetSizer( szTextBattleMessages3and4 );
	pnTextBattleMessages3And4->Layout();
	szTextBattleMessages3and4->Fit( pnTextBattleMessages3And4 );
	nbText->AddPage( pnTextBattleMessages3And4, _("Battle messages 3 && 4"), false );
	pnTextCommerceMessages = new wxPanel( nbText, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szTextCommerceMessages;
	szTextCommerceMessages = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTextCommerceMessagesA;
	szTextCommerceMessagesA = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Commerce messages A") ), wxVERTICAL );
	
	wxStaticBoxSizer* szTextCommerceMessagesBuySelection;
	szTextCommerceMessagesBuySelection = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesABuySelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesBuySelection->Add( tcTextCommerceMessagesABuySelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesA->Add( szTextCommerceMessagesBuySelection, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextCommerceMessagesABuySelectionSecondTimeAndLater;
	szTextCommerceMessagesABuySelectionSecondTimeAndLater = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy selection (second time and later)") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesABuySelectionSecondTimeAndLater = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesABuySelectionSecondTimeAndLater->Add( tcTextCommerceMessagesABuySelectionSecondTimeAndLater, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesA->Add( szTextCommerceMessagesABuySelectionSecondTimeAndLater, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szTextCommerceMessagesABuySellExit;
	szTextCommerceMessagesABuySellExit = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szTextCommerceMessagesABuy;
	szTextCommerceMessagesABuy = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesABuy = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesABuy->Add( tcTextCommerceMessagesABuy, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesABuySellExit->Add( szTextCommerceMessagesABuy, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTextCommerceMessagesASell;
	szTextCommerceMessagesASell = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Sell") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesASell = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesASell->Add( tcTextCommerceMessagesASell, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesABuySellExit->Add( szTextCommerceMessagesASell, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTextCommerceMessagesAExit;
	szTextCommerceMessagesAExit = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Exit") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesAExit = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesAExit->Add( tcTextCommerceMessagesAExit, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesABuySellExit->Add( szTextCommerceMessagesAExit, 1, wxLEFT|wxEXPAND, 1 );
	
	szTextCommerceMessagesA->Add( szTextCommerceMessagesABuySellExit, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextCommerceMessagesAItemToBuySelection;
	szTextCommerceMessagesAItemToBuySelection = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to buy selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesAItemToBuySelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesAItemToBuySelection->Add( tcTextCommerceMessagesAItemToBuySelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesA->Add( szTextCommerceMessagesAItemToBuySelection, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextCommerceMessagesAItemToBuyNumberSelection;
	szTextCommerceMessagesAItemToBuyNumberSelection = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to buy number selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesAItemToBuyNumberSelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesAItemToBuyNumberSelection->Add( tcTextCommerceMessagesAItemToBuyNumberSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesA->Add( szTextCommerceMessagesAItemToBuyNumberSelection, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextCommerceMessagesABuyCompleted;
	szTextCommerceMessagesABuyCompleted = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Buy completed") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesABuyCompleted = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesABuyCompleted->Add( tcTextCommerceMessagesABuyCompleted, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesA->Add( szTextCommerceMessagesABuyCompleted, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextCommerceMessagesAItemToSellSelection;
	szTextCommerceMessagesAItemToSellSelection = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to sell selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesAItemToSellSelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesAItemToSellSelection->Add( tcTextCommerceMessagesAItemToSellSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesA->Add( szTextCommerceMessagesAItemToSellSelection, 1, wxALL|wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextCommerceMessagesAItemToSellNumberSelection;
	szTextCommerceMessagesAItemToSellNumberSelection = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Item to sell number selection") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesAItemToSellNumberSelection = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesAItemToSellNumberSelection->Add( tcTextCommerceMessagesAItemToSellNumberSelection, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesA->Add( szTextCommerceMessagesAItemToSellNumberSelection, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szTextCommerceMessagesASellCompleted;
	szTextCommerceMessagesASellCompleted = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Sell completed") ), wxHORIZONTAL );
	
	tcTextCommerceMessagesASellCompleted = new wxTextCtrl( pnTextCommerceMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTextCommerceMessagesASellCompleted->Add( tcTextCommerceMessagesASellCompleted, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTextCommerceMessagesA->Add( szTextCommerceMessagesASellCompleted, 1, wxEXPAND, 0 );
	
	szTextCommerceMessages->Add( szTextCommerceMessagesA, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer345;
	sbSizer345 = new wxStaticBoxSizer( new wxStaticBox( pnTextCommerceMessages, wxID_ANY, _("Commerce messages B") ), wxVERTICAL );
	
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
	
	szTextCommerceMessages->Add( sbSizer345, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	pnTextCommerceMessages->SetSizer( szTextCommerceMessages );
	pnTextCommerceMessages->Layout();
	szTextCommerceMessages->Fit( pnTextCommerceMessages );
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
	nbText->AddPage( pnTextCommerceAndInn, _("Commerce && inn"), false );
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
	
	szText->Add( nbText, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	this->SetSizer( szText );
	this->Layout();
	szText->Fit( this );
}

pnText_Base::~pnText_Base()
{
}
