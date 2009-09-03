// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdAnimation.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdAnimation::DialogEvtCmdAnimation(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdAnimation::DialogEvtCmdAnimation
    szTarget_staticbox = new wxStaticBox(this, -1, _("Target"));
    szOptions_staticbox = new wxStaticBox(this, -1, _("Options"));
    SzAnimation2_staticbox = new wxStaticBox(this, -1, _("Animation"));
    bmpAnimation = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER);
    const wxString *chAnimation_choices = NULL;
    chAnimation = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chAnimation_choices, 0);
    const wxString *chTarget_choices = NULL;
    chTarget = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chTarget_choices, 0);
    chbWait = new wxCheckBox(this, wxID_ANY, _("Wait until end"));
    chbWholeMapRange = new wxCheckBox(this, wxID_ANY, _("Whole map range"));
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdAnimation::set_properties()
{
    // begin wxGlade: DialogEvtCmdAnimation::set_properties
    SetTitle(_("Show animation"));
    bmpAnimation->SetMinSize(wxSize(320, 160));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdAnimation::do_layout()
{
    // begin wxGlade: DialogEvtCmdAnimation::do_layout
    wxBoxSizer* szAnimation = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szRight = new wxBoxSizer(wxVERTICAL);
    wxStaticBoxSizer* szOptions = new wxStaticBoxSizer(szOptions_staticbox, wxVERTICAL);
    wxStaticBoxSizer* szTarget = new wxStaticBoxSizer(szTarget_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* SzAnimation2 = new wxStaticBoxSizer(SzAnimation2_staticbox, wxVERTICAL);
    SzAnimation2->Add(bmpAnimation, 0, wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    SzAnimation2->Add(chAnimation, 0, wxBOTTOM|wxEXPAND, 1);
    szTop->Add(SzAnimation2, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szTarget->Add(chTarget, 1, 0, 0);
    szRight->Add(szTarget, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szOptions->Add(chbWait, 0, wxBOTTOM|wxEXPAND, 1);
    szOptions->Add(chbWholeMapRange, 0, wxTOP|wxEXPAND, 1);
    szRight->Add(szOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szTop->Add(szRight, 1, wxEXPAND, 0);
    szAnimation->Add(szTop, 0, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szAnimation->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szAnimation);
    szAnimation->Fit(this);
    Layout();
    // end wxGlade
}

