///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_attributes.h"

///////////////////////////////////////////////////////////////////////////

pnAttribute_Base::pnAttribute_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* szAttribute;
	szAttribute = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stAttribute = new wxStaticText( this, wxID_ANY, _("Attributes"), wxDefaultPosition, wxDefaultSize, 0 );
	stAttribute->Wrap( -1 );
	stAttribute->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stAttribute, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listAttribute = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szLeft->Add( listAttribute, 1, wxALL|wxEXPAND, 1 );
	
	btnAttributeMaxNumber = new wxButton( this, wxID_ANY, _("Max number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnAttributeMaxNumber->SetDefault(); 
	szLeft->Add( btnAttributeMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szAttribute->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szAttributeName;
	szAttributeName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcAttributeName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szAttributeName->Add( tcAttributeName, 1, 0, 0 );
	
	szRight->Add( szAttributeName, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbAttributeClassificationChoices[] = { _("Weapon attribute"), _("Magic attribute") };
	int rbAttributeClassificationNChoices = sizeof( rbAttributeClassificationChoices ) / sizeof( wxString );
	rbAttributeClassification = new wxRadioBox( this, wxID_ANY, _("Classification"), wxDefaultPosition, wxDefaultSize, rbAttributeClassificationNChoices, rbAttributeClassificationChoices, 1, wxRA_SPECIFY_COLS );
	rbAttributeClassification->SetSelection( 0 );
	szRight->Add( rbAttributeClassification, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szEffectRate;
	szEffectRate = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Effect rate") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szEffectRateGrid;
	szEffectRateGrid = new wxFlexGridSizer( 5, 3, 2, 2 );
	szEffectRateGrid->AddGrowableCol( 1 );
	szEffectRateGrid->SetFlexibleDirection( wxBOTH );
	szEffectRateGrid->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	szAttributeEffectRateA = new wxStaticText( this, wxID_ANY, _("A"), wxDefaultPosition, wxDefaultSize, 0 );
	szAttributeEffectRateA->Wrap( -1 );
	szEffectRateGrid->Add( szAttributeEffectRateA, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	SpinAttributeEffectRateA = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szEffectRateGrid->Add( SpinAttributeEffectRateA, 0, wxEXPAND, 0 );
	
	szAttributeEffectRateAPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	szAttributeEffectRateAPercent->Wrap( -1 );
	szEffectRateGrid->Add( szAttributeEffectRateAPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szAttributeEffectRateB = new wxStaticText( this, wxID_ANY, _("B"), wxDefaultPosition, wxDefaultSize, 0 );
	szAttributeEffectRateB->Wrap( -1 );
	szEffectRateGrid->Add( szAttributeEffectRateB, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	SpinAttributeEffectRateB = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szEffectRateGrid->Add( SpinAttributeEffectRateB, 0, wxEXPAND, 0 );
	
	szAttributeEffectRateBPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	szAttributeEffectRateBPercent->Wrap( -1 );
	szEffectRateGrid->Add( szAttributeEffectRateBPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szAttributeEffectRateC = new wxStaticText( this, wxID_ANY, _("C"), wxDefaultPosition, wxDefaultSize, 0 );
	szAttributeEffectRateC->Wrap( -1 );
	szEffectRateGrid->Add( szAttributeEffectRateC, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	SpinAttributeEffectRateC = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szEffectRateGrid->Add( SpinAttributeEffectRateC, 0, wxEXPAND, 0 );
	
	szAttributeEffectRateCPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	szAttributeEffectRateCPercent->Wrap( -1 );
	szEffectRateGrid->Add( szAttributeEffectRateCPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szAttributeEffectRateD = new wxStaticText( this, wxID_ANY, _("D"), wxDefaultPosition, wxDefaultSize, 0 );
	szAttributeEffectRateD->Wrap( -1 );
	szEffectRateGrid->Add( szAttributeEffectRateD, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	SpinAttributeEffectRateD = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szEffectRateGrid->Add( SpinAttributeEffectRateD, 0, wxEXPAND, 0 );
	
	szAttributeEffectRateDPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	szAttributeEffectRateDPercent->Wrap( -1 );
	szEffectRateGrid->Add( szAttributeEffectRateDPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szAttributeEffectRateE = new wxStaticText( this, wxID_ANY, _("E"), wxDefaultPosition, wxDefaultSize, 0 );
	szAttributeEffectRateE->Wrap( -1 );
	szEffectRateGrid->Add( szAttributeEffectRateE, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	SpinAttributeEffectRateE = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	szEffectRateGrid->Add( SpinAttributeEffectRateE, 0, wxEXPAND, 0 );
	
	szAttributeEffectRateEPercent = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	szAttributeEffectRateEPercent->Wrap( -1 );
	szEffectRateGrid->Add( szAttributeEffectRateEPercent, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szEffectRate->Add( szEffectRateGrid, 1, wxEXPAND, 0 );
	
	szRight->Add( szEffectRate, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szAttribute->Add( szRight, 0, wxEXPAND, 0 );
	
	this->SetSizer( szAttribute );
	this->Layout();
	szAttribute->Fit( this );
}

pnAttribute_Base::~pnAttribute_Base()
{
}
