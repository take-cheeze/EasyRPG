// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDRECOVER_H
#define DIALOGEVTCMDRECOVER_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdRecover: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdRecover::ids
    // end wxGlade

    DialogEvtCmdRecover(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdRecover::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdRecover::attributes
    wxStaticBox* szTarget_staticbox;
    wxRadioButton* rbtnTargetParty;
    wxRadioButton* rbtnTargetFixed;
    wxChoice* chTargetFixed;
    wxRadioButton* rbtnTargetVariable;
    wxTextCtrl* tcTargetVariable;
    wxButton* btnTargetVariable;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDRECOVER_H
