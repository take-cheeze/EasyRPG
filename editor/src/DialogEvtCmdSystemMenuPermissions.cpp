// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdSystemMenuPermissions.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdSystemMenuPermissions::DialogEvtCmdSystemMenuPermissions(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdSystemMenuPermissions::DialogEvtCmdSystemMenuPermissions
    const wxString rbOperation_choices[] = {
        _("Forbid menu"),
        _("Alllow menu")
    };
    rbOperation = new wxRadioBox(this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, 2, rbOperation_choices, 1, wxRA_SPECIFY_ROWS);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdSystemMenuPermissions::set_properties()
{
    // begin wxGlade: DialogEvtCmdSystemMenuPermissions::set_properties
    SetTitle(_("System menu permissions"));
    rbOperation->SetSelection(0);
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdSystemMenuPermissions::do_layout()
{
    // begin wxGlade: DialogEvtCmdSystemMenuPermissions::do_layout
    wxBoxSizer* szSystemMenuPermissions = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    szSystemMenuPermissions->Add(rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szSystemMenuPermissions->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szSystemMenuPermissions);
    szSystemMenuPermissions->Fit(this);
    Layout();
    // end wxGlade
}

