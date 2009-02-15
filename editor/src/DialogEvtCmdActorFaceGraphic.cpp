// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdActorFaceGraphic.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdActorFaceGraphic::DialogEvtCmdActorFaceGraphic(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    // begin wxGlade: DialogEvtCmdActorFaceGraphic::DialogEvtCmdActorFaceGraphic
    szFaceGraphic_staticbox = new wxStaticBox(this, -1, _("Face graphic"));
    szActor_staticbox = new wxStaticBox(this, -1, _("Actor"));
    const wxString *chActor_choices = NULL;
    chActor = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chActor_choices, 0);
    bmpFaceGraphic = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER);
    btnFaceGraphic = new wxButton(this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdActorFaceGraphic::set_properties()
{
    // begin wxGlade: DialogEvtCmdActorFaceGraphic::set_properties
    SetTitle(_("Change actor face graphic"));
    chActor->SetMinSize(wxSize(100, -1));
    bmpFaceGraphic->SetMinSize(wxSize(96, 96));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdActorFaceGraphic::do_layout()
{
    // begin wxGlade: DialogEvtCmdActorFaceGraphic::do_layout
    wxBoxSizer* szActorFaceGraphic = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szFaceGraphic = new wxStaticBoxSizer(szFaceGraphic_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szActor = new wxStaticBoxSizer(szActor_staticbox, wxHORIZONTAL);
    szActor->Add(chActor, 1, wxALIGN_CENTER_VERTICAL, 0);
    szTop->Add(szActor, 2, wxLEFT|wxRIGHT|wxBOTTOM, 1);
    szFaceGraphic->Add(bmpFaceGraphic, 0, wxRIGHT, 1);
    szFaceGraphic->Add(btnFaceGraphic, 1, wxLEFT, 1);
    szTop->Add(szFaceGraphic, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szActorFaceGraphic->Add(szTop, 0, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szActorFaceGraphic->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szActorFaceGraphic);
    szActorFaceGraphic->Fit(this);
    Layout();
    // end wxGlade
}

