///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_attributes__
#define __gui_database_attributes__

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
#include <wx/radiobox.h>
#include <wx/spinctrl.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnAttribute_Base
///////////////////////////////////////////////////////////////////////////////
class pnAttribute_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stAttribute;
		wxListBox* listAttribute;
		wxButton* btnAttributeMaxNumber;
		wxTextCtrl* tcAttributeName;
		wxRadioBox* rbAttributeClassification;
		wxStaticText* szAttributeEffectRateA;
		wxSpinCtrl* SpinAttributeEffectRateA;
		wxStaticText* szAttributeEffectRateAPercent;
		wxStaticText* szAttributeEffectRateB;
		wxSpinCtrl* SpinAttributeEffectRateB;
		wxStaticText* szAttributeEffectRateBPercent;
		wxStaticText* szAttributeEffectRateC;
		wxSpinCtrl* SpinAttributeEffectRateC;
		wxStaticText* szAttributeEffectRateCPercent;
		wxStaticText* szAttributeEffectRateD;
		wxSpinCtrl* SpinAttributeEffectRateD;
		wxStaticText* szAttributeEffectRateDPercent;
		wxStaticText* szAttributeEffectRateE;
		wxSpinCtrl* SpinAttributeEffectRateE;
		wxStaticText* szAttributeEffectRateEPercent;
	
	public:
		
		pnAttribute_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnAttribute_Base();
	
};

#endif //__gui_database_attributes__
