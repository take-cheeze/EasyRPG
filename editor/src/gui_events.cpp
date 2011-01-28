///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_events.h"

///////////////////////////////////////////////////////////////////////////

dlgEvt_Base::dlgEvt_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szEvt;
	szEvt = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szName;
	szName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	stName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szName->Add( stName, 1, 0, 0 );
	
	szTop->Add( szName, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnNewPage = new wxButton( this, wxID_ANY, _("New page"), wxDefaultPosition, wxDefaultSize, 0 );
	btnNewPage->SetDefault(); 
	szTop->Add( btnNewPage, 1, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCopyPage = new wxButton( this, wxID_ANY, _("Copy page"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCopyPage->SetDefault(); 
	szTop->Add( btnCopyPage, 1, wxALL|wxALIGN_BOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnPastePage = new wxButton( this, wxID_ANY, _("Paste page"), wxDefaultPosition, wxDefaultSize, 0 );
	btnPastePage->SetDefault(); 
	szTop->Add( btnPastePage, 1, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnDeletePage = new wxButton( this, wxID_ANY, _("Delete page"), wxDefaultPosition, wxDefaultSize, 0 );
	btnDeletePage->SetDefault(); 
	szTop->Add( btnDeletePage, 1, wxALL|wxALIGN_BOTTOM, 1 );
	
	szEvt->Add( szTop, 0, wxEXPAND, 0 );
	
	nbPage = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	pnPage = new wxPanel( nbPage, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szPage;
	szPage = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szPageLeft;
	szPageLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szStartingConditions;
	szStartingConditions = new wxStaticBoxSizer( new wxStaticBox( pnPage, wxID_ANY, _("Starting Conditions") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szStartingConditionsGrid;
	szStartingConditionsGrid = new wxFlexGridSizer( 7, 3, 0, 0 );
	szStartingConditionsGrid->AddGrowableCol( 1 );
	szStartingConditionsGrid->SetFlexibleDirection( wxBOTH );
	szStartingConditionsGrid->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	chbSwitchA = new wxCheckBox( pnPage, wxID_ANY, _("Switch"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSwitchA->SetValue(true); 
	szStartingConditionsGrid->Add( chbSwitchA, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szSwitchA;
	szSwitchA = new wxBoxSizer( wxHORIZONTAL );
	
	tcSwitchA = new wxTextCtrl( pnPage, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSwitchA->Add( tcSwitchA, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSwitchA = new wxButton( pnPage, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitchA->SetDefault(); 
	szSwitchA->Add( btnSwitchA, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStartingConditionsGrid->Add( szSwitchA, 1, wxEXPAND, 0 );
	
	stSwitchA = new wxStaticText( pnPage, wxID_ANY, _("ON"), wxDefaultPosition, wxDefaultSize, 0 );
	stSwitchA->Wrap( -1 );
	szStartingConditionsGrid->Add( stSwitchA, 0, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	chbSwitchB = new wxCheckBox( pnPage, wxID_ANY, _("Switch"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSwitchB->SetValue(true); 
	szStartingConditionsGrid->Add( chbSwitchB, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szSwitchB;
	szSwitchB = new wxBoxSizer( wxHORIZONTAL );
	
	tcSwitchB = new wxTextCtrl( pnPage, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSwitchB->Add( tcSwitchB, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSwitchB = new wxButton( pnPage, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitchB->SetDefault(); 
	szSwitchB->Add( btnSwitchB, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStartingConditionsGrid->Add( szSwitchB, 1, wxEXPAND, 0 );
	
	stSwitchB = new wxStaticText( pnPage, wxID_ANY, _("ON"), wxDefaultPosition, wxDefaultSize, 0 );
	stSwitchB->Wrap( -1 );
	szStartingConditionsGrid->Add( stSwitchB, 0, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	chbVariable = new wxCheckBox( pnPage, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	chbVariable->SetValue(true); 
	szStartingConditionsGrid->Add( chbVariable, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szVariable1;
	szVariable1 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariable = new wxTextCtrl( pnPage, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariable1->Add( tcVariable, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnVariable = new wxButton( pnPage, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariable->SetDefault(); 
	szVariable1->Add( btnVariable, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStartingConditionsGrid->Add( szVariable1, 1, wxEXPAND, 0 );
	
	stVariable1 = new wxStaticText( pnPage, wxID_ANY, _("Above"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariable1->Wrap( -1 );
	szStartingConditionsGrid->Add( stVariable1, 0, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szStartingConditionsGrid->Add( 10,  9, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariable2;
	szVariable2 = new wxBoxSizer( wxHORIZONTAL );
	
	spinVariable = new wxSpinCtrl( pnPage, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 5000, 0 );
	szVariable2->Add( spinVariable, 0, wxALL, 1 );
	
	stVariable2 = new wxStaticText( pnPage, wxID_ANY, _("."), wxDefaultPosition, wxDefaultSize, 0 );
	stVariable2->Wrap( -1 );
	szVariable2->Add( stVariable2, 0, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStartingConditionsGrid->Add( szVariable2, 1, wxEXPAND, 0 );
	
	
	szStartingConditionsGrid->Add( 10,  9, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbObject = new wxCheckBox( pnPage, wxID_ANY, _("Object"), wxDefaultPosition, wxDefaultSize, 0 );
	chbObject->SetValue(true); 
	szStartingConditionsGrid->Add( chbObject, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chObjectChoices;
	chObject = new wxChoice( pnPage, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chObjectChoices, 0 );
	chObject->SetSelection( 0 );
	szStartingConditionsGrid->Add( chObject, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	stObject = new wxStaticText( pnPage, wxID_ANY, _("On hold"), wxDefaultPosition, wxDefaultSize, 0 );
	stObject->Wrap( -1 );
	szStartingConditionsGrid->Add( stObject, 0, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	chbActor = new wxCheckBox( pnPage, wxID_ANY, _("Actor"), wxDefaultPosition, wxDefaultSize, 0 );
	chbActor->SetValue(true); 
	szStartingConditionsGrid->Add( chbActor, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chActorChoices;
	chActor = new wxChoice( pnPage, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorChoices, 0 );
	chActor->SetSelection( 0 );
	szStartingConditionsGrid->Add( chActor, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	stActor = new wxStaticText( pnPage, wxID_ANY, _("In party"), wxDefaultPosition, wxDefaultSize, 0 );
	stActor->Wrap( -1 );
	szStartingConditionsGrid->Add( stActor, 0, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	chbTimer = new wxCheckBox( pnPage, wxID_ANY, _("Timer"), wxDefaultPosition, wxDefaultSize, 0 );
	chbTimer->SetValue(true); 
	szStartingConditionsGrid->Add( chbTimer, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szTimer;
	szTimer = new wxBoxSizer( wxHORIZONTAL );
	
	spinTimerMinutes = new wxSpinCtrl( pnPage, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	szTimer->Add( spinTimerMinutes, 1, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTimerColon = new wxStaticText( pnPage, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	stTimerColon->Wrap( -1 );
	szTimer->Add( stTimerColon, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinTimerSeconds = new wxSpinCtrl( pnPage, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	szTimer->Add( spinTimerSeconds, 1, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStartingConditionsGrid->Add( szTimer, 1, wxEXPAND, 0 );
	
	stTimer = new wxStaticText( pnPage, wxID_ANY, _("Remaining"), wxDefaultPosition, wxDefaultSize, 0 );
	stTimer->Wrap( -1 );
	szStartingConditionsGrid->Add( stTimer, 0, wxLEFT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	szStartingConditions->Add( szStartingConditionsGrid, 1, wxEXPAND, 0 );
	
	szPageLeft->Add( szStartingConditions, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szPageLeftBottom;
	szPageLeftBottom = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szPageLeftBottomLeft;
	szPageLeftBottomLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szGraphic;
	szGraphic = new wxStaticBoxSizer( new wxStaticBox( pnPage, wxID_ANY, _("Selected graphic") ), wxHORIZONTAL );
	
	bmpGraphic = new wxStaticBitmap( pnPage, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	szGraphic->Add( bmpGraphic, 0, wxRIGHT, 1 );
	
	wxBoxSizer* szGraphicOptions;
	szGraphicOptions = new wxBoxSizer( wxVERTICAL );
	
	chbGraphicTranslucent = new wxCheckBox( pnPage, wxID_ANY, _("Translucent"), wxDefaultPosition, wxDefaultSize, 0 );
	chbGraphicTranslucent->SetValue(true); 
	szGraphicOptions->Add( chbGraphicTranslucent, 1, wxLEFT|wxBOTTOM, 1 );
	
	btnGraphic = new wxButton( pnPage, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnGraphic->SetDefault(); 
	szGraphicOptions->Add( btnGraphic, 0, wxLEFT|wxTOP, 1 );
	
	szGraphic->Add( szGraphicOptions, 0, wxEXPAND, 0 );
	
	szPageLeftBottomLeft->Add( szGraphic, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szMovement;
	szMovement = new wxStaticBoxSizer( new wxStaticBox( pnPage, wxID_ANY, _("Movement type") ), wxVERTICAL );
	
	wxArrayString chMovementChoices;
	chMovement = new wxChoice( pnPage, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMovementChoices, 0 );
	chMovement->SetSelection( 0 );
	szMovement->Add( chMovement, 0, wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szMovementRate;
	szMovementRate = new wxBoxSizer( wxHORIZONTAL );
	
	stMovementRate = new wxStaticText( pnPage, wxID_ANY, _("Rate:"), wxDefaultPosition, wxDefaultSize, 0 );
	stMovementRate->Wrap( -1 );
	szMovementRate->Add( stMovementRate, 0, wxRIGHT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chMovementRateChoices;
	chMovementRate = new wxChoice( pnPage, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMovementRateChoices, 0 );
	chMovementRate->SetSelection( 0 );
	szMovementRate->Add( chMovementRate, 1, wxLEFT|wxTOP|wxBOTTOM, 1 );
	
	szMovement->Add( szMovementRate, 0, wxEXPAND, 0 );
	
	btnMovementCreatePath = new wxButton( pnPage, wxID_ANY, _("Create path"), wxDefaultPosition, wxDefaultSize, 0 );
	btnMovementCreatePath->SetDefault(); 
	szMovement->Add( btnMovementCreatePath, 0, wxTOP|wxEXPAND, 1 );
	
	szPageLeftBottomLeft->Add( szMovement, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szPageLeftBottom->Add( szPageLeftBottomLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szPageLeftBottomRight;
	szPageLeftBottomRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTrigger;
	szTrigger = new wxStaticBoxSizer( new wxStaticBox( pnPage, wxID_ANY, _("Starting trigger") ), wxHORIZONTAL );
	
	wxArrayString chTriggerChoices;
	chTrigger = new wxChoice( pnPage, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTriggerChoices, 0 );
	chTrigger->SetSelection( 0 );
	szTrigger->Add( chTrigger, 1, 0, 0 );
	
	szPageLeftBottomRight->Add( szTrigger, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szPriority;
	szPriority = new wxStaticBoxSizer( new wxStaticBox( pnPage, wxID_ANY, _("Priority") ), wxVERTICAL );
	
	wxArrayString chPriorityChoices;
	chPriority = new wxChoice( pnPage, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chPriorityChoices, 0 );
	chPriority->SetSelection( 0 );
	szPriority->Add( chPriority, 0, wxBOTTOM|wxEXPAND, 1 );
	
	chOverlap = new wxCheckBox( pnPage, wxID_ANY, _("Allow overlap"), wxDefaultPosition, wxDefaultSize, 0 );
	chOverlap->SetValue(true); 
	szPriority->Add( chOverlap, 0, wxTOP|wxEXPAND, 1 );
	
	szPageLeftBottomRight->Add( szPriority, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szAnimation;
	szAnimation = new wxStaticBoxSizer( new wxStaticBox( pnPage, wxID_ANY, _("Animation type") ), wxHORIZONTAL );
	
	wxArrayString chAnimationChoices;
	chAnimation = new wxChoice( pnPage, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chAnimationChoices, 0 );
	chAnimation->SetSelection( 0 );
	szAnimation->Add( chAnimation, 1, 0, 0 );
	
	szPageLeftBottomRight->Add( szAnimation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSpeed;
	szSpeed = new wxStaticBoxSizer( new wxStaticBox( pnPage, wxID_ANY, _("Scroll speed") ), wxHORIZONTAL );
	
	wxArrayString chSpeedChoices;
	chSpeed = new wxChoice( pnPage, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSpeedChoices, 0 );
	chSpeed->SetSelection( 0 );
	szSpeed->Add( chSpeed, 1, 0, 0 );
	
	szPageLeftBottomRight->Add( szSpeed, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szPageLeftBottom->Add( szPageLeftBottomRight, 1, 0, 0 );
	
	szPageLeft->Add( szPageLeftBottom, 0, wxEXPAND, 0 );
	
	szPage->Add( szPageLeft, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szEvtCmd;
	szEvtCmd = new wxStaticBoxSizer( new wxStaticBox( pnPage, wxID_ANY, _("Event commands") ), wxHORIZONTAL );
	
	listEvtCmd = new wxListBox( pnPage, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	listEvtCmd->Append( _("<>") );
	szEvtCmd->Add( listEvtCmd, 1, wxEXPAND, 0 );
	
	szPage->Add( szEvtCmd, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	pnPage->SetSizer( szPage );
	pnPage->Layout();
	szPage->Fit( pnPage );
	nbPage->AddPage( pnPage, _("1"), true );
	
	szEvt->Add( nbPage, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnApply = new wxButton( this, wxID_APPLY, _("&Apply"), wxDefaultPosition, wxDefaultSize, 0 );
	btnApply->SetDefault(); 
	szBottom->Add( btnApply, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szEvt->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szEvt );
	this->Layout();
	szEvt->Fit( this );
	
	// Connect Events
	listEvtCmd->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( dlgEvt_Base::EvtCmd_dclick ), NULL, this );
}

dlgEvt_Base::~dlgEvt_Base()
{
	// Disconnect Events
	listEvtCmd->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( dlgEvt_Base::EvtCmd_dclick ), NULL, this );
	
}

dlgEvtCmd_Base::dlgEvtCmd_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szEvtCmd;
	szEvtCmd = new wxBoxSizer( wxVERTICAL );
	
	pnEvtCmd = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	pnEvtCmd1 = new wxPanel( pnEvtCmd, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* szEvtCmd1;
	szEvtCmd1 = new wxGridSizer( 15, 2, 0, 0 );
	
	btnMessage = new wxButton( pnEvtCmd1, wxID_ANY, _("Show message..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnMessage->SetDefault(); 
	szEvtCmd1->Add( btnMessage, 0, wxEXPAND, 0 );
	
	btnEquipment = new wxButton( pnEvtCmd1, wxID_ANY, _("Change equipment..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnEquipment->SetDefault(); 
	szEvtCmd1->Add( btnEquipment, 0, wxEXPAND, 0 );
	
	btnMessageOptions = new wxButton( pnEvtCmd1, wxID_ANY, _("Message options..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnMessageOptions->SetDefault(); 
	szEvtCmd1->Add( btnMessageOptions, 0, wxEXPAND, 0 );
	
	btnHP = new wxButton( pnEvtCmd1, wxID_ANY, _("Change HP..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnHP->SetDefault(); 
	szEvtCmd1->Add( btnHP, 0, wxEXPAND, 0 );
	
	btnFaceGraphic = new wxButton( pnEvtCmd1, wxID_ANY, _("Show face graphic..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnFaceGraphic->SetDefault(); 
	szEvtCmd1->Add( btnFaceGraphic, 0, wxEXPAND, 0 );
	
	btnMP = new wxButton( pnEvtCmd1, wxID_ANY, _("Change MP..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnMP->SetDefault(); 
	szEvtCmd1->Add( btnMP, 0, wxEXPAND, 0 );
	
	btnChoice = new wxButton( pnEvtCmd1, wxID_ANY, _("Select option..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnChoice->SetDefault(); 
	szEvtCmd1->Add( btnChoice, 0, wxEXPAND, 0 );
	
	btnState = new wxButton( pnEvtCmd1, wxID_ANY, _("Change state..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnState->SetDefault(); 
	szEvtCmd1->Add( btnState, 0, wxEXPAND, 0 );
	
	btnNumberInput = new wxButton( pnEvtCmd1, wxID_ANY, _("Show number input..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnNumberInput->SetDefault(); 
	szEvtCmd1->Add( btnNumberInput, 0, wxEXPAND, 0 );
	
	btnRecover = new wxButton( pnEvtCmd1, wxID_ANY, _("Full recover..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnRecover->SetDefault(); 
	szEvtCmd1->Add( btnRecover, 0, wxEXPAND, 0 );
	
	btnSwitch = new wxButton( pnEvtCmd1, wxID_ANY, _("Switch operations..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSwitch->SetDefault(); 
	szEvtCmd1->Add( btnSwitch, 0, wxEXPAND, 0 );
	
	btnDamage = new wxButton( pnEvtCmd1, wxID_ANY, _("Take damage..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnDamage->SetDefault(); 
	szEvtCmd1->Add( btnDamage, 0, wxEXPAND, 0 );
	
	btnVariable = new wxButton( pnEvtCmd1, wxID_ANY, _("Variable operations..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnVariable->SetDefault(); 
	szEvtCmd1->Add( btnVariable, 0, wxEXPAND, 0 );
	
	btnActorName = new wxButton( pnEvtCmd1, wxID_ANY, _("Change actor name..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnActorName->SetDefault(); 
	szEvtCmd1->Add( btnActorName, 0, wxEXPAND, 0 );
	
	btnTimer = new wxButton( pnEvtCmd1, wxID_ANY, _("Timer operations..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTimer->SetDefault(); 
	szEvtCmd1->Add( btnTimer, 0, wxEXPAND, 0 );
	
	btnActorTitle = new wxButton( pnEvtCmd1, wxID_ANY, _("Change actor title..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnActorTitle->SetDefault(); 
	szEvtCmd1->Add( btnActorTitle, 0, wxEXPAND, 0 );
	
	btnMoney = new wxButton( pnEvtCmd1, wxID_ANY, _("Change money amount..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnMoney->SetDefault(); 
	szEvtCmd1->Add( btnMoney, 0, wxEXPAND, 0 );
	
	btnActorGraphic = new wxButton( pnEvtCmd1, wxID_ANY, _("Change actor graphic..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnActorGraphic->SetDefault(); 
	szEvtCmd1->Add( btnActorGraphic, 0, wxEXPAND, 0 );
	
	btnItem = new wxButton( pnEvtCmd1, wxID_ANY, _("Change item..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnItem->SetDefault(); 
	szEvtCmd1->Add( btnItem, 0, wxEXPAND, 0 );
	
	btnActorFaceGraphic = new wxButton( pnEvtCmd1, wxID_ANY, _("Change actor face graphic..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnActorFaceGraphic->SetDefault(); 
	szEvtCmd1->Add( btnActorFaceGraphic, 0, wxEXPAND, 0 );
	
	btnParty = new wxButton( pnEvtCmd1, wxID_ANY, _("Change party..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnParty->SetDefault(); 
	szEvtCmd1->Add( btnParty, 0, wxEXPAND, 0 );
	
	btnVehicleGraphic = new wxButton( pnEvtCmd1, wxID_ANY, _("Change vehicle graphic..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnVehicleGraphic->SetDefault(); 
	szEvtCmd1->Add( btnVehicleGraphic, 0, wxEXPAND, 0 );
	
	btnExperience = new wxButton( pnEvtCmd1, wxID_ANY, _("Change experience..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnExperience->SetDefault(); 
	szEvtCmd1->Add( btnExperience, 0, wxEXPAND, 0 );
	
	btnSystemMusic = new wxButton( pnEvtCmd1, wxID_ANY, _("Change system music..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSystemMusic->SetDefault(); 
	szEvtCmd1->Add( btnSystemMusic, 0, wxEXPAND, 0 );
	
	btnLevel = new wxButton( pnEvtCmd1, wxID_ANY, _("Change level..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnLevel->SetDefault(); 
	szEvtCmd1->Add( btnLevel, 0, wxEXPAND, 0 );
	
	btnSystemSound = new wxButton( pnEvtCmd1, wxID_ANY, _("Change system sound..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSystemSound->SetDefault(); 
	szEvtCmd1->Add( btnSystemSound, 0, wxEXPAND, 0 );
	
	btnParameter = new wxButton( pnEvtCmd1, wxID_ANY, _("Change parameter..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnParameter->SetDefault(); 
	szEvtCmd1->Add( btnParameter, 0, wxEXPAND, 0 );
	
	btnSystemGraphic = new wxButton( pnEvtCmd1, wxID_ANY, _("Change system graphic..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSystemGraphic->SetDefault(); 
	szEvtCmd1->Add( btnSystemGraphic, 0, wxEXPAND, 0 );
	
	btnSkill = new wxButton( pnEvtCmd1, wxID_ANY, _("Change skill..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSkill->SetDefault(); 
	szEvtCmd1->Add( btnSkill, 0, wxEXPAND, 0 );
	
	btnTransition = new wxButton( pnEvtCmd1, wxID_ANY, _("Change window transition..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTransition->SetDefault(); 
	szEvtCmd1->Add( btnTransition, 0, wxEXPAND, 0 );
	
	pnEvtCmd1->SetSizer( szEvtCmd1 );
	pnEvtCmd1->Layout();
	szEvtCmd1->Fit( pnEvtCmd1 );
	pnEvtCmd->AddPage( pnEvtCmd1, _("1"), true );
	pnEvtCmd2 = new wxPanel( pnEvtCmd, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* szEvtCmd2;
	szEvtCmd2 = new wxGridSizer( 15, 2, 0, 0 );
	
	btnBattle = new wxButton( pnEvtCmd2, wxID_ANY, _("Start battle..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnBattle->SetDefault(); 
	szEvtCmd2->Add( btnBattle, 0, wxEXPAND, 0 );
	
	btnTone = new wxButton( pnEvtCmd2, wxID_ANY, _("Change screen tone..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTone->SetDefault(); 
	szEvtCmd2->Add( btnTone, 0, wxEXPAND, 0 );
	
	btnCommerce = new wxButton( pnEvtCmd2, wxID_ANY, _("Visit commerce..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnCommerce->SetDefault(); 
	szEvtCmd2->Add( btnCommerce, 0, wxEXPAND, 0 );
	
	btnFlashScreen = new wxButton( pnEvtCmd2, wxID_ANY, _("Flash screen..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnFlashScreen->SetDefault(); 
	szEvtCmd2->Add( btnFlashScreen, 0, wxEXPAND, 0 );
	
	btnInn = new wxButton( pnEvtCmd2, wxID_ANY, _("Visit inn..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnInn->SetDefault(); 
	szEvtCmd2->Add( btnInn, 0, wxEXPAND, 0 );
	
	btnShake = new wxButton( pnEvtCmd2, wxID_ANY, _("Shake screen..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnShake->SetDefault(); 
	szEvtCmd2->Add( btnShake, 0, wxEXPAND, 0 );
	
	btnActorNameInput = new wxButton( pnEvtCmd2, wxID_ANY, _("Actor name input..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnActorNameInput->SetDefault(); 
	szEvtCmd2->Add( btnActorNameInput, 0, wxEXPAND, 0 );
	
	btnMoveScreen = new wxButton( pnEvtCmd2, wxID_ANY, _("Move screen..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnMoveScreen->SetDefault(); 
	szEvtCmd2->Add( btnMoveScreen, 0, wxEXPAND, 0 );
	
	btnTeleport = new wxButton( pnEvtCmd2, wxID_ANY, _("Teleport..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTeleport->SetDefault(); 
	szEvtCmd2->Add( btnTeleport, 0, wxEXPAND, 0 );
	
	btnWeather = new wxButton( pnEvtCmd2, wxID_ANY, _("Weather effect..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnWeather->SetDefault(); 
	szEvtCmd2->Add( btnWeather, 0, wxEXPAND, 0 );
	
	btnMemorizePlace = new wxButton( pnEvtCmd2, wxID_ANY, _("Memorize place..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnMemorizePlace->SetDefault(); 
	szEvtCmd2->Add( btnMemorizePlace, 0, wxEXPAND, 0 );
	
	btnPicture = new wxButton( pnEvtCmd2, wxID_ANY, _("Show picture..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnPicture->SetDefault(); 
	szEvtCmd2->Add( btnPicture, 0, wxEXPAND, 0 );
	
	btnGoToMemorizedPlace = new wxButton( pnEvtCmd2, wxID_ANY, _("Go to memorized place..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnGoToMemorizedPlace->SetDefault(); 
	szEvtCmd2->Add( btnGoToMemorizedPlace, 0, wxEXPAND, 0 );
	
	btnMovePicture = new wxButton( pnEvtCmd2, wxID_ANY, _("Move picture..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnMovePicture->SetDefault(); 
	szEvtCmd2->Add( btnMovePicture, 0, wxEXPAND, 0 );
	
	btnVehicle = new wxButton( pnEvtCmd2, wxID_ANY, _("Ride or walk vehicle"), wxDefaultPosition, wxDefaultSize, 0 );
	btnVehicle->SetDefault(); 
	szEvtCmd2->Add( btnVehicle, 0, wxEXPAND, 0 );
	
	btnDeletePicture = new wxButton( pnEvtCmd2, wxID_ANY, _("Delete picture..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnDeletePicture->SetDefault(); 
	szEvtCmd2->Add( btnDeletePicture, 0, wxEXPAND, 0 );
	
	btnVehiclePosition = new wxButton( pnEvtCmd2, wxID_ANY, _("Change vehicle position..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnVehiclePosition->SetDefault(); 
	szEvtCmd2->Add( btnVehiclePosition, 0, wxEXPAND, 0 );
	
	btnAnimation = new wxButton( pnEvtCmd2, wxID_ANY, _("Show animation..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnAnimation->SetDefault(); 
	szEvtCmd2->Add( btnAnimation, 0, wxEXPAND, 0 );
	
	btnEventPosition = new wxButton( pnEvtCmd2, wxID_ANY, _("Change event position..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnEventPosition->SetDefault(); 
	szEvtCmd2->Add( btnEventPosition, 0, wxEXPAND, 0 );
	
	btnActorTransparency = new wxButton( pnEvtCmd2, wxID_ANY, _("Change actor transparency..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnActorTransparency->SetDefault(); 
	szEvtCmd2->Add( btnActorTransparency, 0, wxEXPAND, 0 );
	
	btnSwapEvents = new wxButton( pnEvtCmd2, wxID_ANY, _("Swap events..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSwapEvents->SetDefault(); 
	szEvtCmd2->Add( btnSwapEvents, 0, wxEXPAND, 0 );
	
	btnFlashCharacter = new wxButton( pnEvtCmd2, wxID_ANY, _("Flash character..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnFlashCharacter->SetDefault(); 
	szEvtCmd2->Add( btnFlashCharacter, 0, wxEXPAND, 0 );
	
	btnGetTerrainID = new wxButton( pnEvtCmd2, wxID_ANY, _("Get terrain ID..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnGetTerrainID->SetDefault(); 
	szEvtCmd2->Add( btnGetTerrainID, 0, wxEXPAND, 0 );
	
	btnEventMovement = new wxButton( pnEvtCmd2, wxID_ANY, _("Event movement..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnEventMovement->SetDefault(); 
	szEvtCmd2->Add( btnEventMovement, 0, wxEXPAND, 0 );
	
	btnGetPositionID = new wxButton( pnEvtCmd2, wxID_ANY, _("Get position ID..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnGetPositionID->SetDefault(); 
	szEvtCmd2->Add( btnGetPositionID, 0, wxEXPAND, 0 );
	
	btnMoveAll = new wxButton( pnEvtCmd2, wxID_ANY, _("Move all"), wxDefaultPosition, wxDefaultSize, 0 );
	btnMoveAll->SetDefault(); 
	szEvtCmd2->Add( btnMoveAll, 0, wxEXPAND, 0 );
	
	btnBlankScreen = new wxButton( pnEvtCmd2, wxID_ANY, _("Blank screen..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnBlankScreen->SetDefault(); 
	szEvtCmd2->Add( btnBlankScreen, 0, wxEXPAND, 0 );
	
	btnStopAll = new wxButton( pnEvtCmd2, wxID_ANY, _("Stop all"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStopAll->SetDefault(); 
	szEvtCmd2->Add( btnStopAll, 0, wxEXPAND, 0 );
	
	btnShowScreen = new wxButton( pnEvtCmd2, wxID_ANY, _("Show screen..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnShowScreen->SetDefault(); 
	szEvtCmd2->Add( btnShowScreen, 0, wxEXPAND, 0 );
	
	btnWait = new wxButton( pnEvtCmd2, wxID_ANY, _("Wait..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnWait->SetDefault(); 
	szEvtCmd2->Add( btnWait, 0, wxEXPAND, 0 );
	
	pnEvtCmd2->SetSizer( szEvtCmd2 );
	pnEvtCmd2->Layout();
	szEvtCmd2->Fit( pnEvtCmd2 );
	pnEvtCmd->AddPage( pnEvtCmd2, _("2"), false );
	pnEvtCmd3 = new wxPanel( pnEvtCmd, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* szEvtCmd3;
	szEvtCmd3 = new wxGridSizer( 15, 2, 0, 0 );
	
	btnPlayMusic = new wxButton( pnEvtCmd3, wxID_ANY, _("Play music..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlayMusic->SetDefault(); 
	szEvtCmd3->Add( btnPlayMusic, 0, wxEXPAND, 0 );
	
	btnSaveMenu = new wxButton( pnEvtCmd3, wxID_ANY, _("Show save menu"), wxDefaultPosition, wxDefaultSize, 0 );
	btnSaveMenu->SetDefault(); 
	szEvtCmd3->Add( btnSaveMenu, 0, wxEXPAND, 0 );
	
	btnFadeMusic = new wxButton( pnEvtCmd3, wxID_ANY, _("Fade music..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnFadeMusic->SetDefault(); 
	szEvtCmd3->Add( btnFadeMusic, 0, wxEXPAND, 0 );
	
	btnSavePermissions = new wxButton( pnEvtCmd3, wxID_ANY, _("Save permissions..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSavePermissions->SetDefault(); 
	szEvtCmd3->Add( btnSavePermissions, 0, wxEXPAND, 0 );
	
	btnMemorizeMusic = new wxButton( pnEvtCmd3, wxID_ANY, _("Memorize music"), wxDefaultPosition, wxDefaultSize, 0 );
	btnMemorizeMusic->SetDefault(); 
	szEvtCmd3->Add( btnMemorizeMusic, 0, wxEXPAND, 0 );
	
	btnSystemMenu = new wxButton( pnEvtCmd3, wxID_ANY, _("Show system menu"), wxDefaultPosition, wxDefaultSize, 0 );
	btnSystemMenu->SetDefault(); 
	szEvtCmd3->Add( btnSystemMenu, 0, wxEXPAND, 0 );
	
	btnPlayMemorizedMusic = new wxButton( pnEvtCmd3, wxID_ANY, _("Play memorized music"), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlayMemorizedMusic->SetDefault(); 
	szEvtCmd3->Add( btnPlayMemorizedMusic, 0, wxEXPAND, 0 );
	
	btnSystemMenuPermissions = new wxButton( pnEvtCmd3, wxID_ANY, _("System menu permissions..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnSystemMenuPermissions->SetDefault(); 
	szEvtCmd3->Add( btnSystemMenuPermissions, 0, wxEXPAND, 0 );
	
	btnPlaySound = new wxButton( pnEvtCmd3, wxID_ANY, _("Play sound..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlaySound->SetDefault(); 
	szEvtCmd3->Add( btnPlaySound, 0, wxEXPAND, 0 );
	
	btnConditions = new wxButton( pnEvtCmd3, wxID_ANY, _("Conditions..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnConditions->SetDefault(); 
	szEvtCmd3->Add( btnConditions, 0, wxEXPAND, 0 );
	
	btnPlayVideo = new wxButton( pnEvtCmd3, wxID_ANY, _("Play video..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlayVideo->SetDefault(); 
	szEvtCmd3->Add( btnPlayVideo, 0, wxEXPAND, 0 );
	
	btnLabel = new wxButton( pnEvtCmd3, wxID_ANY, _("Set label..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnLabel->SetDefault(); 
	szEvtCmd3->Add( btnLabel, 0, wxEXPAND, 0 );
	
	btnKeyAssignment = new wxButton( pnEvtCmd3, wxID_ANY, _("Key assignment..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnKeyAssignment->SetDefault(); 
	szEvtCmd3->Add( btnKeyAssignment, 0, wxEXPAND, 0 );
	
	btnGoToLabel = new wxButton( pnEvtCmd3, wxID_ANY, _("Go to label..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnGoToLabel->SetDefault(); 
	szEvtCmd3->Add( btnGoToLabel, 0, wxEXPAND, 0 );
	
	btnTileset = new wxButton( pnEvtCmd3, wxID_ANY, _("Change map tileset..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTileset->SetDefault(); 
	szEvtCmd3->Add( btnTileset, 0, wxEXPAND, 0 );
	
	btnLoop = new wxButton( pnEvtCmd3, wxID_ANY, _("Loop"), wxDefaultPosition, wxDefaultSize, 0 );
	btnLoop->SetDefault(); 
	szEvtCmd3->Add( btnLoop, 0, wxEXPAND, 0 );
	
	btnPanorama = new wxButton( pnEvtCmd3, wxID_ANY, _("Change map background..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnPanorama->SetDefault(); 
	szEvtCmd3->Add( btnPanorama, 0, wxEXPAND, 0 );
	
	btnBreakLoop = new wxButton( pnEvtCmd3, wxID_ANY, _("Break loop"), wxDefaultPosition, wxDefaultSize, 0 );
	btnBreakLoop->SetDefault(); 
	szEvtCmd3->Add( btnBreakLoop, 0, wxEXPAND, 0 );
	
	btnEncounterRate = new wxButton( pnEvtCmd3, wxID_ANY, _("Change encounter rate..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnEncounterRate->SetDefault(); 
	szEvtCmd3->Add( btnEncounterRate, 0, wxEXPAND, 0 );
	
	btnStopEventProcess = new wxButton( pnEvtCmd3, wxID_ANY, _("Stop event process"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStopEventProcess->SetDefault(); 
	szEvtCmd3->Add( btnStopEventProcess, 0, wxEXPAND, 0 );
	
	btnTile = new wxButton( pnEvtCmd3, wxID_ANY, _("Change tile..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTile->SetDefault(); 
	szEvtCmd3->Add( btnTile, 0, wxEXPAND, 0 );
	
	btnDeleteEventTemporally = new wxButton( pnEvtCmd3, wxID_ANY, _("Delete event temporally"), wxDefaultPosition, wxDefaultSize, 0 );
	btnDeleteEventTemporally->SetDefault(); 
	szEvtCmd3->Add( btnDeleteEventTemporally, 0, wxEXPAND, 0 );
	
	btnTeleportPlace = new wxButton( pnEvtCmd3, wxID_ANY, _("Change teleport place..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTeleportPlace->SetDefault(); 
	szEvtCmd3->Add( btnTeleportPlace, 0, wxEXPAND, 0 );
	
	btnCallEvent = new wxButton( pnEvtCmd3, wxID_ANY, _("Call event..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnCallEvent->SetDefault(); 
	szEvtCmd3->Add( btnCallEvent, 0, wxEXPAND, 0 );
	
	btnTeleportPermissions = new wxButton( pnEvtCmd3, wxID_ANY, _("Teleport permissions..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnTeleportPermissions->SetDefault(); 
	szEvtCmd3->Add( btnTeleportPermissions, 0, wxEXPAND, 0 );
	
	btnNote = new wxButton( pnEvtCmd3, wxID_ANY, _("Notes..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnNote->SetDefault(); 
	szEvtCmd3->Add( btnNote, 0, wxEXPAND, 0 );
	
	btnEscapePlace = new wxButton( pnEvtCmd3, wxID_ANY, _("Change escape place..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnEscapePlace->SetDefault(); 
	szEvtCmd3->Add( btnEscapePlace, 0, wxEXPAND, 0 );
	
	btnGameOver = new wxButton( pnEvtCmd3, wxID_ANY, _("Game over"), wxDefaultPosition, wxDefaultSize, 0 );
	btnGameOver->SetDefault(); 
	szEvtCmd3->Add( btnGameOver, 0, wxEXPAND, 0 );
	
	btnEscapePermissions = new wxButton( pnEvtCmd3, wxID_ANY, _("Escape permissions..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnEscapePermissions->SetDefault(); 
	szEvtCmd3->Add( btnEscapePermissions, 0, wxEXPAND, 0 );
	
	btnGoToTitle = new wxButton( pnEvtCmd3, wxID_ANY, _("Go to title screen"), wxDefaultPosition, wxDefaultSize, 0 );
	btnGoToTitle->SetDefault(); 
	szEvtCmd3->Add( btnGoToTitle, 0, wxEXPAND, 0 );
	
	pnEvtCmd3->SetSizer( szEvtCmd3 );
	pnEvtCmd3->Layout();
	szEvtCmd3->Fit( pnEvtCmd3 );
	pnEvtCmd->AddPage( pnEvtCmd3, _("3"), false );
	
	szEvtCmd->Add( pnEvtCmd, 1, wxALL|wxEXPAND, 1 );
	
	btnClose = new wxButton( this, wxID_CLOSE, _("&Close"), wxDefaultPosition, wxDefaultSize, 0 );
	btnClose->SetDefault(); 
	szEvtCmd->Add( btnClose, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szEvtCmd );
	this->Layout();
	szEvtCmd->Fit( this );
	
	// Connect Events
	btnMessage->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMessage_click ), NULL, this );
	btnEquipment->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEquipment_click ), NULL, this );
	btnMessageOptions->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMessageOptions_click ), NULL, this );
	btnHP->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnHP_click ), NULL, this );
	btnFaceGraphic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnFaceGraphic_click ), NULL, this );
	btnMP->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMP_click ), NULL, this );
	btnChoice->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnChoice_click ), NULL, this );
	btnState->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnState_click ), NULL, this );
	btnNumberInput->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnNumberInput_click ), NULL, this );
	btnRecover->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnRecover_click ), NULL, this );
	btnSwitch->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSwitch_click ), NULL, this );
	btnDamage->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnDamage_click ), NULL, this );
	btnVariable->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnVariable_click ), NULL, this );
	btnActorName->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorName_click ), NULL, this );
	btnTimer->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTimer_click ), NULL, this );
	btnActorTitle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorTitle_click ), NULL, this );
	btnMoney->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMoney_click ), NULL, this );
	btnActorGraphic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorGraphic_click ), NULL, this );
	btnItem->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnItem_click ), NULL, this );
	btnActorFaceGraphic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorFaceGraphic_click ), NULL, this );
	btnParty->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnParty_click ), NULL, this );
	btnVehicleGraphic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnVehicleGraphic_click ), NULL, this );
	btnExperience->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnExperience_click ), NULL, this );
	btnSystemMusic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSystemMusic_click ), NULL, this );
	btnLevel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnLevel_click ), NULL, this );
	btnSystemSound->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSystemSound_click ), NULL, this );
	btnParameter->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnParameter_click ), NULL, this );
	btnSystemGraphic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSystemGraphic_click ), NULL, this );
	btnSkill->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSkill_click ), NULL, this );
	btnTransition->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTransition_click ), NULL, this );
	btnBattle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnBattle_click ), NULL, this );
	btnTone->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTone_click ), NULL, this );
	btnCommerce->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnCommerce_click ), NULL, this );
	btnFlashScreen->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnFlashScreen_click ), NULL, this );
	btnInn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnInn_click ), NULL, this );
	btnShake->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnShake_click ), NULL, this );
	btnActorNameInput->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorNameInput_click ), NULL, this );
	btnMoveScreen->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMoveScreen_click ), NULL, this );
	btnTeleport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTeleport_click ), NULL, this );
	btnWeather->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnWeather_click ), NULL, this );
	btnMemorizePlace->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMemorizePlace_click ), NULL, this );
	btnPicture->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPicture_click ), NULL, this );
	btnGoToMemorizedPlace->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGoToMemorizedPlace_click ), NULL, this );
	btnMovePicture->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMovePicture_click ), NULL, this );
	btnVehicle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnVehicle_click ), NULL, this );
	btnDeletePicture->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnDeletePicture_click ), NULL, this );
	btnVehiclePosition->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnVehiclePosition_click ), NULL, this );
	btnAnimation->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnAnimation_click ), NULL, this );
	btnEventPosition->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEventPosition_click ), NULL, this );
	btnActorTransparency->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorTransparency_click ), NULL, this );
	btnSwapEvents->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSwapEvents_click ), NULL, this );
	btnFlashCharacter->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnFlashCharacter_click ), NULL, this );
	btnGetTerrainID->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGetTerrainID_click ), NULL, this );
	btnEventMovement->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEventMovement_click ), NULL, this );
	btnGetPositionID->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGetPositionID_click ), NULL, this );
	btnMoveAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMoveAll_click ), NULL, this );
	btnBlankScreen->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnBlankScreen_click ), NULL, this );
	btnStopAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnShopAll_click ), NULL, this );
	btnShowScreen->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnShowScreen_click ), NULL, this );
	btnWait->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnWait_click ), NULL, this );
	btnPlayMusic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPlayMusic_click ), NULL, this );
	btnSaveMenu->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSaveMenu_click ), NULL, this );
	btnFadeMusic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnFadeMusic_click ), NULL, this );
	btnSavePermissions->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSavePermissions_click ), NULL, this );
	btnMemorizeMusic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMemorizeMusic_click ), NULL, this );
	btnSystemMenu->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSystemMenu_click ), NULL, this );
	btnPlayMemorizedMusic->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPlayMemorizedMusic_click ), NULL, this );
	btnSystemMenuPermissions->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSystemMenuPermissions_click ), NULL, this );
	btnPlaySound->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPlaySound_click ), NULL, this );
	btnConditions->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnConditions_click ), NULL, this );
	btnPlayVideo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPlayVideo_click ), NULL, this );
	btnLabel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnLabel_click ), NULL, this );
	btnKeyAssignment->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnKeyAssignment_click ), NULL, this );
	btnGoToLabel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGoToLabel_click ), NULL, this );
	btnTileset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTileset_click ), NULL, this );
	btnLoop->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnLoop_click ), NULL, this );
	btnPanorama->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPanorama_click ), NULL, this );
	btnBreakLoop->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnBreakLoop_click ), NULL, this );
	btnEncounterRate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEncounterRate_click ), NULL, this );
	btnStopEventProcess->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnStopEventProcess_click ), NULL, this );
	btnTile->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTile_click ), NULL, this );
	btnDeleteEventTemporally->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnDeleteEventTemporally_click ), NULL, this );
	btnTeleportPlace->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTeleportPlace_click ), NULL, this );
	btnCallEvent->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnCallEvent_click ), NULL, this );
	btnTeleportPermissions->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTeleportPermissions_click ), NULL, this );
	btnNote->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnNote_click ), NULL, this );
	btnEscapePlace->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEscapePlace_click ), NULL, this );
	btnGameOver->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGameOver_click ), NULL, this );
	btnEscapePermissions->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEscapePermissions_click ), NULL, this );
	btnGoToTitle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGoToTitle_click ), NULL, this );
	btnClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::Close_click ), NULL, this );
}

dlgEvtCmd_Base::~dlgEvtCmd_Base()
{
	// Disconnect Events
	btnMessage->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMessage_click ), NULL, this );
	btnEquipment->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEquipment_click ), NULL, this );
	btnMessageOptions->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMessageOptions_click ), NULL, this );
	btnHP->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnHP_click ), NULL, this );
	btnFaceGraphic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnFaceGraphic_click ), NULL, this );
	btnMP->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMP_click ), NULL, this );
	btnChoice->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnChoice_click ), NULL, this );
	btnState->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnState_click ), NULL, this );
	btnNumberInput->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnNumberInput_click ), NULL, this );
	btnRecover->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnRecover_click ), NULL, this );
	btnSwitch->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSwitch_click ), NULL, this );
	btnDamage->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnDamage_click ), NULL, this );
	btnVariable->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnVariable_click ), NULL, this );
	btnActorName->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorName_click ), NULL, this );
	btnTimer->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTimer_click ), NULL, this );
	btnActorTitle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorTitle_click ), NULL, this );
	btnMoney->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMoney_click ), NULL, this );
	btnActorGraphic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorGraphic_click ), NULL, this );
	btnItem->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnItem_click ), NULL, this );
	btnActorFaceGraphic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorFaceGraphic_click ), NULL, this );
	btnParty->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnParty_click ), NULL, this );
	btnVehicleGraphic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnVehicleGraphic_click ), NULL, this );
	btnExperience->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnExperience_click ), NULL, this );
	btnSystemMusic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSystemMusic_click ), NULL, this );
	btnLevel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnLevel_click ), NULL, this );
	btnSystemSound->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSystemSound_click ), NULL, this );
	btnParameter->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnParameter_click ), NULL, this );
	btnSystemGraphic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSystemGraphic_click ), NULL, this );
	btnSkill->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSkill_click ), NULL, this );
	btnTransition->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTransition_click ), NULL, this );
	btnBattle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnBattle_click ), NULL, this );
	btnTone->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTone_click ), NULL, this );
	btnCommerce->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnCommerce_click ), NULL, this );
	btnFlashScreen->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnFlashScreen_click ), NULL, this );
	btnInn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnInn_click ), NULL, this );
	btnShake->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnShake_click ), NULL, this );
	btnActorNameInput->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorNameInput_click ), NULL, this );
	btnMoveScreen->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMoveScreen_click ), NULL, this );
	btnTeleport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTeleport_click ), NULL, this );
	btnWeather->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnWeather_click ), NULL, this );
	btnMemorizePlace->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMemorizePlace_click ), NULL, this );
	btnPicture->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPicture_click ), NULL, this );
	btnGoToMemorizedPlace->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGoToMemorizedPlace_click ), NULL, this );
	btnMovePicture->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMovePicture_click ), NULL, this );
	btnVehicle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnVehicle_click ), NULL, this );
	btnDeletePicture->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnDeletePicture_click ), NULL, this );
	btnVehiclePosition->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnVehiclePosition_click ), NULL, this );
	btnAnimation->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnAnimation_click ), NULL, this );
	btnEventPosition->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEventPosition_click ), NULL, this );
	btnActorTransparency->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnActorTransparency_click ), NULL, this );
	btnSwapEvents->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSwapEvents_click ), NULL, this );
	btnFlashCharacter->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnFlashCharacter_click ), NULL, this );
	btnGetTerrainID->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGetTerrainID_click ), NULL, this );
	btnEventMovement->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEventMovement_click ), NULL, this );
	btnGetPositionID->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGetPositionID_click ), NULL, this );
	btnMoveAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMoveAll_click ), NULL, this );
	btnBlankScreen->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnBlankScreen_click ), NULL, this );
	btnStopAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnShopAll_click ), NULL, this );
	btnShowScreen->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnShowScreen_click ), NULL, this );
	btnWait->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnWait_click ), NULL, this );
	btnPlayMusic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPlayMusic_click ), NULL, this );
	btnSaveMenu->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSaveMenu_click ), NULL, this );
	btnFadeMusic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnFadeMusic_click ), NULL, this );
	btnSavePermissions->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSavePermissions_click ), NULL, this );
	btnMemorizeMusic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnMemorizeMusic_click ), NULL, this );
	btnSystemMenu->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSystemMenu_click ), NULL, this );
	btnPlayMemorizedMusic->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPlayMemorizedMusic_click ), NULL, this );
	btnSystemMenuPermissions->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnSystemMenuPermissions_click ), NULL, this );
	btnPlaySound->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPlaySound_click ), NULL, this );
	btnConditions->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnConditions_click ), NULL, this );
	btnPlayVideo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPlayVideo_click ), NULL, this );
	btnLabel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnLabel_click ), NULL, this );
	btnKeyAssignment->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnKeyAssignment_click ), NULL, this );
	btnGoToLabel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGoToLabel_click ), NULL, this );
	btnTileset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTileset_click ), NULL, this );
	btnLoop->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnLoop_click ), NULL, this );
	btnPanorama->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnPanorama_click ), NULL, this );
	btnBreakLoop->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnBreakLoop_click ), NULL, this );
	btnEncounterRate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEncounterRate_click ), NULL, this );
	btnStopEventProcess->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnStopEventProcess_click ), NULL, this );
	btnTile->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTile_click ), NULL, this );
	btnDeleteEventTemporally->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnDeleteEventTemporally_click ), NULL, this );
	btnTeleportPlace->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTeleportPlace_click ), NULL, this );
	btnCallEvent->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnCallEvent_click ), NULL, this );
	btnTeleportPermissions->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnTeleportPermissions_click ), NULL, this );
	btnNote->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnNote_click ), NULL, this );
	btnEscapePlace->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEscapePlace_click ), NULL, this );
	btnGameOver->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGameOver_click ), NULL, this );
	btnEscapePermissions->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnEscapePermissions_click ), NULL, this );
	btnGoToTitle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::btnGoToTitle_click ), NULL, this );
	btnClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( dlgEvtCmd_Base::Close_click ), NULL, this );
	
}
