// -*- C++ -*- generated by wxGlade 0.6.3 on Sun Feb 15 04:53:05 2009 from "/home/fdelapena/programacion/easyrpg/trunk/editor/wxglade/easyrpg.wxg"

#include <wx/wx.h>
#include <wx/image.h>

#ifndef DIALOGEVTCMDACTORFACEGRAPHIC_H
#define DIALOGEVTCMDACTORFACEGRAPHIC_H

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode

// end wxGlade


class DialogEvtCmdActorFaceGraphic: public wxDialog {
public:
    // begin wxGlade: DialogEvtCmdActorFaceGraphic::ids
    // end wxGlade

    DialogEvtCmdActorFaceGraphic(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: DialogEvtCmdActorFaceGraphic::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: DialogEvtCmdActorFaceGraphic::attributes
    wxStaticBox* szFaceGraphic_staticbox;
    wxStaticBox* szActor_staticbox;
    wxChoice* chActor;
    wxStaticBitmap* bmpFaceGraphic;
    wxButton* btnFaceGraphic;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxButton* btnHelp;
    // end wxGlade
}; // wxGlade: end class


#endif // DIALOGEVTCMDACTORFACEGRAPHIC_H
