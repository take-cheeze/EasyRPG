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

#include "dlgOpen.h"

#include "dlgRename.h"

#include "wx/config.h"
#include "wx/stdpaths.h"
#include "wx/imaglist.h"
#include "wx/artprov.h"
#include "wx/msgdlg.h"
#include "wx/dir.h"
#include "wx/filename.h"
#include "wx/dirdlg.h"
#include "wx/wfstream.h"

dlgOpen::dlgOpen(wxWindow* parent) : dlgOpen_Base(parent) {
	RefreshProjectList();
}

void dlgOpen::btnRename_click(wxCommandEvent& WXUNUSED(event)) {
	//Gets selected item. List control is single selection only, first is only
	long item;
	item = lcProject->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	//Checks if there is selected an item. -1 value means none selected
	if (item != -1) {
		//GetItemText only gets first column value, so we also need SetColumn
		wxListItem info;
		info.SetId(item);
		//1 is second column value, first is 0
		info.SetColumn(1);
		lcProject->GetItem(info);
		//Creates the rename dialog
		dlgRename *DialogRename = new dlgRename(NULL);
		//Puts text control values of rename dialog, they are public
		DialogRename->tcFolder->SetValue(lcProject->GetItemText(item));
		DialogRename->tcTitle->SetValue(info.GetText());
		DialogRename->ShowModal();
		//If window was closed using OK button
		if (DialogRename->GetReturnCode() == wxID_OK) {
			//Get full path of folders
			wxFileName oldpath;
			wxFileName newpath;
			oldpath = lcProject->GetItemText(item);
			newpath = DialogRename->tcFolder->GetValue();
			oldpath.MakeAbsolute(ProjectBasePath);
			newpath.MakeAbsolute(ProjectBasePath);
			//Rename folder
			if (!wxRenameFile(oldpath.GetFullPath(), newpath.GetFullPath(), false)) {
				wxMessageBox(_("Unable to rename folder"), _("EasyRPG error"), wxICON_HAND);
			}
		}
		DialogRename->Destroy();
		RefreshProjectList();
	}
}

void dlgOpen::btnDelete_click(wxCommandEvent& WXUNUSED(event)) {
	//Gets selected item. List control is single selection only, first is only
	long item;
	item = lcProject->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	//Checks if there is selected an item. -1 value means none selected
	if (item != -1) {
		
	}
}

void dlgOpen::tcPath_key(wxKeyEvent& event) {
	//Show path selection window when pressing space key
	if (event.GetKeyCode() == WXK_SPACE) {
		SelectPath();
	}
}

void dlgOpen::tcPath_dclick(wxMouseEvent& WXUNUSED(event)) {
	SelectPath();
}

void dlgOpen::btnPath_click(wxCommandEvent& WXUNUSED(event)) {
	SelectPath();
}

void dlgOpen::btnCancel_click(wxCommandEvent& WXUNUSED(event)) {
	Close();
}

void dlgOpen::SelectPath() {
	const wxString& Path = wxDirSelector(_("Project path"), ProjectBasePath);
	if (!Path.empty()) {
		ProjectBasePath = Path;
		tcPath->SetValue(ProjectBasePath);
		//Write project base path config
		wxConfigBase *cfgEditor = wxConfigBase::Get();
		cfgEditor->Write(_T("/Editor/ProjectBasePath"), ProjectBasePath);
		//Save this changes now instead of doing it on application destroy
		cfgEditor->Flush();
		RefreshProjectList();
	}
}

void dlgOpen::RefreshProjectList() {
	//Read project base path from config
	wxConfigBase *cfgEditor = wxConfigBase::Get();
	//Default value if not exists, like rm2k ApplicationPath but with Documents
	wxStandardPaths *Paths = new wxStandardPaths();
	ProjectBasePath = Paths->GetDocumentsDir();
	delete Paths;
	//Read from config or use default value
	ProjectBasePath = cfgEditor->Read(_T("/Editor/ProjectBasePath"), ProjectBasePath);
	tcPath->SetValue(ProjectBasePath);
	//Initialize project list control
	wxImageList *imageList = new wxImageList(16, 16);
	imageList->Add(wxArtProvider::GetBitmap(wxART_FOLDER));
	lcProject->ClearAll();
	//Show folder icon for first column. Assign manages imagelist destruction
	lcProject->AssignImageList(imageList, wxIMAGE_LIST_SMALL);
	//lcProject size in gui is set to 300, so 111 + 188 (=299) fits nicely
	lcProject->InsertColumn(0, _("Folder name"), wxLIST_FORMAT_LEFT, 111);
	lcProject->InsertColumn(1, _("Game title"), wxLIST_FORMAT_LEFT, 188);
	
	//Implementation of abstract wxDirTraverser to get subdirs, no recursive
	class wxDirTraverserDirs : public wxDirTraverser {
	public:
		wxDirTraverserDirs(wxArrayString& dirs) : m_dirs(dirs) {}
		//Don't remove these two methods because they are pure virtual
		virtual wxDirTraverseResult OnDir(const wxString& dirname) {
			m_dirs.Add(dirname);
			//This prevents subdirectories recursion
			return wxDIR_IGNORE;
		}
		//WXUNUSED macro works with pure virtual method parameters, too
		virtual wxDirTraverseResult OnFile(const wxString& WXUNUSED(dirname)) {
			//We only want dirs, no files to add, just continue
			return wxDIR_CONTINUE;
		}
	private:
		wxArrayString& m_dirs;
	};
	
	//Traverse directory list and fill array string dirlist with them
	wxArrayString dirlist;
	wxDirTraverserDirs traverser(dirlist);
	wxDir dir(ProjectBasePath);
	//Override wxDIR_DEFAULT because we don't want hidden dirs, like rm2k does
	dir.Traverse(traverser, wxEmptyString, wxDIR_DIRS);
	
	//Search for valid project directories, rm2k looks for RPG_RT.exe
	wxString filename;
	wxArrayString projectdirlist;
	bool isprojectdir;
	for (size_t i = 0; i < dirlist.GetCount(); i++) {
		isprojectdir = false;
		//Search RPG_RT.exe in our directory list
		wxDir currentdir(dirlist.Item(i));
		bool cont = currentdir.GetFirst(&filename, wxEmptyString, wxDIR_FILES);
		while (cont && !isprojectdir) {
			//Case insensitive comparison, rm2k is win32 and win32 fs are
			if (!wxStricmp(filename, _T("RPG_RT.exe"))) {
				isprojectdir = true;
				//Add path to the project list
				projectdirlist.Add(dirlist.Item(i));
			}
			cont = currentdir.GetNext(&filename);
		}
	}
	
	//Fill the list control with project folders
	wxFileName folder;
	wxString ininame;
	bool hasinifile;
	for (size_t i = 0; i < projectdirlist.GetCount(); i++) {
		hasinifile = false;
		//Get the folder name part of the path
		folder = projectdirlist.Item(i);
		folder.MakeRelativeTo(ProjectBasePath);
		//Fill first column with folder name
		lcProject->InsertItem(i, folder.GetName(), 0);
		//Check if RPG_RT.ini exists in current project dir
		wxDir currentprojectdir(projectdirlist.Item(i));
		bool cont = currentprojectdir.GetFirst(&ininame, wxEmptyString, wxDIR_FILES);
		while (cont && !hasinifile) {
			//Case insensitive comparison
			if (!wxStricmp(ininame, _T("RPG_RT.ini"))) {
				hasinifile = true;
				wxFileInputStream ini(projectdirlist.Item(i) + wxFileName::GetPathSeparator() + ininame);
				wxFileConfig *cfgProject = new wxFileConfig(ini);
				//Fill second column with game title, put Untitled if not exist
				lcProject->SetItem(i, 1, cfgProject->Read(_T("/RPG_RT/GameTitle"), _("Untitled")));
				delete cfgProject;
			}
			cont = currentprojectdir.GetNext(&ininame);
		}
		//If RPG_RT.ini is not found, put Untitled
		if (!hasinifile) {
			lcProject->SetItem(i, 1, _("Untitled"));
		}
	}
}
