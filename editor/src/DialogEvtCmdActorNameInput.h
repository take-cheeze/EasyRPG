// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDACTORNAMEINPUT_H
#define DIALOGEVTCMDACTORNAMEINPUT_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdActorNameInput: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdActorNameInput::ids
    // end wxGlade

    DialogEvtCmdActorNameInput(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdActorNameInput::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdActorNameInput::attributes
    wxStaticBox* szOptions_staticbox;
    wxStaticBox* szActor_staticbox;
    wxChoice* chActor;
    wxRadioBox* rbMode;
    wxCheckBox* chbShowName;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDACTORNAMEINPUT_H