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

#include "frmEditor.h"

#include "dlgNew.h"
#include "dlgOpen.h"
#include "dlgPack.h"
#include "dlgDb.h"
#include "dlgMaterial.h"
#include "dlgMusic.h"
#include "dlgAbout.h"
#include "dlgMap.h"
#include "dlgArea.h"
#include "dlgShiftMap.h"
#include "dlgEvt.h"

#include "wx/config.h"
#include "wx/imaglist.h"
#include "wx/artprov.h"

frmEditor::frmEditor(wxWindow* parent) : frmEditor_Base(parent) {
	//TODO: Put this in documentation wiki and remove it from here.
	//rm2k creates ApplicationPath on start.
	//rm2k creates FullScreenFlag = 1 and ShowTitleFlag = 0 on exit and will
	//use these values for all games, there is no per-game config in RPG_RT.ini
	//for these values.
	//rm2k creates FormLcfMain_Placement on exit (in old ASCII key).
	//rm2k uses ApplicationPath by default for New or Open project
	//if ProjectBasePath does not exist and will use it if exists.
	//rm2k creates ProjectBasePath at runtime when path is selected in those
	//dialogs, even before clicking OK, Open or Cancel.
	
	//Read frame position and size from config
	wxConfigBase *cfgEditor = wxConfigBase::Get();
	// Get current frame values if not defined in config
	int x, y, w, h;
	GetPosition(&x, &y);
	GetClientSize(&w, &h);
	//Read from config or use default current values
	cfgEditor->SetPath(_T("/Editor"));
	x = cfgEditor->Read(_T("x"), x),
	y = cfgEditor->Read(_T("y"), y),
	w = cfgEditor->Read(_T("w"), w),
	h = cfgEditor->Read(_T("h"), h);
	//Apply values to the frame
	Move(x, y);
	SetClientSize(w, h);
	
	//Disable toolbar buttons by default
	frmEditorToolbar->EnableTool(wxID_CLOSE, false);
	frmEditorToolbar->EnableTool(ID_PACK, false);
	frmEditorToolbar->EnableTool(wxID_SAVE, false);
	frmEditorToolbar->EnableTool(wxID_REVERT, false);
	frmEditorToolbar->EnableTool(ID_LOWER_LAYER, false);
	frmEditorToolbar->EnableTool(ID_UPPER_LAYER, false);
	frmEditorToolbar->EnableTool(ID_EVENTS, false);
	frmEditorToolbar->EnableTool(wxID_ZOOM_100, false);
	frmEditorToolbar->EnableTool(ID_SCALE_12, false);
	frmEditorToolbar->EnableTool(ID_SCALE_14, false);
	frmEditorToolbar->EnableTool(ID_SCALE_18, false);
	frmEditorToolbar->EnableTool(ID_DATABASE, false);
	frmEditorToolbar->EnableTool(ID_MATERIAL, false);
	frmEditorToolbar->EnableTool(ID_MUSIC, false);
	frmEditorToolbar->EnableTool(ID_PLAY_TEST, false);
	frmEditorToolbar->EnableTool(ID_FULL_SCREEN, false);
	frmEditorToolbar->EnableTool(ID_SHOW_TITLE, false);
	
	frmEditorToolbar2->EnableTool(wxID_UNDO, false);
	frmEditorToolbar2->EnableTool(ID_SELECT, false);
	frmEditorToolbar2->EnableTool(wxID_ZOOM_FIT, false);
	frmEditorToolbar2->EnableTool(ID_PEN, false);
	frmEditorToolbar2->EnableTool(ID_RECTANGLE, false);
	frmEditorToolbar2->EnableTool(ID_CIRCLE, false);
	frmEditorToolbar2->EnableTool(ID_FILL, false);
	
	//Select pen tool by default
	frmEditorToolbar2->ToggleTool(ID_PEN, true);
	
	//rm2k(3) editor always start with same sash position. Could use config
	swEditor->SetSashPosition(300);
	
/*	//TreeCtrl test
	wxImageList *imageList = new wxImageList(16, 16);
	imageList->Add(wxArtProvider::GetBitmap(wxART_FOLDER));
	imageList->Add(wxArtProvider::GetBitmap(wxART_FILE_OPEN));
	imageList->Add(wxArtProvider::GetBitmap(wxART_NORMAL_FILE));
	tcMapTree->SetImageList(imageList);
	
	tcMapTree->AddRoot(_T("Untitled"), 1, 0);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->AppendItem(tcMapTree->GetRootItem(), _T("Child"), 2);
	tcMapTree->ExpandAll();*/
	
	//Database dialog preloading. Requires delete on destructor, not Destroy()
	DialogDb = new dlgDb(NULL);
}

frmEditor::~frmEditor() {
	//Destroy preloaded database dialog. Do not destroy with Destroy()
	delete DialogDb;
	
	//Save frame position and size to config
	wxConfigBase *cfgEditor = wxConfigBase::Get();
	int x, y, w, h;
	GetPosition(&x, &y);
	GetClientSize(&w, &h);
	cfgEditor->SetPath(_T("/Editor"));
	cfgEditor->Write(_T("x"), x);
	cfgEditor->Write(_T("y"), y);
	cfgEditor->Write(_T("w"), w);
	cfgEditor->Write(_T("h"), h);
}

void frmEditor::New_click(wxCommandEvent& WXUNUSED(event)) {
	dlgNew *DialogNew = new dlgNew(NULL);
	DialogNew->ShowModal();
	DialogNew->Destroy();
}

void frmEditor::Open_click(wxCommandEvent& WXUNUSED(event)) {
	dlgOpen *DialogOpen = new dlgOpen(NULL);
	DialogOpen->ShowModal();
	DialogOpen->Destroy();
}

void frmEditor::Pack_click(wxCommandEvent& WXUNUSED(event)) {
	dlgPack *DialogPack = new dlgPack(NULL);
	DialogPack->ShowModal();
	DialogPack->Destroy();
}

void frmEditor::Exit_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}

void frmEditor::Database_click(wxCommandEvent& WXUNUSED(event)) {
	//Database dialog is preloaded in constructor. Do not destroy here
	DialogDb->ShowModal();
}

void frmEditor::Material_click(wxCommandEvent& WXUNUSED(event)) {
	dlgMaterial *DialogMaterial = new dlgMaterial(NULL);
	DialogMaterial->ShowModal();
	DialogMaterial->Destroy();
}

void frmEditor::Music_click(wxCommandEvent& WXUNUSED(event)) {
	dlgMusic *DialogMusic = new dlgMusic(NULL);
	DialogMusic->ShowModal();
	DialogMusic->Destroy();
}

void frmEditor::About_click(wxCommandEvent& WXUNUSED(event)) {
	dlgAbout *DialogAbout = new dlgAbout(NULL);
	DialogAbout->ShowModal();
	DialogAbout->Destroy();
}

void frmEditor::tcMapTree_menu(wxTreeEvent& event) {
	//Detects if current node is root or map/area
	if (event.GetItem() == tcMapTree->GetRootItem()) {
		//Creates specific root context menu
		wxMenu* menuMapTreeRoot = new wxMenu();
		wxMenuItem* menuitemMapTreeRootNewMap = new wxMenuItem(menuMapTreeRoot, wxID_ANY, _("New map..."));
		wxMenuItem* menuitemMapTreeRootPaste = new wxMenuItem(menuMapTreeRoot, wxID_PASTE, _("Paste\tCtrl+V"));
		menuMapTreeRoot->Append(menuitemMapTreeRootNewMap);
		menuMapTreeRoot->AppendSeparator();
		menuMapTreeRoot->Append(menuitemMapTreeRootPaste);
		Connect(menuitemMapTreeRootNewMap->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(frmEditor::menuitemMapTreeRootNewMap_click));
		
		//Disable menus by default
		menuitemMapTreeRootPaste->Enable(false);
		
		PopupMenu(menuMapTreeRoot);
	} else {
		//Creates specific map context menu
		//TODO: Determine if node ID is map or area to show specific area menu
		wxMenu* menuMapTreeMap = new wxMenu();
		wxMenuItem* menuitemMapTreeMapProperties = new wxMenuItem(menuMapTreeMap, wxID_PROPERTIES, _("Map properties..."));
		wxMenuItem* menuitemMapTreeMapNewMap = new wxMenuItem(menuMapTreeMap, wxID_ANY, _("New map..."));
		wxMenuItem* menuitemMapTreeMapNewArea = new wxMenuItem(menuMapTreeMap, wxID_ANY, _("New area..."));
		wxMenuItem* menuitemMapTreeMapCopy = new wxMenuItem(menuMapTreeMap, wxID_COPY, _("Copy\tCtrl+C"));
		wxMenuItem* menuitemMapTreeMapPaste = new wxMenuItem(menuMapTreeMap, wxID_PASTE, _("Paste\tCtrl+V"));
		wxMenuItem* menuitemMapTreeMapDelete = new wxMenuItem(menuMapTreeMap, wxID_DELETE, _("Delete\tDel"));
		wxMenuItem* menuitemMapTreeMapShiftMap = new wxMenuItem(menuMapTreeMap, wxID_ANY, _("Shift map...\tCtrl+H"));
		menuMapTreeMap->Append(menuitemMapTreeMapProperties);
		menuMapTreeMap->AppendSeparator();
		menuMapTreeMap->Append(menuitemMapTreeMapNewMap);
		menuMapTreeMap->Append(menuitemMapTreeMapNewArea);
		menuMapTreeMap->AppendSeparator();
		menuMapTreeMap->Append(menuitemMapTreeMapCopy);
		menuMapTreeMap->Append(menuitemMapTreeMapPaste);
		menuMapTreeMap->Append(menuitemMapTreeMapDelete);
		menuMapTreeMap->AppendSeparator();
		menuMapTreeMap->Append(menuitemMapTreeMapShiftMap);
		Connect(menuitemMapTreeMapProperties->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(frmEditor::menuitemMapTreeMapProperties_click));
		Connect(menuitemMapTreeMapNewMap->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(frmEditor::menuitemMapTreeMapNewMap_click));
		Connect(menuitemMapTreeMapNewArea->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(frmEditor::menuitemMapTreeMapNewArea_click));
		Connect(menuitemMapTreeMapShiftMap->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(frmEditor::menuitemMapTreeMapShiftMap_click));
		
		//Disable menus by default
		menuitemMapTreeMapPaste->Enable(false);
		
		PopupMenu(menuMapTreeMap);
	}
}

void frmEditor::menuitemMapTreeRootNewMap_click(wxCommandEvent& WXUNUSED(event)) {
	dlgMap *DialogMap = new dlgMap(NULL);
	DialogMap->SetTitle(_("New map"));
	DialogMap->ShowModal();
	DialogMap->Destroy();
}

void frmEditor::menuitemMapTreeMapProperties_click(wxCommandEvent& WXUNUSED(event)) {
	dlgMap *DialogMap = new dlgMap(NULL);
	DialogMap->ShowModal();
	DialogMap->Destroy();
}

void frmEditor::menuitemMapTreeMapNewMap_click(wxCommandEvent& WXUNUSED(event)) {
	dlgMap *DialogMap = new dlgMap(NULL);
	DialogMap->SetTitle(_("New map"));
	DialogMap->ShowModal();
	DialogMap->Destroy();
}

void frmEditor::menuitemMapTreeMapNewArea_click(wxCommandEvent& WXUNUSED(event)) {
	dlgArea *DialogArea = new dlgArea(NULL);
	DialogArea->SetTitle(_("New area"));
	DialogArea->ShowModal();
	DialogArea->Destroy();
}

void frmEditor::menuitemMapTreeMapShiftMap_click(wxCommandEvent& WXUNUSED(event)) {
	dlgShiftMap *DialogShiftMap = new dlgShiftMap(NULL);
	DialogShiftMap->ShowModal();
	DialogShiftMap->Destroy();
}

void frmEditor::pnEditorMap_rclick(wxMouseEvent& WXUNUSED(event)) {
/*	//dlgEvt test
	dlgEvt *DialogEvt = new dlgEvt(NULL);
	DialogEvt->ShowModal();
	DialogEvt->Destroy();*/
}
