///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_items.h"

///////////////////////////////////////////////////////////////////////////

pnItem_Base::pnItem_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* szItem;
	szItem = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stItem = new wxStaticText( this, wxID_ANY, _("Items"), wxDefaultPosition, wxDefaultSize, 0 );
	stItem->Wrap( -1 );
	stItem->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stItem, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listItem = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szLeft->Add( listItem, 1, wxALL|wxEXPAND, 1 );
	
	btnItemMaxNumber = new wxButton( this, wxID_ANY, _("Max number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnItemMaxNumber->SetDefault(); 
	szLeft->Add( btnItemMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szItem->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightTop;
	szRightTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szItemName;
	szItemName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcItemName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szItemName->Add( tcItemName, 1, 0, 0 );
	
	szRightTop->Add( szItemName, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szItemType;
	szItemType = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Type") ), wxHORIZONTAL );
	
	wxArrayString chItemTypeChoices;
	chItemType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chItemTypeChoices, 0 );
	chItemType->SetSelection( 0 );
	szItemType->Add( chItemType, 1, 0, 0 );
	
	szRightTop->Add( szItemType, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szItemCost;
	szItemCost = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Cost") ), wxHORIZONTAL );
	
	spinItemCost = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	szItemCost->Add( spinItemCost, 1, 0, 0 );
	
	szRightTop->Add( szItemCost, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szItemTimesUsed;
	szItemTimesUsed = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Times used") ), wxHORIZONTAL );
	
	wxArrayString chItemTimesUsedChoices;
	chItemTimesUsed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chItemTimesUsedChoices, 0 );
	chItemTimesUsed->SetSelection( 0 );
	szItemTimesUsed->Add( chItemTimesUsed, 1, 0, 0 );
	
	szRightTop->Add( szItemTimesUsed, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRight->Add( szRightTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRightMiddle;
	szRightMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szItemDescription;
	szItemDescription = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Description") ), wxHORIZONTAL );
	
	tcItemDescription = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szItemDescription->Add( tcItemDescription, 1, 0, 0 );
	
	szRightMiddle->Add( szItemDescription, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbxItemActionRangeChoices[] = { _("One character"), _("Whole group") };
	int rbxItemActionRangeNChoices = sizeof( rbxItemActionRangeChoices ) / sizeof( wxString );
	rbxItemActionRange = new wxRadioBox( this, wxID_ANY, _("Action range"), wxDefaultPosition, wxDefaultSize, rbxItemActionRangeNChoices, rbxItemActionRangeChoices, 2, wxRA_SPECIFY_COLS );
	rbxItemActionRange->SetSelection( 0 );
	szRightMiddle->Add( rbxItemActionRange, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRight->Add( szRightMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRightBottom;
	szRightBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szItemCanBeUsedBy;
	szItemCanBeUsedBy = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Can be used by") ), wxHORIZONTAL );
	
	listItemCanBeUsedBy = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szItemCanBeUsedBy->Add( listItemCanBeUsedBy, 1, wxEXPAND, 0 );
	
	szRightBottom->Add( szItemCanBeUsedBy, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szItemChangeStates;
	szItemChangeStates = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Change states") ), wxHORIZONTAL );
	
	listItemChangeStates = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szItemChangeStates->Add( listItemChangeStates, 1, wxEXPAND, 0 );
	
	szRightBottom->Add( szItemChangeStates, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szItemRightBottomRight;
	szItemRightBottomRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szItemHPRecover;
	szItemHPRecover = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("HP recover") ), wxHORIZONTAL );
	
	stItemHPRecoverMax = new wxStaticText( this, wxID_ANY, _("Max"), wxDefaultPosition, wxDefaultSize, 0 );
	stItemHPRecoverMax->Wrap( -1 );
	szItemHPRecover->Add( stItemHPRecoverMax, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinItemHPRecoverPercent = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szItemHPRecover->Add( spinItemHPRecoverPercent, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stItemHPRecoverPercentPlus = new wxStaticText( this, wxID_ANY, _("% +"), wxDefaultPosition, wxDefaultSize, 0 );
	stItemHPRecoverPercentPlus->Wrap( -1 );
	szItemHPRecover->Add( stItemHPRecoverPercentPlus, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinItemHPRecoverPoints = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	szItemHPRecover->Add( spinItemHPRecoverPoints, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stItemHPRecoverHP = new wxStaticText( this, wxID_ANY, _("HP"), wxDefaultPosition, wxDefaultSize, 0 );
	stItemHPRecoverHP->Wrap( -1 );
	szItemHPRecover->Add( stItemHPRecoverHP, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szItemRightBottomRight->Add( szItemHPRecover, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szItemMPRecover;
	szItemMPRecover = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("MP recover") ), wxHORIZONTAL );
	
	stItemMPRecoverMax = new wxStaticText( this, wxID_ANY, _("Max"), wxDefaultPosition, wxDefaultSize, 0 );
	stItemMPRecoverMax->Wrap( -1 );
	szItemMPRecover->Add( stItemMPRecoverMax, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinItemMPRecoverPercent = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szItemMPRecover->Add( spinItemMPRecoverPercent, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stItemMPRecoverPercentPlus = new wxStaticText( this, wxID_ANY, _("% +"), wxDefaultPosition, wxDefaultSize, 0 );
	stItemMPRecoverPercentPlus->Wrap( -1 );
	szItemMPRecover->Add( stItemMPRecoverPercentPlus, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinItemMPRecoverPoints = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	szItemMPRecover->Add( spinItemMPRecoverPoints, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stItemMPRecoverMP = new wxStaticText( this, wxID_ANY, _("MP"), wxDefaultPosition, wxDefaultSize, 0 );
	stItemMPRecoverMP->Wrap( -1 );
	szItemMPRecover->Add( stItemMPRecoverMP, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szItemRightBottomRight->Add( szItemMPRecover, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szItemOptions;
	szItemOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );
	
	chbItemOptionsDisabledInBattle = new wxCheckBox( this, wxID_ANY, _("Disabled in battle"), wxDefaultPosition, wxDefaultSize, 0 );
	chbItemOptionsDisabledInBattle->SetValue(true); 
	szItemOptions->Add( chbItemOptionsDisabledInBattle, 0, wxBOTTOM|wxEXPAND, 1 );
	
	chbItemOptionsOnlySuitableInFallenCharacters = new wxCheckBox( this, wxID_ANY, _("Only usable on fallen characters"), wxDefaultPosition, wxDefaultSize, 0 );
	chbItemOptionsOnlySuitableInFallenCharacters->SetValue(true); 
	szItemOptions->Add( chbItemOptionsOnlySuitableInFallenCharacters, 0, wxTOP|wxEXPAND, 1 );
	
	szItemRightBottomRight->Add( szItemOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	szRightBottom->Add( szItemRightBottomRight, 0, wxEXPAND, 0 );
	
	szRight->Add( szRightBottom, 1, wxEXPAND, 0 );
	
	szItem->Add( szRight, 1, wxEXPAND, 0 );
	
	this->SetSizer( szItem );
	this->Layout();
	szItem->Fit( this );
}

pnItem_Base::~pnItem_Base()
{
}
