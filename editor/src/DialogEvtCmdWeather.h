// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDWEATHER_H
#define DIALOGEVTCMDWEATHER_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdWeather: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdWeather::ids
    // end wxGlade

    DialogEvtCmdWeather(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdWeather::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdWeather::attributes
    wxRadioBox* rbEffect;
    wxRadioBox* rbIntensity;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDWEATHER_H
