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
		wxStaticText* stMovementRate;
		wxChoice* chMovementRate;
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
		virtual void btnMessage_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnEquipment_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnMessageOptions_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnHP_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnFaceGraphic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnMP_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnChoice_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnStatus_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnNumberInput_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnRecover_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSwitch_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnDamage_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnVariable_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnActorName_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnTimer_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnActorTitle_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnMoney_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnActorGraphic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnItem_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnActorFaceGraphic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnParty_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnVehicleGraphic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnExperience_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSystemMusic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnLevel_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSystemSound_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnParameter_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSystemGraphic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSkill_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnTransition_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBattle_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnTone_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCommerce_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnFlashScreen_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnInn_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnShake_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnActorNameInput_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnMoveScreen_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnTeleport_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnWeather_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnMemorizePlace_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPicture_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnGoToMemorizedPlace_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnMovePicture_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnVehicle_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnDeletePicture_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnVehiclePosition_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnAnimation_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnEventPosition_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnActorTransparency_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSwapEvents_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnFlashCharacter_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnGetTerrainID_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnEventMovement_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnGetPositionID_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnMoveAll_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBlankScreen_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnShopAll_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnShowScreen_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnWait_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPlayMusic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSaveMenu_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnFadeMusic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSaveMenuPermissions_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnMemorizeMusic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSystemMenu_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPlayMemorizedMusic_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnSystemMenuPermissions_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPlaySound_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnConditions_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPlayVideo_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnLabel_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnKeyAssignment_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnGoToLabel_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnTileset_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnLoop_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnPanorama_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnBreakLoop_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnEncounterRate_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnStopEventProcess_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnTile_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnDeleteEventTemporally_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnTeleportPlace_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnCallEvent_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnTeleportPermissions_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnNote_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnEscapePlace_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnGameOver_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnEscapePermissions_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void btnGoToTitle_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void Close_click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		dlgEvtCmd_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Command list"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmd_Base();
	
};

#endif //__gui_events__
