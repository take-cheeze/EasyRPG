// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdSwapEvents.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdSwapEvents::DialogEvtCmdSwapEvents(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdSwapEvents::DialogEvtCmdSwapEvents
    szEvent2_staticbox = new wxStaticBox(this, -1, _("Event 2"));
    szEvent1_staticbox = new wxStaticBox(this, -1, _("Event 1"));
    const wxString *chEvent1_choices = NULL;
    chEvent1 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chEvent1_choices, 0);
    const wxString *chEvent2_choices = NULL;
    chEvent2 = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chEvent2_choices, 0);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdSwapEvents::set_properties()
{
    // begin wxGlade: DialogEvtCmdSwapEvents::set_properties
    SetTitle(_("Swap events"));
    chEvent1->SetMinSize(wxSize(50, -1));
    chEvent2->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdSwapEvents::do_layout()
{
    // begin wxGlade: DialogEvtCmdSwapEvents::do_layout
    wxBoxSizer* szSwapEvents = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szEvent2 = new wxStaticBoxSizer(szEvent2_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szEvent1 = new wxStaticBoxSizer(szEvent1_staticbox, wxHORIZONTAL);
    szEvent1->Add(chEvent1, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szEvent1, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szEvent2->Add(chEvent2, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szEvent2, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szSwapEvents->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szSwapEvents->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szSwapEvents);
    szSwapEvents->Fit(this);
    Layout();
    // end wxGlade
}

