///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_common_events.h"

///////////////////////////////////////////////////////////////////////////

pnCommonEvent_Base::pnCommonEvent_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* szCommonEvent;
	szCommonEvent = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	stCommonEvent = new wxStaticText( this, wxID_ANY, _("Common events"), wxDefaultPosition, wxDefaultSize, 0 );
	stCommonEvent->Wrap( -1 );
	stCommonEvent->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szLeft->Add( stCommonEvent, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	ListEvent = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szLeft->Add( ListEvent, 1, wxALL|wxEXPAND, 1 );
	
	btnCommonEventMaxNumber = new wxButton( this, wxID_ANY, _("Max Number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnCommonEventMaxNumber->SetDefault(); 
	szLeft->Add( btnCommonEventMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szCommonEvent->Add( szLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightTop;
	szRightTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szCommonEventName;
	szCommonEventName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcCommonEventName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szCommonEventName->Add( tcCommonEventName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szCommonEventName, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szCommonEventActivationConditions;
	szCommonEventActivationConditions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Activation conditions") ), wxHORIZONTAL );
	
	wxArrayString chCommonEventActivationConditionsChoices;
	chCommonEventActivationConditions = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chCommonEventActivationConditionsChoices, 0 );
	chCommonEventActivationConditions->SetSelection( 0 );
	szCommonEventActivationConditions->Add( chCommonEventActivationConditions, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szCommonEventActivationConditions, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szCommonEventConditionActivationSwitch;
	szCommonEventConditionActivationSwitch = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Condition event activation switch") ), wxHORIZONTAL );
	
	chbCommonEventConditionActivationSwitch = new wxCheckBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	chbCommonEventConditionActivationSwitch->SetValue(true); 
	szCommonEventConditionActivationSwitch->Add( chbCommonEventConditionActivationSwitch, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	tcCommonEventConditionActivationSwitch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szCommonEventConditionActivationSwitch->Add( tcCommonEventConditionActivationSwitch, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnCommonEventConditionActivationSwitch = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnCommonEventConditionActivationSwitch->SetDefault(); 
	szCommonEventConditionActivationSwitch->Add( btnCommonEventConditionActivationSwitch, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szCommonEventConditionActivationSwitch, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRight->Add( szRightTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szCommonEventExecutionContent;
	szCommonEventExecutionContent = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event execution contents") ), wxHORIZONTAL );
	
	ListCommonEventExecutionContent = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 );
	ListCommonEventExecutionContent->Append( _("<>") );
	szCommonEventExecutionContent->Add( ListCommonEventExecutionContent, 1, wxEXPAND, 0 );
	
	szRight->Add( szCommonEventExecutionContent, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szCommonEvent->Add( szRight, 1, wxEXPAND, 0 );
	
	this->SetSizer( szCommonEvent );
	this->Layout();
	szCommonEvent->Fit( this );
	
	// Connect Events
	ListCommonEventExecutionContent->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( pnCommonEvent_Base::EvtCmd_dclick ), NULL, this );
}

pnCommonEvent_Base::~pnCommonEvent_Base()
{
	// Disconnect Events
	ListCommonEventExecutionContent->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( pnCommonEvent_Base::EvtCmd_dclick ), NULL, this );
	
}
