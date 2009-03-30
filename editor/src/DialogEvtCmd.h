#ifndef DIALOGEVTCMD_H
#define DIALOGEVTCMD_H

#include <wx/notebook.h>

class DialogEvtCmd: public wxDialog {
public:
    DialogEvtCmd(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);
private:
    void set_properties();
    void do_layout();
    void btnMessage_click(wxCommandEvent &WXUNUSED(event));
    void btnEquipment_click(wxCommandEvent &WXUNUSED(event));
    void btnMessageOptions_click(wxCommandEvent &WXUNUSED(event));
    void btnHP_click(wxCommandEvent &WXUNUSED(event));
    void btnFaceGraphic_click(wxCommandEvent &WXUNUSED(event));
    void btnMP_click(wxCommandEvent &WXUNUSED(event));
    void btnChoice_click(wxCommandEvent &WXUNUSED(event));
    void btnStatus_click(wxCommandEvent &WXUNUSED(event));
    void btnNumberInput_click(wxCommandEvent &WXUNUSED(event));
    void btnRecover_click(wxCommandEvent &WXUNUSED(event));
    void btnSwitch_click(wxCommandEvent &WXUNUSED(event));
    void btnDamage_click(wxCommandEvent &WXUNUSED(event));
    void btnVariable_click(wxCommandEvent &WXUNUSED(event));
    void btnActorName_click(wxCommandEvent &WXUNUSED(event));
    void btnTimer_click(wxCommandEvent &WXUNUSED(event));
    void btnActorTitle_click(wxCommandEvent &WXUNUSED(event));
    void btnMoney_click(wxCommandEvent &WXUNUSED(event));
    void btnActorGraphic_click(wxCommandEvent &WXUNUSED(event));
    void btnItem_click(wxCommandEvent &WXUNUSED(event));
    void btnActorFaceGraphic_click(wxCommandEvent &WXUNUSED(event));
    void btnParty_click(wxCommandEvent &WXUNUSED(event));
    void btnVehicleGraphic_click(wxCommandEvent &WXUNUSED(event));
    void btnExperience_click(wxCommandEvent &WXUNUSED(event));
    void btnSystemMusic_click(wxCommandEvent &WXUNUSED(event));
    void btnLevel_click(wxCommandEvent &WXUNUSED(event));
    void btnSystemSound_click(wxCommandEvent &WXUNUSED(event));
    void btnParameter_click(wxCommandEvent &WXUNUSED(event));
    void btnSystemGraphic_click(wxCommandEvent &WXUNUSED(event));
    void btnSkill_click(wxCommandEvent &WXUNUSED(event));
    void btnTransition_click(wxCommandEvent &WXUNUSED(event));
    void btnBattle_click(wxCommandEvent &WXUNUSED(event));
    void btnTone_click(wxCommandEvent &WXUNUSED(event));
    void btnCommerce_click(wxCommandEvent &WXUNUSED(event));
    void btnFlashScreen_click(wxCommandEvent &WXUNUSED(event));
    void btnInn_click(wxCommandEvent &WXUNUSED(event));
    void btnShake_click(wxCommandEvent &WXUNUSED(event));
    void btnActorNameInput_click(wxCommandEvent &WXUNUSED(event));
    void btnMoveScreen_click(wxCommandEvent &WXUNUSED(event));
    void btnTeleport_click(wxCommandEvent &WXUNUSED(event));
    void btnWeather_click(wxCommandEvent &WXUNUSED(event));
    void btnMemorizePlace_click(wxCommandEvent &WXUNUSED(event));
    void btnPicture_click(wxCommandEvent &WXUNUSED(event));
    void btnGoToMemorizedPlace_click(wxCommandEvent &WXUNUSED(event));
    void btnMovePicture_click(wxCommandEvent &WXUNUSED(event));
    void btnVehicle_click(wxCommandEvent &WXUNUSED(event));
    void btnDeletePicture_click(wxCommandEvent &WXUNUSED(event));
    void btnVehiclePosition_click(wxCommandEvent &WXUNUSED(event));
    void btnAnimation_click(wxCommandEvent &WXUNUSED(event));
    void btnEventPosition_click(wxCommandEvent &WXUNUSED(event));
    void btnActorTransparency_click(wxCommandEvent &WXUNUSED(event));
    void btnSwapEvents_click(wxCommandEvent &WXUNUSED(event));
    void btnFlashCharacter_click(wxCommandEvent &WXUNUSED(event));
    void btnGetTerrainID_click(wxCommandEvent &WXUNUSED(event));
    void btnEventMovement_click(wxCommandEvent &WXUNUSED(event));
    void btnGetPositionID_click(wxCommandEvent &WXUNUSED(event));
    void btnMoveAll_click(wxCommandEvent &WXUNUSED(event));
    void btnBlankScreen_click(wxCommandEvent &WXUNUSED(event));
    void btnStopAll_click(wxCommandEvent &WXUNUSED(event));
    void btnShowScreen_click(wxCommandEvent &WXUNUSED(event));
    void btnWait_click(wxCommandEvent &WXUNUSED(event));
    void btnPlayMusic_click(wxCommandEvent &WXUNUSED(event));
    void btnSaveMenu_click(wxCommandEvent &WXUNUSED(event));
    void btnFadeMusic_click(wxCommandEvent &WXUNUSED(event));
    void btnSavePermissions_click(wxCommandEvent &WXUNUSED(event));
    void btnMemorizeMusic_click(wxCommandEvent &WXUNUSED(event));
    void btnSystemMenu_click(wxCommandEvent &WXUNUSED(event));
    void btnPlayMemorizedMusic_click(wxCommandEvent &WXUNUSED(event));
    void btnSystemMenuPermissions_click(wxCommandEvent &WXUNUSED(event));
    void btnPlaySound_click(wxCommandEvent &WXUNUSED(event));
    void btnConditions_click(wxCommandEvent &WXUNUSED(event));
    void btnPlayVideo_click(wxCommandEvent &WXUNUSED(event));
    void btnLabel_click(wxCommandEvent &WXUNUSED(event));
    void btnKeyAssignment_click(wxCommandEvent &WXUNUSED(event));
    void btnGoToLabel_click(wxCommandEvent &WXUNUSED(event));
    void btnTileset_click(wxCommandEvent &WXUNUSED(event));
    void btnLoop_click(wxCommandEvent &WXUNUSED(event));
    void btnPanorama_click(wxCommandEvent &WXUNUSED(event));
    void btnBreakLoop_click(wxCommandEvent &WXUNUSED(event));
    void btnEncounterRate_click(wxCommandEvent &WXUNUSED(event));
    void btnStopEventProcess_click(wxCommandEvent &WXUNUSED(event));
    void btnTile_click(wxCommandEvent &WXUNUSED(event));
    void btnDeleteEventTemporally_click(wxCommandEvent &WXUNUSED(event));
    void btnTeleportPlace_click(wxCommandEvent &WXUNUSED(event));
    void btnCallEvent_click(wxCommandEvent &WXUNUSED(event));
    void btnTeleportPermissions_click(wxCommandEvent &WXUNUSED(event));
    void btnNotes_click(wxCommandEvent &WXUNUSED(event));
    void btnEscapePlace_click(wxCommandEvent &WXUNUSED(event));
    void btnGameOver_click(wxCommandEvent &WXUNUSED(event));
    void btnEscapePermissions_click(wxCommandEvent &WXUNUSED(event));
    void btnGoToTitle_click(wxCommandEvent &WXUNUSED(event));

protected:
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
    wxPanel* pnEvtCmd1;
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
    wxPanel* pnEvtCmd2;
    wxButton* btnPlayMusic;
    wxButton* btnSaveMenu;
    wxButton* btnFadeMusic;
    wxButton* btnSavePermissions;
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
    wxButton* btnNotes;
    wxButton* btnEscapePlace;
    wxButton* btnGameOver;
    wxButton* btnEscapePermissions;
    wxButton* btnGoToTitle;
    wxPanel* pnEvtCmd3;
    wxNotebook* pnEvtCmd;
    wxButton* btnClose;
};

enum
{
    ID_MESSAGE,
    ID_EQUIPMENT,
    ID_MESSAGE_OPTIONS,
    ID_HP,
    ID_FACE_GRAPHIC,
    ID_MP,
    ID_CHOICE,
    ID_STATUS,
    ID_NUMBER_INPUT,
    ID_RECOVER,
    ID_SWITCH,
    ID_DAMAGE,
    ID_VARIABLE,
    ID_ACTOR_NAME,
    ID_TIMER,
    ID_ACTOR_TITLE,
    ID_MONEY,
    ID_ACTOR_GRAPHIC,
    ID_ITEM,
    ID_ACTOR_FACE_GRAPHIC,
    ID_PARTY,
    ID_VEHICLE_GRAPHIC,
    ID_EXPERIENCE,
    ID_SYSTEM_MUSIC,
    ID_LEVEL,
    ID_SYSTEM_SOUND,
    ID_PARAMETER,
    ID_SYSTEM_GRAPHIC,
    ID_SKILL,
    ID_TRANSITION,
    ID_BATTLE,
    ID_TONE,
    ID_COMMERCE,
    ID_FLASH_SCREEN,
    ID_INN,
    ID_SHAKE,
    ID_ACTOR_NAME_INPUT,
    ID_MOVE_SCREEN,
    ID_TELEPORT,
    ID_WEATHER,
    ID_MEMORIZE_PLACE,
    ID_PICTURE,
    ID_GO_TO_MEMORIZED_PLACE,
    ID_MOVE_PICTURE,
    ID_VEHICLE,
    ID_DELETE_PICTURE,
    ID_VEHICLE_POSITION,
    ID_ANIMATION,
    ID_EVENT_POSITION,
    ID_ACTOR_TRANSPARENCY,
    ID_SWAP_EVENTS,
    ID_FLASH_CHARACTER,
    ID_GET_TERRAIN_ID,
    ID_EVENT_MOVEMENT,
    ID_GET_POSITION_ID,
    ID_MOVE_ALL,
    ID_BLANK_SCREEN,
    ID_STOP_ALL,
    ID_SHOW_SCREEN,
    ID_WAIT,
    ID_PLAY_MUSIC,
    ID_SAVE_MENU,
    ID_FADE_MUSIC,
    ID_SAVE_PERMISSIONS,
    ID_MEMORIZE_MUSIC,
    ID_SYSTEM_MENU,
    ID_PLAY_MEMORIZED_MUSIC,
    ID_SYSTEM_MENU_PERMISSIONS,
    ID_PLAY_SOUND,
    ID_CONDITIONS,
    ID_PLAY_VIDEO,
    ID_LABEL,
    ID_KEY_ASSIGNMENT,
    ID_GO_TO_LABEL,
    ID_TILESET,
    ID_LOOP,
    ID_PANORAMA,
    ID_BREAK_LOOP,
    ID_ENCOUNTER_RATE,
    ID_STOP_EVENT_PROCESS,
    ID_TILE,
    ID_DELETE_EVENT_TEMPORALLY,
    ID_TELEPORT_PLACE,
    ID_CALL_EVENT,
    ID_TELEPORT_PERMISSIONS,
    ID_NOTES,
    ID_ESCAPE_PLACE,
    ID_GAME_OVER,
    ID_ESCAPE_PERMISSIONS,
    ID_GO_TO_TITLE
};

#endif
