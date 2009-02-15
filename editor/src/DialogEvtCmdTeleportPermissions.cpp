// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdTeleportPermissions.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdTeleportPermissions::DialogEvtCmdTeleportPermissions(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdTeleportPermissions::DialogEvtCmdTeleportPermissions
    const wxString rbOperation_choices[] = {
        _("Forbid teleporting"),
        _("Alllow teleporting")
    };
    rbOperation = new wxRadioBox(this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, 2, rbOperation_choices, 1, wxRA_SPECIFY_ROWS);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdTeleportPermissions::set_properties()
{
    // begin wxGlade: DialogEvtCmdTeleportPermissions::set_properties
    SetTitle(_("Teleport permissions"));
    rbOperation->SetSelection(0);
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdTeleportPermissions::do_layout()
{
    // begin wxGlade: DialogEvtCmdTeleportPermissions::do_layout
    wxBoxSizer* szTeleportPermissions = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    szTeleportPermissions->Add(rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szTeleportPermissions->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szTeleportPermissions);
    szTeleportPermissions->Fit(this);
    Layout();
    // end wxGlade
}

