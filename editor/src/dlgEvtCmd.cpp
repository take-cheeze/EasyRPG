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

void dlgEvtCmd::Close_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}