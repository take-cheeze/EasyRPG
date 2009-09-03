// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdEncounterRate.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdEncounterRate::DialogEvtCmdEncounterRate(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdEncounterRate::DialogEvtCmdEncounterRate
    szSteps_staticbox = new wxStaticBox(this, -1, _("Number of steps"));
    spinSteps = new wxSpinCtrl(this, wxID_ANY, wxT("10"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdEncounterRate::set_properties()
{
    // begin wxGlade: DialogEvtCmdEncounterRate::set_properties
    SetTitle(_("Change encounter rate"));
    spinSteps->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdEncounterRate::do_layout()
{
    // begin wxGlade: DialogEvtCmdEncounterRate::do_layout
    wxBoxSizer* szEncounterRate = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szSteps = new wxStaticBoxSizer(szSteps_staticbox, wxHORIZONTAL);
    szSteps->Add(spinSteps, 1, wxALIGN_CENTER_VERTICAL, 1);
    szEncounterRate->Add(szSteps, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szEncounterRate->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szEncounterRate);
    szEncounterRate->Fit(this);
    Layout();
    // end wxGlade
}

