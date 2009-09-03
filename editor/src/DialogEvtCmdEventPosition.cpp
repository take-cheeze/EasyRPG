// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdEventPosition.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdEventPosition::DialogEvtCmdEventPosition(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdEventPosition::DialogEvtCmdEventPosition
    szPositionVariable_staticbox = new wxStaticBox(this, -1, _("Origin variable"));
    szPosition_staticbox = new wxStaticBox(this, -1, _("Event position"));
    szEvent_staticbox = new wxStaticBox(this, -1, _("Event"));
    const wxString *chEvent_choices = NULL;
    chEvent = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chEvent_choices, 0);
    rbtnPositionEspecify = new wxRadioButton(this, wxID_ANY, _("Specify"));
    tcPositionEspecify = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnPositionEspecify = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    rbtnPositionVariable = new wxRadioButton(this, wxID_ANY, _("Variable"));
    stPositionVariableX = new wxStaticText(this, wxID_ANY, _("X ordinate:"));
    tcPositionVariableX = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnPositionVariableX = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    stPositionVariableY = new wxStaticText(this, wxID_ANY, _("Y ordinate:"));
    tcPositionVariableY = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnPositionVariableY = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdEventPosition::set_properties()
{
    // begin wxGlade: DialogEvtCmdEventPosition::set_properties
    SetTitle(_("Change event position"));
    chEvent->SetMinSize(wxSize(50, -1));
    tcPositionEspecify->SetMinSize(wxSize(50, -1));
    tcPositionVariableX->SetMinSize(wxSize(50, -1));
    tcPositionVariableY->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdEventPosition::do_layout()
{
    // begin wxGlade: DialogEvtCmdEventPosition::do_layout
    wxBoxSizer* szEventPosition = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szPosition = new wxStaticBoxSizer(szPosition_staticbox, wxVERTICAL);
    wxStaticBoxSizer* szPositionVariable = new wxStaticBoxSizer(szPositionVariable_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* gszPositionVariable = new wxFlexGridSizer(2, 2, 2, 2);
    wxBoxSizer* szPositionVariableY = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szPositionVariableX = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szPositionSpecify = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szEvent = new wxStaticBoxSizer(szEvent_staticbox, wxHORIZONTAL);
    szEvent->Add(chEvent, 1, wxALIGN_CENTER_VERTICAL, 0);
    szEventPosition->Add(szEvent, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szPositionSpecify->Add(rbtnPositionEspecify, 0, wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1);
    szPositionSpecify->Add(tcPositionEspecify, 1, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1);
    szPositionSpecify->Add(btnPositionEspecify, 0, wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1);
    szPosition->Add(szPositionSpecify, 0, wxEXPAND, 0);
    szPosition->Add(rbtnPositionVariable, 0, wxTOP|wxEXPAND, 1);
    gszPositionVariable->Add(stPositionVariableX, 0, wxALIGN_CENTER_VERTICAL, 0);
    szPositionVariableX->Add(tcPositionVariableX, 1, wxALIGN_CENTER_VERTICAL, 0);
    szPositionVariableX->Add(btnPositionVariableX, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPositionVariable->Add(szPositionVariableX, 1, wxEXPAND, 0);
    gszPositionVariable->Add(stPositionVariableY, 0, wxALIGN_CENTER_VERTICAL, 0);
    szPositionVariableY->Add(tcPositionVariableY, 1, wxALIGN_CENTER_VERTICAL, 0);
    szPositionVariableY->Add(btnPositionVariableY, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPositionVariable->Add(szPositionVariableY, 1, wxEXPAND, 0);
    gszPositionVariable->AddGrowableCol(1);
    szPositionVariable->Add(gszPositionVariable, 1, wxEXPAND, 0);
    szPosition->Add(szPositionVariable, 0, wxEXPAND, 0);
    szEventPosition->Add(szPosition, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szEventPosition->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szEventPosition);
    szEventPosition->Fit(this);
    Layout();
    // end wxGlade
}

