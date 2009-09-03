// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdParty.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdParty::DialogEvtCmdParty(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdParty::DialogEvtCmdParty
    szActor_staticbox = new wxStaticBox(this, -1, _("Actor to change"));
    const wxString rbOperation_choices[] = {
        _("Add actor"),
        _("Delete actor")
    };
    rbOperation = new wxRadioBox(this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, 2, rbOperation_choices, 1, wxRA_SPECIFY_ROWS);
    rbtnActorFixed = new wxRadioButton(this, wxID_ANY, _("Fixed"));
    const wxString *chActorFixed_choices = NULL;
    chActorFixed = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chActorFixed_choices, 0);
    rbtnActorVariable = new wxRadioButton(this, wxID_ANY, _("Variable"));
    tcActorVariable = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnActorVariable = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdParty::set_properties()
{
    // begin wxGlade: DialogEvtCmdParty::set_properties
    SetTitle(_("Change party"));
    rbOperation->SetSelection(0);
    chActorFixed->SetMinSize(wxSize(50, -1));
    tcActorVariable->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdParty::do_layout()
{
    // begin wxGlade: DialogEvtCmdParty::do_layout
    wxBoxSizer* szParty = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szActor = new wxStaticBoxSizer(szActor_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* gszActor = new wxFlexGridSizer(2, 2, 2, 2);
    wxBoxSizer* szActorVariable = new wxBoxSizer(wxHORIZONTAL);
    szParty->Add(rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    gszActor->Add(rbtnActorFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszActor->Add(chActorFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszActor->Add(rbtnActorVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    szActorVariable->Add(tcActorVariable, 1, wxALIGN_CENTER_VERTICAL, 0);
    szActorVariable->Add(btnActorVariable, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszActor->Add(szActorVariable, 1, wxEXPAND, 0);
    gszActor->AddGrowableCol(1);
    szActor->Add(gszActor, 1, wxEXPAND, 0);
    szParty->Add(szActor, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szParty->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szParty);
    szParty->Fit(this);
    Layout();
    // end wxGlade
}

