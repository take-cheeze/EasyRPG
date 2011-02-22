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
#include <wx/hyperlink.h>
#include <wx/notebook.h>
#include <wx/slider.h>

///////////////////////////////////////////////////////////////////////////

#define ID_PACK 1000
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
#define wxID_RENAME 1021

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
		wxScrolledWindow* pnTileset;
		wxPanel* pnMapTree;
		wxTreeCtrl* tcMapTree;
		wxScrolledWindow* pnEditorMap;
		
		// Virtual event handlers, overide them in your derived class
		virtual void New_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Open_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Close_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Pack_click( wxCommandEvent& event ) { event.Skip(); }
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
		virtual void Undo_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Select_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Zoom_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Pen_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Rectangle_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Circle_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Fill_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void tcMapTree_menu( wxTreeEvent& event ) { event.Skip(); }
		virtual void pnEditorMap_rclick( wxMouseEvent& event ) { event.Skip(); }
		
	
	public:
		
		frmEditor_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("EasyRPG Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 768,576 ), long style = wxDEFAULT_FRAME_STYLE );
		
		~frmEditor_Base();
	
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
		wxButton* btnOk;
		wxButton* btnCancel;
		wxButton* btnHelp;
		
		// Virtual event handlers, overide them in your derived class
		virtual void chbUsePanorama_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void bmpPanoramaGraphic_click( wxMouseEvent& event ) { event.Skip(); }
		virtual void btnPanoramaGraphic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnOK_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancel_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnHelp_click( wxCommandEvent& event ) { event.Skip(); }
		
	
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
		virtual void btnImport_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnExport_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnDelete_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void ImportAs_selected( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnClose_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnHelp_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgMaterial_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Material Manager"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgMaterial_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgNew_Base
///////////////////////////////////////////////////////////////////////////////
class dlgNew_Base : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* tcFolder;
		wxTextCtrl* tcTitle;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxTextCtrl* tcPath;
		wxButton* btnPath;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnOK_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancel_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgNew_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgNew_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgOpen_Base
///////////////////////////////////////////////////////////////////////////////
class dlgOpen_Base : public wxDialog 
{
	private:
	
	protected:
		wxListCtrl* lcProject;
		wxButton* btnOpen;
		wxButton* btnCancel;
		
		wxButton* btnRename;
		wxButton* btnDelete;
		wxTextCtrl* tcPath;
		wxButton* btnPath;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnOpen_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancel_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnRename_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnDelete_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void tcPath_key( wxKeyEvent& event ) { event.Skip(); }
		virtual void tcPath_dclick( wxMouseEvent& event ) { event.Skip(); }
		virtual void btnPath_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgOpen_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Open project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgOpen_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgRename_Base
///////////////////////////////////////////////////////////////////////////////
class dlgRename_Base : public wxDialog 
{
	private:
	
	protected:
		wxButton* btnOK;
		wxButton* btnCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnOK_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancel_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxTextCtrl* tcFolder;
		wxTextCtrl* tcTitle;
		
		dlgRename_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Rename"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgRename_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgPack_Base
///////////////////////////////////////////////////////////////////////////////
class dlgPack_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* stPack;
		wxTextCtrl* tcPath;
		wxButton* btnPath;
		wxCheckBox* cbRTP;
		wxButton* btnPack;
		wxButton* btnCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnPack_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCancel_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgPack_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Make game disk"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgPack_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgAbout_Base
///////////////////////////////////////////////////////////////////////////////
class dlgAbout_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* bmpAbout;
		wxStaticText* stAboutName;
		wxStaticText* stAboutDescription;
		wxStaticText* stAboutCopyright;
		wxHyperlinkCtrl* hlAbout;
		wxButton* btnCredits;
		
		wxButton* btnClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnCredits_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnClose_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgAbout_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About EasyRPG Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~dlgAbout_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgCredits_Base
///////////////////////////////////////////////////////////////////////////////
class dlgCredits_Base : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* nbCredits;
		wxPanel* pnWriters;
		wxTextCtrl* tcWriters;
		wxPanel* pnDocumenters;
		wxTextCtrl* tcDocumenters;
		wxPanel* pnTranslators;
		wxTextCtrl* tcTranslators;
		wxButton* btnClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnClose_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgCredits_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Credits"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgCredits_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgMusic_Base
///////////////////////////////////////////////////////////////////////////////
class dlgMusic_Base : public wxDialog 
{
	private:
	
	protected:
		wxListBox* listMusic;
		wxSlider* slFadeIn;
		wxStaticText* stFadeInNone;
		
		wxStaticText* stFadeIn5Seconds;
		
		wxStaticText* stFadeIn10Seconds;
		wxSlider* slVolume;
		wxStaticText* stVolume0Percent;
		
		wxStaticText* stVolume50Percent;
		
		wxStaticText* stVolume100Percent;
		wxSlider* slTempo;
		wxStaticText* stTempo50Percent;
		
		wxStaticText* stTempo100Percent;
		
		wxStaticText* stTempo150Percent;
		wxSlider* slBalance;
		wxStaticText* stBalanceLeft;
		
		wxStaticText* stBalanceCenter;
		
		wxStaticText* stBalanceRight;
		wxButton* btnPlay;
		wxButton* btnStop;
		wxStaticLine* linePlayMusic;
		wxButton* btnClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnClose_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgMusic_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Music player"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgMusic_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgVehicle_Base
///////////////////////////////////////////////////////////////////////////////
class dlgVehicle_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbVehicle;
		wxButton* btnOK;
		wxButton* btnCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void btnCancel_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgVehicle_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Starting vehicle position"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgVehicle_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgShiftMap_Base
///////////////////////////////////////////////////////////////////////////////
class dlgShiftMap_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbUp;
		wxRadioButton* rbLeft;
		
		wxRadioButton* rbRight;
		wxRadioButton* rbDown;
		wxSpinCtrl* spinTiles;
		wxButton* btnOK;
		wxButton* btnCancel;
	
	public:
		
		dlgShiftMap_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Shift map"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgShiftMap_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgArea_Base
///////////////////////////////////////////////////////////////////////////////
class dlgArea_Base : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* tcName;
		wxTextCtrl* tcSize;
		wxButton* btnSize;
		wxListCtrl* listTroop;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgArea_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Area properties"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgArea_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEncounter_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEncounter_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chEncounter;
		wxButton* btnOK;
		wxButton* btnCancel;
	
	public:
		
		dlgEncounter_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Encounter"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEncounter_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgPlayTest_Base
///////////////////////////////////////////////////////////////////////////////
class dlgPlayTest_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* stPlayTest;
	
	public:
		
		dlgPlayTest_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Play test"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION ); 
		~dlgPlayTest_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgSwitch_Base
///////////////////////////////////////////////////////////////////////////////
class dlgSwitch_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* stSwitch;
		wxListBox* listSwitch;
		wxButton* btnMaxNumber;
		wxListBox* listSwitches;
		wxTextCtrl* tcName;
		wxButton* btnName;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnApply;
	
	public:
		
		dlgSwitch_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Switch"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,300 ), long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgSwitch_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgVariable_Base
///////////////////////////////////////////////////////////////////////////////
class dlgVariable_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* stVariable;
		wxListBox* listVariable;
		wxButton* btnMaxNumber;
		wxListBox* listVariables;
		wxTextCtrl* tcName;
		wxButton* btnName;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnApply;
	
	public:
		
		dlgVariable_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Variable"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,300 ), long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgVariable_Base();
	
};

#endif //__gui_editor__
