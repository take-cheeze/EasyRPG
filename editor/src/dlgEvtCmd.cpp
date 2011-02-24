/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Editor.
// 
// EasyRPG Editor is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// EasyRPG Editor is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with EasyRPG Editor. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#include "dlgEvtCmd.h"

#include "dlgEvtCmdMessage.h"
#include "dlgEvtCmdMessageOptions.h"
#include "dlgEvtCmdFaceGraphic.h"
#include "dlgEvtCmdChoice.h"
#include "dlgEvtCmdNumberInput.h"
#include "dlgEvtCmdSwitch.h"
#include "dlgEvtCmdVariable.h"
#include "dlgEvtCmdTimer.h"
#include "dlgEvtCmdMoney.h"
#include "dlgEvtCmdItem.h"
#include "dlgEvtCmdParty.h"
#include "dlgEvtCmdExperience.h"
#include "dlgEvtCmdLevel.h"
#include "dlgEvtCmdParameter.h"
#include "dlgEvtCmdSkill.h"
#include "dlgEvtCmdEquipment.h"
#include "dlgEvtCmdHP.h"
#include "dlgEvtCmdMP.h"
#include "dlgEvtCmdState.h"
#include "dlgEvtCmdRecover.h"
#include "dlgEvtCmdDamage.h"
#include "dlgEvtCmdActorName.h"
#include "dlgEvtCmdActorTitle.h"
#include "dlgEvtCmdActorGraphic.h"
#include "dlgEvtCmdActorFaceGraphic.h"
#include "dlgEvtCmdVehicleGraphic.h"
#include "dlgEvtCmdSystemMusic.h"
#include "dlgEvtCmdSystemSound.h"
#include "dlgEvtCmdSystemGraphic.h"
#include "dlgEvtCmdTransition.h"

#include "dlgEvtCmdBattle.h"
#include "dlgEvtCmdCommerce.h"
#include "dlgEvtCmdInn.h"
#include "dlgEvtCmdActorNameInput.h"
#include "dlgEvtCmdTeleport.h"
#include "dlgEvtCmdMemorizePlace.h"
#include "dlgEvtCmdGoToMemorizedPlace.h"
#include "dlgEvtCmdVehiclePosition.h"
#include "dlgEvtCmdEventPosition.h"
#include "dlgEvtCmdSwapEvents.h"
#include "dlgEvtCmdGetTerrainID.h"
#include "dlgEvtCmdGetPositionID.h"
#include "dlgEvtCmdBlankScreen.h"
#include "dlgEvtCmdShowScreen.h"
#include "dlgEvtCmdTone.h"
#include "dlgEvtCmdFlashScreen.h"
#include "dlgEvtCmdShake.h"
#include "dlgEvtCmdMoveScreen.h"
#include "dlgEvtCmdWeather.h"
#include "dlgEvtCmdPicture.h"
#include "dlgEvtCmdMovePicture.h"
#include "dlgEvtCmdDeletePicture.h"
#include "dlgEvtCmdAnimation.h"
#include "dlgEvtCmdActorTransparency.h"
#include "dlgEvtCmdFlashCharacter.h"
#include "dlgEvtCmdEventMovement.h"
#include "dlgEvtCmdWait.h"

#include "dlgEvtCmdPlayMusic.h"
#include "dlgEvtCmdFadeMusic.h"
#include "dlgEvtCmdPlaySound.h"
#include "dlgEvtCmdPlayVideo.h"
#include "dlgEvtCmdKeyAssignment.h"
#include "dlgEvtCmdTileset.h"
#include "dlgEvtCmdPanorama.h"
#include "dlgEvtCmdEncounterRate.h"
#include "dlgEvtCmdTile.h"
#include "dlgEvtCmdTeleportPlace.h"
#include "dlgEvtCmdTeleportPermissions.h"
#include "dlgEvtCmdEscapePlace.h"
#include "dlgEvtCmdEscapePermissions.h"
#include "dlgEvtCmdSavePermissions.h"
#include "dlgEvtCmdSystemMenuPermissions.h"
#include "dlgEvtCmdConditions.h"
#include "dlgEvtCmdLabel.h"
#include "dlgEvtCmdGoToLabel.h"
#include "dlgEvtCmdCallEvent.h"
#include "dlgEvtCmdNote.h"

dlgEvtCmd::dlgEvtCmd(wxWindow* parent) : dlgEvtCmd_Base(parent) {
}

void dlgEvtCmd::btnMessage_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdMessage *DialogEvtCmdMessage = new dlgEvtCmdMessage(NULL);
	DialogEvtCmdMessage->ShowModal();
	DialogEvtCmdMessage->Destroy();
}

void dlgEvtCmd::btnMessageOptions_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdMessageOptions *DialogEvtCmdMessageOptions = new dlgEvtCmdMessageOptions(NULL);
	DialogEvtCmdMessageOptions->ShowModal();
	DialogEvtCmdMessageOptions->Destroy();
}

void dlgEvtCmd::btnFaceGraphic_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdFaceGraphic *DialogEvtCmdFaceGraphic = new dlgEvtCmdFaceGraphic(NULL);
	DialogEvtCmdFaceGraphic->ShowModal();
	DialogEvtCmdFaceGraphic->Destroy();
}

void dlgEvtCmd::btnChoice_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdChoice *DialogEvtCmdChoice = new dlgEvtCmdChoice(NULL);
	DialogEvtCmdChoice->ShowModal();
	DialogEvtCmdChoice->Destroy();
}

void dlgEvtCmd::btnNumberInput_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdNumberInput *DialogEvtCmdNumberInput = new dlgEvtCmdNumberInput(NULL);
	DialogEvtCmdNumberInput->ShowModal();
	DialogEvtCmdNumberInput->Destroy();
}

void dlgEvtCmd::btnSwitch_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdSwitch *DialogEvtCmdSwitch = new dlgEvtCmdSwitch(NULL);
	DialogEvtCmdSwitch->ShowModal();
	DialogEvtCmdSwitch->Destroy();
}

void dlgEvtCmd::btnVariable_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdVariable *DialogEvtCmdVariable = new dlgEvtCmdVariable(NULL);
	DialogEvtCmdVariable->ShowModal();
	DialogEvtCmdVariable->Destroy();
}

void dlgEvtCmd::btnTimer_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdTimer *DialogEvtCmdTimer = new dlgEvtCmdTimer(NULL);
	DialogEvtCmdTimer->ShowModal();
	DialogEvtCmdTimer->Destroy();
}

void dlgEvtCmd::btnMoney_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdMoney *DialogEvtCmdMoney = new dlgEvtCmdMoney(NULL);
	DialogEvtCmdMoney->ShowModal();
	DialogEvtCmdMoney->Destroy();
}

void dlgEvtCmd::btnItem_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdItem *DialogEvtCmdItem = new dlgEvtCmdItem(NULL);
	DialogEvtCmdItem->ShowModal();
	DialogEvtCmdItem->Destroy();
}

void dlgEvtCmd::btnParty_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdParty *DialogEvtCmdParty = new dlgEvtCmdParty(NULL);
	DialogEvtCmdParty->ShowModal();
	DialogEvtCmdParty->Destroy();
}

void dlgEvtCmd::btnExperience_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdExperience *DialogEvtCmdExperience = new dlgEvtCmdExperience(NULL);
	DialogEvtCmdExperience->ShowModal();
	DialogEvtCmdExperience->Destroy();
}

void dlgEvtCmd::btnLevel_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdLevel *DialogEvtCmdLevel = new dlgEvtCmdLevel(NULL);
	DialogEvtCmdLevel->ShowModal();
	DialogEvtCmdLevel->Destroy();
}

void dlgEvtCmd::btnParameter_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdParameter *DialogEvtCmdParameter = new dlgEvtCmdParameter(NULL);
	DialogEvtCmdParameter->ShowModal();
	DialogEvtCmdParameter->Destroy();
}

void dlgEvtCmd::btnSkill_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdSkill *DialogEvtCmdSkill = new dlgEvtCmdSkill(NULL);
	DialogEvtCmdSkill->ShowModal();
	DialogEvtCmdSkill->Destroy();
}

void dlgEvtCmd::btnEquipment_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdEquipment *DialogEvtCmdEquipment = new dlgEvtCmdEquipment(NULL);
	DialogEvtCmdEquipment->ShowModal();
	DialogEvtCmdEquipment->Destroy();
}

void dlgEvtCmd::btnHP_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdHP *DialogEvtCmdHP = new dlgEvtCmdHP(NULL);
	DialogEvtCmdHP->ShowModal();
	DialogEvtCmdHP->Destroy();
}

void dlgEvtCmd::btnMP_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdMP *DialogEvtCmdMP = new dlgEvtCmdMP(NULL);
	DialogEvtCmdMP->ShowModal();
	DialogEvtCmdMP->Destroy();
}

void dlgEvtCmd::btnState_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdState *DialogEvtCmdState = new dlgEvtCmdState(NULL);
	DialogEvtCmdState->ShowModal();
	DialogEvtCmdState->Destroy();
}

void dlgEvtCmd::btnRecover_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdRecover *DialogEvtCmdRecover = new dlgEvtCmdRecover(NULL);
	DialogEvtCmdRecover->ShowModal();
	DialogEvtCmdRecover->Destroy();
}

void dlgEvtCmd::btnDamage_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdDamage *DialogEvtCmdDamage = new dlgEvtCmdDamage(NULL);
	DialogEvtCmdDamage->ShowModal();
	DialogEvtCmdDamage->Destroy();
}

void dlgEvtCmd::btnActorName_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdActorName *DialogEvtCmdActorName = new dlgEvtCmdActorName(NULL);
	DialogEvtCmdActorName->ShowModal();
	DialogEvtCmdActorName->Destroy();
}

void dlgEvtCmd::btnActorTitle_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdActorTitle *DialogEvtCmdActorTitle = new dlgEvtCmdActorTitle(NULL);
	DialogEvtCmdActorTitle->ShowModal();
	DialogEvtCmdActorTitle->Destroy();
}

void dlgEvtCmd::btnActorGraphic_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdActorGraphic *DialogEvtCmdActorGraphic = new dlgEvtCmdActorGraphic(NULL);
	DialogEvtCmdActorGraphic->ShowModal();
	DialogEvtCmdActorGraphic->Destroy();
}

void dlgEvtCmd::btnActorFaceGraphic_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdActorFaceGraphic *DialogEvtCmdActorFaceGraphic = new dlgEvtCmdActorFaceGraphic(NULL);
	DialogEvtCmdActorFaceGraphic->ShowModal();
	DialogEvtCmdActorFaceGraphic->Destroy();
}

void dlgEvtCmd::btnVehicleGraphic_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdVehicleGraphic *DialogEvtCmdVehicleGraphic = new dlgEvtCmdVehicleGraphic(NULL);
	DialogEvtCmdVehicleGraphic->ShowModal();
	DialogEvtCmdVehicleGraphic->Destroy();
}

void dlgEvtCmd::btnSystemMusic_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdSystemMusic *DialogEvtCmdSystemMusic = new dlgEvtCmdSystemMusic(NULL);
	DialogEvtCmdSystemMusic->ShowModal();
	DialogEvtCmdSystemMusic->Destroy();
}

void dlgEvtCmd::btnSystemSound_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdSystemSound *DialogEvtCmdSystemSound = new dlgEvtCmdSystemSound(NULL);
	DialogEvtCmdSystemSound->ShowModal();
	DialogEvtCmdSystemSound->Destroy();
}

void dlgEvtCmd::btnSystemGraphic_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdSystemGraphic *DialogEvtCmdSystemGraphic = new dlgEvtCmdSystemGraphic(NULL);
	DialogEvtCmdSystemGraphic->ShowModal();
	DialogEvtCmdSystemGraphic->Destroy();
}

void dlgEvtCmd::btnTransition_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdTransition *DialogEvtCmdTransition = new dlgEvtCmdTransition(NULL);
	DialogEvtCmdTransition->ShowModal();
	DialogEvtCmdTransition->Destroy();
}


void dlgEvtCmd::btnBattle_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdBattle *DialogEvtCmdBattle = new dlgEvtCmdBattle(NULL);
	DialogEvtCmdBattle->ShowModal();
	DialogEvtCmdBattle->Destroy();
}

void dlgEvtCmd::btnCommerce_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdCommerce *DialogEvtCmdCommerce = new dlgEvtCmdCommerce(NULL);
	DialogEvtCmdCommerce->ShowModal();
	DialogEvtCmdCommerce->Destroy();
}

void dlgEvtCmd::btnInn_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdInn *DialogEvtCmdInn = new dlgEvtCmdInn(NULL);
	DialogEvtCmdInn->ShowModal();
	DialogEvtCmdInn->Destroy();
}

void dlgEvtCmd::btnActorNameInput_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdActorNameInput *DialogEvtCmdActorNameInput = new dlgEvtCmdActorNameInput(NULL);
	DialogEvtCmdActorNameInput->ShowModal();
	DialogEvtCmdActorNameInput->Destroy();
}

void dlgEvtCmd::btnTeleport_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdTeleport *DialogEvtCmdTeleport = new dlgEvtCmdTeleport(NULL);
	DialogEvtCmdTeleport->ShowModal();
	DialogEvtCmdTeleport->Destroy();
}

void dlgEvtCmd::btnMemorizePlace_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdMemorizePlace *DialogEvtCmdMemorizePlace = new dlgEvtCmdMemorizePlace(NULL);
	DialogEvtCmdMemorizePlace->ShowModal();
	DialogEvtCmdMemorizePlace->Destroy();
}

void dlgEvtCmd::btnGoToMemorizedPlace_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdGoToMemorizedPlace *DialogEvtCmdGoToMemorizedPlace = new dlgEvtCmdGoToMemorizedPlace(NULL);
	DialogEvtCmdGoToMemorizedPlace->ShowModal();
	DialogEvtCmdGoToMemorizedPlace->Destroy();
}

void dlgEvtCmd::btnVehiclePosition_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdVehiclePosition *DialogEvtCmdVehiclePosition = new dlgEvtCmdVehiclePosition(NULL);
	DialogEvtCmdVehiclePosition->ShowModal();
	DialogEvtCmdVehiclePosition->Destroy();
}

void dlgEvtCmd::btnEventPosition_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdEventPosition *DialogEvtCmdEventPosition = new dlgEvtCmdEventPosition(NULL);
	DialogEvtCmdEventPosition->ShowModal();
	DialogEvtCmdEventPosition->Destroy();
}

void dlgEvtCmd::btnSwapEvents_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdSwapEvents *DialogEvtCmdSwapEvents = new dlgEvtCmdSwapEvents(NULL);
	DialogEvtCmdSwapEvents->ShowModal();
	DialogEvtCmdSwapEvents->Destroy();
}

void dlgEvtCmd::btnGetTerrainID_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdGetTerrainID *DialogEvtCmdGetTerrainID = new dlgEvtCmdGetTerrainID(NULL);
	DialogEvtCmdGetTerrainID->ShowModal();
	DialogEvtCmdGetTerrainID->Destroy();
}

void dlgEvtCmd::btnGetPositionID_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdGetPositionID *DialogEvtCmdGetPositionID = new dlgEvtCmdGetPositionID(NULL);
	DialogEvtCmdGetPositionID->ShowModal();
	DialogEvtCmdGetPositionID->Destroy();
}

void dlgEvtCmd::btnBlankScreen_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdBlankScreen *DialogEvtCmdBlankScreen = new dlgEvtCmdBlankScreen(NULL);
	DialogEvtCmdBlankScreen->ShowModal();
	DialogEvtCmdBlankScreen->Destroy();
}

void dlgEvtCmd::btnShowScreen_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdShowScreen *DialogEvtCmdShowScreen = new dlgEvtCmdShowScreen(NULL);
	DialogEvtCmdShowScreen->ShowModal();
	DialogEvtCmdShowScreen->Destroy();
}

void dlgEvtCmd::btnTone_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdTone *DialogEvtCmdTone = new dlgEvtCmdTone(NULL);
	DialogEvtCmdTone->ShowModal();
	DialogEvtCmdTone->Destroy();
}

void dlgEvtCmd::btnFlashScreen_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdFlashScreen *DialogEvtCmdFlashScreen = new dlgEvtCmdFlashScreen(NULL);
	DialogEvtCmdFlashScreen->ShowModal();
	DialogEvtCmdFlashScreen->Destroy();
}

void dlgEvtCmd::btnShake_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdShake *DialogEvtCmdShake = new dlgEvtCmdShake(NULL);
	DialogEvtCmdShake->ShowModal();
	DialogEvtCmdShake->Destroy();
}

void dlgEvtCmd::btnMoveScreen_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdMoveScreen *DialogEvtCmdMoveScreen = new dlgEvtCmdMoveScreen(NULL);
	DialogEvtCmdMoveScreen->ShowModal();
	DialogEvtCmdMoveScreen->Destroy();
}

void dlgEvtCmd::btnWeather_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdWeather *DialogEvtCmdWeather = new dlgEvtCmdWeather(NULL);
	DialogEvtCmdWeather->ShowModal();
	DialogEvtCmdWeather->Destroy();
}

void dlgEvtCmd::btnPicture_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdPicture *DialogEvtCmdPicture = new dlgEvtCmdPicture(NULL);
	DialogEvtCmdPicture->ShowModal();
	DialogEvtCmdPicture->Destroy();
}

void dlgEvtCmd::btnMovePicture_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdMovePicture *DialogEvtCmdMovePicture = new dlgEvtCmdMovePicture(NULL);
	DialogEvtCmdMovePicture->ShowModal();
	DialogEvtCmdMovePicture->Destroy();
}

void dlgEvtCmd::btnDeletePicture_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdDeletePicture *DialogEvtCmdDeletePicture = new dlgEvtCmdDeletePicture(NULL);
	DialogEvtCmdDeletePicture->ShowModal();
	DialogEvtCmdDeletePicture->Destroy();
}

void dlgEvtCmd::btnAnimation_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdAnimation *DialogEvtCmdAnimation = new dlgEvtCmdAnimation(NULL);
	DialogEvtCmdAnimation->ShowModal();
	DialogEvtCmdAnimation->Destroy();
}

void dlgEvtCmd::btnActorTransparency_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdActorTransparency *DialogEvtCmdActorTransparency = new dlgEvtCmdActorTransparency(NULL);
	DialogEvtCmdActorTransparency->ShowModal();
	DialogEvtCmdActorTransparency->Destroy();
}

void dlgEvtCmd::btnFlashCharacter_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdFlashCharacter *DialogEvtCmdFlashCharacter = new dlgEvtCmdFlashCharacter(NULL);
	DialogEvtCmdFlashCharacter->ShowModal();
	DialogEvtCmdFlashCharacter->Destroy();
}

void dlgEvtCmd::btnEventMovement_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdEventMovement *DialogEvtCmdEventMovement = new dlgEvtCmdEventMovement(NULL);
	DialogEvtCmdEventMovement->ShowModal();
	DialogEvtCmdEventMovement->Destroy();
}

void dlgEvtCmd::btnWait_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdWait *DialogEvtCmdWait = new dlgEvtCmdWait(NULL);
	DialogEvtCmdWait->ShowModal();
	DialogEvtCmdWait->Destroy();
}


void dlgEvtCmd::btnPlayMusic_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdPlayMusic *DialogEvtCmdPlayMusic = new dlgEvtCmdPlayMusic(NULL);
	DialogEvtCmdPlayMusic->ShowModal();
	DialogEvtCmdPlayMusic->Destroy();
}

void dlgEvtCmd::btnFadeMusic_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdFadeMusic *DialogEvtCmdFadeMusic = new dlgEvtCmdFadeMusic(NULL);
	DialogEvtCmdFadeMusic->ShowModal();
	DialogEvtCmdFadeMusic->Destroy();
}

void dlgEvtCmd::btnPlaySound_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdPlaySound *DialogEvtCmdPlaySound = new dlgEvtCmdPlaySound(NULL);
	DialogEvtCmdPlaySound->ShowModal();
	DialogEvtCmdPlaySound->Destroy();
}

void dlgEvtCmd::btnPlayVideo_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdPlayVideo *DialogEvtCmdPlayVideo = new dlgEvtCmdPlayVideo(NULL);
	DialogEvtCmdPlayVideo->ShowModal();
	DialogEvtCmdPlayVideo->Destroy();
}

void dlgEvtCmd::btnKeyAssignment_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdKeyAssignment *DialogEvtCmdKeyAssignment = new dlgEvtCmdKeyAssignment(NULL);
	DialogEvtCmdKeyAssignment->ShowModal();
	DialogEvtCmdKeyAssignment->Destroy();
}

void dlgEvtCmd::btnTileset_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdTileset *DialogEvtCmdTileset = new dlgEvtCmdTileset(NULL);
	DialogEvtCmdTileset->ShowModal();
	DialogEvtCmdTileset->Destroy();
}

void dlgEvtCmd::btnPanorama_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdPanorama *DialogEvtCmdPanorama = new dlgEvtCmdPanorama(NULL);
	DialogEvtCmdPanorama->ShowModal();
	DialogEvtCmdPanorama->Destroy();
}

void dlgEvtCmd::btnEncounterRate_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdEncounterRate *DialogEvtCmdEncounterRate = new dlgEvtCmdEncounterRate(NULL);
	DialogEvtCmdEncounterRate->ShowModal();
	DialogEvtCmdEncounterRate->Destroy();
}

void dlgEvtCmd::btnTile_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdTile *DialogEvtCmdTile = new dlgEvtCmdTile(NULL);
	DialogEvtCmdTile->ShowModal();
	DialogEvtCmdTile->Destroy();
}

void dlgEvtCmd::btnTeleportPlace_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdTeleportPlace *DialogEvtCmdTeleportPlace = new dlgEvtCmdTeleportPlace(NULL);
	DialogEvtCmdTeleportPlace->ShowModal();
	DialogEvtCmdTeleportPlace->Destroy();
}

void dlgEvtCmd::btnTeleportPermissions_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdTeleportPermissions *DialogEvtCmdTeleportPermissions = new dlgEvtCmdTeleportPermissions(NULL);
	DialogEvtCmdTeleportPermissions->ShowModal();
	DialogEvtCmdTeleportPermissions->Destroy();
}

void dlgEvtCmd::btnEscapePlace_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdEscapePlace *DialogEvtCmdEscapePlace = new dlgEvtCmdEscapePlace(NULL);
	DialogEvtCmdEscapePlace->ShowModal();
	DialogEvtCmdEscapePlace->Destroy();
}

void dlgEvtCmd::btnEscapePermissions_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdEscapePermissions *DialogEvtCmdEscapePermissions = new dlgEvtCmdEscapePermissions(NULL);
	DialogEvtCmdEscapePermissions->ShowModal();
	DialogEvtCmdEscapePermissions->Destroy();
}

void dlgEvtCmd::btnSavePermissions_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdSavePermissions *DialogEvtCmdSavePermissions = new dlgEvtCmdSavePermissions(NULL);
	DialogEvtCmdSavePermissions->ShowModal();
	DialogEvtCmdSavePermissions->Destroy();
}

void dlgEvtCmd::btnSystemMenuPermissions_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdSystemMenuPermissions *DialogEvtCmdSystemMenuPermissions = new dlgEvtCmdSystemMenuPermissions(NULL);
	DialogEvtCmdSystemMenuPermissions->ShowModal();
	DialogEvtCmdSystemMenuPermissions->Destroy();
}

void dlgEvtCmd::btnConditions_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdConditions *DialogEvtCmdConditions = new dlgEvtCmdConditions(NULL);
	DialogEvtCmdConditions->ShowModal();
	DialogEvtCmdConditions->Destroy();
}

void dlgEvtCmd::btnLabel_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdLabel *DialogEvtCmdLabel = new dlgEvtCmdLabel(NULL);
	DialogEvtCmdLabel->ShowModal();
	DialogEvtCmdLabel->Destroy();
}

void dlgEvtCmd::btnGoToLabel_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdGoToLabel *DialogEvtCmdGoToLabel = new dlgEvtCmdGoToLabel(NULL);
	DialogEvtCmdGoToLabel->ShowModal();
	DialogEvtCmdGoToLabel->Destroy();
}

void dlgEvtCmd::btnCallEvent_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdCallEvent *DialogEvtCmdCallEvent = new dlgEvtCmdCallEvent(NULL);
	DialogEvtCmdCallEvent->ShowModal();
	DialogEvtCmdCallEvent->Destroy();
}

void dlgEvtCmd::btnNote_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdNote *DialogEvtCmdNote = new dlgEvtCmdNote(NULL);
	DialogEvtCmdNote->ShowModal();
	DialogEvtCmdNote->Destroy();
}


void dlgEvtCmd::btnClose_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}