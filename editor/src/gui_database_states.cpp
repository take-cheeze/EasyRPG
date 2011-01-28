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
	wxBoxSizer* szState;
	szState = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stState = new wxStaticText( this, wxID_ANY, _("States"), wxDefaultPosition, wxDefaultSize, 0 );
	stState->Wrap( -1 );
	stState->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stState, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listState = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szLeft->Add( listState, 1, wxALL|wxEXPAND, 1 );
	
	btnStateMaxNumber = new wxButton( this, wxID_ANY, _("Max Number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnStateMaxNumber->SetDefault(); 
	szLeft->Add( btnStateMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szState->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szStateName;
	szStateName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcStateName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szStateName->Add( tcStateName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szStateName, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStateType;
	szStateType = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Type") ), wxHORIZONTAL );
	
	wxArrayString chStateTypeChoices;
	chStateType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chStateTypeChoices, 0 );
	chStateType->SetSelection( 0 );
	szStateType->Add( chStateType, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szStateType, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStateColor;
	szStateColor = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Color") ), wxHORIZONTAL );
	
	wxArrayString chStateColorChoices;
	chStateColor = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chStateColorChoices, 0 );
	chStateColor->SetSelection( 0 );
	szStateColor->Add( chStateColor, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szStateColor, 0, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStatePriority;
	szStatePriority = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Priority") ), wxHORIZONTAL );
	
	spinStatePriority = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	szStatePriority->Add( spinStatePriority, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szStatePriority, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStateActionRange;
	szStateActionRange = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Action range") ), wxHORIZONTAL );
	
	wxArrayString chStateActionRangeChoices;
	chStateActionRange = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chStateActionRangeChoices, 0 );
	chStateActionRange->SetSelection( 0 );
	szStateActionRange->Add( chStateActionRange, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szStateActionRange, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRight->Add( szTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szMiddleTop;
	szMiddleTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szStateEffectRate;
	szStateEffectRate = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Effect Rate") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szStateEffectRate2;
	szStateEffectRate2 = new wxFlexGridSizer( 5, 3, 2, 2 );
	szStateEffectRate2->AddGrowableCol( 1 );
	szStateEffectRate2->SetFlexibleDirection( wxBOTH );
	szStateEffectRate2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stStateEffectRateA = new wxStaticText( this, wxID_ANY, _("A"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateA->Wrap( -1 );
	szStateEffectRate2->Add( stStateEffectRateA, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateEffectRateA = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	szStateEffectRate2->Add( spinStateEffectRateA, 0, wxEXPAND, 0 );
	
	stStateEffectRateAPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateAPercent->Wrap( -1 );
	szStateEffectRate2->Add( stStateEffectRateAPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateEffectRateB = new wxStaticText( this, wxID_ANY, _("B"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateB->Wrap( -1 );
	szStateEffectRate2->Add( stStateEffectRateB, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateEffectRateB = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	szStateEffectRate2->Add( spinStateEffectRateB, 0, wxEXPAND, 0 );
	
	stStateEffectRateBPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateBPercent->Wrap( -1 );
	szStateEffectRate2->Add( stStateEffectRateBPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateEffectRateC = new wxStaticText( this, wxID_ANY, _("C"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateC->Wrap( -1 );
	szStateEffectRate2->Add( stStateEffectRateC, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateEffectRateC = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	szStateEffectRate2->Add( spinStateEffectRateC, 0, wxEXPAND, 0 );
	
	stStateEffectRateCPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateCPercent->Wrap( -1 );
	szStateEffectRate2->Add( stStateEffectRateCPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateEffectRateD = new wxStaticText( this, wxID_ANY, _("D"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateD->Wrap( -1 );
	szStateEffectRate2->Add( stStateEffectRateD, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateEffectRateD = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	szStateEffectRate2->Add( spinStateEffectRateD, 0, wxEXPAND, 0 );
	
	stStateEffectRateDPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateDPercent->Wrap( -1 );
	szStateEffectRate2->Add( stStateEffectRateDPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateEffectRateE = new wxStaticText( this, wxID_ANY, _("E"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateE->Wrap( -1 );
	szStateEffectRate2->Add( stStateEffectRateE, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateEffectRateE = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	szStateEffectRate2->Add( spinStateEffectRateE, 0, wxEXPAND, 0 );
	
	stStateEffectRateEPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateEffectRateEPercent->Wrap( -1 );
	szStateEffectRate2->Add( stStateEffectRateEPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szStateEffectRate->Add( szStateEffectRate2, 1, wxEXPAND, 0 );
	
	szMiddleTop->Add( szStateEffectRate, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szMiddleTopCenter;
	szMiddleTopCenter = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Heal method") ), wxVERTICAL );
	
	wxStaticBoxSizer* szStateNaturalHealing;
	szStateNaturalHealing = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Natural healing") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szStateNaturalHealing2;
	szStateNaturalHealing2 = new wxFlexGridSizer( 2, 3, 2, 2 );
	szStateNaturalHealing2->SetFlexibleDirection( wxBOTH );
	szStateNaturalHealing2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stStateNaturalHealingAfter = new wxStaticText( this, wxID_ANY, _("After"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateNaturalHealingAfter->Wrap( -1 );
	szStateNaturalHealing2->Add( stStateNaturalHealingAfter, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateNaturalHealingTurn = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	szStateNaturalHealing2->Add( spinStateNaturalHealingTurn, 0, 0, 0 );
	
	stStateNaturalHealingTurn = new wxStaticText( this, wxID_ANY, _("turn,"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateNaturalHealingTurn->Wrap( -1 );
	szStateNaturalHealing2->Add( stStateNaturalHealingTurn, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szStateNaturalHealing2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	spinStateNaturalHealingHealChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szStateNaturalHealing2->Add( spinStateNaturalHealingHealChance, 0, 0, 0 );
	
	stStateNaturalHealingHealChance = new wxStaticText( this, wxID_ANY, _("% heal chance"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateNaturalHealingHealChance->Wrap( -1 );
	szStateNaturalHealing2->Add( stStateNaturalHealingHealChance, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szStateNaturalHealing->Add( szStateNaturalHealing2, 1, wxEXPAND, 0 );
	
	szMiddleTopCenter->Add( szStateNaturalHealing, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szStateAfterHitHealing;
	szStateAfterHitHealing = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("After hit healing") ), wxVERTICAL );
	
	stStateAfterHitHealingPhysicalAttack = new wxStaticText( this, wxID_ANY, _("Physical attack"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateAfterHitHealingPhysicalAttack->Wrap( -1 );
	szStateAfterHitHealing->Add( stStateAfterHitHealingPhysicalAttack, 0, wxBOTTOM, 1 );
	
	wxBoxSizer* szStateAfterHitHealingHealChance;
	szStateAfterHitHealingHealChance = new wxBoxSizer( wxHORIZONTAL );
	
	spinStateAfterHitHealingHealChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szStateAfterHitHealingHealChance->Add( spinStateAfterHitHealingHealChance, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateAfterHitHealingHealChance = new wxStaticText( this, wxID_ANY, _("% heal chance"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateAfterHitHealingHealChance->Wrap( -1 );
	szStateAfterHitHealingHealChance->Add( stStateAfterHitHealingHealChance, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStateAfterHitHealing->Add( szStateAfterHitHealingHealChance, 1, wxEXPAND, 0 );
	
	szMiddleTopCenter->Add( szStateAfterHitHealing, 1, wxEXPAND, 0 );
	
	szMiddleTop->Add( szMiddleTopCenter, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddleTopRight;
	szMiddleTopRight = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szMiddleTopRightTop;
	szMiddleTopRightTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szStateDecreaseCapacities;
	szStateDecreaseCapacities = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Decrease capacities") ), wxHORIZONTAL );
	
	wxGridSizer* szStateDecreaseCapacities2;
	szStateDecreaseCapacities2 = new wxGridSizer( 2, 2, 2, 2 );
	
	chbStateDecreaseAttack = new wxCheckBox( this, wxID_ANY, _("Attack"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateDecreaseAttack->SetValue(true); 
	szStateDecreaseCapacities2->Add( chbStateDecreaseAttack, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbStateDecreaseIntelligence = new wxCheckBox( this, wxID_ANY, _("Intelligence"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateDecreaseIntelligence->SetValue(true); 
	szStateDecreaseCapacities2->Add( chbStateDecreaseIntelligence, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbStateDecreaseDefense = new wxCheckBox( this, wxID_ANY, _("Defense"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateDecreaseDefense->SetValue(true); 
	szStateDecreaseCapacities2->Add( chbStateDecreaseDefense, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbStateDecreaseAgility = new wxCheckBox( this, wxID_ANY, _("Agility"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateDecreaseAgility->SetValue(true); 
	szStateDecreaseCapacities2->Add( chbStateDecreaseAgility, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	szStateDecreaseCapacities->Add( szStateDecreaseCapacities2, 1, wxEXPAND, 0 );
	
	szMiddleTopRightTop->Add( szStateDecreaseCapacities, 2, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStateAttackChance;
	szStateAttackChance = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Attack chance") ), wxHORIZONTAL );
	
	spinStateAttackChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szStateAttackChance->Add( spinStateAttackChance, 1, wxRIGHT, 1 );
	
	stStateAttackChance = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateAttackChance->Wrap( -1 );
	szStateAttackChance->Add( stStateAttackChance, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddleTopRightTop->Add( szStateAttackChance, 1, wxLEFT|wxRIGHT, 1 );
	
	szMiddleTopRight->Add( szMiddleTopRightTop, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szStateSkillExceptions;
	szStateSkillExceptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Skill exceptions") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szStateSkillExceptions2;
	szStateSkillExceptions2 = new wxFlexGridSizer( 2, 3, 2, 2 );
	szStateSkillExceptions2->AddGrowableRow( 0 );
	szStateSkillExceptions2->AddGrowableRow( 1 );
	szStateSkillExceptions2->SetFlexibleDirection( wxBOTH );
	szStateSkillExceptions2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	chbStateSkillExceptionsAttackChance = new wxCheckBox( this, wxID_ANY, _("Attack chance"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateSkillExceptionsAttackChance->SetValue(true); 
	szStateSkillExceptions2->Add( chbStateSkillExceptionsAttackChance, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateSkillExceptionsAttackChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szStateSkillExceptions2->Add( spinStateSkillExceptionsAttackChance, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateSkillExceptionsAttackChance = new wxStaticText( this, wxID_ANY, _("on special parameter"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateSkillExceptionsAttackChance->Wrap( -1 );
	szStateSkillExceptions2->Add( stStateSkillExceptionsAttackChance, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	chbStateSkillExceptionsSkillChance = new wxCheckBox( this, wxID_ANY, _("Skill chance"), wxDefaultPosition, wxDefaultSize, 0 );
	chbStateSkillExceptionsSkillChance->SetValue(true); 
	szStateSkillExceptions2->Add( chbStateSkillExceptionsSkillChance, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinStateSkillExceptionsSkillChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szStateSkillExceptions2->Add( spinStateSkillExceptionsSkillChance, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	stStateSkillExceptionsSkillChance = new wxStaticText( this, wxID_ANY, _("on special parameter"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateSkillExceptionsSkillChance->Wrap( -1 );
	szStateSkillExceptions2->Add( stStateSkillExceptionsSkillChance, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szStateSkillExceptions->Add( szStateSkillExceptions2, 1, wxEXPAND, 0 );
	
	szMiddleTopRight->Add( szStateSkillExceptions, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szMiddleTop->Add( szMiddleTopRight, 1, wxEXPAND, 0 );
	
	szRight->Add( szMiddleTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szMiddleBottom;
	szMiddleBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szMiddleBottomLeft;
	szMiddleBottomLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szStateMessageActorHit;
	szStateMessageActorHit = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor hit") ), wxHORIZONTAL );
	
	stStateMessageActorHit = new wxStaticText( this, wxID_ANY, _("(Actor name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMessageActorHit->Wrap( -1 );
	szStateMessageActorHit->Add( stStateMessageActorHit, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcStateMessageActorHit = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szStateMessageActorHit->Add( tcStateMessageActorHit, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddleBottomLeft->Add( szStateMessageActorHit, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStateMessageEnemyHit;
	szStateMessageEnemyHit = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy hit") ), wxHORIZONTAL );
	
	stStateMessageEnemyHit = new wxStaticText( this, wxID_ANY, _("(Enemy name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMessageEnemyHit->Wrap( -1 );
	szStateMessageEnemyHit->Add( stStateMessageEnemyHit, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcStateMessageEnemyHit = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szStateMessageEnemyHit->Add( tcStateMessageEnemyHit, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddleBottomLeft->Add( szStateMessageEnemyHit, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStateMessageAlreadyInState;
	szStateMessageAlreadyInState = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Message if already in this state") ), wxHORIZONTAL );
	
	stStateMessageAlreadyInState = new wxStaticText( this, wxID_ANY, _("(Affected name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMessageAlreadyInState->Wrap( -1 );
	szStateMessageAlreadyInState->Add( stStateMessageAlreadyInState, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcStateMessageAlreadyInState = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szStateMessageAlreadyInState->Add( tcStateMessageAlreadyInState, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddleBottomLeft->Add( szStateMessageAlreadyInState, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStateMessageNormalState;
	szStateMessageNormalState = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Normal state by one") ), wxHORIZONTAL );
	
	stStateMessageNormalState = new wxStaticText( this, wxID_ANY, _("(Affected name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMessageNormalState->Wrap( -1 );
	szStateMessageNormalState->Add( stStateMessageNormalState, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcStateMessageNormalState = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szStateMessageNormalState->Add( tcStateMessageNormalState, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddleBottomLeft->Add( szStateMessageNormalState, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStateMessageRecover;
	szStateMessageRecover = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Recover message") ), wxHORIZONTAL );
	
	stStateMessageRecover = new wxStaticText( this, wxID_ANY, _("(Affected name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMessageRecover->Wrap( -1 );
	szStateMessageRecover->Add( stStateMessageRecover, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcStateMessageRecover = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szStateMessageRecover->Add( tcStateMessageRecover, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szMiddleBottomLeft->Add( szStateMessageRecover, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szMiddleBottom->Add( szMiddleBottomLeft, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szMiddleBottomRight;
	szMiddleBottomRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szStateHPReduction;
	szStateHPReduction = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("HP reduction") ), wxVERTICAL );
	
	wxStaticBoxSizer* szStateHPReduction2;
	szStateHPReduction2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("HP reduction in every turn") ), wxHORIZONTAL );
	
	stStateHPReductionInEveryTurnMax = new wxStaticText( this, wxID_ANY, _("Max"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateHPReductionInEveryTurnMax->Wrap( -1 );
	szStateHPReduction2->Add( stStateHPReductionInEveryTurnMax, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateHPReductionInEveryTurnMax = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szStateHPReduction2->Add( spinStateHPReductionInEveryTurnMax, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateHPReductionInEveryTurnPercentPlus = new wxStaticText( this, wxID_ANY, _("% +"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateHPReductionInEveryTurnPercentPlus->Wrap( -1 );
	szStateHPReduction2->Add( stStateHPReductionInEveryTurnPercentPlus, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateHPReductionInEveryTurnHP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	szStateHPReduction2->Add( spinStateHPReductionInEveryTurnHP, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateHPReductionInEveryTurnHP = new wxStaticText( this, wxID_ANY, _("HP"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateHPReductionInEveryTurnHP->Wrap( -1 );
	szStateHPReduction2->Add( stStateHPReductionInEveryTurnHP, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStateHPReduction->Add( szStateHPReduction2, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szStateHPReductionOnMove;
	szStateHPReductionOnMove = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("HP reduction on move") ), wxHORIZONTAL );
	
	spinStateHPReductionOnMoveSteps = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75, -1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	szStateHPReductionOnMove->Add( spinStateHPReductionOnMoveSteps, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateHPReductionOnMoveSteps = new wxStaticText( this, wxID_ANY, _("every step"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateHPReductionOnMoveSteps->Wrap( -1 );
	szStateHPReductionOnMove->Add( stStateHPReductionOnMoveSteps, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateHPReductionOnMoveHP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75, -1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	szStateHPReductionOnMove->Add( spinStateHPReductionOnMoveHP, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateHPReductionOnMoveHP = new wxStaticText( this, wxID_ANY, _("HP"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateHPReductionOnMoveHP->Wrap( -1 );
	szStateHPReductionOnMove->Add( stStateHPReductionOnMoveHP, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStateHPReduction->Add( szStateHPReductionOnMove, 1, wxEXPAND, 0 );
	
	szMiddleBottomRight->Add( szStateHPReduction, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szStateMPReduction;
	szStateMPReduction = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("MP reduction") ), wxVERTICAL );
	
	wxStaticBoxSizer* szStateReductionInEveryTurn;
	szStateReductionInEveryTurn = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("MP reduction in every turn") ), wxHORIZONTAL );
	
	stStateMPReductionInEveryTurnMax = new wxStaticText( this, wxID_ANY, _("Max"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMPReductionInEveryTurnMax->Wrap( -1 );
	szStateReductionInEveryTurn->Add( stStateMPReductionInEveryTurnMax, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateMPReductionInEveryTurnMax = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szStateReductionInEveryTurn->Add( spinStateMPReductionInEveryTurnMax, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateMPReductionInEveryTurnPercentPlus = new wxStaticText( this, wxID_ANY, _("% +"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMPReductionInEveryTurnPercentPlus->Wrap( -1 );
	szStateReductionInEveryTurn->Add( stStateMPReductionInEveryTurnPercentPlus, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateMPReductionInEveryTurnMP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	szStateReductionInEveryTurn->Add( spinStateMPReductionInEveryTurnMP, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateMPReductionInEveryTurnMP = new wxStaticText( this, wxID_ANY, _("MP"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMPReductionInEveryTurnMP->Wrap( -1 );
	szStateReductionInEveryTurn->Add( stStateMPReductionInEveryTurnMP, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStateMPReduction->Add( szStateReductionInEveryTurn, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szStateMPReductionOnMove;
	szStateMPReductionOnMove = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("MP reduction on move") ), wxHORIZONTAL );
	
	spinStateMPReductionOnMoveSteps = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	szStateMPReductionOnMove->Add( spinStateMPReductionOnMoveSteps, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateMPReductionOnMoveSteps = new wxStaticText( this, wxID_ANY, _("every step"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMPReductionOnMoveSteps->Wrap( -1 );
	szStateMPReductionOnMove->Add( stStateMPReductionOnMoveSteps, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinStateMPReductionOnMoveMP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	szStateMPReductionOnMove->Add( spinStateMPReductionOnMoveMP, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stStateMPReductionOnMoveMP = new wxStaticText( this, wxID_ANY, _("MP"), wxDefaultPosition, wxDefaultSize, 0 );
	stStateMPReductionOnMoveMP->Wrap( -1 );
	szStateMPReductionOnMove->Add( stStateMPReductionOnMoveMP, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStateMPReduction->Add( szStateMPReductionOnMove, 1, wxEXPAND, 0 );
	
	szMiddleBottomRight->Add( szStateMPReduction, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szMiddleBottom->Add( szMiddleBottomRight, 0, wxEXPAND, 0 );
	
	szRight->Add( szMiddleBottom, 1, wxEXPAND, 0 );
	
	szState->Add( szRight, 1, wxEXPAND, 0 );
	
	this->SetSizer( szState );
	this->Layout();
	szState->Fit( this );
}

pnState_Base::~pnState_Base()
{
}
