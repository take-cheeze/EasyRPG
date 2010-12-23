///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_terrains__
#define __gui_database_terrains__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/listbox.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/statbox.h>
#include <wx/spinctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/checkbox.h>
#include <wx/radiobox.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnTerrain_Base
///////////////////////////////////////////////////////////////////////////////
class pnTerrain_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stTerrain;
		wxListBox* listTerrain;
		wxButton* btnTerrainMaxNumber;
		wxTextCtrl* tcTerrainName;
		wxSpinCtrl* spinTerrainDamage;
		wxSpinCtrl* spinTerrainEncounterRate;
		wxStaticText* stTerrainEncounterRate;
		wxStaticBitmap* bmpTerrainBattleBackgroundGraphic;
		wxStaticText* stTerrainBattleBackgroundGraphic;
		wxButton* btnTerrainBattleBackgroundGraphic;
		wxCheckBox* chbTerrainVehicleSmallShip;
		wxCheckBox* chbTerrainVehicleBigShip;
		wxCheckBox* chbTerrainVehicleAirShip;
		wxCheckBox* chbTerrainVehicleShipCanLand;
		wxRadioBox* rbTerrainTransparency;
	
	public:
		
		pnTerrain_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnTerrain_Base();
	
};

#endif //__gui_database_terrains__
