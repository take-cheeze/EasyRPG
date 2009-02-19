#include <wx/wx.h>
#include <wx/image.h>
#include "FrameEditor.h"

class AppEditor: public wxApp {
public:
    bool OnInit();
};

IMPLEMENT_APP(AppEditor)

bool AppEditor::OnInit()
{
    wxInitAllImageHandlers();
    FrameEditor* frmEditor = new FrameEditor();
    SetTopWindow(frmEditor);
    frmEditor->Show();
    return true;
}
