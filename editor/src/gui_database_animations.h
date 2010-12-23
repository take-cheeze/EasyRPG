///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_animations__
#define __gui_database_animations__

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
#include <wx/listctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/checkbox.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnAnimation_Base
///////////////////////////////////////////////////////////////////////////////
class pnAnimation_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stAnimation;
		wxListBox* listAnimation;
		wxButton* btnAnimationMaxNumber;
		wxTextCtrl* stAnimationName;
		wxTextCtrl* tcAnimationGraphic;
		wxButton* btnAnimationGraphic;
		wxChoice* chEnemyTargetTest;
		wxSpinCtrl* spinAnimationNumberOfFrames;
		wxButton* szAnimationFramesPrevious;
		wxListBox* listAnimationFrames;
		wxButton* btnAnimationFramesNext;
		wxListCtrl* lcAnimationTimeline;
		wxStaticBitmap* bmpAnimationCanvas;
		wxChoice* chAnimationRange;
		wxChoice* chAnimationYOrdinate;
		
		wxCheckBox* chbAnimationSnapToGrid;
		wxButton* btnAnimationLikePrevious;
		wxButton* btnAnimationEdit;
		wxButton* btnAnimationComplete;
		wxButton* btnAnimationMakeAll;
		wxButton* btnAnimationPlay;
		
		wxListBox* listAnimationGraphic;
	
	public:
		
		pnAnimation_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnAnimation_Base();
	
};

#endif //__gui_database_animations__
