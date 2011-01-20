///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_events_page_1.h"

///////////////////////////////////////////////////////////////////////////

dlgEvtCmdMessage_Base::dlgEvtCmdMessage_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szMessage;
	szMessage = new wxBoxSizer( wxVERTICAL );
	
	tcMessage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 523, 78 ), wxTE_MULTILINE|wxTE_LINEWRAP|wxTE_WORDWRAP );
	tcMessage->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 75, 90, 90, false, wxEmptyString ) );
	
	szMessage->Add( tcMessage, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szMessage->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szMessage );
	this->Layout();
	szMessage->Fit( this );
}

dlgEvtCmdMessage_Base::~dlgEvtCmdMessage_Base()
{
}

dlgEvtCmdMessageOptions_Base::dlgEvtCmdMessageOptions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szMessageOptions;
	szMessageOptions = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbWindowTypeChoices[] = { _("Normal"), _("Transparent") };
	int rbWindowTypeNChoices = sizeof( rbWindowTypeChoices ) / sizeof( wxString );
	rbWindowType = new wxRadioBox( this, wxID_ANY, _("Window type"), wxDefaultPosition, wxDefaultSize, rbWindowTypeNChoices, rbWindowTypeChoices, 1, wxRA_SPECIFY_ROWS );
	rbWindowType->SetSelection( 0 );
	szTop->Add( rbWindowType, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbWindowPositionChoices[] = { _("Top"), _("Center"), _("Bottom") };
	int rbWindowPositionNChoices = sizeof( rbWindowPositionChoices ) / sizeof( wxString );
	rbWindowPosition = new wxRadioBox( this, wxID_ANY, _("Window position"), wxDefaultPosition, wxDefaultSize, rbWindowPositionNChoices, rbWindowPositionChoices, 1, wxRA_SPECIFY_ROWS );
	rbWindowPosition->SetSelection( 2 );
	szTop->Add( rbWindowPosition, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szMessageOptions->Add( szTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szMiddle;
	szMiddle = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );
	
	chbDoNotCoverPlayer = new wxCheckBox( this, wxID_ANY, _("Don't cover player position by the window"), wxDefaultPosition, wxDefaultSize, 0 );
	chbDoNotCoverPlayer->SetValue(true); 
	szMiddle->Add( chbDoNotCoverPlayer, 0, wxBOTTOM|wxEXPAND, 1 );
	
	chbDoNotStopEvent = new wxCheckBox( this, wxID_ANY, _("Continue event execution while message is shown"), wxDefaultPosition, wxDefaultSize, 0 );
	chbDoNotStopEvent->SetValue(true); 
	szMiddle->Add( chbDoNotStopEvent, 0, wxTOP|wxEXPAND, 1 );
	
	szMessageOptions->Add( szMiddle, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szMessageOptions->Add( szBottom, 1, wxALIGN_RIGHT|wxBOTTOM|wxRIGHT, 3 );
	
	this->SetSizer( szMessageOptions );
	this->Layout();
	szMessageOptions->Fit( this );
}

dlgEvtCmdMessageOptions_Base::~dlgEvtCmdMessageOptions_Base()
{
}

dlgEvtCmdFaceGraphic_Base::dlgEvtCmdFaceGraphic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szFaceGraphic;
	szFaceGraphic = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szFaceGraphic2;
	szFaceGraphic2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Face graphic") ), wxHORIZONTAL );
	
	bmpFaceGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 96, 96 ), wxSUNKEN_BORDER );
	szFaceGraphic2->Add( bmpFaceGraphic, 0, wxRIGHT, 1 );
	
	wxBoxSizer* szFaceGraphic3;
	szFaceGraphic3 = new wxBoxSizer( wxVERTICAL );
	
	btnSelect = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSelect->SetDefault(); 
	szFaceGraphic3->Add( btnSelect, 0, wxLEFT|wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	btnDelete = new wxButton( this, wxID_DELETE, _("Delete"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnDelete->SetDefault(); 
	szFaceGraphic3->Add( btnDelete, 0, wxLEFT|wxTOP|wxEXPAND, 1 );
	
	szFaceGraphic2->Add( szFaceGraphic3, 0, wxALIGN_BOTTOM, 0 );
	
	szTop->Add( szFaceGraphic2, 1, wxLEFT|wxRIGHT, 1 );
	
	wxString rbPositionChoices[] = { _("Left"), _("Right") };
	int rbPositionNChoices = sizeof( rbPositionChoices ) / sizeof( wxString );
	rbPosition = new wxRadioBox( this, wxID_ANY, _("Position"), wxDefaultPosition, wxDefaultSize, rbPositionNChoices, rbPositionChoices, 1, wxRA_SPECIFY_COLS );
	rbPosition->SetSelection( 0 );
	szTop->Add( rbPosition, 0, wxLEFT|wxRIGHT, 1 );
	
	szFaceGraphic->Add( szTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbHorizontalMirror = new wxCheckBox( this, wxID_ANY, _("Horizontal mirror"), wxDefaultPosition, wxDefaultSize, 0 );
	chbHorizontalMirror->SetValue(true); 
	szOptions->Add( chbHorizontalMirror, 1, wxALL, 1 );
	
	szFaceGraphic->Add( szOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szFaceGraphic->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szFaceGraphic );
	this->Layout();
	szFaceGraphic->Fit( this );
}

dlgEvtCmdFaceGraphic_Base::~dlgEvtCmdFaceGraphic_Base()
{
}

dlgEvtCmdChoice_Base::dlgEvtCmdChoice_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szChoice;
	szChoice = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szOptions;
	szOptions = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szOption1;
	szOption1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Option 1") ), wxHORIZONTAL );
	
	tcOption1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szOption1->Add( tcOption1, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szOptions->Add( szOption1, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOption2;
	szOption2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Option 2") ), wxHORIZONTAL );
	
	tcOption2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szOption2->Add( tcOption2, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szOptions->Add( szOption2, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOption3;
	szOption3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Option 3") ), wxHORIZONTAL );
	
	tcOption3 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szOption3->Add( tcOption3, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szOptions->Add( szOption3, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOption4;
	szOption4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Option 4") ), wxHORIZONTAL );
	
	tcOption4 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szOption4->Add( tcOption4, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szOptions->Add( szOption4, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szTop->Add( szOptions, 1, wxEXPAND, 0 );
	
	wxString rbCancelChoices[] = { _("Cancel"), _("Option 1"), _("Option 2"), _("Option 3"), _("Option 4"), _("Condition") };
	int rbCancelNChoices = sizeof( rbCancelChoices ) / sizeof( wxString );
	rbCancel = new wxRadioBox( this, wxID_ANY, _("On cancel"), wxDefaultPosition, wxDefaultSize, rbCancelNChoices, rbCancelChoices, 1, wxRA_SPECIFY_COLS );
	rbCancel->SetSelection( 2 );
	szTop->Add( rbCancel, 0, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	szChoice->Add( szTop, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szChoice->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szChoice );
	this->Layout();
	szChoice->Fit( this );
}

dlgEvtCmdChoice_Base::~dlgEvtCmdChoice_Base()
{
}

dlgEvtCmdNumberInput_Base::dlgEvtCmdNumberInput_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szNumberInput;
	szNumberInput = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szFigures;
	szFigures = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Number of figures") ), wxHORIZONTAL );
	
	spinFigures = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 95, -1 ), wxSP_ARROW_KEYS, 0, 9, 0 );
	szFigures->Add( spinFigures, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szFigures, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szVariable;
	szVariable = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Store value in variable") ), wxHORIZONTAL );
	
	tcVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125, -1 ), 0 );
	szVariable->Add( tcVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1, -1 ), wxBU_EXACTFIT );
	btnVariable->SetDefault(); 
	szVariable->Add( btnVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szVariable, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szNumberInput->Add( szTop, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szNumberInput->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szNumberInput );
	this->Layout();
	szNumberInput->Fit( this );
}

dlgEvtCmdNumberInput_Base::~dlgEvtCmdNumberInput_Base()
{
}

dlgEvtCmdSwitch_Base::dlgEvtCmdSwitch_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szSwitch;
	szSwitch = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szSwitch2;
	szSwitch2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Switch") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szSwitch3;
	szSwitch3 = new wxFlexGridSizer( 3, 2, 2, 2 );
	szSwitch3->AddGrowableCol( 1 );
	szSwitch3->AddGrowableRow( 0 );
	szSwitch3->AddGrowableRow( 1 );
	szSwitch3->AddGrowableRow( 2 );
	szSwitch3->SetFlexibleDirection( wxBOTH );
	szSwitch3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnSwitch = new wxRadioButton( this, wxID_ANY, _("Switch"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSwitch->SetValue( true ); 
	szSwitch3->Add( rbtnSwitch, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szSwitch4;
	szSwitch4 = new wxBoxSizer( wxHORIZONTAL );
	
	tcSwitch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSwitch4->Add( tcSwitch, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSwitch = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitch->SetDefault(); 
	szSwitch4->Add( btnSwitch, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSwitch3->Add( szSwitch4, 1, wxEXPAND, 0 );
	
	rbtnRange = new wxRadioButton( this, wxID_ANY, _("Range from"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnRange->SetValue( true ); 
	szSwitch3->Add( rbtnRange, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szRange;
	szRange = new wxBoxSizer( wxHORIZONTAL );
	
	spinRange1 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1, 5000, 1 );
	szRange->Add( spinRange1, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stRange = new wxStaticText( this, wxID_ANY, _("to"), wxDefaultPosition, wxDefaultSize, 0 );
	stRange->Wrap( -1 );
	szRange->Add( stRange, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinRange2 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1, 5000, 1 );
	szRange->Add( spinRange2, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szSwitch3->Add( szRange, 1, wxEXPAND, 0 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szSwitch3->Add( rbtnVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariable;
	szVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariable->Add( tcVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariable->SetDefault(); 
	szVariable->Add( btnVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSwitch3->Add( szVariable, 1, wxEXPAND, 0 );
	
	szSwitch2->Add( szSwitch3, 1, wxEXPAND, 0 );
	
	szSwitch->Add( szSwitch2, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbOperationChoices[] = { _("Enable"), _("Disable"), _("Toggle") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szSwitch->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szSwitch->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szSwitch );
	this->Layout();
	szSwitch->Fit( this );
}

dlgEvtCmdSwitch_Base::~dlgEvtCmdSwitch_Base()
{
}

dlgEvtCmdVariable_Base::dlgEvtCmdVariable_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szVariable;
	szVariable = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szSwitch;
	szSwitch = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Switch") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szSwitch2;
	szSwitch2 = new wxFlexGridSizer( 3, 3, 2, 2 );
	szSwitch2->AddGrowableCol( 1 );
	szSwitch2->AddGrowableCol( 2 );
	szSwitch2->SetFlexibleDirection( wxBOTH );
	szSwitch2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnSet = new wxRadioButton( this, wxID_ANY, _("Set"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSet->SetValue( true ); 
	szSwitch2->Add( rbtnSet, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szSwitchSet;
	szSwitchSet = new wxBoxSizer( wxHORIZONTAL );
	
	tcSwitchSet = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSwitchSet->Add( tcSwitchSet, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSwitchSet = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitchSet->SetDefault(); 
	szSwitchSet->Add( btnSwitchSet, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSwitch2->Add( szSwitchSet, 1, wxEXPAND, 0 );
	
	
	szSwitch2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnoSwitchRange = new wxRadioButton( this, wxID_ANY, _("Range from"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnoSwitchRange->SetValue( true ); 
	szSwitch2->Add( rbtnoSwitchRange, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szSwitchRange;
	szSwitchRange = new wxBoxSizer( wxHORIZONTAL );
	
	spinSwitchRange1 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1, 5000, 1 );
	szSwitchRange->Add( spinSwitchRange1, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcSwitchRange = new wxStaticText( this, wxID_ANY, _("to"), wxDefaultPosition, wxDefaultSize, 0 );
	tcSwitchRange->Wrap( -1 );
	szSwitchRange->Add( tcSwitchRange, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinSwitchRange2 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1, 5000, 1 );
	szSwitchRange->Add( spinSwitchRange2, 1, wxLEFT, 1 );
	
	szSwitch2->Add( szSwitchRange, 1, wxEXPAND, 0 );
	
	
	szSwitch2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnSwitchVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSwitchVariable->SetValue( true ); 
	szSwitch2->Add( rbtnSwitchVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szSwitchVariable;
	szSwitchVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcSwitchVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szSwitchVariable->Add( tcSwitchVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSwitchVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitchVariable->SetDefault(); 
	szSwitchVariable->Add( btnSwitchVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSwitch2->Add( szSwitchVariable, 1, wxEXPAND, 0 );
	
	stSwitchVariable = new wxStaticText( this, wxID_ANY, _("variable"), wxDefaultPosition, wxDefaultSize, 0 );
	stSwitchVariable->Wrap( -1 );
	szSwitch2->Add( stSwitchVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSwitch->Add( szSwitch2, 1, wxEXPAND, 0 );
	
	szVariable->Add( szSwitch, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbOperationChoices[] = { _("Replace"), _("Addiction"), _("Substraction"), _("Multiplication"), _("Division"), _("Remainder") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 4, wxRA_SPECIFY_COLS );
	rbOperation->SetSelection( 0 );
	szVariable->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOperand;
	szOperand = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operand") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szOperand2;
	szOperand2 = new wxFlexGridSizer( 8, 3, 2, 2 );
	szOperand2->AddGrowableCol( 1 );
	szOperand2->AddGrowableCol( 2 );
	szOperand2->SetFlexibleDirection( wxBOTH );
	szOperand2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnOperandConstant = new wxRadioButton( this, wxID_ANY, _("Constant"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandConstant->SetValue( true ); 
	szOperand2->Add( rbtnOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOperandConstant = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 0 );
	szOperand2->Add( spinOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szOperand2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnOperandVariableA = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandVariableA->SetValue( true ); 
	szOperand2->Add( rbtnOperandVariableA, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szOperandVariableA;
	szOperandVariableA = new wxBoxSizer( wxHORIZONTAL );
	
	tcOperandVariableA = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szOperandVariableA->Add( tcOperandVariableA, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnOperandVariableA = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOperandVariableA->SetDefault(); 
	szOperandVariableA->Add( btnOperandVariableA, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szOperand2->Add( szOperandVariableA, 1, wxEXPAND, 0 );
	
	
	szOperand2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnOperandVariableB = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandVariableB->SetValue( true ); 
	szOperand2->Add( rbtnOperandVariableB, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szOperandVariableB;
	szOperandVariableB = new wxBoxSizer( wxHORIZONTAL );
	
	tcOperandVariableB = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szOperandVariableB->Add( tcOperandVariableB, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnOperandVariableB = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOperandVariableB->SetDefault(); 
	szOperandVariableB->Add( btnOperandVariableB, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szOperand2->Add( szOperandVariableB, 1, wxEXPAND, 0 );
	
	stOperandVarVaiableB = new wxStaticText( this, wxID_ANY, _("variable"), wxDefaultPosition, wxDefaultSize, 0 );
	stOperandVarVaiableB->Wrap( -1 );
	szOperand2->Add( stOperandVarVaiableB, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandRandom = new wxRadioButton( this, wxID_ANY, _("Random"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandRandom->SetValue( true ); 
	szOperand2->Add( rbtnOperandRandom, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szOperandRandom;
	szOperandRandom = new wxBoxSizer( wxHORIZONTAL );
	
	spinOperandRandom1 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 0 );
	szOperandRandom->Add( spinOperandRandom1, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinOperandRandom2 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 0, 0 );
	szOperandRandom->Add( spinOperandRandom2, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szOperand2->Add( szOperandRandom, 1, wxEXPAND, 0 );
	
	
	szOperand2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnOperandObject = new wxRadioButton( this, wxID_ANY, _("Object"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandObject->SetValue( true ); 
	szOperand2->Add( rbtnOperandObject, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chOperandObjectChoices;
	chOperandObject = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chOperandObjectChoices, 0 );
	chOperandObject->SetSelection( 0 );
	szOperand2->Add( chOperandObject, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chOperandObject2Choices;
	chOperandObject2 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chOperandObject2Choices, 0 );
	chOperandObject2->SetSelection( 0 );
	szOperand2->Add( chOperandObject2, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandActor = new wxRadioButton( this, wxID_ANY, _("Actor"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandActor->SetValue( true ); 
	szOperand2->Add( rbtnOperandActor, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chOperandActorChoices;
	chOperandActor = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chOperandActorChoices, 0 );
	chOperandActor->SetSelection( 0 );
	szOperand2->Add( chOperandActor, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chOperandActor2Choices;
	chOperandActor2 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chOperandActor2Choices, 0 );
	chOperandActor2->SetSelection( 0 );
	szOperand2->Add( chOperandActor2, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandSprite = new wxRadioButton( this, wxID_ANY, _("Sprite"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandSprite->SetValue( true ); 
	szOperand2->Add( rbtnOperandSprite, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chOperandSpriteChoices;
	chOperandSprite = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chOperandSpriteChoices, 0 );
	chOperandSprite->SetSelection( 0 );
	szOperand2->Add( chOperandSprite, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chOperandSprite2Choices;
	chOperandSprite2 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chOperandSprite2Choices, 0 );
	chOperandSprite2->SetSelection( 0 );
	szOperand2->Add( chOperandSprite2, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandPut = new wxRadioButton( this, wxID_ANY, _("Put"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandPut->SetValue( true ); 
	szOperand2->Add( rbtnOperandPut, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chOperandPutChoices;
	chOperandPut = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chOperandPutChoices, 0 );
	chOperandPut->SetSelection( 0 );
	szOperand2->Add( chOperandPut, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szOperand2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szOperand->Add( szOperand2, 1, wxEXPAND, 0 );
	
	szVariable->Add( szOperand, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szVariable->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szVariable );
	this->Layout();
	szVariable->Fit( this );
}

dlgEvtCmdVariable_Base::~dlgEvtCmdVariable_Base()
{
}

dlgEvtCmdTimer_Base::dlgEvtCmdTimer_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szTimer;
	szTimer = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Set value"), _("Start"), _("Stop") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szTimer->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOperation;
	szOperation = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operation") ), wxVERTICAL );
	
	wxBoxSizer* szSet;
	szSet = new wxBoxSizer( wxHORIZONTAL );
	
	rbtnSet = new wxRadioButton( this, wxID_ANY, _("Set"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSet->SetValue( true ); 
	szSet->Add( rbtnSet, 0, wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinMinutes = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	szSet->Add( spinMinutes, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	stMinutes = new wxStaticText( this, wxID_ANY, _("minutes"), wxDefaultPosition, wxDefaultSize, 0 );
	stMinutes->Wrap( -1 );
	szSet->Add( stMinutes, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinSeconds = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	szSet->Add( spinSeconds, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	stSeconds = new wxStaticText( this, wxID_ANY, _("seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	stSeconds->Wrap( -1 );
	szSet->Add( stSeconds, 0, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szOperation->Add( szSet, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szVariable;
	szVariable = new wxBoxSizer( wxHORIZONTAL );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("By variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szVariable->Add( rbtnVariable, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariable->Add( tcVariable, 1, wxLEFT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariable->SetDefault(); 
	szVariable->Add( btnVariable, 0, wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	szOperation->Add( szVariable, 1, wxEXPAND, 0 );
	
	szTimer->Add( szOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbShowScreen = new wxCheckBox( this, wxID_ANY, _("Show in screen"), wxDefaultPosition, wxDefaultSize, 0 );
	chbShowScreen->SetValue(true); 
	szOptions->Add( chbShowScreen, 1, wxRIGHT, 0 );
	
	chbShowBattle = new wxCheckBox( this, wxID_ANY, _("show in battle"), wxDefaultPosition, wxDefaultSize, 0 );
	chbShowBattle->SetValue(true); 
	szOptions->Add( chbShowBattle, 1, wxLEFT, 0 );
	
	szTimer->Add( szOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szTimer->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szTimer );
	this->Layout();
	szTimer->Fit( this );
}

dlgEvtCmdTimer_Base::~dlgEvtCmdTimer_Base()
{
}

dlgEvtCmdMoney_Base::dlgEvtCmdMoney_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szMoney;
	szMoney = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Increase"), _("Decrease") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szMoney->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOperand;
	szOperand = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operand") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer22;
	fgSizer22 = new wxFlexGridSizer( 2, 2, 2, 2 );
	fgSizer22->AddGrowableCol( 1 );
	fgSizer22->SetFlexibleDirection( wxBOTH );
	fgSizer22->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	RadioConstant = new wxRadioButton( this, wxID_ANY, _("Constant"), wxDefaultPosition, wxDefaultSize, 0 );
	RadioConstant->SetValue( true ); 
	fgSizer22->Add( RadioConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	SpinConstant = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60, -1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer22->Add( SpinConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	RadioVar = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	RadioVar->SetValue( true ); 
	fgSizer22->Add( RadioVar, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szOperand2;
	szOperand2 = new wxBoxSizer( wxHORIZONTAL );
	
	TextVar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75, -1 ), 0 );
	szOperand2->Add( TextVar, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	BtnVar = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( 25, -1 ), 0 );
	BtnVar->SetDefault(); 
	szOperand2->Add( BtnVar, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer22->Add( szOperand2, 1, wxEXPAND, 0 );
	
	szOperand->Add( fgSizer22, 1, wxEXPAND, 0 );
	
	szMoney->Add( szOperand, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szMoney->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szMoney );
	this->Layout();
	szMoney->Fit( this );
}

dlgEvtCmdMoney_Base::~dlgEvtCmdMoney_Base()
{
}

dlgEvtCmdItem_Base::dlgEvtCmdItem_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szItem;
	szItem = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Add item"), _("Delete item") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szItem->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szObject;
	szObject = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Object") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szObject2;
	szObject2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	szObject2->AddGrowableCol( 1 );
	szObject2->SetFlexibleDirection( wxBOTH );
	szObject2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnObjectFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnObjectFixed->SetValue( true ); 
	szObject2->Add( rbtnObjectFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chObjectFixedChoices;
	chObjectFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chObjectFixedChoices, 0 );
	chObjectFixed->SetSelection( 0 );
	szObject2->Add( chObjectFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnObjectVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnObjectVariable->SetValue( true ); 
	szObject2->Add( rbtnObjectVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szObjectVariable;
	szObjectVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcObjectVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szObjectVariable->Add( tcObjectVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnObjectVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1, -1 ), wxBU_EXACTFIT );
	btnObjectVariable->SetDefault(); 
	szObjectVariable->Add( btnObjectVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szObject2->Add( szObjectVariable, 1, wxEXPAND, 0 );
	
	szObject->Add( szObject2, 1, wxEXPAND, 0 );
	
	szItem->Add( szObject, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOperand;
	szOperand = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operand") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szOperand2;
	szOperand2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	szOperand2->AddGrowableCol( 1 );
	szOperand2->SetFlexibleDirection( wxBOTH );
	szOperand2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnOperandConstant = new wxRadioButton( this, wxID_ANY, _("Constant"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandConstant->SetValue( true ); 
	szOperand2->Add( rbtnOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOperandConstant = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	szOperand2->Add( spinOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandVariable->SetValue( true ); 
	szOperand2->Add( rbtnOperandVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szOperandVariable;
	szOperandVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcOperandVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szOperandVariable->Add( tcOperandVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnOperandVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOperandVariable->SetDefault(); 
	szOperandVariable->Add( btnOperandVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szOperand2->Add( szOperandVariable, 1, wxEXPAND, 0 );
	
	szOperand->Add( szOperand2, 1, wxEXPAND, 0 );
	
	szItem->Add( szOperand, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szItem->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szItem );
	this->Layout();
	szItem->Fit( this );
}

dlgEvtCmdItem_Base::~dlgEvtCmdItem_Base()
{
}

dlgEvtCmdParty_Base::dlgEvtCmdParty_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szParty;
	szParty = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Add actor"), _("Delete actor") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szParty->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szActor;
	szActor = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor to change") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szActor2;
	szActor2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	szActor2->AddGrowableCol( 1 );
	szActor2->SetFlexibleDirection( wxBOTH );
	szActor2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnActorFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnActorFixed->SetValue( true ); 
	szActor2->Add( rbtnActorFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chActorFixedChoices;
	chActorFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorFixedChoices, 0 );
	chActorFixed->SetSelection( 0 );
	szActor2->Add( chActorFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnActorVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnActorVariable->SetValue( true ); 
	szActor2->Add( rbtnActorVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szActorVariable;
	szActorVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcActorVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szActorVariable->Add( tcActorVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnActorVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnActorVariable->SetDefault(); 
	szActorVariable->Add( btnActorVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szActor2->Add( szActorVariable, 1, wxEXPAND, 0 );
	
	szActor->Add( szActor2, 1, wxEXPAND, 0 );
	
	szParty->Add( szActor, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szParty->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szParty );
	this->Layout();
	szParty->Fit( this );
}

dlgEvtCmdParty_Base::~dlgEvtCmdParty_Base()
{
}

dlgEvtCmdExperience_Base::dlgEvtCmdExperience_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szExperience;
	szExperience = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTarget;
	szTarget = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szTarget2;
	szTarget2 = new wxFlexGridSizer( 3, 2, 2, 2 );
	szTarget2->AddGrowableCol( 1 );
	szTarget2->SetFlexibleDirection( wxBOTH );
	szTarget2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTargetFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetFixed->SetValue( true ); 
	szTarget2->Add( rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTargetParty = new wxRadioButton( this, wxID_ANY, _("Whole group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetParty->SetValue( true ); 
	szTarget2->Add( rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szTarget2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxArrayString chFixedChoices;
	chFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chFixedChoices, 0 );
	chFixed->SetSelection( 0 );
	szTarget2->Add( chFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szTarget2->Add( rbtnVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szTargetVariable;
	szTargetVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcTargetVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTargetVariable->Add( tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTargetVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTargetVariable->SetDefault(); 
	szTargetVariable->Add( btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTarget2->Add( szTargetVariable, 1, wxEXPAND, 0 );
	
	szTarget->Add( szTarget2, 1, wxEXPAND, 0 );
	
	szExperience->Add( szTarget, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbOperationChoices[] = { _("Increase experience"), _("Decrease experience") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szExperience->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOperand;
	szOperand = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operand") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szOperand2;
	szOperand2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	szOperand2->AddGrowableCol( 1 );
	szOperand2->SetFlexibleDirection( wxBOTH );
	szOperand2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnOperandConstant = new wxRadioButton( this, wxID_ANY, _("Constant"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandConstant->SetValue( true ); 
	szOperand2->Add( rbtnOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOperandConstant = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	szOperand2->Add( spinOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandVariable->SetValue( true ); 
	szOperand2->Add( rbtnOperandVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szOperandVariable;
	szOperandVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcOperandVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szOperandVariable->Add( tcOperandVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnOperandVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOperandVariable->SetDefault(); 
	szOperandVariable->Add( btnOperandVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szOperand2->Add( szOperandVariable, 1, wxEXPAND, 0 );
	
	szOperand->Add( szOperand2, 1, wxEXPAND, 0 );
	
	szExperience->Add( szOperand, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbShowMessage = new wxCheckBox( this, wxID_ANY, _("Show message if level ups"), wxDefaultPosition, wxDefaultSize, 0 );
	chbShowMessage->SetValue(true); 
	szOptions->Add( chbShowMessage, 1, 0, 0 );
	
	szExperience->Add( szOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szExperience->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szExperience );
	this->Layout();
	szExperience->Fit( this );
}

dlgEvtCmdExperience_Base::~dlgEvtCmdExperience_Base()
{
}

dlgEvtCmdLevel_Base::dlgEvtCmdLevel_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szLevel;
	szLevel = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTarget;
	szTarget = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szTarget2;
	szTarget2 = new wxFlexGridSizer( 3, 2, 2, 2 );
	szTarget2->AddGrowableCol( 1 );
	szTarget2->SetFlexibleDirection( wxBOTH );
	szTarget2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTargetParty = new wxRadioButton( this, wxID_ANY, _("Whole group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetParty->SetValue( true ); 
	szTarget2->Add( rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szTarget2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnTargetFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetFixed->SetValue( true ); 
	szTarget2->Add( rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTargetFixedChoices;
	chTargetFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTargetFixedChoices, 0 );
	chTargetFixed->SetSelection( 0 );
	szTarget2->Add( chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTargetVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetVariable->SetValue( true ); 
	szTarget2->Add( rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szTargetVariable;
	szTargetVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcTargetVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTargetVariable->Add( tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTargetVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTargetVariable->SetDefault(); 
	szTargetVariable->Add( btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTarget2->Add( szTargetVariable, 1, wxEXPAND, 0 );
	
	szTarget->Add( szTarget2, 1, wxEXPAND, 0 );
	
	szLevel->Add( szTarget, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbOperationChoices[] = { _("Increase level"), _("Decrease level") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szLevel->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOperand;
	szOperand = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operand") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szOperand2;
	szOperand2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	szOperand2->AddGrowableCol( 1 );
	szOperand2->SetFlexibleDirection( wxBOTH );
	szOperand2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnOperandConstant = new wxRadioButton( this, wxID_ANY, _("Constant"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandConstant->SetValue( true ); 
	szOperand2->Add( rbtnOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOperandConstant = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	szOperand2->Add( spinOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandVariable->SetValue( true ); 
	szOperand2->Add( rbtnOperandVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szOperandVariable;
	szOperandVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcOperandVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szOperandVariable->Add( tcOperandVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnOperandVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOperandVariable->SetDefault(); 
	szOperandVariable->Add( btnOperandVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szOperand2->Add( szOperandVariable, 1, wxEXPAND, 0 );
	
	szOperand->Add( szOperand2, 1, wxEXPAND, 0 );
	
	szLevel->Add( szOperand, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbShowMessage = new wxCheckBox( this, wxID_ANY, _("Show message of level up"), wxDefaultPosition, wxDefaultSize, 0 );
	chbShowMessage->SetValue(true); 
	szOptions->Add( chbShowMessage, 1, 0, 0 );
	
	szLevel->Add( szOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szLevel->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szLevel );
	this->Layout();
	szLevel->Fit( this );
}

dlgEvtCmdLevel_Base::~dlgEvtCmdLevel_Base()
{
}

dlgEvtCmdParameter_Base::dlgEvtCmdParameter_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szParameter;
	szParameter = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTarget;
	szTarget = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szTarget2;
	szTarget2 = new wxFlexGridSizer( 3, 2, 2, 2 );
	szTarget2->AddGrowableCol( 1 );
	szTarget2->SetFlexibleDirection( wxBOTH );
	szTarget2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTargetParty = new wxRadioButton( this, wxID_ANY, _("Whole group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetParty->SetValue( true ); 
	szTarget2->Add( rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	szTarget2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnTargetFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetFixed->SetValue( true ); 
	szTarget2->Add( rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTargetFixedChoices;
	chTargetFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTargetFixedChoices, 0 );
	chTargetFixed->SetSelection( 0 );
	szTarget2->Add( chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTargetVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetVariable->SetValue( true ); 
	szTarget2->Add( rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szTargetVariable;
	szTargetVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcTargetVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szTargetVariable->Add( tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTargetVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTargetVariable->SetDefault(); 
	szTargetVariable->Add( btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTarget2->Add( szTargetVariable, 1, wxEXPAND, 0 );
	
	szTarget->Add( szTarget2, 1, wxEXPAND, 0 );
	
	szParameter->Add( szTarget, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbOperationChoices[] = { _("Increase parameter"), _("Decrease parameter") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szMiddle->Add( rbOperation, 2, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szType;
	szType = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Parameter type") ), wxHORIZONTAL );
	
	wxArrayString chTypeChoices;
	chType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTypeChoices, 0 );
	chType->SetSelection( 0 );
	szType->Add( chType, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szMiddle->Add( szType, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szParameter->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szOperand;
	szOperand = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operand") ), wxHORIZONTAL );
	
	wxFlexGridSizer* szOperand2;
	szOperand2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	szOperand2->AddGrowableCol( 1 );
	szOperand2->SetFlexibleDirection( wxBOTH );
	szOperand2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnOperandConstant = new wxRadioButton( this, wxID_ANY, _("Constant"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandConstant->SetValue( true ); 
	szOperand2->Add( rbtnOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOperandConstant = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	szOperand2->Add( spinOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandVar = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandVar->SetValue( true ); 
	szOperand2->Add( rbtnOperandVar, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szOperandVariable;
	szOperandVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcOperandVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szOperandVariable->Add( tcOperandVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnOperandVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( -1, -1 ), wxBU_EXACTFIT );
	btnOperandVariable->SetDefault(); 
	szOperandVariable->Add( btnOperandVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szOperand2->Add( szOperandVariable, 1, wxEXPAND, 0 );
	
	szOperand->Add( szOperand2, 1, wxEXPAND, 0 );
	
	szParameter->Add( szOperand, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szParameter->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szParameter );
	this->Layout();
	szParameter->Fit( this );
}

dlgEvtCmdParameter_Base::~dlgEvtCmdParameter_Base()
{
}

dlgEvtCmdSkill_Base::dlgEvtCmdSkill_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer288;
	bSizer288 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer147;
	sbSizer147 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer32;
	fgSizer32 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer32->AddGrowableCol( 1 );
	fgSizer32->SetFlexibleDirection( wxBOTH );
	fgSizer32->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTargetParty = new wxRadioButton( this, wxID_ANY, _("Whole group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetParty->SetValue( true ); 
	fgSizer32->Add( rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	fgSizer32->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnTargetFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetFixed->SetValue( true ); 
	fgSizer32->Add( rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTargetFixedChoices;
	chTargetFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTargetFixedChoices, 0 );
	chTargetFixed->SetSelection( 0 );
	fgSizer32->Add( chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTargetVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetVariable->SetValue( true ); 
	fgSizer32->Add( rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer289;
	bSizer289 = new wxBoxSizer( wxHORIZONTAL );
	
	tcTargetVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer289->Add( tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTargetVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTargetVariable->SetDefault(); 
	bSizer289->Add( btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer32->Add( bSizer289, 1, wxEXPAND, 0 );
	
	sbSizer147->Add( fgSizer32, 1, wxEXPAND, 0 );
	
	bSizer288->Add( sbSizer147, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbOperationChoices[] = { _("Learn skill"), _("Forget skill") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	bSizer288->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer148;
	sbSizer148 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operand") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer33;
	fgSizer33 = new wxFlexGridSizer( 2, 2, 2, 2 );
	fgSizer33->AddGrowableCol( 1 );
	fgSizer33->SetFlexibleDirection( wxBOTH );
	fgSizer33->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnOperandConstant = new wxRadioButton( this, wxID_ANY, _("Constant"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandConstant->SetValue( true ); 
	fgSizer33->Add( rbtnOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chOperandConstantChoices;
	chOperandConstant = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chOperandConstantChoices, 0 );
	chOperandConstant->SetSelection( 0 );
	fgSizer33->Add( chOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandVariable->SetValue( true ); 
	fgSizer33->Add( rbtnOperandVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer290;
	bSizer290 = new wxBoxSizer( wxHORIZONTAL );
	
	tcOperandVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer290->Add( tcOperandVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnOperandVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOperandVariable->SetDefault(); 
	bSizer290->Add( btnOperandVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer33->Add( bSizer290, 1, wxEXPAND, 0 );
	
	sbSizer148->Add( fgSizer33, 1, wxEXPAND, 0 );
	
	bSizer288->Add( sbSizer148, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer291;
	bSizer291 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer291->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer291->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer291->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer288->Add( bSizer291, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer288 );
	this->Layout();
	bSizer288->Fit( this );
}

dlgEvtCmdSkill_Base::~dlgEvtCmdSkill_Base()
{
}

dlgEvtCmdEquipment_Base::dlgEvtCmdEquipment_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer461;
	bSizer461 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer468;
	sbSizer468 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer48;
	fgSizer48 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer48->AddGrowableCol( 1 );
	fgSizer48->SetFlexibleDirection( wxBOTH );
	fgSizer48->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTargetParty = new wxRadioButton( this, wxID_ANY, _("Whole group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetParty->SetValue( true ); 
	fgSizer48->Add( rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	fgSizer48->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnTargetFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetFixed->SetValue( true ); 
	fgSizer48->Add( rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTargetFixedChoices;
	chTargetFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTargetFixedChoices, 0 );
	chTargetFixed->SetSelection( 0 );
	fgSizer48->Add( chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTargetVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetVariable->SetValue( true ); 
	fgSizer48->Add( rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer462;
	bSizer462 = new wxBoxSizer( wxHORIZONTAL );
	
	tcTargetVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer462->Add( tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTargetVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTargetVariable->SetDefault(); 
	bSizer462->Add( btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer48->Add( bSizer462, 1, wxEXPAND, 0 );
	
	sbSizer468->Add( fgSizer48, 1, wxEXPAND, 0 );
	
	bSizer461->Add( sbSizer468, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbOperationChoices[] = { _("Equip"), _("Unequip") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	bSizer461->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer469;
	sbSizer469 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operand") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer49;
	fgSizer49 = new wxFlexGridSizer( 2, 2, 2, 2 );
	fgSizer49->AddGrowableCol( 1 );
	fgSizer49->SetFlexibleDirection( wxBOTH );
	fgSizer49->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnOperandConstant = new wxRadioButton( this, wxID_ANY, _("Constant"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandConstant->SetValue( true ); 
	fgSizer49->Add( rbtnOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chOperandConstantChoices;
	chOperandConstant = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chOperandConstantChoices, 0 );
	chOperandConstant->SetSelection( 0 );
	fgSizer49->Add( chOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandVariable->SetValue( true ); 
	fgSizer49->Add( rbtnOperandVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer463;
	bSizer463 = new wxBoxSizer( wxHORIZONTAL );
	
	tcOperandVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer463->Add( tcOperandVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnOperandVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOperandVariable->SetDefault(); 
	bSizer463->Add( btnOperandVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer49->Add( bSizer463, 1, wxEXPAND, 0 );
	
	sbSizer469->Add( fgSizer49, 1, wxEXPAND, 0 );
	
	bSizer461->Add( sbSizer469, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxString rbRemoveChoices[] = { _("Everything"), _("Weapon"), _("Shield"), _("Armor"), _("Helmet"), _("Accesory") };
	int rbRemoveNChoices = sizeof( rbRemoveChoices ) / sizeof( wxString );
	rbRemove = new wxRadioBox( this, wxID_ANY, _("Remove equipment"), wxDefaultPosition, wxDefaultSize, rbRemoveNChoices, rbRemoveChoices, 1, wxRA_SPECIFY_ROWS );
	rbRemove->SetSelection( 0 );
	bSizer461->Add( rbRemove, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer464;
	bSizer464 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer464->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer464->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer464->Add( wxID_HELP, 0, wxALL|wxALIGN_RIGHT, 1 );
	
	bSizer461->Add( bSizer464, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer461 );
	this->Layout();
	bSizer461->Fit( this );
}

dlgEvtCmdEquipment_Base::~dlgEvtCmdEquipment_Base()
{
}

dlgEvtCmdHP_Base::dlgEvtCmdHP_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer316;
	bSizer316 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer163;
	sbSizer163 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer37;
	fgSizer37 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer37->AddGrowableCol( 1 );
	fgSizer37->SetFlexibleDirection( wxBOTH );
	fgSizer37->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTargetParty = new wxRadioButton( this, wxID_ANY, _("Whole group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetParty->SetValue( true ); 
	fgSizer37->Add( rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	fgSizer37->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnTargetFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetFixed->SetValue( true ); 
	fgSizer37->Add( rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTargetFixedChoices;
	chTargetFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTargetFixedChoices, 0 );
	chTargetFixed->SetSelection( 0 );
	fgSizer37->Add( chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTargetVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetVariable->SetValue( true ); 
	fgSizer37->Add( rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer317;
	bSizer317 = new wxBoxSizer( wxHORIZONTAL );
	
	tcTargetVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer317->Add( tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTargetVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTargetVariable->SetDefault(); 
	bSizer317->Add( btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer37->Add( bSizer317, 1, wxEXPAND, 0 );
	
	sbSizer163->Add( fgSizer37, 1, wxEXPAND, 0 );
	
	bSizer316->Add( sbSizer163, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbOperationChoices[] = { _("Increase HP"), _("Decrease HP") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	bSizer316->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer164;
	sbSizer164 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operand") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer38;
	fgSizer38 = new wxFlexGridSizer( 2, 2, 2, 2 );
	fgSizer38->AddGrowableCol( 1 );
	fgSizer38->SetFlexibleDirection( wxBOTH );
	fgSizer38->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnOperandConstant = new wxRadioButton( this, wxID_ANY, _("Constant"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandConstant->SetValue( true ); 
	fgSizer38->Add( rbtnOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOperandConstant = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer38->Add( spinOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandVariable->SetValue( true ); 
	fgSizer38->Add( rbtnOperandVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer318;
	bSizer318 = new wxBoxSizer( wxHORIZONTAL );
	
	tcOperandVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer318->Add( tcOperandVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnOperandVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOperandVariable->SetDefault(); 
	bSizer318->Add( btnOperandVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer38->Add( bSizer318, 1, wxEXPAND, 0 );
	
	sbSizer164->Add( fgSizer38, 1, wxEXPAND, 0 );
	
	bSizer316->Add( sbSizer164, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer165;
	sbSizer165 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbAllowNoBattle = new wxCheckBox( this, wxID_ANY, _("Allow no battle"), wxDefaultPosition, wxDefaultSize, 0 );
	chbAllowNoBattle->SetValue(true); 
	sbSizer165->Add( chbAllowNoBattle, 1, 0, 0 );
	
	bSizer316->Add( sbSizer165, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer319;
	bSizer319 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer319->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer319->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer319->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer316->Add( bSizer319, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer316 );
	this->Layout();
	bSizer316->Fit( this );
}

dlgEvtCmdHP_Base::~dlgEvtCmdHP_Base()
{
}

dlgEvtCmdMP_Base::dlgEvtCmdMP_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer24;
	sbSizer24 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer7;
	fgSizer7 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer7->AddGrowableCol( 1 );
	fgSizer7->SetFlexibleDirection( wxBOTH );
	fgSizer7->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTargetParty = new wxRadioButton( this, wxID_ANY, _("Whole group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetParty->SetValue( true ); 
	fgSizer7->Add( rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	fgSizer7->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnTargetFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetFixed->SetValue( true ); 
	fgSizer7->Add( rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTargetFixedChoices;
	chTargetFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTargetFixedChoices, 0 );
	chTargetFixed->SetSelection( 0 );
	fgSizer7->Add( chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTargetVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetVariable->SetValue( true ); 
	fgSizer7->Add( rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxHORIZONTAL );
	
	tcTargetVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer45->Add( tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTargetVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTargetVariable->SetDefault(); 
	bSizer45->Add( btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer7->Add( bSizer45, 1, wxEXPAND, 0 );
	
	sbSizer24->Add( fgSizer7, 1, wxEXPAND, 0 );
	
	bSizer44->Add( sbSizer24, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbtnOperationChoices[] = { _("Increase MP"), _("Decrease MP") };
	int rbtnOperationNChoices = sizeof( rbtnOperationChoices ) / sizeof( wxString );
	rbtnOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbtnOperationNChoices, rbtnOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbtnOperation->SetSelection( 0 );
	bSizer44->Add( rbtnOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer25;
	sbSizer25 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Operand") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 2, 2, 2, 2 );
	fgSizer8->AddGrowableCol( 1 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnOperandConstant = new wxRadioButton( this, wxID_ANY, _("Constant"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandConstant->SetValue( true ); 
	fgSizer8->Add( rbtnOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	spinOperandConstant = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer8->Add( spinOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnOperandVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnOperandVariable->SetValue( true ); 
	fgSizer8->Add( rbtnOperandVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxHORIZONTAL );
	
	tcOperandVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer46->Add( tcOperandVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnOperandVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOperandVariable->SetDefault(); 
	bSizer46->Add( btnOperandVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer8->Add( bSizer46, 1, wxEXPAND, 0 );
	
	sbSizer25->Add( fgSizer8, 1, wxEXPAND, 0 );
	
	bSizer44->Add( sbSizer25, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer47->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer47->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer47->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer44->Add( bSizer47, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer44 );
	this->Layout();
	bSizer44->Fit( this );
}

dlgEvtCmdMP_Base::~dlgEvtCmdMP_Base()
{
}

dlgEvtCmdState_Base::dlgEvtCmdState_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTargetParty = new wxRadioButton( this, wxID_ANY, _("Whole group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetParty->SetValue( true ); 
	fgSizer1->Add( rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	fgSizer1->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnTargetFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetFixed->SetValue( true ); 
	fgSizer1->Add( rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTargetFixedChoices;
	chTargetFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTargetFixedChoices, 0 );
	chTargetFixed->SetSelection( 0 );
	fgSizer1->Add( chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTargetVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetVariable->SetValue( true ); 
	fgSizer1->Add( rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	tcTargetVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer9->Add( tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTargetVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTargetVariable->SetDefault(); 
	bSizer9->Add( btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer1->Add( bSizer9, 1, wxEXPAND, 0 );
	
	sbSizer3->Add( fgSizer1, 1, wxEXPAND, 0 );
	
	bSizer8->Add( sbSizer3, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbOperationChoices[] = { _("Cause state"), _("Heal state") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	bSizer10->Add( rbOperation, 3, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("State") ), wxHORIZONTAL );
	
	wxArrayString chStateChoices;
	chState = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chStateChoices, 0 );
	chState->SetSelection( 0 );
	sbSizer4->Add( chState, 1, 0, 0 );
	
	bSizer10->Add( sbSizer4, 2, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer8->Add( bSizer10, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer11->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer11->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer11->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer8->Add( bSizer11, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer8 );
	this->Layout();
	bSizer8->Fit( this );
}

dlgEvtCmdState_Base::~dlgEvtCmdState_Base()
{
}

dlgEvtCmdRecover_Base::dlgEvtCmdRecover_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer268;
	bSizer268 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer140;
	sbSizer140 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer31;
	fgSizer31 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer31->AddGrowableCol( 1 );
	fgSizer31->SetFlexibleDirection( wxBOTH );
	fgSizer31->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTargetParty = new wxRadioButton( this, wxID_ANY, _("Whole group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetParty->SetValue( true ); 
	fgSizer31->Add( rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	fgSizer31->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnTargetFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetFixed->SetValue( true ); 
	fgSizer31->Add( rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTargetFixedChoices;
	chTargetFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTargetFixedChoices, 0 );
	chTargetFixed->SetSelection( 0 );
	fgSizer31->Add( chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTargetVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetVariable->SetValue( true ); 
	fgSizer31->Add( rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer269;
	bSizer269 = new wxBoxSizer( wxHORIZONTAL );
	
	tcTargetVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer269->Add( tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTargetVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTargetVariable->SetDefault(); 
	bSizer269->Add( btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer31->Add( bSizer269, 1, wxEXPAND, 0 );
	
	sbSizer140->Add( fgSizer31, 1, wxEXPAND, 0 );
	
	bSizer268->Add( sbSizer140, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer270;
	bSizer270 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer270->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer270->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer270->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer268->Add( bSizer270, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer268 );
	this->Layout();
	bSizer268->Fit( this );
}

dlgEvtCmdRecover_Base::~dlgEvtCmdRecover_Base()
{
}

dlgEvtCmdDamage_Base::dlgEvtCmdDamage_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer178;
	bSizer178 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer91;
	sbSizer91 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Target") ), wxHORIZONTAL );
	
	wxFlexGridSizer* fgSizer21;
	fgSizer21 = new wxFlexGridSizer( 3, 2, 2, 2 );
	fgSizer21->AddGrowableCol( 1 );
	fgSizer21->SetFlexibleDirection( wxBOTH );
	fgSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnTargetParty = new wxRadioButton( this, wxID_ANY, _("Whole group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetParty->SetValue( true ); 
	fgSizer21->Add( rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	
	fgSizer21->Add( 0,  0, 1, wxEXPAND, 0 );
	
	rbtnTargetFixed = new wxRadioButton( this, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetFixed->SetValue( true ); 
	fgSizer21->Add( rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxArrayString chTargetFixedChoices;
	chTargetFixed = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTargetFixedChoices, 0 );
	chTargetFixed->SetSelection( 0 );
	fgSizer21->Add( chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	rbtnTargetVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTargetVariable->SetValue( true ); 
	fgSizer21->Add( rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer179;
	bSizer179 = new wxBoxSizer( wxHORIZONTAL );
	
	tcTargetVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer179->Add( tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnTargetVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnTargetVariable->SetDefault(); 
	bSizer179->Add( btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer21->Add( bSizer179, 1, wxEXPAND, 0 );
	
	sbSizer91->Add( fgSizer21, 1, wxEXPAND, 0 );
	
	bSizer178->Add( sbSizer91, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer180;
	bSizer180 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer92;
	sbSizer92 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Attack") ), wxHORIZONTAL );
	
	spinAttack = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	sbSizer92->Add( spinAttack, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer180->Add( sbSizer92, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer93;
	sbSizer93 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Defense influence") ), wxHORIZONTAL );
	
	spinDefense = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	sbSizer93->Add( spinDefense, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stDefense = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stDefense->Wrap( -1 );
	sbSizer93->Add( stDefense, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer180->Add( sbSizer93, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer94;
	sbSizer94 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Intelligence influence") ), wxHORIZONTAL );
	
	spinIntelligence = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	sbSizer94->Add( spinIntelligence, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stInteligence = new wxStaticText( this, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	stInteligence->Wrap( -1 );
	sbSizer94->Add( stInteligence, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer180->Add( sbSizer94, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	bSizer178->Add( bSizer180, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer181;
	bSizer181 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer95;
	sbSizer95 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Attack") ), wxHORIZONTAL );
	
	spinAttack2 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	sbSizer95->Add( spinAttack2, 1, 0, 0 );
	
	bSizer181->Add( sbSizer95, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer96;
	sbSizer96 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Variable") ), wxHORIZONTAL );
	
	chbVariableEnable = new wxCheckBox( this, wxID_ANY, _("Enable"), wxDefaultPosition, wxDefaultSize, 0 );
	chbVariableEnable->SetValue(true); 
	sbSizer96->Add( chbVariableEnable, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer96->Add( tcVariable, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariable->SetDefault(); 
	sbSizer96->Add( btnVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer181->Add( sbSizer96, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	bSizer178->Add( bSizer181, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer182;
	bSizer182 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer182->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer182->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer182->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer178->Add( bSizer182, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer178 );
	this->Layout();
	bSizer178->Fit( this );
}

dlgEvtCmdDamage_Base::~dlgEvtCmdDamage_Base()
{
}

dlgEvtCmdActorName_Base::dlgEvtCmdActorName_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer285;
	bSizer285 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer286;
	bSizer286 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer145;
	sbSizer145 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor") ), wxHORIZONTAL );
	
	wxArrayString chActorChoices;
	chActor = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorChoices, 0 );
	chActor->SetSelection( 0 );
	sbSizer145->Add( chActor, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer286->Add( sbSizer145, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer146;
	sbSizer146 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	tcName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer146->Add( tcName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer286->Add( sbSizer146, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer285->Add( bSizer286, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer287;
	bSizer287 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer287->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer287->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer287->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer285->Add( bSizer287, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer285 );
	this->Layout();
	bSizer285->Fit( this );
}

dlgEvtCmdActorName_Base::~dlgEvtCmdActorName_Base()
{
}

dlgEvtCmdActorTitle_Base::dlgEvtCmdActorTitle_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer72;
	bSizer72 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer73;
	bSizer73 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer39;
	sbSizer39 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor") ), wxHORIZONTAL );
	
	wxArrayString chActorChoices;
	chActor = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorChoices, 0 );
	chActor->SetSelection( 0 );
	sbSizer39->Add( chActor, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer73->Add( sbSizer39, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer40;
	sbSizer40 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Title") ), wxHORIZONTAL );
	
	tcTitle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer40->Add( tcTitle, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer73->Add( sbSizer40, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer72->Add( bSizer73, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer74;
	bSizer74 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer74->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer74->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer74->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer72->Add( bSizer74, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer72 );
	this->Layout();
	bSizer72->Fit( this );
}

dlgEvtCmdActorTitle_Base::~dlgEvtCmdActorTitle_Base()
{
}

dlgEvtCmdActorGraphic_Base::dlgEvtCmdActorGraphic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer305;
	bSizer305 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer306;
	bSizer306 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer159;
	sbSizer159 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor") ), wxHORIZONTAL );
	
	wxArrayString chActorChoices;
	chActor = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 100, -1 ), chActorChoices, 0 );
	chActor->SetSelection( 0 );
	sbSizer159->Add( chActor, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer306->Add( sbSizer159, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	wxStaticBoxSizer* sbSizer160;
	sbSizer160 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Graphic") ), wxHORIZONTAL );
	
	bmpGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	sbSizer160->Add( bmpGraphic, 0, wxRIGHT, 1 );
	
	wxBoxSizer* bSizer307;
	bSizer307 = new wxBoxSizer( wxVERTICAL );
	
	chbTranslucent = new wxCheckBox( this, wxID_ANY, _("Translucent"), wxDefaultPosition, wxDefaultSize, 0 );
	chbTranslucent->SetValue(true); 
	bSizer307->Add( chbTranslucent, 0, wxLEFT|wxBOTTOM, 1 );
	
	btnGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnGraphic->SetDefault(); 
	bSizer307->Add( btnGraphic, 0, wxLEFT|wxTOP|wxEXPAND, 1 );
	
	sbSizer160->Add( bSizer307, 0, wxEXPAND, 0 );
	
	bSizer306->Add( sbSizer160, 0, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	bSizer305->Add( bSizer306, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer308;
	bSizer308 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer308->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer308->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer308->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer305->Add( bSizer308, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer305 );
	this->Layout();
	bSizer305->Fit( this );
}

dlgEvtCmdActorGraphic_Base::~dlgEvtCmdActorGraphic_Base()
{
}

dlgEvtCmdActorFaceGraphic_Base::dlgEvtCmdActorFaceGraphic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer155;
	bSizer155 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer156;
	bSizer156 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer80;
	sbSizer80 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Actor") ), wxHORIZONTAL );
	
	wxArrayString chActorChoices;
	chActor = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 100, -1 ), chActorChoices, 0 );
	chActor->SetSelection( 0 );
	sbSizer80->Add( chActor, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer156->Add( sbSizer80, 2, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	wxStaticBoxSizer* sbSizer81;
	sbSizer81 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Face graphic") ), wxHORIZONTAL );
	
	bmpFaceGraphic = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 96, 96 ), wxSUNKEN_BORDER );
	sbSizer81->Add( bmpFaceGraphic, 0, wxRIGHT, 1 );
	
	btnFaceGraphic = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnFaceGraphic->SetDefault(); 
	sbSizer81->Add( btnFaceGraphic, 1, wxLEFT, 1 );
	
	bSizer156->Add( sbSizer81, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer155->Add( bSizer156, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer157;
	bSizer157 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer157->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer157->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer157->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer155->Add( bSizer157, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer155 );
	this->Layout();
	bSizer155->Fit( this );
}

dlgEvtCmdActorFaceGraphic_Base::~dlgEvtCmdActorFaceGraphic_Base()
{
}

dlgEvtCmdVehicleGraphic_Base::dlgEvtCmdVehicleGraphic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer211;
	bSizer211 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer212;
	bSizer212 = new wxBoxSizer( wxHORIZONTAL );
	
	wxString rbOperationChoices[] = { _("Small ship"), _("Big ship"), _("Aeroship") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_COLS );
	rbOperation->SetSelection( 0 );
	bSizer212->Add( rbOperation, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer114;
	sbSizer114 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Vehicle graphic") ), wxHORIZONTAL );
	
	bmpVehicle = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 48, 64 ), wxSUNKEN_BORDER );
	sbSizer114->Add( bmpVehicle, 0, wxRIGHT, 1 );
	
	btnVehicle = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVehicle->SetDefault(); 
	sbSizer114->Add( btnVehicle, 0, wxLEFT, 1 );
	
	bSizer212->Add( sbSizer114, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer211->Add( bSizer212, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer213;
	bSizer213 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer213->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer213->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer213->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer211->Add( bSizer213, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer211 );
	this->Layout();
	bSizer211->Fit( this );
}

dlgEvtCmdVehicleGraphic_Base::~dlgEvtCmdVehicleGraphic_Base()
{
}

dlgEvtCmdSystemMusic_Base::dlgEvtCmdSystemMusic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer241;
	bSizer241 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer242;
	bSizer242 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer124;
	sbSizer124 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Music type") ), wxHORIZONTAL );
	
	wxArrayString chSystemMusicChoices;
	chSystemMusic = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemMusicChoices, 0 );
	chSystemMusic->SetSelection( 0 );
	sbSizer124->Add( chSystemMusic, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer242->Add( sbSizer124, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer125;
	sbSizer125 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Music") ), wxHORIZONTAL );
	
	tcMusic = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer125->Add( tcMusic, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnMusic = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnMusic->SetDefault(); 
	sbSizer125->Add( btnMusic, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer242->Add( sbSizer125, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer241->Add( bSizer242, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer243;
	bSizer243 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer243->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer243->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer243->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer241->Add( bSizer243, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer241 );
	this->Layout();
	bSizer241->Fit( this );
}

dlgEvtCmdSystemMusic_Base::~dlgEvtCmdSystemMusic_Base()
{
}

dlgEvtCmdSystemSound_Base::dlgEvtCmdSystemSound_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer77;
	bSizer77 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer78;
	bSizer78 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer41;
	sbSizer41 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Sound type") ), wxHORIZONTAL );
	
	wxArrayString chSystemSoundChoices;
	chSystemSound = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chSystemSoundChoices, 0 );
	chSystemSound->SetSelection( 0 );
	sbSizer41->Add( chSystemSound, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer78->Add( sbSizer41, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer42;
	sbSizer42 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Sound") ), wxHORIZONTAL );
	
	tcSound = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer42->Add( tcSound, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSound = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSound->SetDefault(); 
	sbSizer42->Add( btnSound, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer78->Add( sbSizer42, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer77->Add( bSizer78, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer79;
	bSizer79 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer79->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer79->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer79->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer77->Add( bSizer79, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer77 );
	this->Layout();
	bSizer77->Fit( this );
}

dlgEvtCmdSystemSound_Base::~dlgEvtCmdSystemSound_Base()
{
}

dlgEvtCmdSystemGraphic_Base::dlgEvtCmdSystemGraphic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer174;
	bSizer174 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer175;
	bSizer175 = new wxBoxSizer( wxHORIZONTAL );
	
	listSystem = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer175->Add( listSystem, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer176;
	bSizer176 = new wxBoxSizer( wxVERTICAL );
	
	bmpSystem = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 80 ), wxSUNKEN_BORDER );
	bSizer176->Add( bmpSystem, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 1 );
	
	wxString rbBackgroundChoices[] = { _("Expanded"), _("Tiled") };
	int rbBackgroundNChoices = sizeof( rbBackgroundChoices ) / sizeof( wxString );
	rbBackground = new wxRadioBox( this, wxID_ANY, _("Background"), wxDefaultPosition, wxDefaultSize, rbBackgroundNChoices, rbBackgroundChoices, 1, wxRA_SPECIFY_COLS );
	rbBackground->SetSelection( 0 );
	bSizer176->Add( rbBackground, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxString rbFontChoices[] = { _("Gothic"), _("Modern") };
	int rbFontNChoices = sizeof( rbFontChoices ) / sizeof( wxString );
	rbFont = new wxRadioBox( this, wxID_ANY, _("Font"), wxDefaultPosition, wxDefaultSize, rbFontNChoices, rbFontChoices, 1, wxRA_SPECIFY_COLS );
	rbFont->SetSelection( 0 );
	bSizer176->Add( rbFont, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer175->Add( bSizer176, 0, wxEXPAND, 0 );
	
	bSizer174->Add( bSizer175, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer177;
	bSizer177 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer177->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer177->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer177->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer174->Add( bSizer177, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer174 );
	this->Layout();
	bSizer174->Fit( this );
}

dlgEvtCmdSystemGraphic_Base::~dlgEvtCmdSystemGraphic_Base()
{
}

dlgEvtCmdTransition_Base::dlgEvtCmdTransition_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer320;
	bSizer320 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer321;
	bSizer321 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer166;
	sbSizer166 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("In") ), wxHORIZONTAL );
	
	wxArrayString chInChoices;
	chIn = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chInChoices, 0 );
	chIn->SetSelection( 0 );
	sbSizer166->Add( chIn, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer321->Add( sbSizer166, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer167;
	sbSizer167 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Out") ), wxHORIZONTAL );
	
	wxArrayString chOutChoices;
	chOut = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chOutChoices, 0 );
	chOut->SetSelection( 0 );
	sbSizer167->Add( chOut, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer321->Add( sbSizer167, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer320->Add( bSizer321, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer322;
	bSizer322 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer322->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer322->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer322->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer320->Add( bSizer322, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer320 );
	this->Layout();
	bSizer320->Fit( this );
}

dlgEvtCmdTransition_Base::~dlgEvtCmdTransition_Base()
{
}
