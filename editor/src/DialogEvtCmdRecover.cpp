// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdRecover.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdRecover::DialogEvtCmdRecover(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdRecover::DialogEvtCmdRecover
    szTarget_staticbox = new wxStaticBox(this, -1, _("Target"));
    rbtnTargetParty = new wxRadioButton(this, wxID_ANY, _("Whole group"));
    rbtnTargetFixed = new wxRadioButton(this, wxID_ANY, _("Fixed"));
    const wxString *chTargetFixed_choices = NULL;
    chTargetFixed = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chTargetFixed_choices, 0);
    rbtnTargetVariable = new wxRadioButton(this, wxID_ANY, _("Variable"));
    tcTargetVariable = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnTargetVariable = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdRecover::set_properties()
{
    // begin wxGlade: DialogEvtCmdRecover::set_properties
    SetTitle(_("Full recover"));
    chTargetFixed->SetMinSize(wxSize(50, -1));
    tcTargetVariable->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdRecover::do_layout()
{
    // begin wxGlade: DialogEvtCmdRecover::do_layout
    wxBoxSizer* szRecover = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szTarget = new wxStaticBoxSizer(szTarget_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* gszTarget = new wxFlexGridSizer(3, 2, 2, 2);
    wxBoxSizer* szTargetVariable = new wxBoxSizer(wxHORIZONTAL);
    gszTarget->Add(rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszTarget->Add(0, 0, 1, wxEXPAND, 0);
    gszTarget->Add(rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszTarget->Add(chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszTarget->Add(rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    szTargetVariable->Add(tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTargetVariable->Add(btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszTarget->Add(szTargetVariable, 1, wxEXPAND, 0);
    gszTarget->AddGrowableCol(1);
    szTarget->Add(gszTarget, 1, wxEXPAND, 0);
    szRecover->Add(szTarget, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szRecover->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szRecover);
    szRecover->Fit(this);
    Layout();
    // end wxGlade
}

