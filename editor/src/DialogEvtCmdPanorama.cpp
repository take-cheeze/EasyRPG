// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdPanorama.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdPanorama::DialogEvtCmdPanorama(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdPanorama::DialogEvtCmdPanorama
    szOptions_staticbox = new wxStaticBox(this, -1, _("Options"));
    szBackground_staticbox = new wxStaticBox(this, -1, _("Background"));
    bmpBackground = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER);
    btnBackground = new wxButton(this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnHScroll = new wxCheckBox(this, wxID_ANY, _("Horizontal scroll"));
    chbHScrollAuto = new wxCheckBox(this, wxID_ANY, _("Automatic"));
    stHScrollSpeed = new wxStaticText(this, wxID_ANY, _("Speed"));
    spinHScrollSpeed = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    lineOptions = new wxStaticLine(this, wxID_ANY);
    btnVScroll = new wxCheckBox(this, wxID_ANY, _("Vertical scroll"));
    chbVScrollAuto = new wxCheckBox(this, wxID_ANY, _("Automatic"));
    stVcrollSpeed = new wxStaticText(this, wxID_ANY, _("Speed"));
    spinVScrollSpeed = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdPanorama::set_properties()
{
    // begin wxGlade: DialogEvtCmdPanorama::set_properties
    SetTitle(_("Change map background"));
    bmpBackground->SetMinSize(wxSize(160, 120));
    spinHScrollSpeed->SetMinSize(wxSize(50, -1));
    spinVScrollSpeed->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdPanorama::do_layout()
{
    // begin wxGlade: DialogEvtCmdPanorama::do_layout
    wxBoxSizer* szPanorama = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szOptions = new wxStaticBoxSizer(szOptions_staticbox, wxVERTICAL);
    wxBoxSizer* szVScrollSpeed = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szVScroll = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szHScrollSpeed = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szHScroll = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szBackground = new wxStaticBoxSizer(szBackground_staticbox, wxVERTICAL);
    szBackground->Add(bmpBackground, 0, wxBOTTOM, 1);
    szBackground->Add(btnBackground, 0, wxTOP|wxALIGN_RIGHT, 1);
    szTop->Add(szBackground, 0, wxRIGHT|wxEXPAND, 1);
    szOptions->Add(0, 0, 1, wxEXPAND, 0);
    szOptions->Add(btnHScroll, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1);
    szHScroll->Add(15, 15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    szHScroll->Add(chbHScrollAuto, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1);
    szOptions->Add(szHScroll, 0, wxEXPAND, 0);
    szHScrollSpeed->Add(stHScrollSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1);
    szHScrollSpeed->Add(spinHScrollSpeed, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1);
    szOptions->Add(szHScrollSpeed, 0, wxEXPAND, 0);
    szOptions->Add(0, 0, 1, wxEXPAND, 0);
    szOptions->Add(lineOptions, 0, wxTOP|wxBOTTOM|wxEXPAND, 1);
    szOptions->Add(0, 0, 1, wxEXPAND, 0);
    szOptions->Add(btnVScroll, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1);
    szVScroll->Add(15, 15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    szVScroll->Add(chbVScrollAuto, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1);
    szOptions->Add(szVScroll, 0, wxEXPAND, 0);
    szVScrollSpeed->Add(stVcrollSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1);
    szVScrollSpeed->Add(spinVScrollSpeed, 1, wxLEFT|wxTOP, 1);
    szOptions->Add(szVScrollSpeed, 0, wxEXPAND, 0);
    szOptions->Add(0, 0, 1, wxEXPAND, 0);
    szTop->Add(szOptions, 1, wxLEFT|wxEXPAND, 1);
    szPanorama->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szPanorama->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szPanorama);
    szPanorama->Fit(this);
    Layout();
    // end wxGlade
}

