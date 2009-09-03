// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdSystemMusic.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdSystemMusic::DialogEvtCmdSystemMusic(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdSystemMusic::DialogEvtCmdSystemMusic
    szMusic_staticbox = new wxStaticBox(this, -1, _("Music"));
    szSystemMusic2_staticbox = new wxStaticBox(this, -1, _("Music type"));
    const wxString *chSystemMusic_choices = NULL;
    chSystemMusic = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chSystemMusic_choices, 0);
    tcMusic = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnMusic = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdSystemMusic::set_properties()
{
    // begin wxGlade: DialogEvtCmdSystemMusic::set_properties
    SetTitle(_("Change system music"));
    chSystemMusic->SetMinSize(wxSize(50, -1));
    tcMusic->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdSystemMusic::do_layout()
{
    // begin wxGlade: DialogEvtCmdSystemMusic::do_layout
    wxBoxSizer* szSystemMusic = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szMusic = new wxStaticBoxSizer(szMusic_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szSystemMusic2 = new wxStaticBoxSizer(szSystemMusic2_staticbox, wxHORIZONTAL);
    szSystemMusic2->Add(chSystemMusic, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szSystemMusic2, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szMusic->Add(tcMusic, 1, wxALIGN_CENTER_VERTICAL, 0);
    szMusic->Add(btnMusic, 0, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szMusic, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szSystemMusic->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szSystemMusic->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szSystemMusic);
    szSystemMusic->Fit(this);
    Layout();
    // end wxGlade
}

