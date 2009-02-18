// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdDeletePicture.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdDeletePicture::DialogEvtCmdDeletePicture(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdDeletePicture::DialogEvtCmdDeletePicture
    szPicture_staticbox = new wxStaticBox(this, -1, _("Picture number"));
    spinPicture = new wxSpinCtrl(this, wxID_ANY, wxT("10"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdDeletePicture::set_properties()
{
    // begin wxGlade: DialogEvtCmdDeletePicture::set_properties
    SetTitle(_("Delete picture"));
    spinPicture->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdDeletePicture::do_layout()
{
    // begin wxGlade: DialogEvtCmdDeletePicture::do_layout
    wxBoxSizer* szDeletePicture = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szPicture = new wxStaticBoxSizer(szPicture_staticbox, wxHORIZONTAL);
    szPicture->Add(spinPicture, 1, wxALIGN_CENTER_VERTICAL, 0);
    szDeletePicture->Add(szPicture, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szDeletePicture->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szDeletePicture);
    szDeletePicture->Fit(this);
    Layout();
    // end wxGlade
}
