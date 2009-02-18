// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDPANORAMA_H
#define DIALOGEVTCMDPANORAMA_H

// begin wxGlade: ::dependencies
#include <wx/spinctrl.h>
#include <wx/statline.h>
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdPanorama: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdPanorama::ids
    // end wxGlade

    DialogEvtCmdPanorama(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdPanorama::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdPanorama::attributes
    wxStaticBox* szOptions_staticbox;
    wxStaticBox* szBackground_staticbox;
    wxStaticBitmap* bmpBackground;
    wxButton* btnBackground;
    wxCheckBox* btnHScroll;
    wxCheckBox* chbHScrollAuto;
    wxStaticText* stHScrollSpeed;
    wxSpinCtrl* spinHScrollSpeed;
    wxStaticLine* lineOptions;
    wxCheckBox* btnVScroll;
    wxCheckBox* chbVScrollAuto;
    wxStaticText* stVcrollSpeed;
    wxSpinCtrl* spinVScrollSpeed;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDPANORAMA_H