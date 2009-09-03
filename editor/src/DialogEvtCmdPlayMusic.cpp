// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdPlayMusic.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdPlayMusic::DialogEvtCmdPlayMusic(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdPlayMusic::DialogEvtCmdPlayMusic
    szVolume_staticbox = new wxStaticBox(this, -1, _("Volume"));
    szTempo_staticbox = new wxStaticBox(this, -1, _("Tempo"));
    szBalance_staticbox = new wxStaticBox(this, -1, _("Balance"));
    szFadeIn_staticbox = new wxStaticBox(this, -1, _("Fade in"));
    const wxString *listMusic_choices = NULL;
    listMusic = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, listMusic_choices, 0);
    slFadeIn = new wxSlider(this, wxID_ANY, 0, 0, 10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS);
    stFadeInNone = new wxStaticText(this, wxID_ANY, _("None"));
    stFadeIn5Seconds = new wxStaticText(this, wxID_ANY, _("5 sec."));
    stFadeIn10Seconds = new wxStaticText(this, wxID_ANY, _("10 sec."));
    slVolume = new wxSlider(this, wxID_ANY, 10, 0, 10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS);
    stVolume0Percent = new wxStaticText(this, wxID_ANY, _("0%"));
    stVolume50Percent = new wxStaticText(this, wxID_ANY, _("50%"));
    stVolume100Percent = new wxStaticText(this, wxID_ANY, _("100%"));
    slTempo = new wxSlider(this, wxID_ANY, 5, 0, 10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS);
    stTempo50Percent = new wxStaticText(this, wxID_ANY, _("50%"));
    stTempo100Percent = new wxStaticText(this, wxID_ANY, _("100%"));
    stTempo150Percent = new wxStaticText(this, wxID_ANY, _("150%"));
    slBalance = new wxSlider(this, wxID_ANY, 0, -5, 5, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS);
    stBalanceLeft = new wxStaticText(this, wxID_ANY, _("Left"));
    stBalanceCenter = new wxStaticText(this, wxID_ANY, _("Center"));
    stBalanceRight = new wxStaticText(this, wxID_ANY, _("Right"));
    btnPlay = new wxButton(this, wxID_ANY, _("Play"));
    btnStop = new wxButton(this, wxID_ANY, _("Stop"));
    linePlayMusic = new wxStaticLine(this, wxID_ANY);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdPlayMusic::set_properties()
{
    // begin wxGlade: DialogEvtCmdPlayMusic::set_properties
    SetTitle(_("Play music"));
    listMusic->SetMinSize(wxSize(150,-1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdPlayMusic::do_layout()
{
    // begin wxGlade: DialogEvtCmdPlayMusic::do_layout
    wxBoxSizer* szPlayMusic = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTopRightTop = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szTopRightBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szBalance = new wxStaticBoxSizer(szBalance_staticbox, wxVERTICAL);
    wxBoxSizer* szBalanceBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szTempo = new wxStaticBoxSizer(szTempo_staticbox, wxVERTICAL);
    wxBoxSizer* szTempoBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szVolume = new wxStaticBoxSizer(szVolume_staticbox, wxVERTICAL);
    wxBoxSizer* szVolumeBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szFadeIn = new wxStaticBoxSizer(szFadeIn_staticbox, wxVERTICAL);
    wxBoxSizer* szFadeInBottom = new wxBoxSizer(wxHORIZONTAL);
    szTop->Add(listMusic, 1, wxALL|wxEXPAND, 1);
    szFadeIn->Add(slFadeIn, 0, wxEXPAND, 0);
    szFadeInBottom->Add(stFadeInNone, 0, wxRIGHT, 1);
    szFadeInBottom->Add(0, 0, 1, wxEXPAND, 0);
    szFadeInBottom->Add(stFadeIn5Seconds, 0, wxLEFT|wxRIGHT, 1);
    szFadeInBottom->Add(0, 0, 1, wxEXPAND, 0);
    szFadeInBottom->Add(stFadeIn10Seconds, 0, wxLEFT, 1);
    szFadeIn->Add(szFadeInBottom, 0, wxEXPAND, 0);
    szTopRightTop->Add(szFadeIn, 1, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szVolume->Add(slVolume, 0, wxEXPAND, 0);
    szVolumeBottom->Add(stVolume0Percent, 0, wxRIGHT, 1);
    szVolumeBottom->Add(0, 0, 1, wxEXPAND, 0);
    szVolumeBottom->Add(stVolume50Percent, 0, wxLEFT|wxRIGHT, 1);
    szVolumeBottom->Add(0, 0, 1, wxEXPAND, 0);
    szVolumeBottom->Add(stVolume100Percent, 0, wxLEFT, 1);
    szVolume->Add(szVolumeBottom, 0, wxEXPAND, 0);
    szTopRightTop->Add(szVolume, 1, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szTempo->Add(slTempo, 0, wxEXPAND, 0);
    szTempoBottom->Add(stTempo50Percent, 0, wxRIGHT, 1);
    szTempoBottom->Add(0, 0, 1, wxEXPAND, 0);
    szTempoBottom->Add(stTempo100Percent, 0, wxLEFT|wxRIGHT, 1);
    szTempoBottom->Add(0, 0, 1, wxEXPAND, 0);
    szTempoBottom->Add(stTempo150Percent, 0, wxLEFT, 1);
    szTempo->Add(szTempoBottom, 0, wxEXPAND, 0);
    szTopRightTop->Add(szTempo, 1, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szBalance->Add(slBalance, 0, wxEXPAND, 0);
    szBalanceBottom->Add(stBalanceLeft, 0, wxRIGHT, 1);
    szBalanceBottom->Add(0, 0, 1, wxEXPAND, 0);
    szBalanceBottom->Add(stBalanceCenter, 0, wxLEFT|wxRIGHT, 1);
    szBalanceBottom->Add(0, 0, 1, wxEXPAND, 0);
    szBalanceBottom->Add(stBalanceRight, 0, wxLEFT, 1);
    szBalance->Add(szBalanceBottom, 0, wxEXPAND, 0);
    szTopRightTop->Add(szBalance, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szTopRightBottom->Add(btnPlay, 0, wxALL, 1);
    szTopRightBottom->Add(btnStop, 0, wxALL, 1);
    szTopRightTop->Add(szTopRightBottom, 0, wxEXPAND, 0);
    szTop->Add(szTopRightTop, 0, wxEXPAND, 0);
    szPlayMusic->Add(szTop, 1, wxEXPAND, 0);
    szPlayMusic->Add(linePlayMusic, 0, wxALL|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szPlayMusic->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szPlayMusic);
    szPlayMusic->Fit(this);
    Layout();
    // end wxGlade
}

