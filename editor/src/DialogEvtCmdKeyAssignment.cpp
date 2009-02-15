// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdKeyAssignment.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdKeyAssignment::DialogEvtCmdKeyAssignment(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdKeyAssignment::DialogEvtCmdKeyAssignment
    szOptions_staticbox = new wxStaticBox(this, -1, _("Options"));
    szKeys_staticbox = new wxStaticBox(this, -1, _("Keys to assign"));
    szVariable_staticbox = new wxStaticBox(this, -1, _("Store value in variable"));
    tcVariable = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnVariable = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    chbWait = new wxCheckBox(this, wxID_ANY, _("Wait for key press"));
    chbDown = new wxCheckBox(this, wxID_ANY, _("Down (1)"));
    chbDecision = new wxCheckBox(this, wxID_ANY, _("Decision key (5)"));
    chbLeft = new wxCheckBox(this, wxID_ANY, _("Left (2)"));
    chbCancel = new wxCheckBox(this, wxID_ANY, _("Cancel key (6)"));
    chbRight = new wxCheckBox(this, wxID_ANY, _("Right (3)"));
    chbShift = new wxCheckBox(this, wxID_ANY, _("Shift key (7)"));
    chbUp = new wxCheckBox(this, wxID_ANY, _("Up (4)"));
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_ANY, _("&Cancel"));
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdKeyAssignment::set_properties()
{
    // begin wxGlade: DialogEvtCmdKeyAssignment::set_properties
    SetTitle(_("Key assignment"));
    tcVariable->SetMinSize(wxSize(70, -1));
    btnVariable->SetMinSize(wxSize(25, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdKeyAssignment::do_layout()
{
    // begin wxGlade: DialogEvtCmdKeyAssignment::do_layout
    wxBoxSizer* szKeyAssignment = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szKeys = new wxStaticBoxSizer(szKeys_staticbox, wxHORIZONTAL);
    wxGridSizer* gszKeys = new wxGridSizer(4, 2, 2, 2);
    wxBoxSizer* szTopLeft = new wxBoxSizer(wxVERTICAL);
    wxStaticBoxSizer* szOptions = new wxStaticBoxSizer(szOptions_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szVariable = new wxStaticBoxSizer(szVariable_staticbox, wxHORIZONTAL);
    szVariable->Add(tcVariable, 1, wxALIGN_CENTER_VERTICAL, 0);
    szVariable->Add(btnVariable, 0, wxALIGN_CENTER_VERTICAL, 0);
    szTopLeft->Add(szVariable, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szOptions->Add(chbWait, 0, 0, 0);
    szTopLeft->Add(szOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szTop->Add(szTopLeft, 1, wxEXPAND, 0);
    gszKeys->Add(chbDown, 0, 0, 0);
    gszKeys->Add(chbDecision, 0, 0, 0);
    gszKeys->Add(chbLeft, 0, 0, 0);
    gszKeys->Add(chbCancel, 0, 0, 0);
    gszKeys->Add(chbRight, 0, 0, 0);
    gszKeys->Add(chbShift, 0, 0, 0);
    gszKeys->Add(chbUp, 0, 0, 0);
    gszKeys->Add(0, 0, 1, wxEXPAND, 0);
    szKeys->Add(gszKeys, 1, 0, 0);
    szTop->Add(szKeys, 0, wxLEFT|wxRIGHT|wxBOTTOM, 1);
    szKeyAssignment->Add(szTop, 0, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szKeyAssignment->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szKeyAssignment);
    szKeyAssignment->Fit(this);
    Layout();
    // end wxGlade
}

