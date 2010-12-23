///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
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
#define SCALE_12 1004
#define SCALE_14 1005
#define SCALE_18 1006
#define ID_DATABASE 1007
#define ID_MATERIAL 1008
#define ID_MUSIC 1009
#define ID_PLAY_TEST 1010
#define ID_FULL_SCREEN 1011
#define ID_SHOW_TITLE 1012
#define ID_SCALE_12 1013
#define ID_SCALE_14 1014
#define ID_SCALE_18 1015
#define ID_SELECT 1016
#define ID_PEN 1017
#define ID_RECTANGLE 1018
#define ID_CIRCLE 1019
#define ID_FILL 1020

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
		
		// Virtual event handlers, overide them in your derived class
		virtual void New_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Open_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Close_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void MakeGameDisk_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Exit_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Save_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Revert_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void LowerLayer_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void UpperLayer_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Events_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Scale11_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Scale12_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Scale14_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Scale18_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Database_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Material_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Music_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void PlayTest_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void FullScreen_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void ShowTitle_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Help_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void About_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void New_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Undo_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Select_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Zoom_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Pen_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Rectangle_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Circle_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Fill_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void MapTree_menu_click( wxMouseEvent& event ) { event.Skip(); }
		virtual void EditorMap_menu_click( wxMouseEvent& event ) { event.Skip(); }
		
	
	public:
		
		frmEditor_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("EasyRPG Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 768,576 ), long style = wxDEFAULT_FRAME_STYLE );
		
		~frmEditor_Base();
		
		void swEditorOnIdle( wxIdleEvent& )
		{
			swEditor->SetSashPosition( 0 );
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
		wxCheckBox* chbPanorama;
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
		wxButton* btnOk;
		wxButton* btnCancel;
		wxButton* btnHelp;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OK_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Cancel_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Help_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgMap_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Map Properties"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
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
		
		wxRadioBox* rbImportAs;
		wxButton* btnClose;
		wxButton* btnHelp;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Folder_selected( wxCommandEvent& event ) { event.Skip(); }
		virtual void File_selected( wxCommandEvent& event ) { event.Skip(); }
		virtual void Import_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Export_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Delete_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void ImportAs_selected( wxCommandEvent& event ) { event.Skip(); }
		virtual void Close_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Help_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgMaterial_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Material Manager"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgMaterial_Base();
	
};

#endif //__gui_editor__
