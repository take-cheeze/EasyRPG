// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDCHANGEVEHICLEPOSITION_H
#define DIALOGEVTCMDCHANGEVEHICLEPOSITION_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdChangeVehiclePosition: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdChangeVehiclePosition::ids
    // end wxGlade

    DialogEvtCmdChangeVehiclePosition(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdChangeVehiclePosition::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdChangeVehiclePosition::attributes
    wxStaticBox* szPosition_staticbox;
    wxStaticBox* szPositionVariable_staticbox;
    wxRadioBox* rbVehicle;
    wxRadioButton* rbtnPositionSpecify;
    wxTextCtrl* tcPositionSpecify;
    wxButton* btnPositionSpecify;
    wxRadioButton* rbtnPositionVariable;
    wxStaticText* stPositionVariableMapID;
    wxTextCtrl* tcPositionVariableMapID;
    wxButton* btnPositionVariableMapID;
    wxStaticText* stPositionVariableX;
    wxTextCtrl* tcPositionVariableX;
    wxButton* btnPositionVariableX;
    wxStaticText* stPositionVariableY;
    wxTextCtrl* tcPositionVariableY;
    wxButton* btnPositionVariableY;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDCHANGEVEHICLEPOSITION_H
