///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_items__
#define __gui_database_items__

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
#include <wx/choice.h>
#include <wx/spinctrl.h>
#include <wx/radiobox.h>
#include <wx/checkbox.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnItem_Base
///////////////////////////////////////////////////////////////////////////////
class pnItem_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stItem;
		wxListBox* listItem;
		wxButton* btnItemMaxNumber;
		wxTextCtrl* tcItemName;
		wxChoice* chItemType;
		wxSpinCtrl* spinItemCost;
		wxChoice* chItemTimesUsed;
		wxTextCtrl* tcItemDescription;
		wxRadioBox* rbxItemActionRange;
		wxListBox* listItemCanBeUsedBy;
		wxListBox* listItemChangeStates;
		wxStaticText* stItemHPRecoverMax;
		wxSpinCtrl* spinItemHPRecoverPercent;
		wxStaticText* stItemHPRecoverPercentPlus;
		wxSpinCtrl* spinItemHPRecoverPoints;
		wxStaticText* stItemHPRecoverHP;
		wxStaticText* stItemMPRecoverMax;
		wxSpinCtrl* spinItemMPRecoverPercent;
		wxStaticText* stItemMPRecoverPercentPlus;
		wxSpinCtrl* spinItemMPRecoverPoints;
		wxStaticText* stItemMPRecoverMP;
		wxCheckBox* chbItemOptionsDisabledInBattle;
		wxCheckBox* chbItemOptionsOnlySuitableInFallenCharacters;
	
	public:
		
		pnItem_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnItem_Base();
	
};

#endif //__gui_database_items__
