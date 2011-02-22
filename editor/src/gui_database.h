///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database__
#define __gui_database__

#include <wx/intl.h>

#include <wx/gdicmn.h>
#include <wx/notebook.h>
#include <wx/string.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/spinctrl.h>
#include <wx/choice.h>
#include <wx/statbox.h>
#include <wx/listbox.h>
#include <wx/statbmp.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class dlgDb_Base
///////////////////////////////////////////////////////////////////////////////
class dlgDb_Base : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* nbDb;
		wxBitmapButton* btnMusic;
		
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnApply;
		wxButton* btnHelp;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnMusic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnOK_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancel_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnApply_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnHelp_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgDb_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Database"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgDb_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgDbMaxNumber_Base
///////////////////////////////////////////////////////////////////////////////
class dlgDbMaxNumber_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* stMaxNumber;
		wxSpinCtrl* spinMaxNumber;
		wxButton* btnOK;
		wxButton* btnCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnOK_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancel_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgDbMaxNumber_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Max number"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgDbMaxNumber_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgDbLearnSkill_Base
///////////////////////////////////////////////////////////////////////////////
class dlgDbLearnSkill_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chSkill;
		wxSpinCtrl* spinLevel;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnOK_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancel_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnHelp_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgDbLearnSkill_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Learn a skill..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgDbLearnSkill_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgDbSelectAnyGraphic_Base
///////////////////////////////////////////////////////////////////////////////
class dlgDbSelectAnyGraphic_Base : public wxDialog 
{
	private:
	
	protected:
		wxListBox* listGraphic;
		wxStaticBitmap* bmpGraphic;
		wxButton* btnOK;
		wxButton* btnCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnOK_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancel_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgDbSelectAnyGraphic_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Select graphic"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgDbSelectAnyGraphic_Base();
	
};

#endif //__gui_database__
