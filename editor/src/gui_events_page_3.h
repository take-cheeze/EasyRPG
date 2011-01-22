///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_events_page_3__
#define __gui_events_page_3__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/listbox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/slider.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/button.h>
#include <wx/statline.h>
#include <wx/dialog.h>
#include <wx/textctrl.h>
#include <wx/spinctrl.h>
#include <wx/radiobut.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/radiobox.h>
#include <wx/panel.h>
#include <wx/notebook.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdPlayMusic_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdPlayMusic_Base : public wxDialog 
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
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdPlayMusic_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Play music"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdPlayMusic_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdFadeMusic_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdFadeMusic_Base : public wxDialog 
{
	private:
	
	protected:
		wxSlider* slTime;
		wxStaticText* stTime0Seconds;
		
		wxStaticText* stTime5Seconds;
		
		wxStaticText* stTime10Seconds;
		
		wxStaticText* stTime15Seconds;
		
		wxStaticText* stTime20Seconds;
		wxButton* btnFade;
		wxButton* btnPlay;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdFadeMusic_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Fade music"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdFadeMusic_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdPlaySound_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdPlaySound_Base : public wxDialog 
{
	private:
	
	protected:
		wxListBox* listSound;
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
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdPlaySound_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Play sound"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdPlaySound_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdPlayVideo_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdPlayVideo_Base : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* stVideo;
		wxButton* btnVideo;
		wxSpinCtrl* spinSizeX;
		wxStaticText* stSize;
		wxSpinCtrl* spinSizeY;
		wxRadioButton* rbtnSpecify;
		wxStaticText* szSpecifyX;
		wxSpinCtrl* spinSpecifyX;
		
		wxStaticText* stSpecifyY;
		wxSpinCtrl* spinSpecifyY;
		wxRadioButton* rbtnVariable;
		wxStaticText* stVariableX;
		wxTextCtrl* tcVariableX;
		wxButton* btnVariableX;
		
		wxStaticText* stVariableY;
		wxTextCtrl* tcVariableY;
		wxButton* btnVariableY;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdPlayVideo_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Play video"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdPlayVideo_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdKeyAssignment_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdKeyAssignment_Base : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* tcVariable;
		wxButton* btnVariable;
		wxCheckBox* chbWait;
		wxCheckBox* chbDown;
		wxCheckBox* chbDecision;
		wxCheckBox* chbLeft;
		wxCheckBox* chbCancel;
		wxCheckBox* chbRight;
		wxCheckBox* chbShift;
		wxCheckBox* chbUp;
		
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdKeyAssignment_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Key assignment"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdKeyAssignment_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdTileset_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdTileset_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chChipSet;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdTileset_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change map tileset"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdTileset_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdPanorama_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdPanorama_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* bmpBackground;
		wxButton* btnBackground;
		
		wxCheckBox* btnHScroll;
		
		wxCheckBox* chbHScrollAuto;
		wxStaticText* stHScrollSpeed;
		wxSpinCtrl* spinHScrollSpeed;
		
		wxStaticLine* lineOptions;
		
		wxCheckBox* btnVScroll;
		
		wxCheckBox* chbVScrollAuto;
		wxStaticText* stVScrollSpeed;
		wxSpinCtrl* spinVScrollSpeed;
		
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdPanorama_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change map background"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdPanorama_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdEncounterRate_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdEncounterRate_Base : public wxDialog 
{
	private:
	
	protected:
		wxSpinCtrl* spinSteps;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdEncounterRate_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change encounter rate"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdEncounterRate_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdTile_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdTile_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOptions;
		wxStaticBitmap* bmpOriginal;
		wxButton* btnOriginal;
		wxStaticBitmap* bmpReplacer;
		wxButton* btnReplacer;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdTile_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change tile"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdTile_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdTeleportPlace_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdTeleportPlace_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxTextCtrl* tcPosition;
		wxButton* btnPosition;
		wxCheckBox* chbSwitch;
		wxTextCtrl* tcSwitch;
		wxButton* btnSwitch;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdTeleportPlace_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change teleport place"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdTeleportPlace_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdTeleportPermissions_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdTeleportPermissions_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdTeleportPermissions_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Teleport permissions"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdTeleportPermissions_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdEscapePlace_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdEscapePlace_Base : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* tcPosition;
		wxButton* btnPosition;
		wxCheckBox* chbSwitch;
		wxTextCtrl* tcSwitch;
		wxButton* btnSwitch;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdEscapePlace_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change escape place"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdEscapePlace_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdEscapePermissions_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdEscapePermissions_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdEscapePermissions_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Escape permissions"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdEscapePermissions_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdSavePermissions_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdSavePermissions_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdSavePermissions_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Save permissions"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdSavePermissions_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdSystemMenuPermissions_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdSystemMenuPermissions_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdSystemMenuPermissions_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("System menu permissions"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdSystemMenuPermissions_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdConditions_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdConditions_Base : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* nbConditions;
		wxPanel* pnConditions1;
		wxRadioButton* rbtnSwitch;
		wxTextCtrl* tcSwitch;
		wxButton* btnSwitch;
		wxStaticText* stSwitch;
		wxChoice* chSwitch;
		wxRadioButton* rbtnVariable;
		wxTextCtrl* tcVariable;
		wxButton* btnVariable;
		wxStaticText* stVariable;
		
		
		wxRadioButton* rbtnVariableFixed;
		wxSpinCtrl* spinVariableFiexd;
		wxRadioButton* rbtnVariableVariable;
		wxTextCtrl* tcVariableVariable;
		wxButton* btnVariableVariable;
		
		wxChoice* chVariable;
		wxRadioButton* rbtnTimer;
		wxSpinCtrl* spinTimerMinutes;
		wxStaticText* stTimerMinutes;
		wxSpinCtrl* spinTimerSeconds;
		wxStaticText* stTimerSeconds;
		wxChoice* chTimer;
		wxRadioButton* rbtnMoney;
		wxSpinCtrl* spinMoney;
		wxChoice* chMoney;
		wxPanel* pnConditions2;
		wxRadioButton* rbtnItem;
		wxChoice* chItem;
		wxChoice* chItem2;
		wxRadioButton* rbtnoActor;
		wxChoice* chActor;
		
		
		wxTextCtrl* tcActor2;
		wxButton* btnActor;
		wxRadioButton* rbtnGroup;
		wxChoice* chGroup;
		wxStaticText* stGroup;
		wxChoice* chGroup2;
		wxStaticText* stGroup2;
		wxRadioButton* rbtnVehicle;
		wxChoice* chVehicle;
		wxStaticText* stVehicle;
		wxRadioButton* rbtnKey;
		wxRadioButton* rbtnMusic;
		wxCheckBox* chbElse;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdConditions_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Conditions"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdConditions_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdLabel_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdLabel_Base : public wxDialog 
{
	private:
	
	protected:
		wxSpinCtrl* spinNumber;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdLabel_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Set label"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdLabel_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdGoToLabel_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdGoToLabel_Base : public wxDialog 
{
	private:
	
	protected:
		wxSpinCtrl* spinNumber;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdGoToLabel_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Go to label"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdGoToLabel_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdCallEvent_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdCallEvent_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnCommonEvent;
		wxChoice* chCommonEvent;
		wxRadioButton* rbtnMapEvent;
		wxChoice* chMapEvent;
		wxSpinCtrl* spinMapEvent;
		wxStaticText* stMapEvent;
		wxRadioButton* rbtnMapEventVariable;
		wxTextCtrl* tcMapEventVariableEvent;
		wxButton* btnMapEventVariableEvent;
		wxStaticText* stMapEventVariableEvent;
		wxTextCtrl* tcMapEventVariablePage;
		wxButton* btnMapEventVariablePage;
		wxStaticText* stMapEventVariablePage;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdCallEvent_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Call event"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdCallEvent_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdNotes_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdNotes_Base : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* tcNotes;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdNotes_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Notes"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdNotes_Base();
	
};

#endif //__gui_events_page_3__
