/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Editor.
// 
// EasyRPG Editor is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// EasyRPG Editor is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with EasyRPG Editor. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#include "DialogMap.h"
DialogMap::DialogMap(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    szGraphics_staticbox = new wxStaticBox(this, -1, _("Graphics"));
    szSize_staticbox = new wxStaticBox(this, -1, _("Size"));
    szLoopTime_staticbox = new wxStaticBox(this, -1, _("Loop time"));
    szTroopEncounters_staticbox = new wxStaticBox(this, -1, _("Troop encounters"));
    szPanoramaGraphic_staticbox = new wxStaticBox(this, -1, _("Panorama graphic"));
    szParallaxOptions_staticbox = new wxStaticBox(this, -1, _("Parallax options"));
    szPanorama_staticbox = new wxStaticBox(this, -1, _("Panorama"));
    szMapMusic_staticbox = new wxStaticBox(this, -1, _("Map music"));
    szBattleBackground_staticbox = new wxStaticBox(this, -1, _("Battle background"));
    szName_staticbox = new wxStaticBox(this, -1, _("Name"));
    tcName = new wxTextCtrl(this, wxID_ANY, wxEmptyString);
    const wxString *chGraphics_choices = NULL;
    chGraphics = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chGraphics_choices, 0);
    spinSizeWidth = new wxSpinCtrl(this, wxID_ANY, wxT("20"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 20, 500);
    stSize = new wxStaticText(this, wxID_ANY, _("X"));
    spinSizeHeight = new wxSpinCtrl(this, wxID_ANY, wxT("15"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 15, 500);
    const wxString *chLoopTime_choices = NULL;
    chLoopTime = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, chLoopTime_choices, 0);
    lcTroopEncounters = new wxListCtrl(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxSUNKEN_BORDER);
    stEncounterSteps = new wxStaticText(this, wxID_ANY, _("Encounter steps"));
    spinEncounterSteps = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    chbUsePanorama = new wxCheckBox(this, wxID_ANY, _("Use panorama"));
    bmpPanoramaGraphic = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER);
    btnPanoramaGraphic = new wxButton(this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    chbParallaxHorizontal = new wxCheckBox(this, wxID_ANY, _("Horizontal"));
    chbParallaxHorizontalAutomatic = new wxCheckBox(this, wxID_ANY, _("Automatic"));
    stParallaxHorizontalSpeed = new wxStaticText(this, wxID_ANY, _("Speed"));
    spinParallaxHorizontalSpeed = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    szParallaxSeparator = new wxStaticLine(this, wxID_ANY);
    chbParallaxVertical = new wxCheckBox(this, wxID_ANY, _("Vertical"));
    chbParallaxVerticalAutomatic = new wxCheckBox(this, wxID_ANY, _("Automatic"));
    stParallaxVerticalSpeed = new wxStaticText(this, wxID_ANY, _("Speed"));
    spinParallaxVerticalSpeed = new wxSpinCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    rbtnMapMusicFromParentMap = new wxRadioButton(this, wxID_ANY, _("From parent map"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP);
    rbtnMapMusicNone = new wxRadioButton(this, wxID_ANY, _("None"));
    rbtnMapMusicSelect = new wxRadioButton(this, wxID_ANY, _("Select"));
    tcMapMusicSelect = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
    btnMapMusicSelect = new wxButton(this, wxID_ANY, _("..."));
    rbtnBattleBackgroundFromParentMap = new wxRadioButton(this, wxID_ANY, _("From parent map"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP);
    rbtnBattleBackgroundFromTerrain = new wxRadioButton(this, wxID_ANY, _("From terrain"));
    rbtnBattleBackgroundSelect = new wxRadioButton(this, wxID_ANY, _("Select"));
    tcBattleBackgroundSelect = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
    btnBattleBackgroundSelect = new wxButton(this, wxID_ANY, _("..."));
    const wxString rbTeleport_choices[] = {
        _("From parent map"),
        _("Allowed"),
        _("Disallowed")
    };
    rbTeleport = new wxRadioBox(this, wxID_ANY, _("Teleport"), wxDefaultPosition, wxDefaultSize, 3, rbTeleport_choices, 1, wxRA_SPECIFY_COLS);
    const wxString rbEscape_choices[] = {
        _("From parent map"),
        _("Allowed"),
        _("Disallowed")
    };
    rbEscape = new wxRadioBox(this, wxID_ANY, _("Escape"), wxDefaultPosition, wxDefaultSize, 3, rbEscape_choices, 1, wxRA_SPECIFY_COLS);
    const wxString rbSave_choices[] = {
        _("From parent map"),
        _("Allowed"),
        _("Disallowed")
    };
    rbSave = new wxRadioBox(this, wxID_ANY, _("Save"), wxDefaultPosition, wxDefaultSize, 3, rbSave_choices, 1, wxRA_SPECIFY_COLS);
    btnOK = new wxButton(this, wxID_OK, wxEmptyString);
    btnCancel = new wxButton(this, wxID_CANCEL, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
}


void DialogMap::set_properties()
{
    SetTitle(_("Map Properties"));
    tcName->SetMinSize(wxSize(50, -1));
    chGraphics->SetMinSize(wxSize(50, -1));
    spinSizeWidth->SetMinSize(wxSize(50, -1));
    spinSizeHeight->SetMinSize(wxSize(50, -1));
    chLoopTime->SetMinSize(wxSize(50, -1));
    lcTroopEncounters->SetMinSize(wxSize(50, -1));
    spinEncounterSteps->SetMinSize(wxSize(50, -1));
    bmpPanoramaGraphic->SetMinSize(wxSize(160, 120));
    spinParallaxHorizontalSpeed->SetMinSize(wxSize(50, -1));
    spinParallaxVerticalSpeed->SetMinSize(wxSize(50, -1));
    tcMapMusicSelect->SetMinSize(wxSize(50, -1));
    btnMapMusicSelect->SetMinSize(wxSize(25, -1));
    tcBattleBackgroundSelect->SetMinSize(wxSize(50, -1));
    btnBattleBackgroundSelect->SetMinSize(wxSize(25, -1));
    rbTeleport->SetSelection(0);
    rbEscape->SetSelection(0);
    rbSave->SetSelection(0);
    btnOK->SetDefault();
}


void DialogMap::do_layout()
{
    wxBoxSizer* szMap = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTopRight = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szTopRightBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTopRightMiddle = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szBattleBackground = new wxStaticBoxSizer(szBattleBackground_staticbox, wxVERTICAL);
    wxBoxSizer* szBattleBackgroundSelect = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szMapMusic = new wxStaticBoxSizer(szMapMusic_staticbox, wxVERTICAL);
    wxBoxSizer* szMapMusicSelect = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szPanorama = new wxStaticBoxSizer(szPanorama_staticbox, wxVERTICAL);
    wxBoxSizer* szUsePanorama = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szParallaxOptions = new wxStaticBoxSizer(szParallaxOptions_staticbox, wxVERTICAL);
    wxBoxSizer* szParallaxVerticalSpeed = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szParallaxVerticalAutomatic = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szParallaxHorizontalSpeed = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szParallaxHorizontalAutomatic = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szPanoramaGraphic = new wxStaticBoxSizer(szPanoramaGraphic_staticbox, wxVERTICAL);
    wxBoxSizer* szTopLeft = new wxBoxSizer(wxVERTICAL);
    wxStaticBoxSizer* szTroopEncounters = new wxStaticBoxSizer(szTroopEncounters_staticbox, wxVERTICAL);
    wxBoxSizer* szEncounterSteps = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szLoopTime = new wxStaticBoxSizer(szLoopTime_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szSize = new wxStaticBoxSizer(szSize_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szGraphics = new wxStaticBoxSizer(szGraphics_staticbox, wxHORIZONTAL);
    wxStaticBoxSizer* szName = new wxStaticBoxSizer(szName_staticbox, wxHORIZONTAL);
    szName->Add(tcName, 1, 0, 0);
    szTopLeft->Add(szName, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szGraphics->Add(chGraphics, 1, 0, 0);
    szTopLeft->Add(szGraphics, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szSize->Add(spinSizeWidth, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1);
    szSize->Add(stSize, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1);
    szSize->Add(spinSizeHeight, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1);
    szTopLeft->Add(szSize, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szLoopTime->Add(chLoopTime, 1, 0, 0);
    szTopLeft->Add(szLoopTime, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szTroopEncounters->Add(lcTroopEncounters, 1, wxBOTTOM|wxEXPAND, 1);
    szEncounterSteps->Add(stEncounterSteps, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1);
    szEncounterSteps->Add(spinEncounterSteps, 1, wxLEFT|wxTOP|wxALIGN_CENTER_VERTICAL, 1);
    szTroopEncounters->Add(szEncounterSteps, 0, wxEXPAND, 0);
    szTopLeft->Add(szTroopEncounters, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szTop->Add(szTopLeft, 1, wxEXPAND, 0);
    szPanorama->Add(chbUsePanorama, 0, wxEXPAND, 0);
    szPanoramaGraphic->Add(bmpPanoramaGraphic, 0, wxBOTTOM, 1);
    szPanoramaGraphic->Add(btnPanoramaGraphic, 0, wxTOP|wxALIGN_RIGHT, 1);
    szUsePanorama->Add(szPanoramaGraphic, 0, wxRIGHT|wxEXPAND, 1);
    szParallaxOptions->Add(0, 0, 1, wxEXPAND, 0);
    szParallaxOptions->Add(chbParallaxHorizontal, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1);
    szParallaxHorizontalAutomatic->Add(15, 15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    szParallaxHorizontalAutomatic->Add(chbParallaxHorizontalAutomatic, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1);
    szParallaxOptions->Add(szParallaxHorizontalAutomatic, 0, wxEXPAND, 0);
    szParallaxHorizontalSpeed->Add(stParallaxHorizontalSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1);
    szParallaxHorizontalSpeed->Add(spinParallaxHorizontalSpeed, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1);
    szParallaxOptions->Add(szParallaxHorizontalSpeed, 0, wxEXPAND, 0);
    szParallaxOptions->Add(0, 0, 1, wxEXPAND, 0);
    szParallaxOptions->Add(szParallaxSeparator, 0, wxTOP|wxBOTTOM|wxEXPAND, 1);
    szParallaxOptions->Add(0, 0, 1, wxEXPAND, 0);
    szParallaxOptions->Add(chbParallaxVertical, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1);
    szParallaxVerticalAutomatic->Add(15, 15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    szParallaxVerticalAutomatic->Add(chbParallaxVerticalAutomatic, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1);
    szParallaxOptions->Add(szParallaxVerticalAutomatic, 0, wxEXPAND, 0);
    szParallaxVerticalSpeed->Add(stParallaxVerticalSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1);
    szParallaxVerticalSpeed->Add(spinParallaxVerticalSpeed, 1, wxLEFT|wxTOP, 1);
    szParallaxOptions->Add(szParallaxVerticalSpeed, 0, wxEXPAND, 0);
    szParallaxOptions->Add(0, 0, 1, wxEXPAND, 0);
    szUsePanorama->Add(szParallaxOptions, 1, wxLEFT|wxEXPAND, 1);
    szPanorama->Add(szUsePanorama, 0, wxEXPAND, 0);
    szTopRight->Add(szPanorama, 0, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szMapMusic->Add(rbtnMapMusicFromParentMap, 0, wxALL|wxEXPAND, 1);
    szMapMusic->Add(rbtnMapMusicNone, 0, wxALL|wxEXPAND, 1);
    szMapMusic->Add(rbtnMapMusicSelect, 0, wxALL|wxEXPAND, 1);
    szMapMusicSelect->Add(tcMapMusicSelect, 1, wxALIGN_CENTER_VERTICAL, 0);
    szMapMusicSelect->Add(btnMapMusicSelect, 0, 0, 0);
    szMapMusic->Add(szMapMusicSelect, 1, wxEXPAND, 0);
    szTopRightMiddle->Add(szMapMusic, 1, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szBattleBackground->Add(rbtnBattleBackgroundFromParentMap, 0, wxALL|wxEXPAND, 1);
    szBattleBackground->Add(rbtnBattleBackgroundFromTerrain, 0, wxALL|wxEXPAND, 1);
    szBattleBackground->Add(rbtnBattleBackgroundSelect, 0, wxALL|wxEXPAND, 1);
    szBattleBackgroundSelect->Add(tcBattleBackgroundSelect, 1, wxALIGN_CENTER_VERTICAL, 0);
    szBattleBackgroundSelect->Add(btnBattleBackgroundSelect, 0, 0, 0);
    szBattleBackground->Add(szBattleBackgroundSelect, 1, wxEXPAND, 0);
    szTopRightMiddle->Add(szBattleBackground, 1, wxLEFT|wxRIGHT|wxEXPAND, 1);
    szTopRight->Add(szTopRightMiddle, 0, wxEXPAND, 0);
    szTopRightBottom->Add(rbTeleport, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1);
    szTopRightBottom->Add(rbEscape, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1);
    szTopRightBottom->Add(rbSave, 1, wxLEFT|wxRIGHT|wxBOTTOM, 1);
    szTopRight->Add(szTopRightBottom, 0, wxEXPAND, 0);
    szTop->Add(szTopRight, 0, wxEXPAND, 0);
    szMap->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnOK, 0, wxALL, 1);
    szBottom->Add(btnCancel, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szMap->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szMap);
    szMap->Fit(this);
    Layout();
}
