///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_actors.h"

///////////////////////////////////////////////////////////////////////////

pnActor_Base::pnActor_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* szActor;
	szActor = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stActor = new wxStaticText( this, wxID_ANY, _("Actors"), wxDefaultPosition, wxDefaultSize, 0 );
	stActor->Wrap( -1 );
	stActor->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stActor, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listActor = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szLeft->Add( listActor, 1, wxALL|wxEXPAND, 1 );
	
	btnActorMaxNumber = new wxButton( this, wxID_ANY, _("Max number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnActorMaxNumber->SetDefault(); 
	szLeft->Add( btnActorMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szActor->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxFlexGridSizer* szRight;
	szRight = new wxFlexGridSizer( 2, 2, 0, 0 );
	szRight->AddGrowableCol( 1 );
	szRight->AddGrowableRow( 1 );
	szRight->SetFlexibleDirection( wxBOTH );
	szRight->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxBoxSizer* szRightTopLeft;
	szRightTopLeft = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightTopLeftTop;
	szRightTopLeftTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szRightTopLeftTopLeft;
	szRightTopLeftTopLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szActorName;
	szActorName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcActorName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szActorName->Add( tcActorName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTopLeftTopLeft->Add( szActorName, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szActorTitle;
	szActorTitle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Title") ), wxHORIZONTAL );
	
	tcActorTitle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szActorTitle->Add( tcActorTitle, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTopLeftTopLeft->Add( szActorTitle, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRightTopLeftTop->Add( szRightTopLeftTopLeft, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szWalkingGraphic;
	szWalkingGraphic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Walking graphic") ), wxHORIZONTAL );
	
	bmpWalkingGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	szWalkingGraphic->Add( bmpWalkingGraphic, 0, wxRIGHT|wxALIGN_BOTTOM, 1 );
	
	wxBoxSizer* szWalkingGraphicOptions;
	szWalkingGraphicOptions = new wxBoxSizer( wxVERTICAL );
	
	chbActorWalkingGraphicTranslucent = new wxCheckBox( this, wxID_ANY, _("Translucent"), wxDefaultPosition, wxDefaultSize, 0 );
	chbActorWalkingGraphicTranslucent->SetValue(true); 
	szWalkingGraphicOptions->Add( chbActorWalkingGraphicTranslucent, 1, wxLEFT|wxBOTTOM, 1 );
	
	btnActorWalkingGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnActorWalkingGraphic->SetDefault(); 
	szWalkingGraphicOptions->Add( btnActorWalkingGraphic, 0, wxLEFT|wxTOP|wxALIGN_BOTTOM, 1 );
	
	szWalkingGraphic->Add( szWalkingGraphicOptions, 1, wxEXPAND, 0 );
	
	szRightTopLeftTop->Add( szWalkingGraphic, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRightTopLeft->Add( szRightTopLeftTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szTopLeftBottom;
	szTopLeftBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szActorInitialLevel;
	szActorInitialLevel = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Initial level") ), wxHORIZONTAL );
	
	spinActorInitialLevel = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1,  50, 1 );
	szActorInitialLevel->Add( spinActorInitialLevel, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTopLeftBottom->Add( szActorInitialLevel, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szActorMaxLevel;
	szActorMaxLevel = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Max level") ), wxHORIZONTAL );
	
	spinActorMaxLevel = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1,  50, 50 );
	szActorMaxLevel->Add( spinActorMaxLevel, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTopLeftBottom->Add( szActorMaxLevel, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szActorCriticalHitRate;
	szActorCriticalHitRate = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Critical hit rate") ), wxHORIZONTAL );
	
	chbActorCriticalHitRate = new wxCheckBox( this, wxID_ANY, _("1 /"), wxDefaultPosition, wxDefaultSize, 0 );
	chbActorCriticalHitRate->SetValue(true); 
	szActorCriticalHitRate->Add( chbActorCriticalHitRate, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinActorCriticalHitRate = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1,  100, 30 );
	szActorCriticalHitRate->Add( spinActorCriticalHitRate, 1, wxALIGN_CENTER_VERTICAL, 1 );
	
	szTopLeftBottom->Add( szActorCriticalHitRate, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRightTopLeft->Add( szTopLeftBottom, 1, wxEXPAND, 0 );
	
	szRight->Add( szRightTopLeft, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szInitialEquipment;
	szInitialEquipment = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Initial equipment") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szInitialEquipmentGrid;
	szInitialEquipmentGrid = new wxFlexGridSizer( 5, 2, 2, 2 );
	szInitialEquipmentGrid->AddGrowableCol( 1 );
	szInitialEquipmentGrid->SetFlexibleDirection( wxBOTH );
	szInitialEquipmentGrid->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	stActorInitialWeapon = new wxStaticText( this, wxID_ANY, _("Weapon:"), wxDefaultPosition, wxDefaultSize, 0 );
	stActorInitialWeapon->Wrap( -1 );
	szInitialEquipmentGrid->Add( stActorInitialWeapon, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString chActorInitialWeaponChoices[] = { _("(None)") };
	int chActorInitialWeaponNChoices = sizeof( chActorInitialWeaponChoices ) / sizeof( wxString );
	chActorInitialWeapon = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorInitialWeaponNChoices, chActorInitialWeaponChoices, 0 );
	chActorInitialWeapon->SetSelection( 0 );
	szInitialEquipmentGrid->Add( chActorInitialWeapon, 0, wxEXPAND, 0 );
	
	stActorInitialShield = new wxStaticText( this, wxID_ANY, _("Shield:"), wxDefaultPosition, wxDefaultSize, 0 );
	stActorInitialShield->Wrap( -1 );
	szInitialEquipmentGrid->Add( stActorInitialShield, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString chActorInitialShieldChoices[] = { _("(None)") };
	int chActorInitialShieldNChoices = sizeof( chActorInitialShieldChoices ) / sizeof( wxString );
	chActorInitialShield = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorInitialShieldNChoices, chActorInitialShieldChoices, 0 );
	chActorInitialShield->SetSelection( 0 );
	szInitialEquipmentGrid->Add( chActorInitialShield, 0, wxEXPAND, 0 );
	
	stActorInitialArmor = new wxStaticText( this, wxID_ANY, _("Armor:"), wxDefaultPosition, wxDefaultSize, 0 );
	stActorInitialArmor->Wrap( -1 );
	szInitialEquipmentGrid->Add( stActorInitialArmor, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString chActorInitialArmorChoices[] = { _("(None)") };
	int chActorInitialArmorNChoices = sizeof( chActorInitialArmorChoices ) / sizeof( wxString );
	chActorInitialArmor = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorInitialArmorNChoices, chActorInitialArmorChoices, 0 );
	chActorInitialArmor->SetSelection( 0 );
	szInitialEquipmentGrid->Add( chActorInitialArmor, 0, wxEXPAND, 0 );
	
	stActorInitialHelmet = new wxStaticText( this, wxID_ANY, _("Helmet:"), wxDefaultPosition, wxDefaultSize, 0 );
	stActorInitialHelmet->Wrap( -1 );
	szInitialEquipmentGrid->Add( stActorInitialHelmet, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString chActorInitialHelmetChoices[] = { _("(None)") };
	int chActorInitialHelmetNChoices = sizeof( chActorInitialHelmetChoices ) / sizeof( wxString );
	chActorInitialHelmet = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorInitialHelmetNChoices, chActorInitialHelmetChoices, 0 );
	chActorInitialHelmet->SetSelection( 0 );
	szInitialEquipmentGrid->Add( chActorInitialHelmet, 0, wxEXPAND, 0 );
	
	stActorInitialAccessory = new wxStaticText( this, wxID_ANY, _("Accessory:"), wxDefaultPosition, wxDefaultSize, 0 );
	stActorInitialAccessory->Wrap( -1 );
	szInitialEquipmentGrid->Add( stActorInitialAccessory, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxString chActorInitialAccessoryChoices[] = { _("(None)") };
	int chActorInitialAccessoryNChoices = sizeof( chActorInitialAccessoryChoices ) / sizeof( wxString );
	chActorInitialAccessory = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorInitialAccessoryNChoices, chActorInitialAccessoryChoices, 0 );
	chActorInitialAccessory->SetSelection( 0 );
	szInitialEquipmentGrid->Add( chActorInitialAccessory, 0, wxEXPAND, 0 );
	
	szInitialEquipment->Add( szInitialEquipmentGrid, 1, wxEXPAND, 0 );
	
	szRight->Add( szInitialEquipment, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szRightBottomLeft;
	szRightBottomLeft = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightBottomLeftTop;
	szRightBottomLeftTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* sxRightBottomLeftTopLeft;
	sxRightBottomLeftTopLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szActorFaceGraphic;
	szActorFaceGraphic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Face graphic") ), wxVERTICAL );
	
	bmpActorFaceGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 96, 96 ), wxSUNKEN_BORDER );
	szActorFaceGraphic->Add( bmpActorFaceGraphic, 0, wxBOTTOM, 1 );
	
	btnActorFaceGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnActorFaceGraphic->SetDefault(); 
	szActorFaceGraphic->Add( btnActorFaceGraphic, 0, wxTOP, 1 );
	
	sxRightBottomLeftTopLeft->Add( szActorFaceGraphic, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szActorOptions;
	szActorOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );
	
	chbActorOptionsUse2Weapons = new wxCheckBox( this, wxID_ANY, _("Use 2 weapons"), wxDefaultPosition, wxDefaultSize, 0 );
	chbActorOptionsUse2Weapons->SetValue(true); 
	szActorOptions->Add( chbActorOptionsUse2Weapons, 0, wxBOTTOM|wxEXPAND, 1 );
	
	chbActorOptionsFixedEquipment = new wxCheckBox( this, wxID_ANY, _("Fixed equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	chbActorOptionsFixedEquipment->SetValue(true); 
	szActorOptions->Add( chbActorOptionsFixedEquipment, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbActorOptionsControlledByAI = new wxCheckBox( this, wxID_ANY, _("Controlled by AI"), wxDefaultPosition, wxDefaultSize, 0 );
	chbActorOptionsControlledByAI->SetValue(true); 
	szActorOptions->Add( chbActorOptionsControlledByAI, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	chbActorOptionsArmored = new wxCheckBox( this, wxID_ANY, _("Armored"), wxDefaultPosition, wxDefaultSize, 0 );
	chbActorOptionsArmored->SetValue(true); 
	szActorOptions->Add( chbActorOptionsArmored, 0, wxTOP|wxEXPAND, 1 );
	
	sxRightBottomLeftTopLeft->Add( szActorOptions, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRightBottomLeftTop->Add( sxRightBottomLeftTopLeft, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szCapacityCurves;
	szCapacityCurves = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Capacity curves") ), wxHORIZONTAL );
	
	wxGridSizer* szCapacityCurvesGrid;
	szCapacityCurvesGrid = new wxGridSizer( 3, 2, 0, 2 );
	
	wxStaticBoxSizer* szActorMaxHP;
	szActorMaxHP = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Max HP") ), wxHORIZONTAL );
	
	bmpActorMaxHP = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 100, 50 ), wxSUNKEN_BORDER );
	szActorMaxHP->Add( bmpActorMaxHP, 0, 0, 0 );
	
	szCapacityCurvesGrid->Add( szActorMaxHP, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxStaticBoxSizer* szActorMaxMP;
	szActorMaxMP = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Max MP") ), wxHORIZONTAL );
	
	bmpActorMaxMP = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 100, 50 ), wxSUNKEN_BORDER );
	szActorMaxMP->Add( bmpActorMaxMP, 0, 0, 0 );
	
	szCapacityCurvesGrid->Add( szActorMaxMP, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxStaticBoxSizer* szActorAttack;
	szActorAttack = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Attack") ), wxHORIZONTAL );
	
	bmpActorAttack = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 100, 50 ), wxSUNKEN_BORDER );
	szActorAttack->Add( bmpActorAttack, 0, 0, 0 );
	
	szCapacityCurvesGrid->Add( szActorAttack, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxStaticBoxSizer* szActorDefense;
	szActorDefense = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Defense") ), wxHORIZONTAL );
	
	bmpActorDefense = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 100, 50 ), wxSUNKEN_BORDER );
	szActorDefense->Add( bmpActorDefense, 0, 0, 0 );
	
	szCapacityCurvesGrid->Add( szActorDefense, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxStaticBoxSizer* szActorIntelligence;
	szActorIntelligence = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Intelligence") ), wxHORIZONTAL );
	
	bmpActorIntelligence = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 100, 50 ), wxSUNKEN_BORDER );
	szActorIntelligence->Add( bmpActorIntelligence, 0, 0, 0 );
	
	szCapacityCurvesGrid->Add( szActorIntelligence, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxStaticBoxSizer* szActorAgility;
	szActorAgility = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Agility") ), wxHORIZONTAL );
	
	bmpActorAgility = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 100, 50 ), wxSUNKEN_BORDER );
	szActorAgility->Add( bmpActorAgility, 0, 0, 0 );
	
	szCapacityCurvesGrid->Add( szActorAgility, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szCapacityCurves->Add( szCapacityCurvesGrid, 1, wxEXPAND, 0 );
	
	szRightBottomLeftTop->Add( szCapacityCurves, 1, wxLEFT|wxRIGHT, 1 );
	
	szRightBottomLeft->Add( szRightBottomLeftTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szActorExperienceCurve;
	szActorExperienceCurve = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Experience curve") ), wxHORIZONTAL );
	
	tcActorExperienceCurve = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxTE_CENTRE|wxTE_READONLY );
	szActorExperienceCurve->Add( tcActorExperienceCurve, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnActorExperienceCurve = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnActorExperienceCurve->SetDefault(); 
	szActorExperienceCurve->Add( btnActorExperienceCurve, 0, 0, 0 );
	
	szRightBottomLeft->Add( szActorExperienceCurve, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szRight->Add( szRightBottomLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRightBottomRight;
	szRightBottomRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szActorAnimationWithoutWeapons;
	szActorAnimationWithoutWeapons = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Animation without weapons") ), wxHORIZONTAL );
	
	wxArrayString chActorAnimationWithoutWeaponsChoices;
	chActorAnimationWithoutWeapons = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorAnimationWithoutWeaponsChoices, 0 );
	chActorAnimationWithoutWeapons->SetSelection( 0 );
	szActorAnimationWithoutWeapons->Add( chActorAnimationWithoutWeapons, 1, 0, 0 );
	
	szRightBottomRight->Add( szActorAnimationWithoutWeapons, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szRightBottomRightMiddle;
	szRightBottomRightMiddle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Skills") ), wxVERTICAL );
	
	lcActorSkills = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), wxLC_REPORT|wxSUNKEN_BORDER );
	szRightBottomRightMiddle->Add( lcActorSkills, 1, wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szActorSkillsBattleCommand;
	szActorSkillsBattleCommand = new wxBoxSizer( wxHORIZONTAL );
	
	chbActorSkillsBattleCommand = new wxCheckBox( this, wxID_ANY, _("Battle command:"), wxDefaultPosition, wxDefaultSize, 0 );
	chbActorSkillsBattleCommand->SetValue(true); 
	szActorSkillsBattleCommand->Add( chbActorSkillsBattleCommand, 0, wxRIGHT|wxTOP|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcActorSkillsBattleCommand = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	szActorSkillsBattleCommand->Add( tcActorSkillsBattleCommand, 1, wxLEFT|wxTOP, 1 );
	
	szRightBottomRightMiddle->Add( szActorSkillsBattleCommand, 0, wxEXPAND, 0 );
	
	szRightBottomRight->Add( szRightBottomRightMiddle, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szRightBottomRightBottom;
	szRightBottomRightBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szActorStateRates;
	szActorStateRates = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("State rates") ), wxHORIZONTAL );
	
	listActorStateRates = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szActorStateRates->Add( listActorStateRates, 1, wxEXPAND, 0 );
	
	szRightBottomRightBottom->Add( szActorStateRates, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szActorAttributeRates;
	szActorAttributeRates = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Attribute rates") ), wxHORIZONTAL );
	
	listActorAttributeRates = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szActorAttributeRates->Add( listActorAttributeRates, 1, wxEXPAND, 0 );
	
	szRightBottomRightBottom->Add( szActorAttributeRates, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szRightBottomRight->Add( szRightBottomRightBottom, 1, wxEXPAND, 0 );
	
	szRight->Add( szRightBottomRight, 1, wxEXPAND, 0 );
	
	szActor->Add( szRight, 1, wxEXPAND, 0 );
	
	this->SetSizer( szActor );
	this->Layout();
	szActor->Fit( this );
}

pnActor_Base::~pnActor_Base()
{
}
