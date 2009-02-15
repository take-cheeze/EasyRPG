// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogDbLearnSkill.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogDbLearnSkill::DialogDbLearnSkill(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE)
{
    // begin wxGlade: DialogDbLearnSkill::DialogDbLearnSkill
    SzLevel_staticbox = new wxStaticBox(this, -1, _("Level"));
    szSkill_staticbox = new wxStaticBox(this, -1, _("Skill"));
    const wxString *chSkill_choices = NULL;
    chSkill = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chSkill_choices, 0);
    spinLevel = new wxSpinCtrl(this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 50);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogDbLearnSkill::set_properties()
{
    // begin wxGlade: DialogDbLearnSkill::set_properties
    SetTitle(_("Learn a skill..."));
    chSkill->SetMinSize(wxSize(50, -1));
    spinLevel->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogDbLearnSkill::do_layout()
{
    // begin wxGlade: DialogDbLearnSkill::do_layout
    wxBoxSizer* szDbLearnSkill = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* SzLevel = new wxStaticBoxSizer(SzLevel_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szSkill = new wxStaticBoxSizer(szSkill_staticbox, wxHORIZONTAL);
    szSkill->Add(chSkill, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szSkill, 2, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    SzLevel->Add(spinLevel, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(SzLevel, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szDbLearnSkill->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szDbLearnSkill->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szDbLearnSkill);
    szDbLearnSkill->Fit(this);
    Layout();
    // end wxGlade
}

