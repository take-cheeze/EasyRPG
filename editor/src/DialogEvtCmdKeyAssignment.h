// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDKEYASSIGNMENT_H
#define DIALOGEVTCMDKEYASSIGNMENT_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdKeyAssignment: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdKeyAssignment::ids
    // end wxGlade

    DialogEvtCmdKeyAssignment(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdKeyAssignment::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdKeyAssignment::attributes
    wxStaticBox* szKeys_staticbox;
    wxStaticBox* szOptions_staticbox;
    wxStaticBox* szVariable_staticbox;
    wxTextCtrl* tcVariable;
    wxButton* btnVariable;
    wxCheckBox* chbWait;
    wxCheckBox* chbDown;
    wxCheckBox* chbDecision;
    wxCheckBox* chbLeft;
    wxCheckBox* chbCancel;
    wxCheckBox* chbRight;
    wxCheckBox* chbShift;
    wxCheckBox* chbUp;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDKEYASSIGNMENT_H
