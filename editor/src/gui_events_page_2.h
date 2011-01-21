///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_events_page_2__
#define __gui_events_page_2__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/radiobut.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/radiobox.h>
#include <wx/checkbox.h>
#include <wx/dialog.h>
#include <wx/listbox.h>
#include <wx/spinctrl.h>
#include <wx/treectrl.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/tglbtn.h>
#include <wx/slider.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/statline.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdBattle_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdBattle_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTroopFixed;
		wxChoice* chTroopFixed;
		wxRadioButton* rbtnTroopVariable;
		wxTextCtrl* tcTroopVariable;
		wxButton* btnTroopVariable;
		wxRadioButton* rbtnBackgroundFromTerrain;
		wxRadioButton* rbtnBackgroundSelect;
		wxTextCtrl* tcBackground;
		wxButton* btnBackground;
		wxRadioBox* rbEscape;
		wxRadioBox* rbDefeat;
		wxCheckBox* chbAlliedFirst;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdBattle_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Start battle"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdBattle_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdCommerce_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdCommerce_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbType;
		wxChoice* chStyle;
		wxListBox* listSell;
		
		wxButton* btnAdd;
		wxButton* btnRemove;
		
		wxListBox* listObjects;
		wxCheckBox* chbDoNotResell;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdCommerce_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Visit commerce"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdCommerce_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdInn_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdInn_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chMessage;
		wxSpinCtrl* spin_ctrl_1;
		wxCheckBox* ChkCondition;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdInn_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Visit inn"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdInn_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdActorNameInput_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdActorNameInput_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chActor;
		wxRadioBox* rbMode;
		wxCheckBox* chbShowName;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdActorNameInput_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Actor name input"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdActorNameInput_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdTeleport_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdTeleport_Base : public wxDialog 
{
	private:
	
	protected:
		wxTreeCtrl* treeMaps;
		wxPanel* pnMap;
		wxStaticText* sTMap;
		wxToggleButton* btnScale11;
		wxToggleButton* btnScale12;
		wxToggleButton* btnScale14;
		
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
	
	public:
		
		dlgEvtCmdTeleport_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Teleport"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdTeleport_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdMemorizePlace_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdMemorizePlace_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* stVariableMapID;
		wxTextCtrl* tcVariableMapID;
		wxButton* btnVariableMapID;
		wxStaticText* stVariableX;
		wxTextCtrl* tcVariableX;
		wxButton* btnVariableX;
		wxStaticText* stVariableY;
		wxTextCtrl* tcVariableY;
		wxButton* btnVariableY;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdMemorizePlace_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Memorize place"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdMemorizePlace_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdGoToMemorizedPlace_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdGoToMemorizedPlace_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* stVariableMapID;
		wxTextCtrl* tcVariableMapID;
		wxButton* btnVariableMapID;
		wxStaticText* stVariableX;
		wxTextCtrl* tcVariableX;
		wxButton* btnVariableX;
		wxStaticText* stVariableY;
		wxTextCtrl* tcVariableY;
		wxButton* btnVariableY;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdGoToMemorizedPlace_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Go to memorized place"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdGoToMemorizedPlace_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdVehiclePosition_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdVehiclePosition_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbVehicle;
		wxRadioButton* rbtnPositionSpecify;
		wxTextCtrl* tcPositionSpecify;
		wxButton* btnPositionSpecify;
		wxRadioButton* rbtnPositionVariable;
		wxStaticText* stPositionVariableMapID;
		wxTextCtrl* tcPositionVariableMapID;
		wxButton* btnPositionVariableMapID;
		wxStaticText* stPositionVariableX;
		wxTextCtrl* tcPositionVariableX;
		wxButton* btnPositionVariableX;
		wxStaticText* stPositionVariableY;
		wxTextCtrl* tcPositionVariableY;
		wxButton* btnPositionVariableY;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdVehiclePosition_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change vehicle position"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdVehiclePosition_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdEventPosition_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdEventPosition_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chEvent;
		wxRadioButton* rbtnPositionEspecify;
		wxTextCtrl* tcPositionEspecify;
		wxButton* btnPositionEspecify;
		wxRadioButton* rbtnPositionVariable;
		wxStaticText* stPositionVariableX;
		wxTextCtrl* tcPositionVariableX;
		wxButton* btnPositionVariableX;
		wxStaticText* stPositionVariableY;
		wxTextCtrl* tcPositionVariableY;
		wxButton* btnPositionVariableY;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdEventPosition_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change event position"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdEventPosition_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdSwapEvents_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdSwapEvents_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chEvent1;
		wxChoice* chEvent2;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdSwapEvents_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Swap events"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdSwapEvents_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdGetTerrainID_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdGetTerrainID_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnPlaceSpecify;
		wxTextCtrl* tcPlaceSpecify;
		wxButton* btnPlaceSpecify;
		wxRadioButton* rbtnPlaceVariable;
		wxStaticText* stlPlaceVariableX;
		wxTextCtrl* tcPlaceVariableX;
		wxButton* btnPlaceVariableX;
		wxStaticText* stPlaceVariableY;
		wxTextCtrl* tcPlaceVariableY;
		wxButton* btnPlaceVariableY;
		wxTextCtrl* tcStoreVariableID;
		wxButton* btnStoreVariableID;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdGetTerrainID_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Get terrain ID"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdGetTerrainID_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdGetPositionID_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdGetPositionID_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnPlaceSpecify;
		wxTextCtrl* tcPlaceSpecify;
		wxButton* btnPlaceSpecify;
		wxRadioButton* rbtnPlaceVariable;
		wxStaticText* stPlaceVariableX;
		wxTextCtrl* tcPlaceVariableX;
		wxButton* btnPlaceVariableX;
		wxStaticText* stPlaceVariableY;
		wxTextCtrl* tcPlaceVariableY;
		wxButton* btnPlaceVariableY;
		wxTextCtrl* tcStoreVariableID;
		wxButton* btnStoreVariableID;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdGetPositionID_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Get position ID"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdGetPositionID_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdBlankScreen_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdBlankScreen_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chMethod;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdBlankScreen_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Blank screen"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdBlankScreen_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdShowScreen_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdShowScreen_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chMethod;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdShowScreen_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Show screen"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdShowScreen_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdTone_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdTone_Base : public wxDialog 
{
	private:
	
	protected:
		
		wxStaticText* st0Percent;
		
		wxStaticText* st100Percent;
		
		wxStaticText* st200Percent;
		
		
		wxStaticText* stRed;
		wxSlider* slRed;
		wxSpinCtrl* spinRed;
		wxStaticText* stRedPercent;
		wxStaticText* stGreen;
		wxSlider* slGreen;
		wxSpinCtrl* spinGreen;
		wxStaticText* stGreenPercent;
		wxStaticText* stBlue;
		wxSlider* slBlue;
		wxSpinCtrl* spinBlue;
		wxStaticText* stBluePercent;
		wxStaticText* stSaturation;
		wxSlider* slSaturation;
		wxSpinCtrl* spinSaturation;
		wxStaticText* stSaturationPercent;
		wxStaticBitmap* bmpPreview;
		wxSpinCtrl* SpinTime;
		wxStaticText* stTime;
		wxCheckBox* chbWait;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdTone_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change screen tone"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdTone_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdFlashScreen_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdFlashScreen_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* bmpSample;
		
		wxStaticText* stMin;
		
		wxStaticText* stMax;
		
		wxStaticText* stRed;
		wxSlider* slRed;
		wxSpinCtrl* spinRed;
		wxStaticText* stGreen;
		wxSlider* slGreen;
		wxSpinCtrl* spinGreen;
		wxStaticText* stBlue;
		wxSlider* slBlue;
		wxSpinCtrl* spinBlue;
		wxStaticText* stOpacity;
		wxSlider* slOpacity;
		wxSpinCtrl* spinOpacity;
		wxSpinCtrl* spinTime;
		wxStaticText* stTime;
		wxCheckBox* chbWait;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdFlashScreen_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Flash screen"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdFlashScreen_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdShake_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdShake_Base : public wxDialog 
{
	private:
	
	protected:
		wxSlider* slStrength;
		wxStaticText* stStrengthLower;
		
		wxStaticText* szStrengthNormal;
		
		wxStaticText* stStrengthHigher;
		wxSlider* slSpeed;
		wxStaticText* stSpeedSlower;
		
		wxStaticText* stSpeedNormal;
		
		wxStaticText* stSpeedFaster;
		wxSpinCtrl* spinTime;
		wxStaticText* stTime;
		wxCheckBox* chbWait;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdShake_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Shake screen"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdShake_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdMoveScreen_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdMoveScreen_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		
		wxRadioButton* rbtnUp;
		
		wxRadioButton* rbtnLeft;
		
		wxRadioButton* rbtnRight;
		
		wxRadioButton* rbtnDown;
		
		wxSpinCtrl* spinTiles;
		wxChoice* chSpeed;
		wxCheckBox* chbWait;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdMoveScreen_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Move screen"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdMoveScreen_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdWeather_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdWeather_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbEffect;
		wxRadioBox* rbIntensity;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdWeather_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Weather effect"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdWeather_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdPicture_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdPicture_Base : public wxDialog 
{
	private:
	
	protected:
		wxSpinCtrl* spinNumber;
		wxTextCtrl* tcPicture;
		wxButton* btnPicture;
		wxRadioButton* rbtnSpecify;
		wxStaticText* stSpecifyX;
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
		wxStaticLine* linePicture;
		wxCheckBox* chbScrollMapFix;
		wxSpinCtrl* spinIntensity;
		wxStaticText* stIntensity;
		wxSpinCtrl* spinTrasparency;
		wxStaticText* stTrasparency;
		wxRadioBox* rbTrasparentColor;
		wxTextCtrl* tcAttributes;
		wxButton* btnAttributes;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdPicture_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Show picture"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdPicture_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdMovePicture_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdMovePicture_Base : public wxDialog 
{
	private:
	
	protected:
		wxSpinCtrl* spinNumber;
		wxRadioButton* rbtnSpecify;
		wxStaticText* stSpecifyX;
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
		wxSpinCtrl* spinIntensity;
		wxStaticText* stIntensity;
		wxSpinCtrl* spinTrasparency;
		wxStaticText* stTrasparency;
		
		wxTextCtrl* tcAttributes;
		wxButton* btnAttributes;
		wxSpinCtrl* spinTime;
		wxStaticText* stTime;
		wxCheckBox* chbWait;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdMovePicture_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Move picture"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdMovePicture_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdDeletePicture_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdDeletePicture_Base : public wxDialog 
{
	private:
	
	protected:
		wxSpinCtrl* spinPicture;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdDeletePicture_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Delete picture"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdDeletePicture_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdAnimation_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdAnimation_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* bmpAnimation;
		wxChoice* chAnimation;
		wxChoice* chTarget;
		wxCheckBox* chbWait;
		wxCheckBox* chbWholeMapRange;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdAnimation_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Show animation"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdAnimation_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdActorTransparency_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdActorTransparency_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdActorTransparency_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change actor transparency"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdActorTransparency_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdFlashCharacter_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdFlashCharacter_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chTarget;
		wxStaticBitmap* bmpSample;
		
		wxStaticText* stColorMin;
		
		wxStaticText* stColorMax;
		
		wxStaticText* stRed;
		wxSlider* slRed;
		wxSpinCtrl* spinRed;
		wxStaticText* stGreen;
		wxSlider* slGreen;
		wxSpinCtrl* spinGreen;
		wxStaticText* stBlue;
		wxSlider* slBlue;
		wxSpinCtrl* spinBlue;
		wxStaticText* stOpacity;
		wxSlider* slOpacity;
		wxSpinCtrl* spinOpacity;
		wxSpinCtrl* spinTime;
		wxStaticText* stTime;
		wxCheckBox* chbWait;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdFlashCharacter_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Flash character"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdFlashCharacter_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdEventMovement_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdEventMovement_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chTarget;
		wxRadioBox* rbSpeed;
		wxListBox* listPath;
		wxButton* btnDelete;
		wxButton* btnClear;
		wxCheckBox* chbLoop;
		wxCheckBox* ChkIgnore;
		wxButton* btnUp;
		wxButton* btnLookUp;
		wxButton* btnStartJump;
		wxButton* btnRight;
		wxButton* btnLookRight;
		wxButton* btnEndJump;
		wxButton* btnDown;
		wxButton* btnLookDown;
		wxButton* btnFixDirection;
		wxButton* btnLeft;
		wxButton* btnLookLeft;
		wxButton* btnCancelFix;
		wxButton* btnRightUp;
		wxButton* btn90Right;
		wxButton* btnGhost;
		wxButton* btnRightDown;
		wxButton* btn90Left;
		wxButton* btnEndGhost;
		wxButton* btnLeftUp;
		wxButton* btn180Right;
		wxButton* btnStopAnimation;
		wxButton* btnLeftDown;
		wxButton* btnRightLeft;
		wxButton* btnContinueAnimation;
		wxButton* btnRandom;
		wxButton* btnRandomDirection;
		wxButton* btnTrasparencyUp;
		wxButton* btnFollowPlayer;
		wxButton* btnLookPlayer;
		wxButton* btnTrasparencyDown;
		wxButton* btnEvadePlayer;
		wxButton* btnTurnBack;
		wxButton* btnEnableSwitch;
		wxButton* btnGo;
		wxButton* btnWait;
		wxButton* btnDisableSwitch;
		wxButton* btnSpeedUp;
		wxButton* btnFrequencyUp;
		wxButton* btnChangeGraphic;
		wxButton* btnSpeedDown;
		wxButton* btnFrequencyDown;
		wxButton* btnSoundEffect;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdEventMovement_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Event movement"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdEventMovement_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdWait_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdWait_Base : public wxDialog 
{
	private:
	
	protected:
		wxSpinCtrl* spinTime;
		wxStaticText* stTime;
		wxButton* wxID_OK;
		wxButton* wxID_CANCEL;
		wxButton* wxID_HELP;
	
	public:
		
		dlgEvtCmdWait_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Wait"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdWait_Base();
	
};

#endif //__gui_events_page_2__
