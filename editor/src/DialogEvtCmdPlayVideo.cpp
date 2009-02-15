// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdPlayVideo.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdPlayVideo::DialogEvtCmdPlayVideo(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdPlayVideo::DialogEvtCmdPlayVideo
    szSize_staticbox = new wxStaticBox(this, -1, _("Size in window"));
    szPosition_staticbox = new wxStaticBox(this, -1, _("Move to position (coordinates)"));
    szFile_staticbox = new wxStaticBox(this, -1, _("Video file"));
    stVideo = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnVideo = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    spinSizeX = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    stSize = new wxStaticText(this, wxID_ANY, _("X"));
    spinSizeY = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    rbtnSpecify = new wxRadioButton(this, wxID_ANY, _("Specify"));
    szSpecifyX = new wxStaticText(this, wxID_ANY, _("X:"));
    spinSpecifyX = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    stSpecifyY = new wxStaticText(this, wxID_ANY, _("Y:"));
    spinSpecifyY = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    rbtnVariable = new wxRadioButton(this, wxID_ANY, _("Variable"));
    stVariableX = new wxStaticText(this, wxID_ANY, _("X:"));
    tcVariableX = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnVariableX = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    stVariableY = new wxStaticText(this, wxID_ANY, _("Y:"));
    tcVariableY = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnVariableY = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdPlayVideo::set_properties()
{
    // begin wxGlade: DialogEvtCmdPlayVideo::set_properties
    SetTitle(_("Play video"));
    stVideo->SetMinSize(wxSize(50, -1));
    spinSizeX->SetMinSize(wxSize(50, -1));
    spinSizeY->SetMinSize(wxSize(50, -1));
    spinSpecifyX->SetMinSize(wxSize(50, -1));
    spinSpecifyY->SetMinSize(wxSize(50, -1));
    tcVariableX->SetMinSize(wxSize(50, -1));
    tcVariableY->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdPlayVideo::do_layout()
{
    // begin wxGlade: DialogEvtCmdPlayVideo::do_layout
    wxBoxSizer* szPlayVideo = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szPosition = new wxStaticBoxSizer(szPosition_staticbox, wxVERTICAL);
    wxFlexGridSizer* gszPosition = new wxFlexGridSizer(4, 3, 2, 2);
    wxBoxSizer* szVariableY = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szVariableX = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szSize = new wxStaticBoxSizer(szSize_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szFile = new wxStaticBoxSizer(szFile_staticbox, wxHORIZONTAL);
    szFile->Add(stVideo, 1, wxALIGN_CENTER_VERTICAL, 0);
    szFile->Add(btnVideo, 0, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szFile, 1, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szSize->Add(spinSizeX, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1);
    szSize->Add(stSize, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1);
    szSize->Add(spinSizeY, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1);
    szTop->Add(szSize, 0, wxEXPAND, 0);
    szPlayVideo->Add(szTop, 0, wxEXPAND, 0);
    gszPosition->Add(rbtnSpecify, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPosition->Add(szSpecifyX, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPosition->Add(spinSpecifyX, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1);
    gszPosition->Add(0, 0, 1, wxEXPAND, 0);
    gszPosition->Add(stSpecifyY, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPosition->Add(spinSpecifyY, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1);
    gszPosition->Add(rbtnVariable, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPosition->Add(stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0);
    szVariableX->Add(tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0);
    szVariableX->Add(btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPosition->Add(szVariableX, 1, wxEXPAND, 0);
    gszPosition->Add(0, 0, 1, wxEXPAND, 0);
    gszPosition->Add(stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0);
    szVariableY->Add(tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0);
    szVariableY->Add(btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPosition->Add(szVariableY, 1, wxEXPAND, 0);
    gszPosition->AddGrowableCol(2);
    szPosition->Add(gszPosition, 1, wxBOTTOM|wxEXPAND, 1);
    szPlayVideo->Add(szPosition, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szPlayVideo->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szPlayVideo);
    szPlayVideo->Fit(this);
    Layout();
    // end wxGlade
}

