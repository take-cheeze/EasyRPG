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

dlgEvtCmd::dlgEvtCmd(wxWindow* parent) : dlgEvtCmd_Base(parent) {
}

void dlgEvtCmd::btnMessage_click(wxCommandEvent& WXUNUSED(event)) {
	dlgEvtCmdMessage *DialogEvtCmdMessage = new dlgEvtCmdMessage(NULL);
	DialogEvtCmdMessage->ShowModal();
	DialogEvtCmdMessage->Destroy();
}

void dlgEvtCmd::btnMessageOptions_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnFaceGraphic_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnChoice_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnNumberInput_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnSwitch_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnVariable_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnTimer_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnMoney_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnItem_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnParty_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnExperience_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnLevel_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnParameter_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnSkill_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnEquipment_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnHP_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnMP_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnState_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnRecover_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnDamage_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnActorName_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnActorTitle_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnActorGraphic_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnActorFaceGraphic_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnVehicleGraphic_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnSystemMusic_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnSystemSound_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnSystemGraphic_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::btnTransition_click(wxCommandEvent& WXUNUSED(event)) {
	
}

void dlgEvtCmd::Close_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}