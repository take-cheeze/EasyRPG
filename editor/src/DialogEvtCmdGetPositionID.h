// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDGETPOSITIONID_H
#define DIALOGEVTCMDGETPOSITIONID_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdGetPositionID: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdGetPositionID::ids
    // end wxGlade

    DialogEvtCmdGetPositionID(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdGetPositionID::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdGetPositionID::attributes
    wxStaticBox* szStoreVariableID_staticbox;
    wxStaticBox* szPlace_staticbox;
    wxStaticBox* szPlaceVariable_staticbox;
    wxRadioButton* rbtnPlaceSpecify;
    wxTextCtrl* tcPlaceSpecify;
    wxButton* btnPlaceSpecify;
    wxRadioButton* rbtnPlaceVariable;
    wxStaticText* stPlaceVariableX;
    wxTextCtrl* tcPlaceVariableX;
    wxButton* btnPlaceVariableX;
    wxStaticText* stPlaceVariableY;
    wxTextCtrl* tcPlaceVariableY;
    wxButton* btnPlaceVariableY;
    wxTextCtrl* tcStoreVariableID;
    wxButton* btnStoreVariableID;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDGETPOSITIONID_H
