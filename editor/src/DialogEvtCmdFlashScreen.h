// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDFLASHSCREEN_H
#define DIALOGEVTCMDFLASHSCREEN_H

// begin wxGlade: ::dependencies
#include <wx/spinctrl.h>
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdFlashScreen: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdFlashScreen::ids
    // end wxGlade

    DialogEvtCmdFlashScreen(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdFlashScreen::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdFlashScreen::attributes
    wxStaticBox* szOptions_staticbox;
    wxStaticBox* szTime_staticbox;
    wxStaticBox* szColor_staticbox;
    wxStaticBox* szSample_staticbox;
    wxStaticBitmap* bmpSample;
    wxStaticText* stMin;
    wxStaticText* stMax;
    wxStaticText* stRed;
    wxSlider* slRed;
    wxSpinCtrl* spinRed;
    wxStaticText* stGreen;
    wxSlider* slGreen;
    wxSpinCtrl* spinGreen;
    wxStaticText* stBlue;
    wxSlider* slBlue;
    wxSpinCtrl* spinBlue;
    wxStaticText* stOpacity;
    wxSlider* slOpacity;
    wxSpinCtrl* spinOpacity;
    wxSpinCtrl* spinTime;
    wxStaticText* stTime;
    wxCheckBox* chbWait;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDFLASHSCREEN_H
