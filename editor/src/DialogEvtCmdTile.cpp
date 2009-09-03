// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include "DialogEvtCmdTile.h"

// begin wxGlade: ::extracode

// end wxGlade


DialogEvtCmdTile::DialogEvtCmdTile(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    // begin wxGlade: DialogEvtCmdTile::DialogEvtCmdTile
    szReplacer_staticbox = new wxStaticBox(this, -1, _("Replace with"));
    szOriginal_staticbox = new wxStaticBox(this, -1, _("Tile to replace"));
    const wxString rbOptions_choices[] = {
        _("Lower"),
        _("Upper")
    };
    rbOptions = new wxRadioBox(this, wxID_ANY, _("Tile type"), wxDefaultPosition, wxDefaultSize, 2, rbOptions_choices, 1, wxRA_SPECIFY_ROWS);
    bmpOriginal = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER);
    btnOriginal = new wxButton(this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    bmpReplacer = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER);
    btnReplacer = new wxButton(this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
    // end wxGlade
}


void DialogEvtCmdTile::set_properties()
{
    // begin wxGlade: DialogEvtCmdTile::set_properties
    SetTitle(_("Change tile"));
    rbOptions->SetSelection(0);
    bmpOriginal->SetMinSize(wxSize(32, 32));
    bmpReplacer->SetMinSize(wxSize(32, 32));
    btnOK->SetDefault();
    // end wxGlade
}


void DialogEvtCmdTile::do_layout()
{
    // begin wxGlade: DialogEvtCmdTile::do_layout
    wxBoxSizer* szTile = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szMiddle = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szReplacer = new wxStaticBoxSizer(szReplacer_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szOriginal = new wxStaticBoxSizer(szOriginal_staticbox, wxHORIZONTAL);
    szTile->Add(rbOptions, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szOriginal->Add(bmpOriginal, 0, wxRIGHT, 1);
    szOriginal->Add(btnOriginal, 0, wxLEFT, 1);
    szMiddle->Add(szOriginal, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szReplacer->Add(bmpReplacer, 0, wxRIGHT, 1);
    szReplacer->Add(btnReplacer, 0, wxLEFT, 1);
    szMiddle->Add(szReplacer, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szTile->Add(szMiddle, 0, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1);
    szBottom->Add(btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1);
    szTile->Add(szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szTile);
    szTile->Fit(this);
    Layout();
    // end wxGlade
}

