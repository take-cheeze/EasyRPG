// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdMovePicture.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdMovePicture::DialogEvtCmdMovePicture(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdMovePicture::DialogEvtCmdMovePicture
    szPicture_staticbox = new wxStaticBox(this, -1, _("Move to position (coordinates)"));
    szIntensity_staticbox = new wxStaticBox(this, -1, _("Intensity"));
    szTrasparency_staticbox = new wxStaticBox(this, -1, _("Transparency"));
    szAttributes_staticbox = new wxStaticBox(this, -1, _("Other picture attributes"));
    szTime_staticbox = new wxStaticBox(this, -1, _("Time"));
    szOptions_staticbox = new wxStaticBox(this, -1, _("Options"));
    szNumber_staticbox = new wxStaticBox(this, -1, _("Picture number"));
    spinNumber = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    rbtnSpecify = new wxRadioButton(this, wxID_ANY, _("Specify"));
    stSpecifyX = new wxStaticText(this, wxID_ANY, _("X:"));
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
    spinIntensity = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    stIntensity = new wxStaticText(this, wxID_ANY, _("%"));
    spinTrasparency = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    stTrasparency = new wxStaticText(this, wxID_ANY, _("%"));
    tcAttributes = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnAttributes = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    spinTime = new wxSpinCtrl(this, wxID_ANY, wxT("10"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    stTime = new wxStaticText(this, wxID_ANY, _("x0.1 sec."));
    chbWait = new wxCheckBox(this, wxID_ANY, _("Wait to end"));
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdMovePicture::set_properties()
{
    // begin wxGlade: DialogEvtCmdMovePicture::set_properties
    SetTitle(_("Move picture"));
    spinNumber->SetMinSize(wxSize(90, -1));
    spinSpecifyX->SetMinSize(wxSize(50, -1));
    spinSpecifyY->SetMinSize(wxSize(50, -1));
    tcVariableX->SetMinSize(wxSize(50, -1));
    tcVariableY->SetMinSize(wxSize(50, -1));
    spinIntensity->SetMinSize(wxSize(50, -1));
    spinTrasparency->SetMinSize(wxSize(70, -1));
    tcAttributes->SetMinSize(wxSize(50, -1));
    spinTime->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdMovePicture::do_layout()
{
    // begin wxGlade: DialogEvtCmdMovePicture::do_layout
    wxBoxSizer* szMovePicture = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szMiddleBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szOptions = new wxStaticBoxSizer(szOptions_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szTime = new wxStaticBoxSizer(szTime_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szAttributes = new wxStaticBoxSizer(szAttributes_staticbox, wxHORIZONTAL);
    wxBoxSizer* szMiddleTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szTrasparency = new wxStaticBoxSizer(szTrasparency_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szIntensity = new wxStaticBoxSizer(szIntensity_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szPicture = new wxStaticBoxSizer(szPicture_staticbox, wxVERTICAL);
    wxFlexGridSizer* gszPicture = new wxFlexGridSizer(4, 3, 2, 2);
    wxBoxSizer* szVariableY = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szVariableX = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szNumber = new wxStaticBoxSizer(szNumber_staticbox, wxHORIZONTAL);
    szNumber->Add(spinNumber, 0, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szNumber, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szMovePicture->Add(szTop, 0, wxEXPAND, 0);
    gszPicture->Add(rbtnSpecify, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszPicture->Add(stSpecifyX, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPicture->Add(spinSpecifyX, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1);
    gszPicture->Add(0, 0, 1, wxEXPAND, 0);
    gszPicture->Add(stSpecifyY, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPicture->Add(spinSpecifyY, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1);
    gszPicture->Add(rbtnVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszPicture->Add(stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0);
    szVariableX->Add(tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0);
    szVariableX->Add(btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPicture->Add(szVariableX, 1, wxEXPAND, 0);
    gszPicture->Add(0, 0, 1, wxEXPAND, 0);
    gszPicture->Add(stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0);
    szVariableY->Add(tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0);
    szVariableY->Add(btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszPicture->Add(szVariableY, 1, wxEXPAND, 0);
    gszPicture->AddGrowableCol(2);
    szPicture->Add(gszPicture, 1, wxBOTTOM|wxEXPAND, 1);
    szMovePicture->Add(szPicture, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szIntensity->Add(spinIntensity, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1);
    szIntensity->Add(stIntensity, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1);
    szMiddleTop->Add(szIntensity, 1, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szTrasparency->Add(spinTrasparency, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1);
    szTrasparency->Add(stTrasparency, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1);
    szMiddleTop->Add(szTrasparency, 1, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szMiddleTop->Add(110, 0, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szMovePicture->Add(szMiddleTop, 0, wxEXPAND, 0);
    szAttributes->Add(tcAttributes, 1, wxALIGN_CENTER_VERTICAL, 0);
    szAttributes->Add(btnAttributes, 0, wxALIGN_CENTER_VERTICAL, 0);
    szMovePicture->Add(szAttributes, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szTime->Add(spinTime, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1);
    szTime->Add(stTime, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1);
    szMiddleBottom->Add(szTime, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szOptions->Add(chbWait, 1, wxALIGN_CENTER_VERTICAL, 0);
    szMiddleBottom->Add(szOptions, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szMovePicture->Add(szMiddleBottom, 0, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szMovePicture->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szMovePicture);
    szMovePicture->Fit(this);
    Layout();
    // end wxGlade
}

