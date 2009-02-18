// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDPARTY_H
#define DIALOGEVTCMDPARTY_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdParty: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdParty::ids
    // end wxGlade

    DialogEvtCmdParty(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdParty::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdParty::attributes
    wxStaticBox* szActor_staticbox;
    wxRadioBox* rbOperation;
    wxRadioButton* rbtnActorFixed;
    wxChoice* chActorFixed;
    wxRadioButton* rbtnActorVariable;
    wxTextCtrl* tcActorVariable;
    wxButton* btnActorVariable;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDPARTY_H