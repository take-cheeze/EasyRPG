///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_skills.h"

///////////////////////////////////////////////////////////////////////////

pnSkill_Base::pnSkill_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* szSkill;
	szSkill = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stSkill = new wxStaticText( this, wxID_ANY, _("Skills"), wxDefaultPosition, wxDefaultSize, 0 );
	stSkill->Wrap( -1 );
	stSkill->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stSkill, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listSkill = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szLeft->Add( listSkill, 1, wxALL|wxEXPAND, 1 );
	
	btnSkillMaxNumber = new wxButton( this, wxID_ANY, _("Max number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSkillMaxNumber->SetDefault(); 
	szLeft->Add( btnSkillMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szSkill->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightTop;
	szRightTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szSkillName;
	szSkillName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	stSkillName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	szSkillName->Add( stSkillName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szSkillName, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSkillType;
	szSkillType = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Type") ), wxHORIZONTAL );
	
	wxString chSkillTypeChoices[] = { _("Normal"), _("Teleport"), _("Escape"), _("Switch") };
	int chSkillTypeNChoices = sizeof( chSkillTypeChoices ) / sizeof( wxString );
	chSkillType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50,-1 ), chSkillTypeNChoices, chSkillTypeChoices, 0 );
	chSkillType->SetSelection( 0 );
	szSkillType->Add( chSkillType, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szSkillType, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSkillMPCost;
	szSkillMPCost = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("MP cost") ), wxHORIZONTAL );
	
	spinSkillMPCost = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 999, 0 );
	szSkillMPCost->Add( spinSkillMPCost, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szSkillMPCost, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	
	szRightTop->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szRight->Add( szRightTop, 0, wxEXPAND, 0 );
	
	wxFlexGridSizer* szRightMiddle;
	szRightMiddle = new wxFlexGridSizer( 2, 2, 0, 0 );
	szRightMiddle->AddGrowableCol( 0 );
	szRightMiddle->SetFlexibleDirection( wxBOTH );
	szRightMiddle->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxStaticBoxSizer* szSkillDescription;
	szSkillDescription = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Description") ), wxHORIZONTAL );
	
	tcSkillDescription = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSkillDescription->Add( tcSkillDescription, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightMiddle->Add( szSkillDescription, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSkillTarget;
	szSkillTarget = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxString chSkillTargetChoices[] = { _("Single enemy"), _("All enemies"), _("Itself"), _("Single allied"), _("All allied") };
	int chSkillTargetNChoices = sizeof( chSkillTargetChoices ) / sizeof( wxString );
	chSkillTarget = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSkillTargetNChoices, chSkillTargetChoices, 0 );
	chSkillTarget->SetSelection( 0 );
	szSkillTarget->Add( chSkillTarget, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightMiddle->Add( szSkillTarget, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szSkillMessages;
	szSkillMessages = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szSkillCastMessage;
	szSkillCastMessage = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Cast message") ), wxVERTICAL );
	
	wxBoxSizer* szSkillCastMessageTop;
	szSkillCastMessageTop = new wxBoxSizer( wxHORIZONTAL );
	
	stSkillCastMessageCharacterName = new wxStaticText( this, wxID_ANY, _("(Character name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stSkillCastMessageCharacterName->Wrap( -1 );
	szSkillCastMessageTop->Add( stSkillCastMessageCharacterName, 0, wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcSkillCastMessage1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSkillCastMessageTop->Add( tcSkillCastMessage1, 1, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szSkillCastMessage->Add( szSkillCastMessageTop, 1, wxEXPAND, 0 );
	
	tcSkillCastMessage2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSkillCastMessage->Add( tcSkillCastMessage2, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szSkillCastMessageBottom;
	szSkillCastMessageBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnSkillCastMessageCast = new wxButton( this, wxID_ANY, _("Cast"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSkillCastMessageCast->SetDefault(); 
	szSkillCastMessageBottom->Add( btnSkillCastMessageCast, 1, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSkillCastMessageThrow = new wxButton( this, wxID_ANY, _("Throw"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSkillCastMessageThrow->SetDefault(); 
	szSkillCastMessageBottom->Add( btnSkillCastMessageThrow, 1, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSkillCastMessageUse = new wxButton( this, wxID_ANY, _("Use"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSkillCastMessageUse->SetDefault(); 
	szSkillCastMessageBottom->Add( btnSkillCastMessageUse, 1, wxLEFT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	szSkillCastMessage->Add( szSkillCastMessageBottom, 1, wxEXPAND, 0 );
	
	szSkillMessages->Add( szSkillCastMessage, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSkillFailMessage;
	szSkillFailMessage = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Fail message") ), wxHORIZONTAL );
	
	stSkillFailMessageCharacterName = new wxStaticText( this, wxID_ANY, _("(Character name)"), wxDefaultPosition, wxDefaultSize, 0 );
	stSkillFailMessageCharacterName->Wrap( -1 );
	szSkillFailMessage->Add( stSkillFailMessageCharacterName, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcSkillFailMessage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSkillFailMessage->Add( tcSkillFailMessage, 1, wxLEFT, 1 );
	
	szSkillMessages->Add( szSkillFailMessage, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRightMiddle->Add( szSkillMessages, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSkillAnimation;
	szSkillAnimation = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Animation") ), wxVERTICAL );
	
	bmpSkillAnimation = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 120 ), wxSUNKEN_BORDER );
	szSkillAnimation->Add( bmpSkillAnimation, 0, wxBOTTOM, 1 );
	
	wxArrayString chSkillAnimationChoices;
	chSkillAnimation = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSkillAnimationChoices, 0 );
	chSkillAnimation->SetSelection( 0 );
	szSkillAnimation->Add( chSkillAnimation, 0, wxTOP|wxEXPAND, 1 );
	
	szRightMiddle->Add( szSkillAnimation, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRight->Add( szRightMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRightBottom;
	szRightBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szSkillRightBottomLeft;
	szSkillRightBottomLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szSkillAttackInfluence;
	szSkillAttackInfluence = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Attack influence") ), wxHORIZONTAL );
	
	slSkillAttackInfluence = new wxSlider( this, wxID_ANY, 0, 0, 0, wxDefaultPosition, wxSize( 50, -1 ), wxSL_HORIZONTAL|wxSL_AUTOTICKS|wxSL_LABELS );
	szSkillAttackInfluence->Add( slSkillAttackInfluence, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSkillRightBottomLeft->Add( szSkillAttackInfluence, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSkillMagicInfluence;
	szSkillMagicInfluence = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Magic influence") ), wxHORIZONTAL );
	
	slSkillMagicInfluence = new wxSlider( this, wxID_ANY, 3, 0, 0, wxDefaultPosition, wxSize( 50, -1 ), wxSL_HORIZONTAL|wxSL_AUTOTICKS|wxSL_LABELS );
	szSkillMagicInfluence->Add( slSkillMagicInfluence, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSkillRightBottomLeft->Add( szSkillMagicInfluence, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSkillVariance;
	szSkillVariance = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Variance") ), wxHORIZONTAL );
	
	slSkillVariance = new wxSlider( this, wxID_ANY, 4, 0, 0, wxDefaultPosition, wxSize( 50, -1 ), wxSL_HORIZONTAL|wxSL_AUTOTICKS|wxSL_LABELS );
	szSkillVariance->Add( slSkillVariance, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSkillRightBottomLeft->Add( szSkillVariance, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szRightBottom->Add( szSkillRightBottomLeft, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szSkillRightBottomMiddleLeft;
	szSkillRightBottomMiddleLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szSkillEffectRate;
	szSkillEffectRate = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Effect rate") ), wxHORIZONTAL );
	
	spinSkillEffectRate = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  999, 0 );
	szSkillEffectRate->Add( spinSkillEffectRate, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSkillRightBottomMiddleLeft->Add( szSkillEffectRate, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSkillAffectCapacities;
	szSkillAffectCapacities = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Affect capacities") ), wxVERTICAL );
	
	chbSkillAffectHP = new wxCheckBox( this, wxID_ANY, _("HP"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSkillAffectHP->SetValue(true); 
	szSkillAffectCapacities->Add( chbSkillAffectHP, 0, wxBOTTOM|wxEXPAND, 1 );
	
	chbSkillAffectMP = new wxCheckBox( this, wxID_ANY, _("MP"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSkillAffectMP->SetValue(true); 
	szSkillAffectCapacities->Add( chbSkillAffectMP, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbSkillAffectAttack = new wxCheckBox( this, wxID_ANY, _("Attack"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSkillAffectAttack->SetValue(true); 
	szSkillAffectCapacities->Add( chbSkillAffectAttack, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbSkillAffectDefense = new wxCheckBox( this, wxID_ANY, _("Defense"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSkillAffectDefense->SetValue(true); 
	szSkillAffectCapacities->Add( chbSkillAffectDefense, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbSkillAffectIntelligence = new wxCheckBox( this, wxID_ANY, _("Intelligence"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSkillAffectIntelligence->SetValue(true); 
	szSkillAffectCapacities->Add( chbSkillAffectIntelligence, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbSkillAffectAgility = new wxCheckBox( this, wxID_ANY, _("Agility"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSkillAffectAgility->SetValue(true); 
	szSkillAffectCapacities->Add( chbSkillAffectAgility, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbSkillAffectAbsorbHPMP = new wxCheckBox( this, wxID_ANY, _("Absorb HP/MP"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSkillAffectAbsorbHPMP->SetValue(true); 
	szSkillAffectCapacities->Add( chbSkillAffectAbsorbHPMP, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbSkillAffectArmorBypass = new wxCheckBox( this, wxID_ANY, _("Armor bypass"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSkillAffectArmorBypass->SetValue(true); 
	szSkillAffectCapacities->Add( chbSkillAffectArmorBypass, 0, wxTOP|wxEXPAND, 1 );
	
	szSkillRightBottomMiddleLeft->Add( szSkillAffectCapacities, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szRightBottom->Add( szSkillRightBottomMiddleLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szSkillRightBottomMiddleRight;
	szSkillRightBottomMiddleRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szSkillSuccessRate;
	szSkillSuccessRate = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Success rate") ), wxHORIZONTAL );
	
	spinSkillSuccessRate = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0,  100, 100 );
	szSkillSuccessRate->Add( spinSkillSuccessRate, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stSkillSuccessRate = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stSkillSuccessRate->Wrap( -1 );
	szSkillSuccessRate->Add( stSkillSuccessRate, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szSkillRightBottomMiddleRight->Add( szSkillSuccessRate, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSkillChangeStates;
	szSkillChangeStates = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Change states") ), wxHORIZONTAL );
	
	listSkillChangeStates = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szSkillChangeStates->Add( listSkillChangeStates, 1, wxEXPAND, 0 );
	
	szSkillRightBottomMiddleRight->Add( szSkillChangeStates, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szRightBottom->Add( szSkillRightBottomMiddleRight, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szSkillRightBottomRight;
	szSkillRightBottomRight = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Attributes") ), wxVERTICAL );
	
	listSkillAttributes = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szSkillRightBottomRight->Add( listSkillAttributes, 1, wxBOTTOM|wxEXPAND, 1 );
	
	chbSkillAttributesDefenseUpDown = new wxCheckBox( this, wxID_ANY, _("Defense up/down"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSkillAttributesDefenseUpDown->SetValue(true); 
	szSkillRightBottomRight->Add( chbSkillAttributesDefenseUpDown, 0, wxTOP|wxEXPAND, 1 );
	
	szRightBottom->Add( szSkillRightBottomRight, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szRight->Add( szRightBottom, 1, wxEXPAND, 0 );
	
	szSkill->Add( szRight, 1, wxEXPAND, 0 );
	
	this->SetSizer( szSkill );
	this->Layout();
	szSkill->Fit( this );
}

pnSkill_Base::~pnSkill_Base()
{
}
