// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdMP.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdMP::DialogEvtCmdMP(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdMP::DialogEvtCmdMP
    szOperand_staticbox = new wxStaticBox(this, -1, _("Operand"));
    szTarget_staticbox = new wxStaticBox(this, -1, _("Target"));
    rbtnTargetParty = new wxRadioButton(this, wxID_ANY, _("Whole group"));
    rbtnTargetFixed = new wxRadioButton(this, wxID_ANY, _("Fixed"));
    const wxString *chTargetFixed_choices = NULL;
    chTargetFixed = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chTargetFixed_choices, 0);
    rbtnTargetVariable = new wxRadioButton(this, wxID_ANY, _("Variable"));
    tcTargetVariable = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnTargetVariable = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    const wxString rbtnOperation_choices[] = {
        _("Increase MP"),
        _("Decrease MP")
    };
    rbtnOperation = new wxRadioBox(this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, 2, rbtnOperation_choices, 1, wxRA_SPECIFY_ROWS);
    rbtnOperandConstant = new wxRadioButton(this, wxID_ANY, _("Constant"));
    spinOperandConstant = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    rbtnOperandVariable = new wxRadioButton(this, wxID_ANY, _("Variable"));
    tcOperandVariable = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    btnOperandVariable = new wxButton(this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdMP::set_properties()
{
    // begin wxGlade: DialogEvtCmdMP::set_properties
    SetTitle(_("Change MP"));
    chTargetFixed->SetMinSize(wxSize(50, -1));
    tcTargetVariable->SetMinSize(wxSize(50, -1));
    rbtnOperation->SetSelection(0);
    spinOperandConstant->SetMinSize(wxSize(50, -1));
    tcOperandVariable->SetMinSize(wxSize(50, -1));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdMP::do_layout()
{
    // begin wxGlade: DialogEvtCmdMP::do_layout
    wxBoxSizer* szMP = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szOperand = new wxStaticBoxSizer(szOperand_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* gszOperand = new wxFlexGridSizer(2, 2, 2, 2);
    wxBoxSizer* szOperandVariable = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szTarget = new wxStaticBoxSizer(szTarget_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* gszTarget = new wxFlexGridSizer(3, 2, 2, 2);
    wxBoxSizer* szTargetVAriable = new wxBoxSizer(wxHORIZONTAL);
    gszTarget->Add(rbtnTargetParty, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszTarget->Add(0, 0, 1, wxEXPAND, 0);
    gszTarget->Add(rbtnTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszTarget->Add(chTargetFixed, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszTarget->Add(rbtnTargetVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    szTargetVAriable->Add(tcTargetVariable, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTargetVAriable->Add(btnTargetVariable, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszTarget->Add(szTargetVAriable, 1, wxEXPAND, 0);
    gszTarget->AddGrowableCol(1);
    szTarget->Add(gszTarget, 1, wxEXPAND, 0);
    szMP->Add(szTarget, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szMP->Add(rbtnOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    gszOperand->Add(rbtnOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszOperand->Add(spinOperandConstant, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    gszOperand->Add(rbtnOperandVariable, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    szOperandVariable->Add(tcOperandVariable, 1, wxALIGN_CENTER_VERTICAL, 0);
    szOperandVariable->Add(btnOperandVariable, 0, wxALIGN_CENTER_VERTICAL, 0);
    gszOperand->Add(szOperandVariable, 1, wxEXPAND, 0);
    gszOperand->AddGrowableCol(1);
    szOperand->Add(gszOperand, 1, wxEXPAND, 0);
    szMP->Add(szOperand, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szMP->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szMP);
    szMP->Fit(this);
    Layout();
    // end wxGlade
}

