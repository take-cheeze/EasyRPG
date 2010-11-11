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

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGMATERIAL_H
#define DIALOGMATERIAL_H

class DialogMaterial: public wxDialog {
public:
    DialogMaterial(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    void set_properties();
    void do_layout();

protected:
    wxListBox* listFolders;
    wxListBox* listFiles;
    wxButton* btnImport;
    wxButton* btnExport;
    wxButton* btnDelete;
    wxRadioBox* rbFormat;
    wxButton* btnClose;
    wxButton* btnHelp;
};

#endif
