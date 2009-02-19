#ifndef FRAMEEDITOR_H
#define FRAMEEDITOR_H

#include <wx/splitter.h>
#include <wx/treectrl.h>

class FrameEditor: public wxFrame
{
public:
    FrameEditor();
private:
    void set_properties();
    void do_layout();
protected:
    wxMenuBar* frmEditorMenubar;
    wxStatusBar* frmEditorStatusbar;
    wxToolBar* frmEditorToolbar;
    wxScrolledWindow* pnEditorTileset;
    wxTreeCtrl* tcMapTree;
    wxPanel* pnEditorMapTree;
    wxSplitterWindow* swEditor;
    wxScrolledWindow* pnEditorMap;
};

#endif
