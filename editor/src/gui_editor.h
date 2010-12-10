///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_editor__
#define __gui_editor__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/toolbar.h>
#include <wx/scrolwin.h>
#include <wx/treectrl.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/splitter.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/statbox.h>
#include <wx/choice.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
#include <wx/listctrl.h>
#include <wx/checkbox.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/statline.h>
#include <wx/radiobut.h>
#include <wx/radiobox.h>
#include <wx/dialog.h>
#include <wx/listbox.h>

///////////////////////////////////////////////////////////////////////////

#define ID_MAKE_GAME_DISK 1000
#define ID_LOWER_LAYER 1001
#define ID_UPPER_LAYER 1002
#define ID_EVENTS 1003
#define ID_ZOOM_12 1004
#define ID_ZOOM_14 1005
#define ID_ZOOM_18 1006
#define ID_DATABASE 1007
#define ID_MATERIAL_MANAGER 1008
#define ID_MUSIC_PLAYER 1009
#define ID_PLAY_TEST 1010
#define ID_FULL_SCREEN 1011
#define ID_SHOW_TITLE 1012
#define ID_SELECT 1013
#define ID_PEN 1014
#define ID_RECTANGLE 1015
#define ID_CIRCLE 1016
#define ID_FILL 1017

///////////////////////////////////////////////////////////////////////////////
/// Class frmEditor_Base
///////////////////////////////////////////////////////////////////////////////
class frmEditor_Base : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* frmEditorMenubar;
		wxMenu* MenuProject;
		wxMenu* MenuMap;
		wxMenu* MenuEdit;
		wxMenu* MenuScale;
		wxMenu* MenuTools;
		wxMenu* MenuGame;
		wxMenu* MenuHelp;
		wxStatusBar* frmEditorStatusbar;
		wxToolBar* frmEditorToolbar;
		wxToolBar* frmEditorToolbar2;
		wxSplitterWindow* swEditor;
		wxScrolledWindow* pnEditorTileset;
		wxPanel* pnEditorMapTree;
		wxTreeCtrl* tcMapTree;
		wxScrolledWindow* pnEditorMap;
	
	public:
		
		frmEditor_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("EasyRPG Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE );
		~frmEditor_Base();
		void swEditorOnIdle( wxIdleEvent& )
		{
		swEditor->SetSashPosition( 6 );
		swEditor->Disconnect( wxEVT_IDLE, wxIdleEventHandler( frmEditor_Base::swEditorOnIdle ), NULL, this );
		}
		
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgMap_Base
///////////////////////////////////////////////////////////////////////////////
class dlgMap_Base : public wxDialog 
{
	private:
	
	protected:
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
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgMap_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Map Properties"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME );
		~dlgMap_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgMaterial_Base
///////////////////////////////////////////////////////////////////////////////
class dlgMaterial_Base : public wxDialog 
{
	private:
	
	protected:
		wxListBox* listFolders;
		wxListBox* listFiles;
		wxButton* btnImport;
		wxButton* btnExport;
		wxButton* btnDelete;
		
		wxRadioBox* rbFormat;
		wxButton* wxID_CLOSE;
		wxButton* wxID_HELP;
	
	public:
		
		dlgMaterial_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Material Manager"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME );
		~dlgMaterial_Base();
	
};

#endif //__gui_editor__
