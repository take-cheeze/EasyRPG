///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_events__
#define __gui_events__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/spinctrl.h>
#include <wx/choice.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/listbox.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvt_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvt_Base : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* stName;
		wxButton* btnNewPage;
		wxButton* btnCopyPage;
		wxButton* btnPastePage;
		wxButton* btnDeletePage;
		wxNotebook* nbPage;
		wxPanel* pnPage;
		wxCheckBox* chbSwitchA;
		wxTextCtrl* tcSwitchA;
		wxButton* btnSwitchA;
		wxStaticText* stSwitchA;
		wxCheckBox* chbSwitchB;
		wxTextCtrl* tcSwitchB;
		wxButton* btnSwitchB;
		wxStaticText* stSwitchB;
		wxCheckBox* chbVariable;
		wxTextCtrl* tcVariable;
		wxButton* btnVariable;
		wxStaticText* stVariable1;
		
		wxSpinCtrl* spinVariable;
		wxStaticText* stVariable2;
		
		wxCheckBox* chbObject;
		wxChoice* chObject;
		wxStaticText* stObject;
		wxCheckBox* chbActor;
		wxChoice* chActor;
		wxStaticText* stActor;
		wxCheckBox* chbTimer;
		wxSpinCtrl* spinTimerMinutes;
		wxStaticText* stTimerColon;
		wxSpinCtrl* spinTimerSeconds;
		wxStaticText* stTimer;
		wxStaticBitmap* bmpGraphic;
		wxCheckBox* chbGraphicTranslucent;
		wxButton* btnGraphic;
		wxChoice* chMovement;
		wxButton* btnMovementCreatePath;
		wxChoice* chTrigger;
		wxChoice* chPriority;
		wxCheckBox* chOverlap;
		wxChoice* chAnimation;
		wxChoice* chSpeed;
		wxListBox* listEvtCmd;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnApply;
		wxButton* btnHelp;
		
		// Virtual event handlers, overide them in your derived class
		virtual void EvtCmd_dclick( wxMouseEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgEvt_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Event Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvt_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmd_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmd_Base : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* pnEvtCmd;
		wxPanel* pnEvtCmd1;
		wxButton* btnMessage;
		wxButton* btnEquipment;
		wxButton* btnMessageOptions;
		wxButton* btnHP;
		wxButton* btnFaceGraphic;
		wxButton* btnMP;
		wxButton* btnChoice;
		wxButton* btnStatus;
		wxButton* btnNumberInput;
		wxButton* btnRecover;
		wxButton* btnSwitch;
		wxButton* btnDamage;
		wxButton* btnVariable;
		wxButton* btnActorName;
		wxButton* btnTimer;
		wxButton* btnActorTitle;
		wxButton* btnMoney;
		wxButton* btnActorGraphic;
		wxButton* btnItem;
		wxButton* btnActorFaceGraphic;
		wxButton* btnParty;
		wxButton* btnVehicleGraphic;
		wxButton* btnExperience;
		wxButton* btnSystemMusic;
		wxButton* btnLevel;
		wxButton* btnSystemSound;
		wxButton* btnParameter;
		wxButton* btnSystemGraphic;
		wxButton* btnSkill;
		wxButton* btnTransition;
		wxPanel* pnEvtCmd2;
		wxButton* btnBattle;
		wxButton* btnTone;
		wxButton* btnCommerce;
		wxButton* btnFlashScreen;
		wxButton* btnInn;
		wxButton* btnShake;
		wxButton* btnActorNameInput;
		wxButton* btnMoveScreen;
		wxButton* btnTeleport;
		wxButton* btnWeather;
		wxButton* btnMemorizePlace;
		wxButton* btnPicture;
		wxButton* btnGoToMemorizedPlace;
		wxButton* btnMovePicture;
		wxButton* btnVehicle;
		wxButton* btnDeletePicture;
		wxButton* btnVehiclePosition;
		wxButton* btnAnimation;
		wxButton* btnEventPosition;
		wxButton* btnActorTransparency;
		wxButton* btnSwapEvents;
		wxButton* btnFlashCharacter;
		wxButton* btnGetTerrainID;
		wxButton* btnEventMovement;
		wxButton* btnGetPositionID;
		wxButton* btnMoveAll;
		wxButton* btnBlankScreen;
		wxButton* btnStopAll;
		wxButton* btnShowScreen;
		wxButton* btnWait;
		wxPanel* pnEvtCmd3;
		wxButton* btnPlayMusic;
		wxButton* btnSaveMenu;
		wxButton* btnFadeMusic;
		wxButton* btnSaveMenuPermissions;
		wxButton* btnMemorizeMusic;
		wxButton* btnSystemMenu;
		wxButton* btnPlayMemorizedMusic;
		wxButton* btnSystemMenuPermissions;
		wxButton* btnPlaySound;
		wxButton* btnConditions;
		wxButton* btnPlayVideo;
		wxButton* btnLabel;
		wxButton* btnKeyAssignment;
		wxButton* btnGoToLabel;
		wxButton* btnTileset;
		wxButton* btnLoop;
		wxButton* btnPanorama;
		wxButton* btnBreakLoop;
		wxButton* btnEncounterRate;
		wxButton* btnStopEventProcess;
		wxButton* btnTile;
		wxButton* btnDeleteEventTemporally;
		wxButton* btnTeleportPlace;
		wxButton* btnCallEvent;
		wxButton* btnTeleportPermissions;
		wxButton* btnNote;
		wxButton* btnEscapePlace;
		wxButton* btnGameOver;
		wxButton* btnEscapePermissions;
		wxButton* btnGoToTitle;
		wxButton* btnClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Close_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgEvtCmd_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Command list"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmd_Base();
	
};

#endif //__gui_events__
