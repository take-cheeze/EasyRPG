// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdWeather.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdWeather::DialogEvtCmdWeather(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdWeather::DialogEvtCmdWeather
    const wxString rbEffect_choices[] = {
        _("None"),
        _("Rain"),
        _("Snow")
    };
    rbEffect = new wxRadioBox(this, wxID_ANY, _("Effect type"), wxDefaultPosition, wxDefaultSize, 3, rbEffect_choices, 1, wxRA_SPECIFY_COLS);
    const wxString rbIntensity_choices[] = {
        _("Low"),
        _("Medium"),
        _("High")
    };
    rbIntensity = new wxRadioBox(this, wxID_ANY, _("Intensity"), wxDefaultPosition, wxDefaultSize, 3, rbIntensity_choices, 1, wxRA_SPECIFY_COLS);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdWeather::set_properties()
{
    // begin wxGlade: DialogEvtCmdWeather::set_properties
    SetTitle(_("Weather effect"));
    rbEffect->SetSelection(0);
    rbIntensity->SetSelection(0);
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdWeather::do_layout()
{
    // begin wxGlade: DialogEvtCmdWeather::do_layout
    wxBoxSizer* szWeather = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    szTop->Add(rbEffect, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szTop->Add(rbIntensity, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szWeather->Add(szTop, 0, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szWeather->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szWeather);
    szWeather->Fit(this);
    Layout();
    // end wxGlade
}

