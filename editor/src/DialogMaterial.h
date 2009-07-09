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

#endif // DIALOGMATERIAL_H
