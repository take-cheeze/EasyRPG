///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_troops__
#define __gui_database_troops__

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
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/panel.h>
#include <wx/notebook.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnTroop_Base
///////////////////////////////////////////////////////////////////////////////
class pnTroop_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stTroop;
		wxListBox* listTroop;
		wxButton* btnTroopMaxNumber;
		wxTextCtrl* tcTroopName;
		wxButton* btnTroopAutocomplete;
		wxButton* btnTroopTestBattle;
		wxButton* btnTroopChangeBackground;
		wxStaticBitmap* bmpTroop;
		
		wxButton* btnTroopAdd;
		wxButton* btnTroopRemove;
		wxButton* btnTroopEmpty;
		wxButton* btnTroopAlign;
		
		wxListBox* listTroopMonster;
		wxListBox* listTroopEncountersOn;
		wxButton* szTroopBattleEventsNewPage;
		wxButton* szTroopBattleEventsCopyPage;
		wxButton* szTroopBattleEventsPastePage;
		wxButton* szTroopBattleEventsDeletePage;
		wxNotebook* nbTroopBattleEvents;
		wxPanel* pnTroopBattleEvents;
		wxStaticText* stTroopBattleEventsConditions;
		wxTextCtrl* tcTroopBattleEventsConditions;
		wxButton* btnTroopBattleEventsConditions;
		wxListBox* listTroopBattleEvents;
	
	public:
		
		pnTroop_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnTroop_Base();
	
};

#endif //__gui_database_troops__
