// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdEventMovement.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdEventMovement::DialogEvtCmdEventMovement(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdEventMovement::DialogEvtCmdEventMovement
    SzOptions_staticbox = new wxStaticBox(this, -1, _("Options"));
    szPath_staticbox = new wxStaticBox(this, -1, _("Path"));
    szTarget_staticbox = new wxStaticBox(this, -1, _("Move target"));
    const wxString *chTarget_choices = NULL;
    chTarget = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chTarget_choices, 0);
    const wxString rbSpeed_choices[] = {
        _("1"),
        _("2"),
        _("3"),
        _("4"),
        _("5"),
        _("6"),
        _("7"),
        _("8")
    };
    rbSpeed = new wxRadioBox(this, wxID_ANY, _("Movement speed"), wxDefaultPosition, wxDefaultSize, 8, rbSpeed_choices, 1, wxRA_SPECIFY_ROWS);
    const wxString listPath_choices[] = {
        _("<>")
    };
    listPath = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 1, listPath_choices, 0);
    btnDelete = new wxButton(this, wxID_ANY, _("Delete"));
    btnClear = new wxButton(this, wxID_ANY, _("Clear"));
    chbLoop = new wxCheckBox(this, wxID_ANY, _("Repeat path"));
    ChkIgnore = new wxCheckBox(this, wxID_ANY, _("Ignore if gets blocked"));
    btnUp = new wxButton(this, wxID_ANY, _("Up"));
    btnLookUp = new wxButton(this, wxID_ANY, _("Look up"));
    btnStartJump = new wxButton(this, wxID_ANY, _("Start jump"));
    btnRight = new wxButton(this, wxID_ANY, _("Right"));
    btnLookRight = new wxButton(this, wxID_ANY, _("Look Right"));
    btnEndJump = new wxButton(this, wxID_ANY, _("End jump"));
    btnDown = new wxButton(this, wxID_ANY, _("Down"));
    btnLookDown = new wxButton(this, wxID_ANY, _("Look down"));
    btnFixDirection = new wxButton(this, wxID_ANY, _("Fix direction"));
    btnLeft = new wxButton(this, wxID_ANY, _("Left"));
    btnLookLeft = new wxButton(this, wxID_ANY, _("Look left"));
    btnCancelFix = new wxButton(this, wxID_ANY, _("Cancel fix"));
    btnRightUp = new wxButton(this, wxID_ANY, _("Right - Up"));
    btn90Right = new wxButton(this, wxID_ANY, _("Rotate 90º Right"));
    btnGhost = new wxButton(this, wxID_ANY, _("Ghost like"));
    btnRightDown = new wxButton(this, wxID_ANY, _("Right - Down"));
    btn90Left = new wxButton(this, wxID_ANY, _("Rotate 90º Left"));
    btnEndGhost = new wxButton(this, wxID_ANY, _("End ghost like"));
    btnLeftUp = new wxButton(this, wxID_ANY, _("Left - Up"));
    btn180Right = new wxButton(this, wxID_ANY, _("Rotate 180º Right"));
    btnStopAnimation = new wxButton(this, wxID_ANY, _("Stop animation"));
    btnLeftDown = new wxButton(this, wxID_ANY, _("Left - Down"));
    btnRightLeft = new wxButton(this, wxID_ANY, _("Rotate 90º Rght-Lft"));
    btnContinueAnimation = new wxButton(this, wxID_ANY, _("Continue animation"));
    btnRandom = new wxButton(this, wxID_ANY, _("Random step"));
    btnRandomDirection = new wxButton(this, wxID_ANY, _("Random direction"));
    btnTrasparencyUp = new wxButton(this, wxID_ANY, _("Transparency up"));
    btnFollowPlayer = new wxButton(this, wxID_ANY, _("Follow player"));
    btnLookPlayer = new wxButton(this, wxID_ANY, _("Look player"));
    btnTrasparencyDown = new wxButton(this, wxID_ANY, _("Transparency down"));
    btnEvadePlayer = new wxButton(this, wxID_ANY, _("Evade player"));
    btnTurnBack = new wxButton(this, wxID_ANY, _("Turn back on player"));
    btnEnableSwitch = new wxButton(this, wxID_ANY, _("Enable switch"));
    btnGo = new wxButton(this, wxID_ANY, _("Go"));
    btnWait = new wxButton(this, wxID_ANY, _("Wait"));
    btnDisableSwitch = new wxButton(this, wxID_ANY, _("Disable switch"));
    btnSpeedUp = new wxButton(this, wxID_ANY, _("Speed up"));
    btnFrequencyUp = new wxButton(this, wxID_ANY, _("Frequency up"));
    btnChangeGraphic = new wxButton(this, wxID_ANY, _("Change graphic..."));
    btnSpeedDown = new wxButton(this, wxID_ANY, _("Speed down"));
    btnFrequencyDown = new wxButton(this, wxID_ANY, _("Frequency down"));
    btnSoundEffect = new wxButton(this, wxID_ANY, _("Sound effect..."));
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdEventMovement::set_properties()
{
    // begin wxGlade: DialogEvtCmdEventMovement::set_properties
    SetTitle(_("Event movement"));
    rbSpeed->SetSelection(0);
    listPath->SetSelection(0);
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdEventMovement::do_layout()
{
    // begin wxGlade: DialogEvtCmdEventMovement::do_layout
    wxBoxSizer* szEventMovement = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szPath = new wxStaticBoxSizer(szPath_staticbox, wxHORIZONTAL);
    wxGridSizer* gszPath = new wxGridSizer(14, 3, 0, 0);
    wxBoxSizer* szPathLeft = new wxBoxSizer(wxVERTICAL);
    wxStaticBoxSizer* SzOptions = new wxStaticBoxSizer(SzOptions_staticbox, wxVERTICAL);
    wxBoxSizer* szPathLeftMiddle = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szTarget = new wxStaticBoxSizer(szTarget_staticbox, wxHORIZONTAL);
    szTarget->Add(chTarget, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szTarget, 1, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szTop->Add(rbSpeed, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szEventMovement->Add(szTop, 0, wxEXPAND, 0);
    szPathLeft->Add(listPath, 1, wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szPathLeftMiddle->Add(btnDelete, 1, wxRIGHT|wxTOP, 1);
    szPathLeftMiddle->Add(btnClear, 1, wxLEFT|wxRIGHT|wxTOP, 1);
    szPathLeft->Add(szPathLeftMiddle, 0, wxEXPAND, 0);
    SzOptions->Add(chbLoop, 0, wxBOTTOM|wxEXPAND, 1);
    SzOptions->Add(ChkIgnore, 0, wxTOP|wxEXPAND, 1);
    szPathLeft->Add(SzOptions, 0, wxRIGHT|wxEXPAND, 1);
    szPath->Add(szPathLeft, 0, wxEXPAND, 0);
    gszPath->Add(btnUp, 0, wxEXPAND, 0);
    gszPath->Add(btnLookUp, 0, wxEXPAND, 0);
    gszPath->Add(btnStartJump, 0, wxEXPAND, 0);
    gszPath->Add(btnRight, 0, wxEXPAND, 0);
    gszPath->Add(btnLookRight, 0, wxEXPAND, 0);
    gszPath->Add(btnEndJump, 0, wxEXPAND, 0);
    gszPath->Add(btnDown, 0, wxEXPAND, 0);
    gszPath->Add(btnLookDown, 0, wxEXPAND, 0);
    gszPath->Add(btnFixDirection, 0, wxEXPAND, 0);
    gszPath->Add(btnLeft, 0, wxEXPAND, 0);
    gszPath->Add(btnLookLeft, 0, wxEXPAND, 0);
    gszPath->Add(btnCancelFix, 0, wxEXPAND, 0);
    gszPath->Add(btnRightUp, 0, wxEXPAND, 0);
    gszPath->Add(btn90Right, 0, wxEXPAND, 0);
    gszPath->Add(btnGhost, 0, wxEXPAND, 0);
    gszPath->Add(btnRightDown, 0, wxEXPAND, 0);
    gszPath->Add(btn90Left, 0, wxEXPAND, 0);
    gszPath->Add(btnEndGhost, 0, wxEXPAND, 0);
    gszPath->Add(btnLeftUp, 0, wxEXPAND, 0);
    gszPath->Add(btn180Right, 0, wxEXPAND, 0);
    gszPath->Add(btnStopAnimation, 0, wxEXPAND, 0);
    gszPath->Add(btnLeftDown, 0, wxEXPAND, 0);
    gszPath->Add(btnRightLeft, 0, wxEXPAND, 0);
    gszPath->Add(btnContinueAnimation, 0, wxEXPAND, 0);
    gszPath->Add(btnRandom, 0, wxEXPAND, 0);
    gszPath->Add(btnRandomDirection, 0, wxEXPAND, 0);
    gszPath->Add(btnTrasparencyUp, 0, wxEXPAND, 0);
    gszPath->Add(btnFollowPlayer, 0, wxEXPAND, 0);
    gszPath->Add(btnLookPlayer, 0, wxEXPAND, 0);
    gszPath->Add(btnTrasparencyDown, 0, wxEXPAND, 0);
    gszPath->Add(btnEvadePlayer, 0, wxEXPAND, 0);
    gszPath->Add(btnTurnBack, 0, wxEXPAND, 0);
    gszPath->Add(btnEnableSwitch, 0, wxEXPAND, 0);
    gszPath->Add(btnGo, 0, wxEXPAND, 0);
    gszPath->Add(btnWait, 0, wxEXPAND, 0);
    gszPath->Add(btnDisableSwitch, 0, wxEXPAND, 0);
    gszPath->Add(btnSpeedUp, 0, wxEXPAND, 0);
    gszPath->Add(btnFrequencyUp, 0, wxEXPAND, 0);
    gszPath->Add(btnChangeGraphic, 0, wxEXPAND, 0);
    gszPath->Add(btnSpeedDown, 0, wxEXPAND, 0);
    gszPath->Add(btnFrequencyDown, 0, wxEXPAND, 0);
    gszPath->Add(btnSoundEffect, 0, wxEXPAND, 0);
    szPath->Add(gszPath, 1, wxLEFT|wxEXPAND, 1);
    szEventMovement->Add(szPath, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szEventMovement->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szEventMovement);
    szEventMovement->Fit(this);
    Layout();
    // end wxGlade
}
