// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdActorName.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdActorName::DialogEvtCmdActorName(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdActorName::DialogEvtCmdActorName
    szName_staticbox = new wxStaticBox(this, -1, _("Name"));
    szActor_staticbox = new wxStaticBox(this, -1, _("Actor"));
    const wxString *chActor_choices = NULL;
    chActor = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chActor_choices, 0);
    tcName = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdActorName::set_properties()
{
    // begin wxGlade: DialogEvtCmdActorName::set_properties
    SetTitle(_("Change actor name"));
    chActor->SetMinSize(wxSize(50, -1));
    tcName->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdActorName::do_layout()
{
    // begin wxGlade: DialogEvtCmdActorName::do_layout
    wxBoxSizer* szActorName = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szName = new wxStaticBoxSizer(szName_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szActor = new wxStaticBoxSizer(szActor_staticbox, wxHORIZONTAL);
    szActor->Add(chActor, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szActor, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szName->Add(tcName, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szName, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szActorName->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szActorName->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szActorName);
    szActorName->Fit(this);
    Layout();
    // end wxGlade
}
