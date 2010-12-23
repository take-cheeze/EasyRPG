///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_states.h"

///////////////////////////////////////////////////////////////////////////

pnState_Base::pnState_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* bSizer402;
	bSizer402 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer403;
	bSizer403 = new wxBoxSizer( wxVERTICAL );
	
	stState = new wxStaticText( this, wxID_ANY, _("States"), wxDefaultPosition, wxDefaultSize, 0 );
	stState->Wrap( -1 );
	stState->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	bSizer403->Add( stState, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listState = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	bSizer403->Add( listState, 1, wxALL|wxEXPAND, 1 );
	
	btnStateMaxNumber = new wxButton( this, wxID_ANY, _("Max Number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnStateMaxNumber->SetDefault(); 
	bSizer403->Add( btnStateMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	bSizer402->Add( bSizer403, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer404;
	bSizer404 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer405;
	bSizer405 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer251;
	sbSizer251 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcStateName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer251->Add( tcStateName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer405->Add( sbSizer251, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer252;
	sbSizer252 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Type") ), wxHORIZONTAL );
	
	wxArrayString chStateTypeChoices;
	chStateType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chStateTypeChoices, 0 );
	chStateType->SetSelection( 0 );
	sbSizer252->Add( chStateType, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer405->Add( sbSizer252, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer253;
	sbSizer253 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Color") ), wxHORIZONTAL );
	
	wxArrayString chStateColorChoices;
	chStateColor = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chStateColorChoices, 0 );
	chStateColor->SetSelection( 0 );
	sbSizer253->Add( chStateColor, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer405->Add( sbSizer253, 0, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer254;
	sbSizer254 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Priority") ), wxHORIZONTAL );
	
	spinStatePriority = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	sbSizer254->Add( spinStatePriority, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer405->Add( sbSizer254, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer255;
	sbSizer255 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Action range") ), wxHORIZONTAL );
	
	wxArrayString chStateActionRangeChoices;
	chStateActionRange = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chStateActionRangeChoices, 0 );
	chStateActionRange->SetSelection( 0 );
	sbSizer255->Add( chStateActionRange, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer405->Add( sbSizer255, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer404->Add( bSizer405, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer406;
	bSizer406 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer256;
	sbSizer256 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Effect Rate") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer45;
	fgSizer45 = new wxFlexGridSizer( 5, 3, 2, 2 );
	fgSizer45->AddGrowableCol( 1 );
	fgSizer45->SetFlexibleDirection( wxBOTH );
	fgSizer45->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stStateEffectRateA = new wxStaticText( this, wxID_ANY, _("A"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateA->Wrap( -1 );
	fgSizer45->Add( stStateEffectRateA, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateEffectRateA = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	fgSizer45->Add( spinStateEffectRateA, 0, wxEXPAND, 0 );
	
	stStateEffectRateAPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateAPercent->Wrap( -1 );
	fgSizer45->Add( stStateEffectRateAPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateEffectRateB = new wxStaticText( this, wxID_ANY, _("B"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateB->Wrap( -1 );
	fgSizer45->Add( stStateEffectRateB, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateEffectRateB = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	fgSizer45->Add( spinStateEffectRateB, 0, wxEXPAND, 0 );
	
	stStateEffectRateBPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateBPercent->Wrap( -1 );
	fgSizer45->Add( stStateEffectRateBPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateEffectRateC = new wxStaticText( this, wxID_ANY, _("C"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateC->Wrap( -1 );
	fgSizer45->Add( stStateEffectRateC, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateEffectRateC = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	fgSizer45->Add( spinStateEffectRateC, 0, wxEXPAND, 0 );
	
	stStateEffectRateCPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateCPercent->Wrap( -1 );
	fgSizer45->Add( stStateEffectRateCPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateEffectRateD = new wxStaticText( this, wxID_ANY, _("D"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateD->Wrap( -1 );
	fgSizer45->Add( stStateEffectRateD, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateEffectRateD = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	fgSizer45->Add( spinStateEffectRateD, 0, wxEXPAND, 0 );
	
	stStateEffectRateDPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateDPercent->Wrap( -1 );
	fgSizer45->Add( stStateEffectRateDPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateEffectRateE = new wxStaticText( this, wxID_ANY, _("E"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateE->Wrap( -1 );
	fgSizer45->Add( stStateEffectRateE, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateEffectRateE = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	fgSizer45->Add( spinStateEffectRateE, 0, wxEXPAND, 0 );
	
	stStateEffectRateEPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateEPercent->Wrap( -1 );
	fgSizer45->Add( stStateEffectRateEPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer256->Add( fgSizer45, 1, wxEXPAND, 0 );
	
	bSizer406->Add( sbSizer256, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer257;
	sbSizer257 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Heal method") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer258;
	sbSizer258 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Natural healing") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer46;
	fgSizer46 = new wxFlexGridSizer( 2, 3, 2, 2 );
	fgSizer46->SetFlexibleDirection( wxBOTH );
	fgSizer46->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stStateNaturalHealingAfter = new wxStaticText( this, wxID_ANY, _("After"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateNaturalHealingAfter->Wrap( -1 );
	fgSizer46->Add( stStateNaturalHealingAfter, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateNaturalHealingTurn = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	fgSizer46->Add( spinStateNaturalHealingTurn, 0, 0, 0 );
	
	stStateNaturalHealingTurn = new wxStaticText( this, wxID_ANY, _("turn,"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateNaturalHealingTurn->Wrap( -1 );
	fgSizer46->Add( stStateNaturalHealingTurn, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	fgSizer46->Add( 0,  0, 1, wxEXPAND, 0 );
	
	spinStateNaturalHealingHealChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	fgSizer46->Add( spinStateNaturalHealingHealChance, 0, 0, 0 );
	
	stStateNaturalHealingHealChance = new wxStaticText( this, wxID_ANY, _("% heal chance"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateNaturalHealingHealChance->Wrap( -1 );
	fgSizer46->Add( stStateNaturalHealingHealChance, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer258->Add( fgSizer46, 1, wxEXPAND, 0 );
	
	sbSizer257->Add( sbSizer258, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer259;
	sbSizer259 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("After hit healing") ), wxVERTICAL );
	
	stStateAfterHitHealingPhysicalAttack = new wxStaticText( this, wxID_ANY, _("Physical attack"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateAfterHitHealingPhysicalAttack->Wrap( -1 );
	sbSizer259->Add( stStateAfterHitHealingPhysicalAttack, 0, wxBOTTOM, 1 );
	
	wxBoxSizer* bSizer407;
	bSizer407 = new wxBoxSizer( wxHORIZONTAL );
	
	spinStateAfterHitHealingHealChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	bSizer407->Add( spinStateAfterHitHealingHealChance, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateAfterHitHealingHealChance = new wxStaticText( this, wxID_ANY, _("% heal chance"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateAfterHitHealingHealChance->Wrap( -1 );
	bSizer407->Add( stStateAfterHitHealingHealChance, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer259->Add( bSizer407, 1, wxEXPAND, 0 );
	
	sbSizer257->Add( sbSizer259, 1, wxEXPAND, 0 );
	
	bSizer406->Add( sbSizer257, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer408;
	bSizer408 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer409;
	bSizer409 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer260;
	sbSizer260 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Decrease capacities") ), wxHORIZONTAL );
	
	wxGridSizer* gSizer9;
	gSizer9 = new wxGridSizer( 2, 2, 2, 2 );
	
	chbStateDecreaseAttack = new wxCheckBox( this, wxID_ANY, _("Attack"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateDecreaseAttack->SetValue(true); 
	gSizer9->Add( chbStateDecreaseAttack, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbStateDecreaseIntelligence = new wxCheckBox( this, wxID_ANY, _("Intelligence"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateDecreaseIntelligence->SetValue(true); 
	gSizer9->Add( chbStateDecreaseIntelligence, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbStateDecreaseDefense = new wxCheckBox( this, wxID_ANY, _("Defense"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateDecreaseDefense->SetValue(true); 
	gSizer9->Add( chbStateDecreaseDefense, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbStateDecreaseAgility = new wxCheckBox( this, wxID_ANY, _("Agility"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateDecreaseAgility->SetValue(true); 
	gSizer9->Add( chbStateDecreaseAgility, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer260->Add( gSizer9, 1, wxEXPAND, 0 );
	
	bSizer409->Add( sbSizer260, 2, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer261;
	sbSizer261 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Attack chance") ), wxHORIZONTAL );
	
	spinStateAttackChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	sbSizer261->Add( spinStateAttackChance, 1, wxRIGHT, 1 );
	
	stStateAttackChance = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateAttackChance->Wrap( -1 );
	sbSizer261->Add( stStateAttackChance, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer409->Add( sbSizer261, 1, wxLEFT|wxRIGHT, 1 );
	
	bSizer408->Add( bSizer409, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer262;
	sbSizer262 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Skill exceptions") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer47;
	fgSizer47 = new wxFlexGridSizer( 2, 3, 2, 2 );
	fgSizer47->AddGrowableRow( 0 );
	fgSizer47->AddGrowableRow( 1 );
	fgSizer47->SetFlexibleDirection( wxBOTH );
	fgSizer47->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	chbStateSkillExceptionsAttackChance = new wxCheckBox( this, wxID_ANY, _("Attack chance"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateSkillExceptionsAttackChance->SetValue(true); 
	fgSizer47->Add( chbStateSkillExceptionsAttackChance, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateSkillExceptionsAttackChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	fgSizer47->Add( spinStateSkillExceptionsAttackChance, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateSkillExceptionsAttackChance = new wxStaticText( this, wxID_ANY, _("on special parameter"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateSkillExceptionsAttackChance->Wrap( -1 );
	fgSizer47->Add( stStateSkillExceptionsAttackChance, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	chbStateSkillExceptionsSkillChance = new wxCheckBox( this, wxID_ANY, _("Skill chance"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateSkillExceptionsSkillChance->SetValue(true); 
	fgSizer47->Add( chbStateSkillExceptionsSkillChance, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateSkillExceptionsSkillChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	fgSizer47->Add( spinStateSkillExceptionsSkillChance, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateSkillExceptionsSkillChance = new wxStaticText( this, wxID_ANY, _("on special parameter"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateSkillExceptionsSkillChance->Wrap( -1 );
	fgSizer47->Add( stStateSkillExceptionsSkillChance, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	sbSizer262->Add( fgSizer47, 1, wxEXPAND, 0 );
	
	bSizer408->Add( sbSizer262, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer406->Add( bSizer408, 1, wxEXPAND, 0 );
	
	bSizer404->Add( bSizer406, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer410;
	bSizer410 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer411;
	bSizer411 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer263;
	sbSizer263 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor hit") ), wxHORIZONTAL );
	
	stStateMessageActorHit = new wxStaticText( this, wxID_ANY, _("(Actor name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMessageActorHit->Wrap( -1 );
	sbSizer263->Add( stStateMessageActorHit, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcStateMessageActorHit = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer263->Add( tcStateMessageActorHit, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer411->Add( sbSizer263, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer264;
	sbSizer264 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy hit") ), wxHORIZONTAL );
	
	stStateMessageEnemyHit = new wxStaticText( this, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMessageEnemyHit->Wrap( -1 );
	sbSizer264->Add( stStateMessageEnemyHit, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcStateMessageEnemyHit = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer264->Add( tcStateMessageEnemyHit, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer411->Add( sbSizer264, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer265;
	sbSizer265 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Message if already in this state") ), wxHORIZONTAL );
	
	stStateMessageAlreadyInState = new wxStaticText( this, wxID_ANY, _("(Affected name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMessageAlreadyInState->Wrap( -1 );
	sbSizer265->Add( stStateMessageAlreadyInState, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcStateMessageAlreadyInState = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer265->Add( tcStateMessageAlreadyInState, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer411->Add( sbSizer265, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer266;
	sbSizer266 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Normal state by one") ), wxHORIZONTAL );
	
	stStateMessageNormalState = new wxStaticText( this, wxID_ANY, _("(Affected name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMessageNormalState->Wrap( -1 );
	sbSizer266->Add( stStateMessageNormalState, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcStateMessageNormalState = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer266->Add( tcStateMessageNormalState, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer411->Add( sbSizer266, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer267;
	sbSizer267 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Recover message") ), wxHORIZONTAL );
	
	stStateMessageRecover = new wxStaticText( this, wxID_ANY, _("(Affected name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMessageRecover->Wrap( -1 );
	sbSizer267->Add( stStateMessageRecover, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcStateMessageRecover = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer267->Add( tcStateMessageRecover, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer411->Add( sbSizer267, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer410->Add( bSizer411, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer412;
	bSizer412 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer268;
	sbSizer268 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("HP reduction") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer269;
	sbSizer269 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("HP reduction in every turn") ), wxHORIZONTAL );
	
	stStateHPReductionInEveryTurnMax = new wxStaticText( this, wxID_ANY, _("Max"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateHPReductionInEveryTurnMax->Wrap( -1 );
	sbSizer269->Add( stStateHPReductionInEveryTurnMax, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateHPReductionInEveryTurnMax = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	sbSizer269->Add( spinStateHPReductionInEveryTurnMax, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateHPReductionInEveryTurnPercentPlus = new wxStaticText( this, wxID_ANY, _("% +"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateHPReductionInEveryTurnPercentPlus->Wrap( -1 );
	sbSizer269->Add( stStateHPReductionInEveryTurnPercentPlus, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateHPReductionInEveryTurnHP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	sbSizer269->Add( spinStateHPReductionInEveryTurnHP, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateHPReductionInEveryTurnHP = new wxStaticText( this, wxID_ANY, _("HP"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateHPReductionInEveryTurnHP->Wrap( -1 );
	sbSizer269->Add( stStateHPReductionInEveryTurnHP, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer268->Add( sbSizer269, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer270;
	sbSizer270 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("HP reduction on move") ), wxHORIZONTAL );
	
	spinStateHPReductionOnMoveSteps = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75, -1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	sbSizer270->Add( spinStateHPReductionOnMoveSteps, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateHPReductionOnMoveSteps = new wxStaticText( this, wxID_ANY, _("every step"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateHPReductionOnMoveSteps->Wrap( -1 );
	sbSizer270->Add( stStateHPReductionOnMoveSteps, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateHPReductionOnMoveHP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75, -1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	sbSizer270->Add( spinStateHPReductionOnMoveHP, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateHPReductionOnMoveHP = new wxStaticText( this, wxID_ANY, _("HP"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateHPReductionOnMoveHP->Wrap( -1 );
	sbSizer270->Add( stStateHPReductionOnMoveHP, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer268->Add( sbSizer270, 1, wxEXPAND, 0 );
	
	bSizer412->Add( sbSizer268, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer271;
	sbSizer271 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("MP reduction") ), wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer272;
	sbSizer272 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("MP reduction in every turn") ), wxHORIZONTAL );
	
	stStateMPReductionInEveryTurnMax = new wxStaticText( this, wxID_ANY, _("Max"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMPReductionInEveryTurnMax->Wrap( -1 );
	sbSizer272->Add( stStateMPReductionInEveryTurnMax, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateMPReductionInEveryTurnMax = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	sbSizer272->Add( spinStateMPReductionInEveryTurnMax, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateMPReductionInEveryTurnPercentPlus = new wxStaticText( this, wxID_ANY, _("% +"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMPReductionInEveryTurnPercentPlus->Wrap( -1 );
	sbSizer272->Add( stStateMPReductionInEveryTurnPercentPlus, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateMPReductionInEveryTurnMP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	sbSizer272->Add( spinStateMPReductionInEveryTurnMP, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateMPReductionInEveryTurnMP = new wxStaticText( this, wxID_ANY, _("MP"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMPReductionInEveryTurnMP->Wrap( -1 );
	sbSizer272->Add( stStateMPReductionInEveryTurnMP, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer271->Add( sbSizer272, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer273;
	sbSizer273 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("MP reduction on move") ), wxHORIZONTAL );
	
	spinStateMPReductionOnMoveSteps = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	sbSizer273->Add( spinStateMPReductionOnMoveSteps, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateMPReductionOnMoveSteps = new wxStaticText( this, wxID_ANY, _("every step"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMPReductionOnMoveSteps->Wrap( -1 );
	sbSizer273->Add( stStateMPReductionOnMoveSteps, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateMPReductionOnMoveMP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	sbSizer273->Add( spinStateMPReductionOnMoveMP, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateMPReductionOnMoveMP = new wxStaticText( this, wxID_ANY, _("MP"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMPReductionOnMoveMP->Wrap( -1 );
	sbSizer273->Add( stStateMPReductionOnMoveMP, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer271->Add( sbSizer273, 1, wxEXPAND, 0 );
	
	bSizer412->Add( sbSizer271, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer410->Add( bSizer412, 0, wxEXPAND, 0 );
	
	bSizer404->Add( bSizer410, 1, wxEXPAND, 0 );
	
	bSizer402->Add( bSizer404, 1, wxEXPAND, 0 );
	
	this->SetSizer( bSizer402 );
	this->Layout();
	bSizer402->Fit( this );
}

pnState_Base::~pnState_Base()
{
}
