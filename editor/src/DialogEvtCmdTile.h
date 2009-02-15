// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDTILE_H
#define DIALOGEVTCMDTILE_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdTile: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdTile::ids
    // end wxGlade

    DialogEvtCmdTile(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdTile::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdTile::attributes
    wxStaticBox* szReplacer_staticbox;
    wxStaticBox* szOriginal_staticbox;
    wxRadioBox* rbOptions;
    wxStaticBitmap* bmpOriginal;
    wxButton* btnOriginal;
    wxStaticBitmap* bmpReplacer;
    wxButton* btnReplacer;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDTILE_H
