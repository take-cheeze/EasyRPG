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
    btnMessage = new wxButton(pnEvtCmd1, wxID_ANY, _("Show message..."));
    btnEquipment = new wxButton(pnEvtCmd1, wxID_ANY, _("Change equipment..."));
    btnMessageOptions = new wxButton(pnEvtCmd1, wxID_ANY, _("Message options..."));
    btnHP = new wxButton(pnEvtCmd1, wxID_ANY, _("Change HP..."));
    btnFaceGraphic = new wxButton(pnEvtCmd1, wxID_ANY, _("Show face graphic..."));
    btnMP = new wxButton(pnEvtCmd1, wxID_ANY, _("Change MP..."));
    btnChoice = new wxButton(pnEvtCmd1, wxID_ANY, _("Select option..."));
    btnStatus = new wxButton(pnEvtCmd1, wxID_ANY, _("Change status..."));
    btnNumberInput = new wxButton(pnEvtCmd1, wxID_ANY, _("Show number input..."));
    btnRecover = new wxButton(pnEvtCmd1, wxID_ANY, _("Full recover..."));
    btnSwitch = new wxButton(pnEvtCmd1, wxID_ANY, _("Switch operations..."));
    btnDamage = new wxButton(pnEvtCmd1, wxID_ANY, _("Take damage..."));
    btnVariable = new wxButton(pnEvtCmd1, wxID_ANY, _("Variable operations..."));
    btnActorName = new wxButton(pnEvtCmd1, wxID_ANY, _("Change actor name..."));
    btnTimer = new wxButton(pnEvtCmd1, wxID_ANY, _("Timer operations..."));
    btnActorTitle = new wxButton(pnEvtCmd1, wxID_ANY, _("Change actor title..."));
    btnMoney = new wxButton(pnEvtCmd1, wxID_ANY, _("Change money amount..."));
    btnActorGraphic = new wxButton(pnEvtCmd1, wxID_ANY, _("Change actor graphic..."));
    btnItem = new wxButton(pnEvtCmd1, wxID_ANY, _("Change item..."));
    btnActorFaceGraphic = new wxButton(pnEvtCmd1, wxID_ANY, _("Change actor face graphic..."));
    btnParty = new wxButton(pnEvtCmd1, wxID_ANY, _("Change party..."));
    btnVehicleGraphic = new wxButton(pnEvtCmd1, wxID_ANY, _("Change vehicle graphic..."));
    btnExperience = new wxButton(pnEvtCmd1, wxID_ANY, _("Change experience..."));
    btnSystemMusic = new wxButton(pnEvtCmd1, wxID_ANY, _("Change system music..."));
    btnLevel = new wxButton(pnEvtCmd1, wxID_ANY, _("Change level..."));
    btnSystemSound = new wxButton(pnEvtCmd1, wxID_ANY, _("Change system sound..."));
    btnParameter = new wxButton(pnEvtCmd1, wxID_ANY, _("Change parameter..."));
    btnSystemGraphic = new wxButton(pnEvtCmd1, wxID_ANY, _("Change system graphic..."));
    btnSkill = new wxButton(pnEvtCmd1, wxID_ANY, _("Change skill..."));
    btnTransition = new wxButton(pnEvtCmd1, wxID_ANY, _("Change window transition..."));
    btnBattle = new wxButton(pnEvtCmd2, wxID_ANY, _("Start battle..."));
    btnTone = new wxButton(pnEvtCmd2, wxID_ANY, _("Change screen tone..."));
    btnCommerce = new wxButton(pnEvtCmd2, wxID_ANY, _("Visit commerce..."));
    btnFlashScreen = new wxButton(pnEvtCmd2, wxID_ANY, _("Flash screen..."));
    btnInn = new wxButton(pnEvtCmd2, wxID_ANY, _("Visit inn..."));
    btnShake = new wxButton(pnEvtCmd2, wxID_ANY, _("Shake screen..."));
    btnActorNameInput = new wxButton(pnEvtCmd2, wxID_ANY, _("Actor name input..."));
    btnMoveScreen = new wxButton(pnEvtCmd2, wxID_ANY, _("Move screen..."));
    btnTeleport = new wxButton(pnEvtCmd2, wxID_ANY, _("Teleport..."));
    btnWeather = new wxButton(pnEvtCmd2, wxID_ANY, _("Weather effect..."));
    btnMemorizePlace = new wxButton(pnEvtCmd2, wxID_ANY, _("Memorize place..."));
    btnPicture = new wxButton(pnEvtCmd2, wxID_ANY, _("Show picture..."));
    btnGoToMemorizedPlace = new wxButton(pnEvtCmd2, wxID_ANY, _("Go to memorized place..."));
    btnMovePicture = new wxButton(pnEvtCmd2, wxID_ANY, _("Move picture..."));
    btnVehicle = new wxButton(pnEvtCmd2, wxID_ANY, _("Ride or walk vehicle"));
    btnDeletePicture = new wxButton(pnEvtCmd2, wxID_ANY, _("Delete picture..."));
    btnVehiclePosition = new wxButton(pnEvtCmd2, wxID_ANY, _("Change vehicle position..."));
    btnAnimation = new wxButton(pnEvtCmd2, wxID_ANY, _("Show animation..."));
    btnEventPosition = new wxButton(pnEvtCmd2, wxID_ANY, _("Change event position..."));
    btnActorTransparency = new wxButton(pnEvtCmd2, wxID_ANY, _("Change actor transparency..."));
    btnSwapEvents = new wxButton(pnEvtCmd2, wxID_ANY, _("Swap events..."));
    btnFlashCharacter = new wxButton(pnEvtCmd2, wxID_ANY, _("Flash character..."));
    btnGetTerrainID = new wxButton(pnEvtCmd2, wxID_ANY, _("Get terrain ID..."));
    btnEventMovement = new wxButton(pnEvtCmd2, wxID_ANY, _("Event movement..."));
    btnGetPositionID = new wxButton(pnEvtCmd2, wxID_ANY, _("Get position ID..."));
    btnMoveAll = new wxButton(pnEvtCmd2, wxID_ANY, _("Move all"));
    btnBlankScreen = new wxButton(pnEvtCmd2, wxID_ANY, _("Blank screen..."));
    btnStopAll = new wxButton(pnEvtCmd2, wxID_ANY, _("Stop all"));
    btnShowScreen = new wxButton(pnEvtCmd2, wxID_ANY, _("Show screen..."));
    btnWait = new wxButton(pnEvtCmd2, wxID_ANY, _("Wait..."));
    btnPlayMusic = new wxButton(pnEvtCmd3, wxID_ANY, _("Play music..."));
    btnSaveMenu = new wxButton(pnEvtCmd3, wxID_ANY, _("Show save menu"));
    btnFadeMusic = new wxButton(pnEvtCmd3, wxID_ANY, _("Fade music..."));
    btnSaveMenuPermissions = new wxButton(pnEvtCmd3, wxID_ANY, _("Save permissions..."));
    btnMemorizeMusic = new wxButton(pnEvtCmd3, wxID_ANY, _("Memorize music"));
    btnSystemMenu = new wxButton(pnEvtCmd3, wxID_ANY, _("Show system menu"));
    btnPlayMemorizedMusic = new wxButton(pnEvtCmd3, wxID_ANY, _("Play memorized music"));
    btnSystemMenuPermissions = new wxButton(pnEvtCmd3, wxID_ANY, _("System menu permissions..."));
    btnPlaySound = new wxButton(pnEvtCmd3, wxID_ANY, _("Play sound..."));
    btnConditions = new wxButton(pnEvtCmd3, wxID_ANY, _("Conditions..."));
    btnPlayVideo = new wxButton(pnEvtCmd3, wxID_ANY, _("Play video..."));
    btnLabel = new wxButton(pnEvtCmd3, wxID_ANY, _("Set label..."));
    btnKeyAssignment = new wxButton(pnEvtCmd3, wxID_ANY, _("Key assignment..."));
    btnGoToLabel = new wxButton(pnEvtCmd3, wxID_ANY, _("Go to label..."));
    btnTileset = new wxButton(pnEvtCmd3, wxID_ANY, _("Change map tileset..."));
    btnLoop = new wxButton(pnEvtCmd3, wxID_ANY, _("Loop"));
    btnPanorama = new wxButton(pnEvtCmd3, wxID_ANY, _("Change map background..."));
    btnBreakLoop = new wxButton(pnEvtCmd3, wxID_ANY, _("Break loop"));
    btnEncounterRate = new wxButton(pnEvtCmd3, wxID_ANY, _("Change encounter rate..."));
    btnStopEventProcess = new wxButton(pnEvtCmd3, wxID_ANY, _("Stop event process"));
    btnTile = new wxButton(pnEvtCmd3, wxID_ANY, _("Change tile..."));
    btnDeleteEventTemporally = new wxButton(pnEvtCmd3, wxID_ANY, _("Delete event temporally"));
    btnTeleportPlace = new wxButton(pnEvtCmd3, wxID_ANY, _("Change teleport place..."));
    btnCallEvent = new wxButton(pnEvtCmd3, wxID_ANY, _("Call event..."));
    btnTeleportPermissions = new wxButton(pnEvtCmd3, wxID_ANY, _("Teleport permissions..."));
    btnNotes = new wxButton(pnEvtCmd3, wxID_ANY, _("Notes..."));
    btnEscapePlace = new wxButton(pnEvtCmd3, wxID_ANY, _("Change escape place..."));
    btnGameOver = new wxButton(pnEvtCmd3, wxID_ANY, _("Game over"));
    btnEscapePermissions = new wxButton(pnEvtCmd3, wxID_ANY, _("Escape permissions..."));
    btnGoToTitle = new wxButton(pnEvtCmd3, wxID_ANY, _("Go to title screen"));
    btnClose = new wxButton(this, wxID_CANCEL, wxEmptyString);

    set_properties();
    do_layout();
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
