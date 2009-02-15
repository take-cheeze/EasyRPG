// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdGoToMemorizedPlace.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdGoToMemorizedPlace::DialogEvtCmdGoToMemorizedPlace(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdGoToMemorizedPlace::DialogEvtCmdGoToMemorizedPlace
    szVariable_staticbox = new wxStaticBox(this, -1, _("Place in variable"));
    stVariableMapID = new wxStaticText(this, wxID_ANY, _("Map ID:"));
    tcVariableMapID = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnVariableMapID = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    stVariableX = new wxStaticText(this, wxID_ANY, _("X ordinate:"));
    tcVariableX = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnVariableX = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    stVariableY = new wxStaticText(this, wxID_ANY, _("Y ordinate:"));
    tcVariableY = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnVariableY = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdGoToMemorizedPlace::set_properties()
{
    // begin wxGlade: DialogEvtCmdGoToMemorizedPlace::set_properties
    SetTitle(_("Go to memorized place"));
    tcVariableMapID->SetMinSize(wxSize(50, -1));
    tcVariableX->SetMinSize(wxSize(50, -1));
    tcVariableY->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdGoToMemorizedPlace::do_layout()
{
    // begin wxGlade: DialogEvtCmdGoToMemorizedPlace::do_layout
    wxBoxSizer* szGoToMemorizedPlace = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szVariable = new wxStaticBoxSizer(szVariable_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* gszVariable = new wxFlexGridSizer(3, 2, 2, 2);
    wxBoxSizer* szVariableY = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szVariableX = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szVariableMapID = new wxBoxSizer(wxHORIZONTAL);
    gszVariable->Add(stVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0);
    szVariableMapID->Add(tcVariableMapID, 1, wxALIGN_CENTER_VERTICAL, 0);
    szVariableMapID->Add(btnVariableMapID, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszVariable->Add(szVariableMapID, 1, wxEXPAND, 0);
    gszVariable->Add(stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0);
    szVariableX->Add(tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0);
    szVariableX->Add(btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszVariable->Add(szVariableX, 1, wxEXPAND, 0);
    gszVariable->Add(stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0);
    szVariableY->Add(tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0);
    szVariableY->Add(btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszVariable->Add(szVariableY, 1, wxEXPAND, 0);
    gszVariable->AddGrowableCol(1);
    szVariable->Add(gszVariable, 1, wxEXPAND, 0);
    szGoToMemorizedPlace->Add(szVariable, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szGoToMemorizedPlace->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szGoToMemorizedPlace);
    szGoToMemorizedPlace->Fit(this);
    Layout();
    // end wxGlade
}

