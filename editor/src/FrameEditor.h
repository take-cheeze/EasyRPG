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
    void database_click(wxCommandEvent &WXUNUSED(event));
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

enum
{
    ID_UPPER_LAYER,
    ID_LOWER_LAYER,
    ID_EVENTS,
    ID_ZOOM_12,
    ID_ZOOM_14,
    ID_ZOOM_18,
    ID_DATABASE,
    ID_MATERIAL_MANAGER,
    ID_FULL_SCREEN,
    ID_SHOW_TITLE
};

#endif
