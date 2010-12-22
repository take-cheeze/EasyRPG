///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_enemies.h"

///////////////////////////////////////////////////////////////////////////

pnEnemy_Base::pnEnemy_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* szEnemy;
	szEnemy = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stEnemy = new wxStaticText( this, wxID_ANY, _("Enemies"), wxDefaultPosition, wxDefaultSize, 0 );
	stEnemy->Wrap( -1 );
	stEnemy->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stEnemy, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listEnemy = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szLeft->Add( listEnemy, 1, wxALL|wxEXPAND, 1 );
	
	btnEnemyMaxNumber = new wxButton( this, wxID_ANY, _("Max number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnEnemyMaxNumber->SetDefault(); 
	szLeft->Add( btnEnemyMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szEnemy->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightTop;
	szRightTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szRightTopLeft;
	szRightTopLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szEnemyName;
	szEnemyName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcEnemyName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szEnemyName->Add( tcEnemyName, 1, 0, 0 );
	
	szRightTopLeft->Add( szEnemyName, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szEnemyParameters;
	szEnemyParameters = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Parameters") ), wxHORIZONTAL );
	
	wxGridSizer* szEnemyParametersGrid;
	szEnemyParametersGrid = new wxGridSizer( 2, 3, 0, 2 );
	
	wxStaticBoxSizer* szEnemyMaxHP;
	szEnemyMaxHP = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Max HP") ), wxHORIZONTAL );
	
	spinEnemyMaxHP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	szEnemyMaxHP->Add( spinEnemyMaxHP, 1, 0, 0 );
	
	szEnemyParametersGrid->Add( szEnemyMaxHP, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szEnemyAttack;
	szEnemyAttack = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Attack") ), wxHORIZONTAL );
	
	spinEnemyAttack = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	szEnemyAttack->Add( spinEnemyAttack, 1, 0, 0 );
	
	szEnemyParametersGrid->Add( szEnemyAttack, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szEnemyIntelligence;
	szEnemyIntelligence = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Intelligence") ), wxHORIZONTAL );
	
	spinEnemyIntelligence = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	szEnemyIntelligence->Add( spinEnemyIntelligence, 1, 0, 0 );
	
	szEnemyParametersGrid->Add( szEnemyIntelligence, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szEnemyMaxMP;
	szEnemyMaxMP = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Max MP") ), wxHORIZONTAL );
	
	spinEnemyMaxMP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	szEnemyMaxMP->Add( spinEnemyMaxMP, 1, 0, 0 );
	
	szEnemyParametersGrid->Add( szEnemyMaxMP, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szEnemyDefense;
	szEnemyDefense = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Defense") ), wxHORIZONTAL );
	
	spinEnemyDefense = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	szEnemyDefense->Add( spinEnemyDefense, 1, 0, 0 );
	
	szEnemyParametersGrid->Add( szEnemyDefense, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szEnemyAgility;
	szEnemyAgility = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Agility") ), wxHORIZONTAL );
	
	spinEnemyAgility = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	szEnemyAgility->Add( spinEnemyAgility, 1, 0, 0 );
	
	szEnemyParametersGrid->Add( szEnemyAgility, 0, wxEXPAND, 0 );
	
	szEnemyParameters->Add( szEnemyParametersGrid, 1, 0, 0 );
	
	szRightTopLeft->Add( szEnemyParameters, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRightTop->Add( szRightTopLeft, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szEnemyGraphic;
	szEnemyGraphic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy graphic") ), wxHORIZONTAL );
	
	bmpEnemyGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 120 ), wxSUNKEN_BORDER );
	szEnemyGraphic->Add( bmpEnemyGraphic, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szEnemyGraphicOptions;
	szEnemyGraphicOptions = new wxBoxSizer( wxVERTICAL );
	
	chbEnemyGraphicTransparent = new wxCheckBox( this, wxID_ANY, _("Transparent"), wxDefaultPosition, wxDefaultSize, 0 );
	chbEnemyGraphicTransparent->SetValue(true); 
	szEnemyGraphicOptions->Add( chbEnemyGraphicTransparent, 0, wxLEFT|wxBOTTOM|wxEXPAND, 1 );
	
	chbEnemyGraphicFlying = new wxCheckBox( this, wxID_ANY, _("Flying"), wxDefaultPosition, wxDefaultSize, 0 );
	chbEnemyGraphicFlying->SetValue(true); 
	szEnemyGraphicOptions->Add( chbEnemyGraphicFlying, 0, wxLEFT|wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	
	szEnemyGraphicOptions->Add( 0,  0, 1, wxEXPAND, 0 );
	
	btnEnemyGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnEnemyGraphic->SetDefault(); 
	szEnemyGraphicOptions->Add( btnEnemyGraphic, 0, wxLEFT|wxTOP, 1 );
	
	szEnemyGraphic->Add( szEnemyGraphicOptions, 1, wxEXPAND, 0 );
	
	szRightTop->Add( szEnemyGraphic, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRight->Add( szRightTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRightBottom;
	szRightBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szRightBottomLeft;
	szRightBottomLeft = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightBottomLeftTop;
	szRightBottomLeftTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szEnemyOnSuccess;
	szEnemyOnSuccess = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("On success") ), wxHORIZONTAL );
	
	wxBoxSizer* szEnemyOnSuccessLeft;
	szEnemyOnSuccessLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szEnemyGetEXP;
	szEnemyGetEXP = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Get EXP") ), wxHORIZONTAL );
	
	spinEnemyGetEXP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	szEnemyGetEXP->Add( spinEnemyGetEXP, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szEnemyOnSuccessLeft->Add( szEnemyGetEXP, 1, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szEnemyGetMoney;
	szEnemyGetMoney = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Get money") ), wxHORIZONTAL );
	
	spinEnemyGetMoney = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	szEnemyGetMoney->Add( spinEnemyGetMoney, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szEnemyOnSuccessLeft->Add( szEnemyGetMoney, 1, wxRIGHT|wxEXPAND, 1 );
	
	szEnemyOnSuccess->Add( szEnemyOnSuccessLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szEnemyOnSuccessRight;
	szEnemyOnSuccessRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szEnemyGetItem;
	szEnemyGetItem = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Get item") ), wxHORIZONTAL );
	
	wxArrayString chEnemyGetItemChoices;
	chEnemyGetItem = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chEnemyGetItemChoices, 0 );
	chEnemyGetItem->SetSelection( 0 );
	szEnemyGetItem->Add( chEnemyGetItem, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szEnemyOnSuccessRight->Add( szEnemyGetItem, 1, wxLEFT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szEnemyGetItemChance;
	szEnemyGetItemChance = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Get item chance") ), wxHORIZONTAL );
	
	
	szEnemyGetItemChance->Add( 0,  0, 1, wxEXPAND, 0 );
	
	spinEnemyGetItemChance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szEnemyGetItemChance->Add( spinEnemyGetItemChance, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stEnemyGetItemChance = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stEnemyGetItemChance->Wrap( -1 );
	szEnemyGetItemChance->Add( stEnemyGetItemChance, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szEnemyOnSuccessRight->Add( szEnemyGetItemChance, 1, wxLEFT|wxEXPAND, 1 );
	
	szEnemyOnSuccess->Add( szEnemyOnSuccessRight, 1, wxEXPAND, 0 );
	
	szRightBottomLeftTop->Add( szEnemyOnSuccess, 1, wxLEFT|wxRIGHT, 1 );
	
	wxBoxSizer* szRightBottomLeftTopRight;
	szRightBottomLeftTopRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szEnemyCriticalHitRate;
	szEnemyCriticalHitRate = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Critical hit rate") ), wxHORIZONTAL );
	
	chbEnemyCriticalHitRate = new wxCheckBox( this, wxID_ANY, _("1 /"), wxDefaultPosition, wxDefaultSize, 0 );
	chbEnemyCriticalHitRate->SetValue(true); 
	szEnemyCriticalHitRate->Add( chbEnemyCriticalHitRate, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinEnemyCriticalHitRate = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	szEnemyCriticalHitRate->Add( spinEnemyCriticalHitRate, 0, wxALIGN_CENTER_VERTICAL, 1 );
	
	szRightBottomLeftTopRight->Add( szEnemyCriticalHitRate, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szEnemyOptions;
	szEnemyOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbEnemyFailOften = new wxCheckBox( this, wxID_ANY, _("Fails often"), wxDefaultPosition, wxDefaultSize, 0 );
	chbEnemyFailOften->SetValue(true); 
	szEnemyOptions->Add( chbEnemyFailOften, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightBottomLeftTopRight->Add( szEnemyOptions, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRightBottomLeftTop->Add( szRightBottomLeftTopRight, 0, wxEXPAND, 0 );
	
	szRightBottomLeft->Add( szRightBottomLeftTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szEnemyActions;
	szEnemyActions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actions") ), wxHORIZONTAL );
	
	lcEnemyActions = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), wxLC_REPORT|wxSUNKEN_BORDER );
	szEnemyActions->Add( lcEnemyActions, 1, wxEXPAND, 0 );
	
	szRightBottomLeft->Add( szEnemyActions, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRightBottom->Add( szRightBottomLeft, 2, wxEXPAND, 0 );
	
	wxBoxSizer* szRightBottomRight;
	szRightBottomRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szEnemyAttributesResistance;
	szEnemyAttributesResistance = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Attribute resistance") ), wxHORIZONTAL );
	
	listEnemyAttributesResistance = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szEnemyAttributesResistance->Add( listEnemyAttributesResistance, 1, wxEXPAND, 0 );
	
	szRightBottomRight->Add( szEnemyAttributesResistance, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* wzEnemyStatesResistance;
	wzEnemyStatesResistance = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("States resistance") ), wxHORIZONTAL );
	
	listEnemyStatesResistance = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	wzEnemyStatesResistance->Add( listEnemyStatesResistance, 1, wxEXPAND, 0 );
	
	szRightBottomRight->Add( wzEnemyStatesResistance, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRightBottom->Add( szRightBottomRight, 1, wxEXPAND, 0 );
	
	szRight->Add( szRightBottom, 1, wxEXPAND, 0 );
	
	szEnemy->Add( szRight, 1, wxEXPAND, 0 );
	
	this->SetSizer( szEnemy );
	this->Layout();
	szEnemy->Fit( this );
}

pnEnemy_Base::~pnEnemy_Base()
{
}
