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

#include "DialogMaterial.h"

DialogMaterial::DialogMaterial(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long WXUNUSED(style)):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX)
{
    const wxString listFolders_choices[] = {
        _("Backdrop"),
        _("Battle"),
        _("CharSet"),
        _("ChipSet"),
        _("FaceSet"),
        _("GameOver"),
        _("Monster"),
        _("Movie"),
        _("Music"),
        _("Panorama"),
        _("Picture"),
        _("Sound"),
        _("System"),
        _("Title")
    };
    listFolders = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 14, listFolders_choices, 0);
    const wxString *listFiles_choices = NULL;
    listFiles = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, listFiles_choices, 0);
    btnImport = new wxButton(this, wxID_ANY, _("Import..."));
    btnExport = new wxButton(this, wxID_ANY, _("Export..."));
    btnDelete = new wxButton(this, wxID_ANY, _("Delete..."));
    const wxString rbFormat_choices[] = {
        _("PNG"),
        _("XYZ")
    };
    rbFormat = new wxRadioBox(this, wxID_ANY, _("Import/export as"), wxDefaultPosition, wxDefaultSize, 2, rbFormat_choices, 1, wxRA_SPECIFY_COLS);
    btnClose = new wxButton(this, wxID_CLOSE, wxEmptyString);
    btnHelp = new wxButton(this, wxID_HELP, wxEmptyString);

    set_properties();
    do_layout();
}

void DialogMaterial::set_properties()
{
    SetTitle(_("Material Manager"));
    listFolders->SetSelection(0);
    rbFormat->SetSelection(0);
    btnClose->SetDefault();
    SetEscapeId(wxID_CLOSE);
}

void DialogMaterial::do_layout()
{
    wxBoxSizer* szMaterial = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szBottom = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szTop = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szRight = new wxBoxSizer(wxVERTICAL);
    szTop->Add(listFolders, 1, wxALL|wxEXPAND, 1);
    szTop->Add(listFiles, 1, wxALL|wxEXPAND, 1);
    szRight->Add(btnImport, 0, wxALL|wxEXPAND, 1);
    szRight->Add(btnExport, 0, wxALL|wxEXPAND, 1);
    szRight->Add(btnDelete, 0, wxALL|wxEXPAND, 1);
    szRight->Add(0, 0, 1, wxEXPAND, 0);
    szRight->Add(rbFormat, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1);
    szTop->Add(szRight, 0, wxEXPAND, 0);
    szMaterial->Add(szTop, 1, wxEXPAND, 0);
    szBottom->Add(btnClose, 0, wxALL, 1);
    szBottom->Add(btnHelp, 0, wxALL, 1);
    szMaterial->Add(szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3);
    SetSizer(szMaterial);
    szMaterial->Fit(this);
    Layout();
}
