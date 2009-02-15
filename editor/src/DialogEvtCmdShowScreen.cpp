// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdShowScreen.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdShowScreen::DialogEvtCmdShowScreen(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdShowScreen::DialogEvtCmdShowScreen
    szMethod_staticbox = new wxStaticBox(this, -1, _("Method"));
    const wxString *chMethod_choices = NULL;
    chMethod = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chMethod_choices, 0);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdShowScreen::set_properties()
{
    // begin wxGlade: DialogEvtCmdShowScreen::set_properties
    SetTitle(_("Show screen"));
    chMethod->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdShowScreen::do_layout()
{
    // begin wxGlade: DialogEvtCmdShowScreen::do_layout
    wxBoxSizer* szShowScreen = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szMethod = new wxStaticBoxSizer(szMethod_staticbox, wxHORIZONTAL);
    szMethod->Add(chMethod, 1, wxALIGN_CENTER_VERTICAL, 0);
    szShowScreen->Add(szMethod, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szShowScreen->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szShowScreen);
    szShowScreen->Fit(this);
    Layout();
    // end wxGlade
}

