// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDINN_H
#define DIALOGEVTCMDINN_H

// begin wxGlade: ::dependencies
#include <wx/spinctrl.h>
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdInn: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdInn::ids
    // end wxGlade

    DialogEvtCmdInn(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdInn::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdInn::attributes
    wxStaticBox* SzOptions_staticbox;
    wxStaticBox* szPrice_staticbox;
    wxStaticBox* szMessage_staticbox;
    wxChoice* chMessage;
    wxSpinCtrl* spin_ctrl_1;
    wxCheckBox* ChkCondition;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDINN_H