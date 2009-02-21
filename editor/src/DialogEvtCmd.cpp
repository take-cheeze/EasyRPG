#include <wx/wx.h>
#include "DialogEvtCmd.h"
#include "DialogEvtCmdMessage.h"
#include "DialogEvtCmdEquipment.h"
#include "DialogEvtCmdMessageOptions.h"
#include "DialogEvtCmdHP.h"
#include "DialogEvtCmdFaceGraphic.h"
#include "DialogEvtCmdMP.h"
#include "DialogEvtCmdChoice.h"
#include "DialogEvtCmdStatus.h"
#include "DialogEvtCmdNumberInput.h"
#include "DialogEvtCmdRecover.h"
#include "DialogEvtCmdSwitch.h"
#include "DialogEvtCmdDamage.h"
#include "DialogEvtCmdVariable.h"
#include "DialogEvtCmdActorName.h"
#include "DialogEvtCmdTimer.h"
#include "DialogEvtCmdActorTitle.h"
#include "DialogEvtCmdMoney.h"
#include "DialogEvtCmdActorGraphic.h"
#include "DialogEvtCmdItem.h"
#include "DialogEvtCmdActorFaceGraphic.h"
#include "DialogEvtCmdParty.h"
#include "DialogEvtCmdVehicleGraphic.h"
#include "DialogEvtCmdExperience.h"
#include "DialogEvtCmdSystemMusic.h"
#include "DialogEvtCmdLevel.h"
#include "DialogEvtCmdSystemSound.h"
#include "DialogEvtCmdParameter.h"
#include "DialogEvtCmdSystemGraphic.h"
#include "DialogEvtCmdSkill.h"
#include "DialogEvtCmdTransition.h"
#include "DialogEvtCmdBattle.h"
#include "DialogEvtCmdTone.h"
#include "DialogEvtCmdCommerce.h"
#include "DialogEvtCmdFlashScreen.h"
#include "DialogEvtCmdInn.h"
#include "DialogEvtCmdShake.h"
#include "DialogEvtCmdActorNameInput.h"
#include "DialogEvtCmdMoveScreen.h"
#include "DialogEvtCmdTeleport.h"
#include "DialogEvtCmdWeather.h"
#include "DialogEvtCmdMemorizePlace.h"
#include "DialogEvtCmdPicture.h"
#include "DialogEvtCmdGoToMemorizedPlace.h"
#include "DialogEvtCmdMovePicture.h"
#include "DialogEvtCmdDeletePicture.h"
#include "DialogEvtCmdVehiclePosition.h"
#include "DialogEvtCmdAnimation.h"
#include "DialogEvtCmdEventPosition.h"
#include "DialogEvtCmdActorTransparency.h"
#include "DialogEvtCmdSwapEvents.h"
#include "DialogEvtCmdFlashCharacter.h"
#include "DialogEvtCmdGetTerrainID.h"
#include "DialogEvtCmdEventMovement.h"
#include "DialogEvtCmdGetPositionID.h"
#include "DialogEvtCmdBlankScreen.h"
#include "DialogEvtCmdShowScreen.h"
#include "DialogEvtCmdWait.h"
#include "DialogEvtCmdPlayMusic.h"
#include "DialogEvtCmdFadeMusic.h"
#include "DialogEvtCmdSavePermissions.h"
#include "DialogEvtCmdSystemMenuPermissions.h"
#include "DialogEvtCmdPlaySound.h"
#include "DialogEvtCmdConditions.h"
#include "DialogEvtCmdPlayVideo.h"
#include "DialogEvtCmdLabel.h"
#include "DialogEvtCmdKeyAssignment.h"
#include "DialogEvtCmdTileset.h"
#include "DialogEvtCmdPanorama.h"
#include "DialogEvtCmdEncounterRate.h"
#include "DialogEvtCmdTile.h"
#include "DialogEvtCmdTeleportPlace.h"
#include "DialogEvtCmdCallEvent.h"
#include "DialogEvtCmdTeleportPermissions.h"
#include "DialogEvtCmdNotes.h"
#include "DialogEvtCmdEscapePlace.h"
#include "DialogEvtCmdEscapePermissions.h"

DialogEvtCmd::DialogEvtCmd(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxTHICK_FRAME)
{
    pnEvtCmd = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
    pnEvtCmd3 = new wxPanel(pnEvtCmd, wxID_ANY);
    pnEvtCmd2 = new wxPanel(pnEvtCmd, wxID_ANY);
    pnEvtCmd1 = new wxPanel(pnEvtCmd, wxID_ANY);
    btnMessage = new wxButton(pnEvtCmd1, ID_MESSAGE, _("Show message..."));
    btnEquipment = new wxButton(pnEvtCmd1, ID_EQUIPMENT, _("Change equipment..."));
    btnMessageOptions = new wxButton(pnEvtCmd1, ID_MESSAGE_OPTIONS, _("Message options..."));
    btnHP = new wxButton(pnEvtCmd1, ID_HP, _("Change HP..."));
    btnFaceGraphic = new wxButton(pnEvtCmd1, ID_FACE_GRAPHIC, _("Show face graphic..."));
    btnMP = new wxButton(pnEvtCmd1, ID_MP, _("Change MP..."));
    btnChoice = new wxButton(pnEvtCmd1, ID_CHOICE, _("Select option..."));
    btnStatus = new wxButton(pnEvtCmd1, ID_STATUS, _("Change status..."));
    btnNumberInput = new wxButton(pnEvtCmd1, ID_NUMBER_INPUT, _("Show number input..."));
    btnRecover = new wxButton(pnEvtCmd1, ID_RECOVER, _("Full recover..."));
    btnSwitch = new wxButton(pnEvtCmd1, ID_SWITCH, _("Switch operations..."));
    btnDamage = new wxButton(pnEvtCmd1, ID_DAMAGE, _("Take damage..."));
    btnVariable = new wxButton(pnEvtCmd1, ID_VARIABLE, _("Variable operations..."));
    btnActorName = new wxButton(pnEvtCmd1, ID_ACTOR_NAME, _("Change actor name..."));
    btnTimer = new wxButton(pnEvtCmd1, ID_TIMER, _("Timer operations..."));
    btnActorTitle = new wxButton(pnEvtCmd1, ID_ACTOR_TITLE, _("Change actor title..."));
    btnMoney = new wxButton(pnEvtCmd1, ID_MONEY, _("Change money amount..."));
    btnActorGraphic = new wxButton(pnEvtCmd1, ID_ACTOR_GRAPHIC, _("Change actor graphic..."));
    btnItem = new wxButton(pnEvtCmd1, ID_ITEM, _("Change item..."));
    btnActorFaceGraphic = new wxButton(pnEvtCmd1, ID_ACTOR_FACE_GRAPHIC, _("Change actor face graphic..."));
    btnParty = new wxButton(pnEvtCmd1, ID_PARTY, _("Change party..."));
    btnVehicleGraphic = new wxButton(pnEvtCmd1, ID_VEHICLE_GRAPHIC, _("Change vehicle graphic..."));
    btnExperience = new wxButton(pnEvtCmd1, ID_EXPERIENCE, _("Change experience..."));
    btnSystemMusic = new wxButton(pnEvtCmd1, ID_SYSTEM_MUSIC, _("Change system music..."));
    btnLevel = new wxButton(pnEvtCmd1, ID_LEVEL, _("Change level..."));
    btnSystemSound = new wxButton(pnEvtCmd1, ID_SYSTEM_SOUND, _("Change system sound..."));
    btnParameter = new wxButton(pnEvtCmd1, ID_PARAMETER, _("Change parameter..."));
    btnSystemGraphic = new wxButton(pnEvtCmd1, ID_SYSTEM_GRAPHIC, _("Change system graphic..."));
    btnSkill = new wxButton(pnEvtCmd1, ID_SKILL, _("Change skill..."));
    btnTransition = new wxButton(pnEvtCmd1, ID_TRANSITION, _("Change window transition..."));
    btnBattle = new wxButton(pnEvtCmd2, ID_BATTLE, _("Start battle..."));
    btnTone = new wxButton(pnEvtCmd2, ID_TONE, _("Change screen tone..."));
    btnCommerce = new wxButton(pnEvtCmd2, ID_COMMERCE, _("Visit commerce..."));
    btnFlashScreen = new wxButton(pnEvtCmd2, ID_FLASH_SCREEN, _("Flash screen..."));
    btnInn = new wxButton(pnEvtCmd2, ID_INN, _("Visit inn..."));
    btnShake = new wxButton(pnEvtCmd2, ID_SHAKE, _("Shake screen..."));
    btnActorNameInput = new wxButton(pnEvtCmd2, ID_ACTOR_NAME_INPUT, _("Actor name input..."));
    btnMoveScreen = new wxButton(pnEvtCmd2, ID_MOVE_SCREEN, _("Move screen..."));
    btnTeleport = new wxButton(pnEvtCmd2, ID_TELEPORT, _("Teleport..."));
    btnWeather = new wxButton(pnEvtCmd2, ID_WEATHER, _("Weather effect..."));
    btnMemorizePlace = new wxButton(pnEvtCmd2, ID_MEMORIZE_PLACE, _("Memorize place..."));
    btnPicture = new wxButton(pnEvtCmd2, ID_PICTURE, _("Show picture..."));
    btnGoToMemorizedPlace = new wxButton(pnEvtCmd2, ID_GO_TO_MEMORIZED_PLACE, _("Go to memorized place..."));
    btnMovePicture = new wxButton(pnEvtCmd2, ID_MOVE_PICTURE, _("Move picture..."));
    btnVehicle = new wxButton(pnEvtCmd2, ID_VEHICLE, _("Ride or walk vehicle"));
    btnDeletePicture = new wxButton(pnEvtCmd2, ID_DELETE_PICTURE, _("Delete picture..."));
    btnVehiclePosition = new wxButton(pnEvtCmd2, ID_VEHICLE_POSITION, _("Change vehicle position..."));
    btnAnimation = new wxButton(pnEvtCmd2, ID_ANIMATION, _("Show animation..."));
    btnEventPosition = new wxButton(pnEvtCmd2, ID_EVENT_POSITION, _("Change event position..."));
    btnActorTransparency = new wxButton(pnEvtCmd2, ID_ACTOR_TRANSPARENCY, _("Change actor transparency..."));
    btnSwapEvents = new wxButton(pnEvtCmd2, ID_SWAP_EVENTS, _("Swap events..."));
    btnFlashCharacter = new wxButton(pnEvtCmd2, ID_FLASH_CHARACTER, _("Flash character..."));
    btnGetTerrainID = new wxButton(pnEvtCmd2, ID_GET_TERRAIN_ID, _("Get terrain ID..."));
    btnEventMovement = new wxButton(pnEvtCmd2, ID_EVENT_MOVEMENT, _("Event movement..."));
    btnGetPositionID = new wxButton(pnEvtCmd2, ID_GET_POSITION_ID, _("Get position ID..."));
    btnMoveAll = new wxButton(pnEvtCmd2, ID_MOVE_ALL, _("Move all"));
    btnBlankScreen = new wxButton(pnEvtCmd2, ID_BLANK_SCREEN, _("Blank screen..."));
    btnStopAll = new wxButton(pnEvtCmd2, ID_STOP_ALL, _("Stop all"));
    btnShowScreen = new wxButton(pnEvtCmd2, ID_SHOW_SCREEN, _("Show screen..."));
    btnWait = new wxButton(pnEvtCmd2, ID_WAIT, _("Wait..."));
    btnPlayMusic = new wxButton(pnEvtCmd3, ID_PLAY_MUSIC, _("Play music..."));
    btnSaveMenu = new wxButton(pnEvtCmd3, ID_SAVE_MENU, _("Show save menu"));
    btnFadeMusic = new wxButton(pnEvtCmd3, ID_FADE_MUSIC, _("Fade music..."));
    btnSaveMenuPermissions = new wxButton(pnEvtCmd3, ID_SAVE_MENU_PERMISSIONS, _("Save permissions..."));
    btnMemorizeMusic = new wxButton(pnEvtCmd3, ID_MEMORIZE_MUSIC, _("Memorize music"));
    btnSystemMenu = new wxButton(pnEvtCmd3, ID_SYSTEM_MENU, _("Show system menu"));
    btnPlayMemorizedMusic = new wxButton(pnEvtCmd3, ID_PLAY_MEMORIZED_MUSIC, _("Play memorized music"));
    btnSystemMenuPermissions = new wxButton(pnEvtCmd3, ID_SYSTEM_MENU_PERMISSIONS, _("System menu permissions..."));
    btnPlaySound = new wxButton(pnEvtCmd3, ID_PLAY_SOUND, _("Play sound..."));
    btnConditions = new wxButton(pnEvtCmd3, ID_CONDITIONS, _("Conditions..."));
    btnPlayVideo = new wxButton(pnEvtCmd3, ID_PLAY_VIDEO, _("Play video..."));
    btnLabel = new wxButton(pnEvtCmd3, ID_LABEL, _("Set label..."));
    btnKeyAssignment = new wxButton(pnEvtCmd3, ID_KEY_ASSIGNMENT, _("Key assignment..."));
    btnGoToLabel = new wxButton(pnEvtCmd3, ID_GO_TO_LABEL, _("Go to label..."));
    btnTileset = new wxButton(pnEvtCmd3, ID_TILESET, _("Change map tileset..."));
    btnLoop = new wxButton(pnEvtCmd3, ID_LOOP, _("Loop"));
    btnPanorama = new wxButton(pnEvtCmd3, ID_PANORAMA, _("Change map background..."));
    btnBreakLoop = new wxButton(pnEvtCmd3, ID_BREAK_LOOP, _("Break loop"));
    btnEncounterRate = new wxButton(pnEvtCmd3, ID_ENCOUNTER_RATE, _("Change encounter rate..."));
    btnStopEventProcess = new wxButton(pnEvtCmd3, ID_STOP_EVENT_PROCESS, _("Stop event process"));
    btnTile = new wxButton(pnEvtCmd3, ID_TILE, _("Change tile..."));
    btnDeleteEventTemporally = new wxButton(pnEvtCmd3, ID_DELETE_EVENT_TEMPORALLY, _("Delete event temporally"));
    btnTeleportPlace = new wxButton(pnEvtCmd3, ID_TELEPORT_PLACE, _("Change teleport place..."));
    btnCallEvent = new wxButton(pnEvtCmd3, ID_CALL_EVENT, _("Call event..."));
    btnTeleportPermissions = new wxButton(pnEvtCmd3, ID_TELEPORT_PERMISSIONS, _("Teleport permissions..."));
    btnNotes = new wxButton(pnEvtCmd3, ID_NOTES, _("Notes..."));
    btnEscapePlace = new wxButton(pnEvtCmd3, ID_ESCAPE_PLACE, _("Change escape place..."));
    btnGameOver = new wxButton(pnEvtCmd3, ID_GAME_OVER, _("Game over"));
    btnEscapePermissions = new wxButton(pnEvtCmd3, ID_ESCAPE_PERMISSIONS, _("Escape permissions..."));
    btnGoToTitle = new wxButton(pnEvtCmd3, ID_GO_TO_TITLE, _("Go to title screen"));
    btnClose = new wxButton(this, wxID_CANCEL, wxEmptyString);

    set_properties();
    do_layout();

    Connect(ID_MESSAGE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnMessage_click));
    Connect(ID_EQUIPMENT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnEquipment_click));
    Connect(ID_MESSAGE_OPTIONS, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnMessageOptions_click));
    Connect(ID_HP, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnHP_click));
    Connect(ID_FACE_GRAPHIC, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnFaceGraphic_click));
    Connect(ID_MP, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnMP_click));
    Connect(ID_CHOICE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnChoice_click));
    Connect(ID_STATUS, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnStatus_click));
    Connect(ID_NUMBER_INPUT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnNumberInput_click));
    Connect(ID_RECOVER, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnRecover_click));
    Connect(ID_SWITCH, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnSwitch_click));
    Connect(ID_DAMAGE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnDamage_click));
    Connect(ID_VARIABLE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnVariable_click));
    Connect(ID_ACTOR_NAME, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnActorName_click));
    Connect(ID_TIMER, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnTimer_click));
    Connect(ID_ACTOR_TITLE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnActorTitle_click));
    Connect(ID_MONEY, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnMoney_click));
    Connect(ID_ACTOR_GRAPHIC, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnActorGraphic_click));
    Connect(ID_ITEM, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnItem_click));
    Connect(ID_ACTOR_FACE_GRAPHIC, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnActorFaceGraphic_click));
    Connect(ID_PARTY, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnParty_click));
    Connect(ID_VEHICLE_GRAPHIC, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnVehicleGraphic_click));
    Connect(ID_EXPERIENCE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnExperience_click));
    Connect(ID_SYSTEM_MUSIC, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnSystemMusic_click));
    Connect(ID_LEVEL, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnLevel_click));
    Connect(ID_SYSTEM_SOUND, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnSystemSound_click));
    Connect(ID_PARAMETER, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnParameter_click));
    Connect(ID_SYSTEM_GRAPHIC, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnSystemGraphic_click));
    Connect(ID_SKILL, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnSkill_click));
    Connect(ID_TRANSITION, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnTransition_click));
    Connect(ID_BATTLE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnBattle_click));
    Connect(ID_TONE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnTone_click));
    Connect(ID_COMMERCE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnCommerce_click));
    Connect(ID_FLASH_SCREEN, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnFlashScreen_click));
    Connect(ID_INN, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnInn_click));
    Connect(ID_SHAKE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnShake_click));
    Connect(ID_ACTOR_NAME_INPUT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnActorNameInput_click));
    Connect(ID_MOVE_SCREEN, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnMoveScreen_click));
    Connect(ID_TELEPORT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnTeleport_click));
    Connect(ID_WEATHER, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnWeather_click));
    Connect(ID_MEMORIZE_PLACE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnMemorizePlace_click));
    Connect(ID_PICTURE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnPicture_click));
    Connect(ID_GO_TO_MEMORIZED_PLACE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnGoToMemorizedPlace_click));
    Connect(ID_MOVE_PICTURE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnMovePicture_click));
    Connect(ID_VEHICLE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnVehicle_click));
    Connect(ID_DELETE_PICTURE, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnDeletePicture_click));
    Connect(ID_VEHICLE_POSITION, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnVehiclePosition_click));
    Connect(ID_ANIMATION, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnAnimation_click));
    Connect(ID_EVENT_POSITION, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnEventPosition_click));
    Connect(ID_ACTOR_TRANSPARENCY, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnActorTransparency_click));
    Connect(ID_SWAP_EVENTS, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnSwapEvents_click));
    Connect(ID_FLASH_CHARACTER, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnFlashCharacter_click));
    Connect(ID_GET_TERRAIN_ID, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnGetTerrainID_click));
    Connect(ID_EVENT_MOVEMENT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnEventMovement_click));
    Connect(ID_GET_POSITION_ID, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnGetPositionID_click));
    Connect(ID_MOVE_ALL, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnMoveAll_click));
    Connect(ID_BLANK_SCREEN, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnBlankScreen_click));
    Connect(ID_STOP_ALL, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnStopAll_click));
    Connect(ID_SHOW_SCREEN, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnShowScreen_click));
    Connect(ID_WAIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DialogEvtCmd::btnWait_click));
}

void DialogEvtCmd::set_properties()
{
    SetTitle(_("Command list"));
    btnClose->SetDefault();
}

void DialogEvtCmd::do_layout()
{
    wxBoxSizer* szEvtCmd = new wxBoxSizer(wxVERTICAL);
    wxGridSizer* gszEvtCmd3 = new wxGridSizer(15, 2, 0, 0);
    wxGridSizer* gszEvtCmd2 = new wxGridSizer(15, 2, 0, 0);
    wxGridSizer* gszEvtCmd1 = new wxGridSizer(15, 2, 0, 0);
    gszEvtCmd1->Add(btnMessage, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnEquipment, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnMessageOptions, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnHP, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnFaceGraphic, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnMP, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnChoice, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnStatus, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnNumberInput, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnRecover, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnSwitch, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnDamage, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnVariable, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnActorName, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnTimer, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnActorTitle, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnMoney, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnActorGraphic, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnItem, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnActorFaceGraphic, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnParty, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnVehicleGraphic, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnExperience, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnSystemMusic, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnLevel, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnSystemSound, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnParameter, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnSystemGraphic, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnSkill, 0, wxEXPAND, 0);
    gszEvtCmd1->Add(btnTransition, 0, wxEXPAND, 0);
    pnEvtCmd1->SetSizer(gszEvtCmd1);
    gszEvtCmd2->Add(btnBattle, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnTone, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnCommerce, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnFlashScreen, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnInn, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnShake, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnActorNameInput, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnMoveScreen, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnTeleport, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnWeather, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnMemorizePlace, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnPicture, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnGoToMemorizedPlace, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnMovePicture, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnVehicle, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnDeletePicture, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnVehiclePosition, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnAnimation, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnEventPosition, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnActorTransparency, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnSwapEvents, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnFlashCharacter, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnGetTerrainID, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnEventMovement, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnGetPositionID, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnMoveAll, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnBlankScreen, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnStopAll, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnShowScreen, 0, wxEXPAND, 0);
    gszEvtCmd2->Add(btnWait, 0, wxEXPAND, 0);
    pnEvtCmd2->SetSizer(gszEvtCmd2);
    gszEvtCmd3->Add(btnPlayMusic, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnSaveMenu, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnFadeMusic, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnSaveMenuPermissions, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnMemorizeMusic, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnSystemMenu, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnPlayMemorizedMusic, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnSystemMenuPermissions, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnPlaySound, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnConditions, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnPlayVideo, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnLabel, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnKeyAssignment, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnGoToLabel, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnTileset, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnLoop, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnPanorama, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnBreakLoop, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnEncounterRate, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnStopEventProcess, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnTile, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnDeleteEventTemporally, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnTeleportPlace, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnCallEvent, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnTeleportPermissions, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnNotes, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnEscapePlace, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnGameOver, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnEscapePermissions, 0, wxEXPAND, 0);
    gszEvtCmd3->Add(btnGoToTitle, 0, wxEXPAND, 0);
    pnEvtCmd3->SetSizer(gszEvtCmd3);
    pnEvtCmd->AddPage(pnEvtCmd1, _("1"));
    pnEvtCmd->AddPage(pnEvtCmd2, _("2"));
    pnEvtCmd->AddPage(pnEvtCmd3, _("3"));
    szEvtCmd->Add(pnEvtCmd, 1, wxALL|wxEXPAND, 1);
    szEvtCmd->Add(btnClose, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szEvtCmd);
    szEvtCmd->Fit(this);
    Layout();
}

void DialogEvtCmd::btnMessage_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdMessage *dlgEvtCmdMessage = new DialogEvtCmdMessage(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdMessage->SetFocus();
    dlgEvtCmdMessage->ShowModal();
    dlgEvtCmdMessage->Destroy();
}

void DialogEvtCmd::btnEquipment_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdEquipment *dlgEvtCmdEquipment = new DialogEvtCmdEquipment(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdEquipment->SetFocus();
    dlgEvtCmdEquipment->ShowModal();
    dlgEvtCmdEquipment->Destroy();
}

void DialogEvtCmd::btnMessageOptions_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdMessageOptions *dlgEvtCmdMessageOptions = new DialogEvtCmdMessageOptions(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdMessageOptions->SetFocus();
    dlgEvtCmdMessageOptions->ShowModal();
    dlgEvtCmdMessageOptions->Destroy();
}

void DialogEvtCmd::btnHP_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdHP *dlgEvtCmdHP = new DialogEvtCmdHP(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdHP->SetFocus();
    dlgEvtCmdHP->ShowModal();
    dlgEvtCmdHP->Destroy();
}

void DialogEvtCmd::btnFaceGraphic_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdFaceGraphic *dlgEvtCmdFaceGraphic = new DialogEvtCmdFaceGraphic(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdFaceGraphic->SetFocus();
    dlgEvtCmdFaceGraphic->ShowModal();
    dlgEvtCmdFaceGraphic->Destroy();
}

void DialogEvtCmd::btnMP_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdMP *dlgEvtCmdMP = new DialogEvtCmdMP(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdMP->SetFocus();
    dlgEvtCmdMP->ShowModal();
    dlgEvtCmdMP->Destroy();
}

void DialogEvtCmd::btnChoice_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdChoice *dlgEvtCmdChoice = new DialogEvtCmdChoice(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdChoice->SetFocus();
    dlgEvtCmdChoice->ShowModal();
    dlgEvtCmdChoice->Destroy();
}

void DialogEvtCmd::btnStatus_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdStatus *dlgEvtCmdStatus = new DialogEvtCmdStatus(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdStatus->SetFocus();
    dlgEvtCmdStatus->ShowModal();
    dlgEvtCmdStatus->Destroy();
}

void DialogEvtCmd::btnNumberInput_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdNumberInput *dlgEvtCmdNumberInput = new DialogEvtCmdNumberInput(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdNumberInput->SetFocus();
    dlgEvtCmdNumberInput->ShowModal();
    dlgEvtCmdNumberInput->Destroy();
}

void DialogEvtCmd::btnRecover_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdRecover *dlgEvtCmdRecover = new DialogEvtCmdRecover(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdRecover->SetFocus();
    dlgEvtCmdRecover->ShowModal();
    dlgEvtCmdRecover->Destroy();
}

void DialogEvtCmd::btnSwitch_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdSwitch *dlgEvtCmdSwitch = new DialogEvtCmdSwitch(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdSwitch->SetFocus();
    dlgEvtCmdSwitch->ShowModal();
    dlgEvtCmdSwitch->Destroy();
}

void DialogEvtCmd::btnDamage_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdDamage *dlgEvtCmdDamage = new DialogEvtCmdDamage(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdDamage->SetFocus();
    dlgEvtCmdDamage->ShowModal();
    dlgEvtCmdDamage->Destroy();
}

void DialogEvtCmd::btnVariable_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdVariable *dlgEvtCmdVariable = new DialogEvtCmdVariable(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdVariable->SetFocus();
    dlgEvtCmdVariable->ShowModal();
    dlgEvtCmdVariable->Destroy();
}

void DialogEvtCmd::btnActorName_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdActorName *dlgEvtCmdActorName = new DialogEvtCmdActorName(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdActorName->SetFocus();
    dlgEvtCmdActorName->ShowModal();
    dlgEvtCmdActorName->Destroy();
}

void DialogEvtCmd::btnTimer_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdTimer *dlgEvtCmdTimer = new DialogEvtCmdTimer(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdTimer->SetFocus();
    dlgEvtCmdTimer->ShowModal();
    dlgEvtCmdTimer->Destroy();
}

void DialogEvtCmd::btnActorTitle_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdActorTitle *dlgEvtCmdActorTitle = new DialogEvtCmdActorTitle(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdActorTitle->SetFocus();
    dlgEvtCmdActorTitle->ShowModal();
    dlgEvtCmdActorTitle->Destroy();
}

void DialogEvtCmd::btnMoney_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdMoney *dlgEvtCmdMoney = new DialogEvtCmdMoney(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdMoney->SetFocus();
    dlgEvtCmdMoney->ShowModal();
    dlgEvtCmdMoney->Destroy();
}

void DialogEvtCmd::btnActorGraphic_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdActorGraphic *dlgEvtCmdActorGraphic = new DialogEvtCmdActorGraphic(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdActorGraphic->SetFocus();
    dlgEvtCmdActorGraphic->ShowModal();
    dlgEvtCmdActorGraphic->Destroy();
}

void DialogEvtCmd::btnItem_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdItem *dlgEvtCmdItem = new DialogEvtCmdItem(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdItem->SetFocus();
    dlgEvtCmdItem->ShowModal();
    dlgEvtCmdItem->Destroy();
}

void DialogEvtCmd::btnActorFaceGraphic_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdActorFaceGraphic *dlgEvtCmdActorFaceGraphic = new DialogEvtCmdActorFaceGraphic(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdActorFaceGraphic->SetFocus();
    dlgEvtCmdActorFaceGraphic->ShowModal();
    dlgEvtCmdActorFaceGraphic->Destroy();
}

void DialogEvtCmd::btnParty_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdParty *dlgEvtCmdParty = new DialogEvtCmdParty(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdParty->SetFocus();
    dlgEvtCmdParty->ShowModal();
    dlgEvtCmdParty->Destroy();
}

void DialogEvtCmd::btnVehicleGraphic_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdVehicleGraphic *dlgEvtCmdVehicleGraphic = new DialogEvtCmdVehicleGraphic(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdVehicleGraphic->SetFocus();
    dlgEvtCmdVehicleGraphic->ShowModal();
    dlgEvtCmdVehicleGraphic->Destroy();
}

void DialogEvtCmd::btnExperience_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdExperience *dlgEvtCmdExperience = new DialogEvtCmdExperience(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdExperience->SetFocus();
    dlgEvtCmdExperience->ShowModal();
    dlgEvtCmdExperience->Destroy();
}

void DialogEvtCmd::btnSystemMusic_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdSystemMusic *dlgEvtCmdSystemMusic = new DialogEvtCmdSystemMusic(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdSystemMusic->SetFocus();
    dlgEvtCmdSystemMusic->ShowModal();
    dlgEvtCmdSystemMusic->Destroy();
}

void DialogEvtCmd::btnLevel_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdLevel *dlgEvtCmdLevel = new DialogEvtCmdLevel(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdLevel->SetFocus();
    dlgEvtCmdLevel->ShowModal();
    dlgEvtCmdLevel->Destroy();
}

void DialogEvtCmd::btnSystemSound_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdSystemSound *dlgEvtCmdSystemSound = new DialogEvtCmdSystemSound(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdSystemSound->SetFocus();
    dlgEvtCmdSystemSound->ShowModal();
    dlgEvtCmdSystemSound->Destroy();
}

void DialogEvtCmd::btnParameter_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdParameter *dlgEvtCmdParameter = new DialogEvtCmdParameter(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdParameter->SetFocus();
    dlgEvtCmdParameter->ShowModal();
    dlgEvtCmdParameter->Destroy();
}

void DialogEvtCmd::btnSystemGraphic_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdSystemGraphic *dlgEvtCmdSystemGraphic = new DialogEvtCmdSystemGraphic(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdSystemGraphic->SetFocus();
    dlgEvtCmdSystemGraphic->ShowModal();
    dlgEvtCmdSystemGraphic->Destroy();
}

void DialogEvtCmd::btnSkill_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdSkill *dlgEvtCmdSkill = new DialogEvtCmdSkill(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdSkill->SetFocus();
    dlgEvtCmdSkill->ShowModal();
    dlgEvtCmdSkill->Destroy();
}

void DialogEvtCmd::btnTransition_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdTransition *dlgEvtCmdTransition = new DialogEvtCmdTransition(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdTransition->SetFocus();
    dlgEvtCmdTransition->ShowModal();
    dlgEvtCmdTransition->Destroy();
}

void DialogEvtCmd::btnBattle_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdBattle *dlgEvtCmdBattle = new DialogEvtCmdBattle(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdBattle->SetFocus();
    dlgEvtCmdBattle->ShowModal();
    dlgEvtCmdBattle->Destroy();
}

void DialogEvtCmd::btnTone_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdTone *dlgEvtCmdTone = new DialogEvtCmdTone(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdTone->SetFocus();
    dlgEvtCmdTone->ShowModal();
    dlgEvtCmdTone->Destroy();
}

void DialogEvtCmd::btnCommerce_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdCommerce *dlgEvtCmdCommerce = new DialogEvtCmdCommerce(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdCommerce->SetFocus();
    dlgEvtCmdCommerce->ShowModal();
    dlgEvtCmdCommerce->Destroy();
}

void DialogEvtCmd::btnFlashScreen_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdFlashScreen *dlgEvtCmdFlashScreen = new DialogEvtCmdFlashScreen(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdFlashScreen->SetFocus();
    dlgEvtCmdFlashScreen->ShowModal();
    dlgEvtCmdFlashScreen->Destroy();
}

void DialogEvtCmd::btnInn_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdInn *dlgEvtCmdInn = new DialogEvtCmdInn(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdInn->SetFocus();
    dlgEvtCmdInn->ShowModal();
    dlgEvtCmdInn->Destroy();
}

void DialogEvtCmd::btnShake_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdShake *dlgEvtCmdShake = new DialogEvtCmdShake(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdShake->SetFocus();
    dlgEvtCmdShake->ShowModal();
    dlgEvtCmdShake->Destroy();
}

void DialogEvtCmd::btnActorNameInput_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdActorNameInput *dlgEvtCmdActorNameInput = new DialogEvtCmdActorNameInput(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdActorNameInput->SetFocus();
    dlgEvtCmdActorNameInput->ShowModal();
    dlgEvtCmdActorNameInput->Destroy();
}

void DialogEvtCmd::btnMoveScreen_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdMoveScreen *dlgEvtCmdMoveScreen = new DialogEvtCmdMoveScreen(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdMoveScreen->SetFocus();
    dlgEvtCmdMoveScreen->ShowModal();
    dlgEvtCmdMoveScreen->Destroy();
}

void DialogEvtCmd::btnTeleport_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdTeleport *dlgEvtCmdTeleport = new DialogEvtCmdTeleport(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdTeleport->SetFocus();
    dlgEvtCmdTeleport->ShowModal();
    dlgEvtCmdTeleport->Destroy();
}

void DialogEvtCmd::btnWeather_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdWeather *dlgEvtCmdWeather = new DialogEvtCmdWeather(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdWeather->SetFocus();
    dlgEvtCmdWeather->ShowModal();
    dlgEvtCmdWeather->Destroy();
}

void DialogEvtCmd::btnMemorizePlace_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdMemorizePlace *dlgEvtCmdMemorizePlace = new DialogEvtCmdMemorizePlace(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdMemorizePlace->SetFocus();
    dlgEvtCmdMemorizePlace->ShowModal();
    dlgEvtCmdMemorizePlace->Destroy();
}

void DialogEvtCmd::btnPicture_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdPicture *dlgEvtCmdPicture = new DialogEvtCmdPicture(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdPicture->SetFocus();
    dlgEvtCmdPicture->ShowModal();
    dlgEvtCmdPicture->Destroy();
}

void DialogEvtCmd::btnGoToMemorizedPlace_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdGoToMemorizedPlace *dlgEvtCmdGoToMemorizedPlace = new DialogEvtCmdGoToMemorizedPlace(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdGoToMemorizedPlace->SetFocus();
    dlgEvtCmdGoToMemorizedPlace->ShowModal();
    dlgEvtCmdGoToMemorizedPlace->Destroy();
}

void DialogEvtCmd::btnMovePicture_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdMovePicture *dlgEvtCmdMovePicture = new DialogEvtCmdMovePicture(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdMovePicture->SetFocus();
    dlgEvtCmdMovePicture->ShowModal();
    dlgEvtCmdMovePicture->Destroy();
}

void DialogEvtCmd::btnVehicle_click(wxCommandEvent &WXUNUSED(event))
{
}

void DialogEvtCmd::btnDeletePicture_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdDeletePicture *dlgEvtCmdDeletePicture = new DialogEvtCmdDeletePicture(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdDeletePicture->SetFocus();
    dlgEvtCmdDeletePicture->ShowModal();
    dlgEvtCmdDeletePicture->Destroy();
}

void DialogEvtCmd::btnVehiclePosition_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdVehiclePosition *dlgEvtCmdVehiclePosition = new DialogEvtCmdVehiclePosition(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdVehiclePosition->SetFocus();
    dlgEvtCmdVehiclePosition->ShowModal();
    dlgEvtCmdVehiclePosition->Destroy();
}

void DialogEvtCmd::btnAnimation_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdAnimation *dlgEvtCmdAnimation = new DialogEvtCmdAnimation(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdAnimation->SetFocus();
    dlgEvtCmdAnimation->ShowModal();
    dlgEvtCmdAnimation->Destroy();
}

void DialogEvtCmd::btnEventPosition_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdEventPosition *dlgEvtCmdEventPosition = new DialogEvtCmdEventPosition(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdEventPosition->SetFocus();
    dlgEvtCmdEventPosition->ShowModal();
    dlgEvtCmdEventPosition->Destroy();
}

void DialogEvtCmd::btnActorTransparency_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdActorTransparency *dlgEvtCmdActorTransparency = new DialogEvtCmdActorTransparency(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdActorTransparency->SetFocus();
    dlgEvtCmdActorTransparency->ShowModal();
    dlgEvtCmdActorTransparency->Destroy();
}

void DialogEvtCmd::btnSwapEvents_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdSwapEvents *dlgEvtCmdSwapEvents = new DialogEvtCmdSwapEvents(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdSwapEvents->SetFocus();
    dlgEvtCmdSwapEvents->ShowModal();
    dlgEvtCmdSwapEvents->Destroy();
}

void DialogEvtCmd::btnFlashCharacter_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdFlashCharacter *dlgEvtCmdFlashCharacter = new DialogEvtCmdFlashCharacter(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdFlashCharacter->SetFocus();
    dlgEvtCmdFlashCharacter->ShowModal();
    dlgEvtCmdFlashCharacter->Destroy();
}

void DialogEvtCmd::btnGetTerrainID_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdGetTerrainID *dlgEvtCmdGetTerrainID = new DialogEvtCmdGetTerrainID(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdGetTerrainID->SetFocus();
    dlgEvtCmdGetTerrainID->ShowModal();
    dlgEvtCmdGetTerrainID->Destroy();
}

void DialogEvtCmd::btnEventMovement_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdEventMovement *dlgEvtCmdEventMovement = new DialogEvtCmdEventMovement(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdEventMovement->SetFocus();
    dlgEvtCmdEventMovement->ShowModal();
    dlgEvtCmdEventMovement->Destroy();
}

void DialogEvtCmd::btnGetPositionID_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdGetPositionID *dlgEvtCmdGetPositionID = new DialogEvtCmdGetPositionID(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdGetPositionID->SetFocus();
    dlgEvtCmdGetPositionID->ShowModal();
    dlgEvtCmdGetPositionID->Destroy();
}

void DialogEvtCmd::btnMoveAll_click(wxCommandEvent &WXUNUSED(event))
{
}

void DialogEvtCmd::btnBlankScreen_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdBlankScreen *dlgEvtCmdBlankScreen = new DialogEvtCmdBlankScreen(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdBlankScreen->SetFocus();
    dlgEvtCmdBlankScreen->ShowModal();
    dlgEvtCmdBlankScreen->Destroy();
}

void DialogEvtCmd::btnStopAll_click(wxCommandEvent &WXUNUSED(event))
{
}

void DialogEvtCmd::btnShowScreen_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdShowScreen *dlgEvtCmdShowScreen = new DialogEvtCmdShowScreen(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdShowScreen->SetFocus();
    dlgEvtCmdShowScreen->ShowModal();
    dlgEvtCmdShowScreen->Destroy();
}

void DialogEvtCmd::btnWait_click(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmdWait *dlgEvtCmdWait = new DialogEvtCmdWait(this, wxID_ANY, wxEmptyString);
    dlgEvtCmdWait->SetFocus();
    dlgEvtCmdWait->ShowModal();
    dlgEvtCmdWait->Destroy();
}
/*
void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}

void DialogEvtCmd::(wxCommandEvent &WXUNUSED(event))
{
    DialogEvtCmd *dlgEvtCmd = new DialogEvtCmd(this, wxID_ANY, wxEmptyString);
    dlgEvtCmd->SetFocus();
    dlgEvtCmd->ShowModal();
    dlgEvtCmd->Destroy();
}
*/
