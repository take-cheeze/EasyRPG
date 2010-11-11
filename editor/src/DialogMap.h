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

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGMAP_H
#define DIALOGMAP_H

#include <wx/spinctrl.h>
#include <wx/statline.h>
#include <wx/listctrl.h>

class DialogMap: public wxDialog {
public:
    DialogMap(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    void set_properties();
    void do_layout();

protected:
    wxStaticBox* szBattleBackground_staticbox;
    wxStaticBox* szMapMusic_staticbox;
    wxStaticBox* szPanorama_staticbox;
    wxStaticBox* szParallaxOptions_staticbox;
    wxStaticBox* szPanoramaGraphic_staticbox;
    wxStaticBox* szTroopEncounters_staticbox;
    wxStaticBox* szLoopTime_staticbox;
    wxStaticBox* szSize_staticbox;
    wxStaticBox* szGraphics_staticbox;
    wxStaticBox* szName_staticbox;
    wxTextCtrl* tcName;
    wxChoice* chGraphics;
    wxSpinCtrl* spinSizeWidth;
    wxStaticText* stSize;
    wxSpinCtrl* spinSizeHeight;
    wxChoice* chLoopTime;
    wxListCtrl* lcTroopEncounters;
    wxStaticText* stEncounterSteps;
    wxSpinCtrl* spinEncounterSteps;
    wxCheckBox* chbUsePanorama;
    wxStaticBitmap* bmpPanoramaGraphic;
    wxButton* btnPanoramaGraphic;
    wxCheckBox* chbParallaxHorizontal;
    wxCheckBox* chbParallaxHorizontalAutomatic;
    wxStaticText* stParallaxHorizontalSpeed;
    wxSpinCtrl* spinParallaxHorizontalSpeed;
    wxStaticLine* szParallaxSeparator;
    wxCheckBox* chbParallaxVertical;
    wxCheckBox* chbParallaxVerticalAutomatic;
    wxStaticText* stParallaxVerticalSpeed;
    wxSpinCtrl* spinParallaxVerticalSpeed;
    wxRadioButton* rbtnMapMusicFromParentMap;
    wxRadioButton* rbtnMapMusicNone;
    wxRadioButton* rbtnMapMusicSelect;
    wxTextCtrl* tcMapMusicSelect;
    wxButton* btnMapMusicSelect;
    wxRadioButton* rbtnBattleBackgroundFromParentMap;
    wxRadioButton* rbtnBattleBackgroundFromTerrain;
    wxRadioButton* rbtnBattleBackgroundSelect;
    wxTextCtrl* tcBattleBackgroundSelect;
    wxButton* btnBattleBackgroundSelect;
    wxRadioBox* rbTeleport;
    wxRadioBox* rbEscape;
    wxRadioBox* rbSave;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
};

#endif
