// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDTELEPORTPERMISSIONS_H
#define DIALOGEVTCMDTELEPORTPERMISSIONS_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdTeleportPermissions: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdTeleportPermissions::ids
    // end wxGlade

    DialogEvtCmdTeleportPermissions(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdTeleportPermissions::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdTeleportPermissions::attributes
    wxRadioBox* rbOperation;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDTELEPORTPERMISSIONS_H
