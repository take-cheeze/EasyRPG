///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_common_events__
#define __gui_database_common_events__

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
#include <wx/checkbox.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnCommonEvent_Base
///////////////////////////////////////////////////////////////////////////////
class pnCommonEvent_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stCommonEvent;
		wxListBox* ListEvent;
		wxButton* btnCommonEventMaxNumber;
		wxTextCtrl* tcCommonEventName;
		wxChoice* chCommonEventActivationConditions;
		wxCheckBox* chbCommonEventConditionActivationSwitch;
		wxTextCtrl* tcCommonEventConditionActivationSwitch;
		wxButton* btnCommonEventConditionActivationSwitch;
		wxListBox* ListCommonEventExecutionContent;
	
	public:
		
		pnCommonEvent_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnCommonEvent_Base();
	
};

#endif //__gui_database_common_events__
