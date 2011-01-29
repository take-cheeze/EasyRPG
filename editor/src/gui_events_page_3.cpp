///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_events_page_3.h"

///////////////////////////////////////////////////////////////////////////

dlgEvtCmdPlayMusic_Base::dlgEvtCmdPlayMusic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szPlayMusic;
	szPlayMusic = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	listMusic = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 150,-1 ), 0, NULL, 0 ); 
	szTop->Add( listMusic, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szFadeIn;
	szFadeIn = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Fade in") ), wxVERTICAL );
	
	slFadeIn = new wxSlider( this, wxID_ANY, 0, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szFadeIn->Add( slFadeIn, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szFadeInBottom;
	szFadeInBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stFadeInNone = new wxStaticText( this, wxID_ANY, _("None"), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeInNone->Wrap( -1 );
	szFadeInBottom->Add( stFadeInNone, 0, wxRIGHT, 1 );
	
	
	szFadeInBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stFadeIn5Seconds = new wxStaticText( this, wxID_ANY, _("5 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeIn5Seconds->Wrap( -1 );
	szFadeInBottom->Add( stFadeIn5Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szFadeInBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stFadeIn10Seconds = new wxStaticText( this, wxID_ANY, _("10 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeIn10Seconds->Wrap( -1 );
	szFadeInBottom->Add( stFadeIn10Seconds, 0, wxLEFT, 1 );
	
	szFadeIn->Add( szFadeInBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szFadeIn, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szVolume;
	szVolume = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Volume") ), wxVERTICAL );
	
	slVolume = new wxSlider( this, wxID_ANY, 10, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szVolume->Add( slVolume, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szVolumeBottom;
	szVolumeBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stVolume0Percent = new wxStaticText( this, wxID_ANY, _("0%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume0Percent->Wrap( -1 );
	szVolumeBottom->Add( stVolume0Percent, 0, wxRIGHT, 1 );
	
	
	szVolumeBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVolume50Percent = new wxStaticText( this, wxID_ANY, _("50%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume50Percent->Wrap( -1 );
	szVolumeBottom->Add( stVolume50Percent, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szVolumeBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVolume100Percent = new wxStaticText( this, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume100Percent->Wrap( -1 );
	szVolumeBottom->Add( stVolume100Percent, 0, wxLEFT, 1 );
	
	szVolume->Add( szVolumeBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szVolume, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTempo;
	szTempo = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tempo") ), wxVERTICAL );
	
	slTempo = new wxSlider( this, wxID_ANY, 5, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szTempo->Add( slTempo, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szTempoBottom;
	szTempoBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stTempo50Percent = new wxStaticText( this, wxID_ANY, _("50%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo50Percent->Wrap( -1 );
	szTempoBottom->Add( stTempo50Percent, 0, wxRIGHT, 1 );
	
	
	szTempoBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTempo100Percent = new wxStaticText( this, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo100Percent->Wrap( -1 );
	szTempoBottom->Add( stTempo100Percent, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szTempoBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTempo150Percent = new wxStaticText( this, wxID_ANY, _("150%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo150Percent->Wrap( -1 );
	szTempoBottom->Add( stTempo150Percent, 0, wxLEFT, 1 );
	
	szTempo->Add( szTempoBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szTempo, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szBalance;
	szBalance = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Balance") ), wxVERTICAL );
	
	slBalance = new wxSlider( this, wxID_ANY, 0, -5,  5, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szBalance->Add( slBalance, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBalanceBottom;
	szBalanceBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stBalanceLeft = new wxStaticText( this, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceLeft->Wrap( -1 );
	szBalanceBottom->Add( stBalanceLeft, 0, wxRIGHT, 1 );
	
	
	szBalanceBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stBalanceCenter = new wxStaticText( this, wxID_ANY, _("Center"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceCenter->Wrap( -1 );
	szBalanceBottom->Add( stBalanceCenter, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szBalanceBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stBalanceRight = new wxStaticText( this, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceRight->Wrap( -1 );
	szBalanceBottom->Add( stBalanceRight, 0, wxLEFT, 1 );
	
	szBalance->Add( szBalanceBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szBalance, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szRightBottom;
	szRightBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnPlay = new wxButton( this, wxID_ANY, _("Play"), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlay->SetDefault(); 
	szRightBottom->Add( btnPlay, 0, wxALL, 1 );
	
	btnStop = new wxButton( this, wxID_ANY, _("Stop"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStop->SetDefault(); 
	szRightBottom->Add( btnStop, 0, wxALL, 1 );
	
	szRight->Add( szRightBottom, 0, wxEXPAND, 0 );
	
	szTop->Add( szRight, 0, wxEXPAND, 0 );
	
	szPlayMusic->Add( szTop, 1, wxEXPAND, 0 );
	
	linePlayMusic = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	szPlayMusic->Add( linePlayMusic, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szPlayMusic->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szPlayMusic );
	this->Layout();
	szPlayMusic->Fit( this );
}

dlgEvtCmdPlayMusic_Base::~dlgEvtCmdPlayMusic_Base()
{
}

dlgEvtCmdFadeMusic_Base::dlgEvtCmdFadeMusic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szFadeMusic;
	szFadeMusic = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szTime;
	szTime = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Fade time") ), wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	slTime = new wxSlider( this, wxID_ANY, 5, 0,  20, wxDefaultPosition, wxSize( 200, -1 ), wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szLeft->Add( slTime, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szLeftBottom;
	szLeftBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stTime0Seconds = new wxStaticText( this, wxID_ANY, _("0 sec"), wxDefaultPosition, wxDefaultSize, 0 );
	stTime0Seconds->Wrap( -1 );
	szLeftBottom->Add( stTime0Seconds, 0, wxRIGHT, 1 );
	
	
	szLeftBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTime5Seconds = new wxStaticText( this, wxID_ANY, _("5 sec"), wxDefaultPosition, wxDefaultSize, 0 );
	stTime5Seconds->Wrap( -1 );
	szLeftBottom->Add( stTime5Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szLeftBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTime10Seconds = new wxStaticText( this, wxID_ANY, _("10 sec"), wxDefaultPosition, wxDefaultSize, 0 );
	stTime10Seconds->Wrap( -1 );
	szLeftBottom->Add( stTime10Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szLeftBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTime15Seconds = new wxStaticText( this, wxID_ANY, _("15 sec"), wxDefaultPosition, wxDefaultSize, 0 );
	stTime15Seconds->Wrap( -1 );
	szLeftBottom->Add( stTime15Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szLeftBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTime20Seconds = new wxStaticText( this, wxID_ANY, _("20 sec"), wxDefaultPosition, wxDefaultSize, 0 );
	stTime20Seconds->Wrap( -1 );
	szLeftBottom->Add( stTime20Seconds, 0, wxLEFT, 1 );
	
	szLeft->Add( szLeftBottom, 0, wxEXPAND, 0 );
	
	szTime->Add( szLeft, 1, wxEXPAND, 0 );
	
	btnFade = new wxButton( this, wxID_ANY, _("Fade"), wxDefaultPosition, wxDefaultSize, 0 );
	btnFade->SetDefault(); 
	szTime->Add( btnFade, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnPlay = new wxButton( this, wxID_ANY, _("Play"), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlay->SetDefault(); 
	szTime->Add( btnPlay, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szFadeMusic->Add( szTime, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szFadeMusic->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szFadeMusic );
	this->Layout();
	szFadeMusic->Fit( this );
}

dlgEvtCmdFadeMusic_Base::~dlgEvtCmdFadeMusic_Base()
{
}

dlgEvtCmdPlaySound_Base::dlgEvtCmdPlaySound_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szPlaySound;
	szPlaySound = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	listSound = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 150,-1 ), 0, NULL, 0 ); 
	szTop->Add( listSound, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szFadeIn;
	szFadeIn = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Fade in") ), wxVERTICAL );
	
	slFadeIn = new wxSlider( this, wxID_ANY, 0, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szFadeIn->Add( slFadeIn, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szFadeInBottom;
	szFadeInBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stFadeInNone = new wxStaticText( this, wxID_ANY, _("None"), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeInNone->Wrap( -1 );
	szFadeInBottom->Add( stFadeInNone, 0, wxRIGHT, 1 );
	
	
	szFadeInBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stFadeIn5Seconds = new wxStaticText( this, wxID_ANY, _("5 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeIn5Seconds->Wrap( -1 );
	szFadeInBottom->Add( stFadeIn5Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szFadeInBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stFadeIn10Seconds = new wxStaticText( this, wxID_ANY, _("10 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeIn10Seconds->Wrap( -1 );
	szFadeInBottom->Add( stFadeIn10Seconds, 0, wxLEFT, 1 );
	
	szFadeIn->Add( szFadeInBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szFadeIn, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szVolume;
	szVolume = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Volume") ), wxVERTICAL );
	
	slVolume = new wxSlider( this, wxID_ANY, 10, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szVolume->Add( slVolume, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szVolumeBottom;
	szVolumeBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stVolume0Percent = new wxStaticText( this, wxID_ANY, _("0%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume0Percent->Wrap( -1 );
	szVolumeBottom->Add( stVolume0Percent, 0, wxRIGHT, 1 );
	
	
	szVolumeBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVolume50Percent = new wxStaticText( this, wxID_ANY, _("50%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume50Percent->Wrap( -1 );
	szVolumeBottom->Add( stVolume50Percent, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szVolumeBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVolume100Percent = new wxStaticText( this, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume100Percent->Wrap( -1 );
	szVolumeBottom->Add( stVolume100Percent, 0, wxLEFT, 1 );
	
	szVolume->Add( szVolumeBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szVolume, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szTempo;
	szTempo = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tempo") ), wxVERTICAL );
	
	slTempo = new wxSlider( this, wxID_ANY, 5, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szTempo->Add( slTempo, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szTempoBottom;
	szTempoBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stTempo50Percent = new wxStaticText( this, wxID_ANY, _("50%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo50Percent->Wrap( -1 );
	szTempoBottom->Add( stTempo50Percent, 0, wxRIGHT, 1 );
	
	
	szTempoBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTempo100Percent = new wxStaticText( this, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo100Percent->Wrap( -1 );
	szTempoBottom->Add( stTempo100Percent, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szTempoBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTempo150Percent = new wxStaticText( this, wxID_ANY, _("150%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo150Percent->Wrap( -1 );
	szTempoBottom->Add( stTempo150Percent, 0, wxLEFT, 1 );
	
	szTempo->Add( szTempoBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szTempo, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szBalance;
	szBalance = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Balance") ), wxVERTICAL );
	
	slBalance = new wxSlider( this, wxID_ANY, 0, -5,  5, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	szBalance->Add( slBalance, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBalanceBottom;
	szBalanceBottom = new wxBoxSizer( wxHORIZONTAL );
	
	stBalanceLeft = new wxStaticText( this, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceLeft->Wrap( -1 );
	szBalanceBottom->Add( stBalanceLeft, 0, wxRIGHT, 1 );
	
	
	szBalanceBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stBalanceCenter = new wxStaticText( this, wxID_ANY, _("Center"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceCenter->Wrap( -1 );
	szBalanceBottom->Add( stBalanceCenter, 0, wxLEFT|wxRIGHT, 1 );
	
	
	szBalanceBottom->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stBalanceRight = new wxStaticText( this, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceRight->Wrap( -1 );
	szBalanceBottom->Add( stBalanceRight, 0, wxLEFT, 1 );
	
	szBalance->Add( szBalanceBottom, 0, wxEXPAND, 0 );
	
	szRight->Add( szBalance, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szRightBottom;
	szRightBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnPlay = new wxButton( this, wxID_ANY, _("Play"), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlay->SetDefault(); 
	szRightBottom->Add( btnPlay, 0, wxALL, 1 );
	
	btnStop = new wxButton( this, wxID_ANY, _("Stop"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStop->SetDefault(); 
	szRightBottom->Add( btnStop, 0, wxALL, 1 );
	
	szRight->Add( szRightBottom, 0, wxEXPAND, 0 );
	
	szTop->Add( szRight, 0, wxEXPAND, 0 );
	
	szPlaySound->Add( szTop, 1, wxEXPAND, 0 );
	
	linePlayMusic = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	szPlaySound->Add( linePlayMusic, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szPlaySound->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szPlaySound );
	this->Layout();
	szPlaySound->Fit( this );
}

dlgEvtCmdPlaySound_Base::~dlgEvtCmdPlaySound_Base()
{
}

dlgEvtCmdPlayVideo_Base::dlgEvtCmdPlayVideo_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szPlayVideo;
	szPlayVideo = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szFile;
	szFile = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Video file") ), wxHORIZONTAL );
	
	stVideo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szFile->Add( stVideo, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVideo = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVideo->SetDefault(); 
	szFile->Add( btnVideo, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTop->Add( szFile, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSize;
	szSize = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Size in window") ), wxHORIZONTAL );
	
	spinSizeX = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 320, 0 );
	szSize->Add( spinSizeX, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stSize = new wxStaticText( this, wxID_ANY, _("X"), wxDefaultPosition, wxDefaultSize, 0 );
	stSize->Wrap( -1 );
	szSize->Add( stSize, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinSizeY = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 240, 0 );
	szSize->Add( spinSizeY, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szTop->Add( szSize, 0, wxEXPAND, 0 );
	
	szPlayVideo->Add( szTop, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szPosition;
	szPosition = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Move to position (coordinates)") ), wxVERTICAL );
	
	wxFlexGridSizer* szPosition2;
	szPosition2 = new wxFlexGridSizer( 4, 3, 2, 2 );
	szPosition2->AddGrowableCol( 2 );
	szPosition2->SetFlexibleDirection( wxBOTH );
	szPosition2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSpecify->SetValue( true ); 
	szPosition2->Add( rbtnSpecify, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSpecifyX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	szSpecifyX->Wrap( -1 );
	szPosition2->Add( szSpecifyX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyX = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 320, 0 );
	szPosition2->Add( spinSpecifyX, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szPosition2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stSpecifyY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpecifyY->Wrap( -1 );
	szPosition2->Add( stSpecifyY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyY = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 240, 0 );
	szPosition2->Add( spinSpecifyY, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szPosition2->Add( rbtnVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	szPosition2->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableX;
	szVariableX = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableX->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	szVariableX->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPosition2->Add( szVariableX, 1, wxEXPAND, 0 );
	
	
	szPosition2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	szPosition2->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableY;
	szVariableY = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableY->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	szVariableY->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szPosition2->Add( szVariableY, 1, wxEXPAND, 0 );
	
	szPosition->Add( szPosition2, 1, wxBOTTOM|wxEXPAND, 1 );
	
	szPlayVideo->Add( szPosition, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szPlayVideo->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szPlayVideo );
	this->Layout();
	szPlayVideo->Fit( this );
}

dlgEvtCmdPlayVideo_Base::~dlgEvtCmdPlayVideo_Base()
{
}

dlgEvtCmdKeyAssignment_Base::dlgEvtCmdKeyAssignment_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szKeyAssignment;
	szKeyAssignment = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szLeft;
	szLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szVariable;
	szVariable = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Store value in variable") ), wxHORIZONTAL );
	
	tcVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70, -1 ), 0 );
	szVariable->Add( tcVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( 25, -1 ), wxBU_EXACTFIT );
	btnVariable->SetDefault(); 
	szVariable->Add( btnVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szLeft->Add( szVariable, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait for key press"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	szOptions->Add( chbWait, 0, 0, 0 );
	
	szLeft->Add( szOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szTop->Add( szLeft, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* szKeys;
	szKeys = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Keys to assign") ), wxHORIZONTAL );
	
	wxGridSizer* szKeys2;
	szKeys2 = new wxGridSizer( 4, 2, 2, 2 );
	
	chbDown = new wxCheckBox( this, wxID_ANY, _("Down (1)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbDown->SetValue(true); 
	szKeys2->Add( chbDown, 0, 0, 0 );
	
	chbDecision = new wxCheckBox( this, wxID_ANY, _("Decision key (5)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbDecision->SetValue(true); 
	szKeys2->Add( chbDecision, 0, 0, 0 );
	
	chbLeft = new wxCheckBox( this, wxID_ANY, _("Left (2)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbLeft->SetValue(true); 
	szKeys2->Add( chbLeft, 0, 0, 0 );
	
	chbCancel = new wxCheckBox( this, wxID_ANY, _("Cancel key (6)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbCancel->SetValue(true); 
	szKeys2->Add( chbCancel, 0, 0, 0 );
	
	chbRight = new wxCheckBox( this, wxID_ANY, _("Right (3)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbRight->SetValue(true); 
	szKeys2->Add( chbRight, 0, 0, 0 );
	
	chbShift = new wxCheckBox( this, wxID_ANY, _("Shift key (7)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbShift->SetValue(true); 
	szKeys2->Add( chbShift, 0, 0, 0 );
	
	chbUp = new wxCheckBox( this, wxID_ANY, _("Up (4)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbUp->SetValue(true); 
	szKeys2->Add( chbUp, 0, 0, 0 );
	
	
	szKeys2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szKeys->Add( szKeys2, 1, 0, 0 );
	
	szTop->Add( szKeys, 0, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	szKeyAssignment->Add( szTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szKeyAssignment->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szKeyAssignment );
	this->Layout();
	szKeyAssignment->Fit( this );
}

dlgEvtCmdKeyAssignment_Base::~dlgEvtCmdKeyAssignment_Base()
{
}

dlgEvtCmdTileset_Base::dlgEvtCmdTileset_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szTileset;
	szTileset = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szChipSet;
	szChipSet = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("ChipSet") ), wxHORIZONTAL );
	
	wxArrayString chChipSetChoices;
	chChipSet = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chChipSetChoices, 0 );
	chChipSet->SetSelection( 0 );
	szChipSet->Add( chChipSet, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTileset->Add( szChipSet, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szTileset->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szTileset );
	this->Layout();
	szTileset->Fit( this );
}

dlgEvtCmdTileset_Base::~dlgEvtCmdTileset_Base()
{
}

dlgEvtCmdPanorama_Base::dlgEvtCmdPanorama_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szPanorama;
	szPanorama = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szTop;
	szTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szBackground;
	szBackground = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Background") ), wxVERTICAL );
	
	bmpBackground = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 120 ), wxSUNKEN_BORDER );
	szBackground->Add( bmpBackground, 0, wxBOTTOM, 1 );
	
	btnBackground = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnBackground->SetDefault(); 
	szBackground->Add( btnBackground, 0, wxTOP|wxALIGN_RIGHT, 1 );
	
	szTop->Add( szBackground, 0, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );
	
	
	szOptions->Add( 0,  0, 1, wxEXPAND, 0 );
	
	btnHScroll = new wxCheckBox( this, wxID_ANY, _("Horizontal scroll"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHScroll->SetValue(true); 
	szOptions->Add( btnHScroll, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szHScrollAuto;
	szHScrollAuto = new wxBoxSizer( wxHORIZONTAL );
	
	
	szHScrollAuto->Add( 15,  15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbHScrollAuto = new wxCheckBox( this, wxID_ANY, _("Automatic"), wxDefaultPosition, wxDefaultSize, 0 );
	chbHScrollAuto->SetValue(true); 
	szHScrollAuto->Add( chbHScrollAuto, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szOptions->Add( szHScrollAuto, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szHScrollSpeed;
	szHScrollSpeed = new wxBoxSizer( wxHORIZONTAL );
	
	stHScrollSpeed = new wxStaticText( this, wxID_ANY, _("Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	stHScrollSpeed->Wrap( -1 );
	szHScrollSpeed->Add( stHScrollSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinHScrollSpeed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 0 );
	szHScrollSpeed->Add( spinHScrollSpeed, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szOptions->Add( szHScrollSpeed, 0, wxEXPAND, 0 );
	
	
	szOptions->Add( 0,  0, 1, wxEXPAND, 0 );
	
	lineOptions = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	szOptions->Add( lineOptions, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	
	szOptions->Add( 0,  0, 1, wxEXPAND, 0 );
	
	btnVScroll = new wxCheckBox( this, wxID_ANY, _("Vertical scroll"), wxDefaultPosition, wxDefaultSize, 0 );
	btnVScroll->SetValue(true); 
	szOptions->Add( btnVScroll, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szVScrollAuto;
	szVScrollAuto = new wxBoxSizer( wxHORIZONTAL );
	
	
	szVScrollAuto->Add( 15,  15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbVScrollAuto = new wxCheckBox( this, wxID_ANY, _("Automatic"), wxDefaultPosition, wxDefaultSize, 0 );
	chbVScrollAuto->SetValue(true); 
	szVScrollAuto->Add( chbVScrollAuto, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szOptions->Add( szVScrollAuto, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szVScrollSpeed;
	szVScrollSpeed = new wxBoxSizer( wxHORIZONTAL );
	
	stVScrollSpeed = new wxStaticText( this, wxID_ANY, _("Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	stVScrollSpeed->Wrap( -1 );
	szVScrollSpeed->Add( stVScrollSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinVScrollSpeed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 0 );
	szVScrollSpeed->Add( spinVScrollSpeed, 1, wxLEFT|wxTOP, 1 );
	
	szOptions->Add( szVScrollSpeed, 0, wxEXPAND, 0 );
	
	
	szOptions->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szTop->Add( szOptions, 1, wxLEFT|wxEXPAND, 1 );
	
	szPanorama->Add( szTop, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szPanorama->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szPanorama );
	this->Layout();
	szPanorama->Fit( this );
}

dlgEvtCmdPanorama_Base::~dlgEvtCmdPanorama_Base()
{
}

dlgEvtCmdEncounterRate_Base::dlgEvtCmdEncounterRate_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szEncounterRate;
	szEncounterRate = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szSteps;
	szSteps = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Number of steps") ), wxHORIZONTAL );
	
	spinSteps = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 25 );
	szSteps->Add( spinSteps, 1, wxALIGN_CENTER_VERTICAL, 1 );
	
	szEncounterRate->Add( szSteps, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szEncounterRate->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szEncounterRate );
	this->Layout();
	szEncounterRate->Fit( this );
}

dlgEvtCmdEncounterRate_Base::~dlgEvtCmdEncounterRate_Base()
{
}

dlgEvtCmdTile_Base::dlgEvtCmdTile_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szTile;
	szTile = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOptionsChoices[] = { _("Lower"), _("Upper") };
	int rbOptionsNChoices = sizeof( rbOptionsChoices ) / sizeof( wxString );
	rbOptions = new wxRadioBox( this, wxID_ANY, _("Tile type"), wxDefaultPosition, wxDefaultSize, rbOptionsNChoices, rbOptionsChoices, 1, wxRA_SPECIFY_ROWS );
	rbOptions->SetSelection( 0 );
	szTile->Add( rbOptions, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* szMiddle;
	szMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szOriginal;
	szOriginal = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tile to replace") ), wxHORIZONTAL );
	
	bmpOriginal = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 32, 32 ), wxSUNKEN_BORDER );
	szOriginal->Add( bmpOriginal, 0, wxRIGHT, 1 );
	
	btnOriginal = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOriginal->SetDefault(); 
	szOriginal->Add( btnOriginal, 0, wxLEFT, 1 );
	
	szMiddle->Add( szOriginal, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szReplacer;
	szReplacer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Replace with") ), wxHORIZONTAL );
	
	bmpReplacer = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 32, 32 ), wxSUNKEN_BORDER );
	szReplacer->Add( bmpReplacer, 0, wxRIGHT, 1 );
	
	btnReplacer = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnReplacer->SetDefault(); 
	szReplacer->Add( btnReplacer, 0, wxLEFT, 1 );
	
	szMiddle->Add( szReplacer, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szTile->Add( szMiddle, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szTile->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szTile );
	this->Layout();
	szTile->Fit( this );
}

dlgEvtCmdTile_Base::~dlgEvtCmdTile_Base()
{
}

dlgEvtCmdTeleportPlace_Base::dlgEvtCmdTeleportPlace_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szTeleportPlace;
	szTeleportPlace = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Add teleport"), _("Remove teleport") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szTeleportPlace->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szPosition;
	szPosition = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Teleport position") ), wxHORIZONTAL );
	
	tcPosition = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125, -1 ), 0 );
	szPosition->Add( tcPosition, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPosition = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPosition->SetDefault(); 
	szPosition->Add( btnPosition, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTeleportPlace->Add( szPosition, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSwitch;
	szSwitch = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enable switch after teleporting") ), wxHORIZONTAL );
	
	chbSwitch = new wxCheckBox( this, wxID_ANY, _("Enable"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSwitch->SetValue(true); 
	szSwitch->Add( chbSwitch, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcSwitch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125, -1 ), 0 );
	szSwitch->Add( tcSwitch, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSwitch = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitch->SetDefault(); 
	szSwitch->Add( btnSwitch, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szTeleportPlace->Add( szSwitch, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szTeleportPlace->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szTeleportPlace );
	this->Layout();
	szTeleportPlace->Fit( this );
}

dlgEvtCmdTeleportPlace_Base::~dlgEvtCmdTeleportPlace_Base()
{
}

dlgEvtCmdTeleportPermissions_Base::dlgEvtCmdTeleportPermissions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szTeleportPermissions;
	szTeleportPermissions = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Forbid teleporting"), _("Alllow teleporting") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szTeleportPermissions->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szTeleportPermissions->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szTeleportPermissions );
	this->Layout();
	szTeleportPermissions->Fit( this );
}

dlgEvtCmdTeleportPermissions_Base::~dlgEvtCmdTeleportPermissions_Base()
{
}

dlgEvtCmdEscapePlace_Base::dlgEvtCmdEscapePlace_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szEscapePlace;
	szEscapePlace = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szPosition;
	szPosition = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Escape position") ), wxHORIZONTAL );
	
	tcPosition = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125, -1 ), 0 );
	szPosition->Add( tcPosition, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPosition = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPosition->SetDefault(); 
	szPosition->Add( btnPosition, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szEscapePlace->Add( szPosition, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szSwitch;
	szSwitch = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enable switch after escape") ), wxHORIZONTAL );
	
	chbSwitch = new wxCheckBox( this, wxID_ANY, _("Enable"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSwitch->SetValue(true); 
	szSwitch->Add( chbSwitch, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcSwitch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125, -1 ), 0 );
	szSwitch->Add( tcSwitch, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSwitch = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitch->SetDefault(); 
	szSwitch->Add( btnSwitch, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szEscapePlace->Add( szSwitch, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szEscapePlace->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szEscapePlace );
	this->Layout();
	szEscapePlace->Fit( this );
}

dlgEvtCmdEscapePlace_Base::~dlgEvtCmdEscapePlace_Base()
{
}

dlgEvtCmdEscapePermissions_Base::dlgEvtCmdEscapePermissions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szEscapePermissions;
	szEscapePermissions = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Forbid escape"), _("Alllow escape") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szEscapePermissions->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szEscapePermissions->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szEscapePermissions );
	this->Layout();
	szEscapePermissions->Fit( this );
}

dlgEvtCmdEscapePermissions_Base::~dlgEvtCmdEscapePermissions_Base()
{
}

dlgEvtCmdSavePermissions_Base::dlgEvtCmdSavePermissions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szSavePermissions;
	szSavePermissions = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Forbid saving"), _("Alllow saving") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szSavePermissions->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szSavePermissions->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szSavePermissions );
	this->Layout();
	szSavePermissions->Fit( this );
}

dlgEvtCmdSavePermissions_Base::~dlgEvtCmdSavePermissions_Base()
{
}

dlgEvtCmdSystemMenuPermissions_Base::dlgEvtCmdSystemMenuPermissions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szSystemMenuPermissions;
	szSystemMenuPermissions = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Forbid menu"), _("Alllow menu") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	szSystemMenuPermissions->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szSystemMenuPermissions->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szSystemMenuPermissions );
	this->Layout();
	szSystemMenuPermissions->Fit( this );
}

dlgEvtCmdSystemMenuPermissions_Base::~dlgEvtCmdSystemMenuPermissions_Base()
{
}

dlgEvtCmdConditions_Base::dlgEvtCmdConditions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szConditions;
	szConditions = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szConditionsTop;
	szConditionsTop = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Conditions") ), wxHORIZONTAL );
	
	nbConditions = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	pnConditions1 = new wxPanel( nbConditions, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* szConditions1;
	szConditions1 = new wxFlexGridSizer( 6, 2, 2, 2 );
	szConditions1->AddGrowableCol( 1 );
	szConditions1->SetFlexibleDirection( wxBOTH );
	szConditions1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnSwitch = new wxRadioButton( pnConditions1, wxID_ANY, _("Switch"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSwitch->SetValue( true ); 
	szConditions1->Add( rbtnSwitch, 0, wxLEFT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szSwitch;
	szSwitch = new wxBoxSizer( wxHORIZONTAL );
	
	tcSwitch = new wxTextCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100, -1 ), 0 );
	szSwitch->Add( tcSwitch, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSwitch = new wxButton( pnConditions1, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitch->SetDefault(); 
	szSwitch->Add( btnSwitch, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stSwitch = new wxStaticText( pnConditions1, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	stSwitch->Wrap( -1 );
	szSwitch->Add( stSwitch, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chSwitchChoices;
	chSwitch = new wxChoice( pnConditions1, wxID_ANY, wxDefaultPosition, wxSize( 90, -1 ), chSwitchChoices, 0 );
	chSwitch->SetSelection( 0 );
	szSwitch->Add( chSwitch, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szConditions1->Add( szSwitch, 1, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	rbtnVariable = new wxRadioButton( pnConditions1, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	szConditions1->Add( rbtnVariable, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szVariable;
	szVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariable = new wxTextCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100, -1 ), 0 );
	szVariable->Add( tcVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariable = new wxButton( pnConditions1, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariable->SetDefault(); 
	szVariable->Add( btnVariable, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stVariable = new wxStaticText( pnConditions1, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariable->Wrap( -1 );
	szVariable->Add( stVariable, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szVariable->Add( 90,  0, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szConditions1->Add( szVariable, 1, wxTOP|wxEXPAND, 1 );
	
	
	szConditions1->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxFlexGridSizer* szVariable2;
	szVariable2 = new wxFlexGridSizer( 2, 2, 2, 2 );
	szVariable2->AddGrowableCol( 1 );
	szVariable2->SetFlexibleDirection( wxBOTH );
	szVariable2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnVariableFixed = new wxRadioButton( pnConditions1, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariableFixed->SetValue( true ); 
	szVariable2->Add( rbtnVariableFixed, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinVariableFiexd = new wxSpinCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 9999999, 0 );
	szVariable2->Add( spinVariableFiexd, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnVariableVariable = new wxRadioButton( pnConditions1, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariableVariable->SetValue( true ); 
	szVariable2->Add( rbtnVariableVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVariableVariable;
	szVariableVariable = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableVariable = new wxTextCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szVariableVariable->Add( tcVariableVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableVariable = new wxButton( pnConditions1, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableVariable->SetDefault(); 
	szVariableVariable->Add( btnVariableVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szVariable2->Add( szVariableVariable, 1, wxEXPAND, 0 );
	
	szConditions1->Add( szVariable2, 1, wxALL|wxEXPAND, 1 );
	
	
	szConditions1->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxArrayString chVariableChoices;
	chVariable = new wxChoice( pnConditions1, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chVariableChoices, 0 );
	chVariable->SetSelection( 0 );
	szConditions1->Add( chVariable, 0, wxRIGHT|wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnTimer = new wxRadioButton( pnConditions1, wxID_ANY, _("Timer"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTimer->SetValue( true ); 
	szConditions1->Add( rbtnTimer, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szTimer;
	szTimer = new wxBoxSizer( wxHORIZONTAL );
	
	spinTimerMinutes = new wxSpinCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	szTimer->Add( spinTimerMinutes, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTimerMinutes = new wxStaticText( pnConditions1, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	stTimerMinutes->Wrap( -1 );
	szTimer->Add( stTimerMinutes, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinTimerSeconds = new wxSpinCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	szTimer->Add( spinTimerSeconds, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTimerSeconds = new wxStaticText( pnConditions1, wxID_ANY, _("sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTimerSeconds->Wrap( -1 );
	szTimer->Add( stTimerSeconds, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chTimerChoices;
	chTimer = new wxChoice( pnConditions1, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTimerChoices, 0 );
	chTimer->SetSelection( 0 );
	szTimer->Add( chTimer, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szConditions1->Add( szTimer, 1, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	rbtnMoney = new wxRadioButton( pnConditions1, wxID_ANY, _("Money"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMoney->SetValue( true ); 
	szConditions1->Add( rbtnMoney, 0, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szMoney;
	szMoney = new wxBoxSizer( wxHORIZONTAL );
	
	spinMoney = new wxSpinCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60, -1 ), wxSP_ARROW_KEYS, 0, 9999999, 0 );
	szMoney->Add( spinMoney, 0, wxRIGHT|wxBOTTOM, 1 );
	
	wxArrayString chMoneyChoices;
	chMoney = new wxChoice( pnConditions1, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMoneyChoices, 0 );
	chMoney->SetSelection( 0 );
	szMoney->Add( chMoney, 3, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	szConditions1->Add( szMoney, 1, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	pnConditions1->SetSizer( szConditions1 );
	pnConditions1->Layout();
	szConditions1->Fit( pnConditions1 );
	nbConditions->AddPage( pnConditions1, _("1"), true );
	pnConditions2 = new wxPanel( nbConditions, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* szConditions2;
	szConditions2 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* szConditions2Top;
	szConditions2Top = new wxFlexGridSizer( 5, 2, 3, 2 );
	szConditions2Top->AddGrowableCol( 1 );
	szConditions2Top->SetFlexibleDirection( wxBOTH );
	szConditions2Top->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnItem = new wxRadioButton( pnConditions2, wxID_ANY, _("Item"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnItem->SetValue( true ); 
	szConditions2Top->Add( rbtnItem, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szItem;
	szItem = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString chItemChoices;
	chItem = new wxChoice( pnConditions2, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chItemChoices, 0 );
	chItem->SetSelection( 0 );
	szItem->Add( chItem, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chItem2Choices;
	chItem2 = new wxChoice( pnConditions2, wxID_ANY, wxDefaultPosition, wxSize( 90, -1 ), chItem2Choices, 0 );
	chItem2->SetSelection( 0 );
	szItem->Add( chItem2, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szConditions2Top->Add( szItem, 1, wxEXPAND, 0 );
	
	rbtnoActor = new wxRadioButton( pnConditions2, wxID_ANY, _("Actor"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnoActor->SetValue( true ); 
	szConditions2Top->Add( rbtnoActor, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szActor;
	szActor = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString chActorChoices;
	chActor = new wxChoice( pnConditions2, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorChoices, 0 );
	chActor->SetSelection( 0 );
	szActor->Add( chActor, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	szActor->Add( 90,  0, 0, wxEXPAND, 0 );
	
	szConditions2Top->Add( szActor, 1, wxEXPAND, 0 );
	
	
	szConditions2Top->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szActor2;
	szActor2 = new wxBoxSizer( wxHORIZONTAL );
	
	tcActor2 = new wxTextCtrl( pnConditions2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szActor2->Add( tcActor2, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnActor = new wxButton( pnConditions2, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnActor->SetDefault(); 
	szActor2->Add( btnActor, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szConditions2Top->Add( szActor2, 1, wxEXPAND, 0 );
	
	rbtnGroup = new wxRadioButton( pnConditions2, wxID_ANY, _("Group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnGroup->SetValue( true ); 
	szConditions2Top->Add( rbtnGroup, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szGroup;
	szGroup = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString chGroupChoices;
	chGroup = new wxChoice( pnConditions2, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chGroupChoices, 0 );
	chGroup->SetSelection( 0 );
	szGroup->Add( chGroup, 1, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	stGroup = new wxStaticText( pnConditions2, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	stGroup->Wrap( -1 );
	szGroup->Add( stGroup, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chGroup2Choices;
	chGroup2 = new wxChoice( pnConditions2, wxID_ANY, wxDefaultPosition, wxSize( 90, -1 ), chGroup2Choices, 0 );
	chGroup2->SetSelection( 0 );
	szGroup->Add( chGroup2, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stGroup2 = new wxStaticText( pnConditions2, wxID_ANY, _("direction"), wxDefaultPosition, wxDefaultSize, 0 );
	stGroup2->Wrap( -1 );
	szGroup->Add( stGroup2, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szConditions2Top->Add( szGroup, 1, wxEXPAND, 0 );
	
	rbtnVehicle = new wxRadioButton( pnConditions2, wxID_ANY, _("Vehicle"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVehicle->SetValue( true ); 
	szConditions2Top->Add( rbtnVehicle, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* szVehicle;
	szVehicle = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString chVehicleChoices;
	chVehicle = new wxChoice( pnConditions2, wxID_ANY, wxDefaultPosition, wxSize( 90, -1 ), chVehicleChoices, 0 );
	chVehicle->SetSelection( 0 );
	szVehicle->Add( chVehicle, 0, wxLEFT|wxRIGHT, 1 );
	
	stVehicle = new wxStaticText( pnConditions2, wxID_ANY, _("boarded"), wxDefaultPosition, wxDefaultSize, 0 );
	stVehicle->Wrap( -1 );
	szVehicle->Add( stVehicle, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szConditions2Top->Add( szVehicle, 1, wxEXPAND, 0 );
	
	szConditions2->Add( szConditions2Top, 0, wxALL|wxEXPAND, 1 );
	
	rbtnKey = new wxRadioButton( pnConditions2, wxID_ANY, _("Pressed decision key"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnKey->SetValue( true ); 
	szConditions2->Add( rbtnKey, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnMusic = new wxRadioButton( pnConditions2, wxID_ANY, _("Playing music"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMusic->SetValue( true ); 
	szConditions2->Add( rbtnMusic, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	pnConditions2->SetSizer( szConditions2 );
	pnConditions2->Layout();
	szConditions2->Fit( pnConditions2 );
	nbConditions->AddPage( pnConditions2, _("2"), false );
	
	szConditionsTop->Add( nbConditions, 1, wxEXPAND, 0 );
	
	szConditions->Add( szConditionsTop, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szOptions;
	szOptions = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbElse = new wxCheckBox( this, wxID_ANY, _("Exception if conditions are insatisfied"), wxDefaultPosition, wxDefaultSize, 0 );
	chbElse->SetValue(true); 
	szOptions->Add( chbElse, 0, 0, 0 );
	
	szConditions->Add( szOptions, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szConditions->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szConditions );
	this->Layout();
	szConditions->Fit( this );
}

dlgEvtCmdConditions_Base::~dlgEvtCmdConditions_Base()
{
}

dlgEvtCmdLabel_Base::dlgEvtCmdLabel_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szLabel;
	szLabel = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szNumber;
	szNumber = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Label number") ), wxHORIZONTAL );
	
	spinNumber = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1, 9999, 1 );
	szNumber->Add( spinNumber, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szLabel->Add( szNumber, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szLabel->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szLabel );
	this->Layout();
	szLabel->Fit( this );
}

dlgEvtCmdLabel_Base::~dlgEvtCmdLabel_Base()
{
}

dlgEvtCmdGoToLabel_Base::dlgEvtCmdGoToLabel_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szGoToLabel;
	szGoToLabel = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szNumber;
	szNumber = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Label number") ), wxHORIZONTAL );
	
	spinNumber = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1, 9999, 1 );
	szNumber->Add( spinNumber, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szGoToLabel->Add( szNumber, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szGoToLabel->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szGoToLabel );
	this->Layout();
	szGoToLabel->Fit( this );
}

dlgEvtCmdGoToLabel_Base::~dlgEvtCmdGoToLabel_Base()
{
}

dlgEvtCmdCallEvent_Base::dlgEvtCmdCallEvent_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szCallEvent;
	szCallEvent = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szEvent;
	szEvent = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event to call") ), wxVERTICAL );
	
	rbtnCommonEvent = new wxRadioButton( this, wxID_ANY, _("Common event"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnCommonEvent->SetValue( true ); 
	szEvent->Add( rbtnCommonEvent, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chCommonEventChoices;
	chCommonEvent = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chCommonEventChoices, 0 );
	chCommonEvent->SetSelection( 0 );
	szEvent->Add( chCommonEvent, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnMapEvent = new wxRadioButton( this, wxID_ANY, _("Map event"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMapEvent->SetValue( true ); 
	szEvent->Add( rbtnMapEvent, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* szMapEvent;
	szMapEvent = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString chMapEventChoices;
	chMapEvent = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMapEventChoices, 0 );
	chMapEvent->SetSelection( 0 );
	szMapEvent->Add( chMapEvent, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinMapEvent = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1, 9999, 1 );
	szMapEvent->Add( spinMapEvent, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stMapEvent = new wxStaticText( this, wxID_ANY, _("page"), wxDefaultPosition, wxDefaultSize, 0 );
	stMapEvent->Wrap( -1 );
	szMapEvent->Add( stMapEvent, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szEvent->Add( szMapEvent, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	rbtnMapEventVariable = new wxRadioButton( this, wxID_ANY, _("Map event by variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMapEventVariable->SetValue( true ); 
	szEvent->Add( rbtnMapEventVariable, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxFlexGridSizer* szMapEventVariable;
	szMapEventVariable = new wxFlexGridSizer( 2, 3, 2, 0 );
	szMapEventVariable->AddGrowableCol( 0 );
	szMapEventVariable->SetFlexibleDirection( wxBOTH );
	szMapEventVariable->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	tcMapEventVariableEvent = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szMapEventVariable->Add( tcMapEventVariableEvent, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	btnMapEventVariableEvent = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnMapEventVariableEvent->SetDefault(); 
	szMapEventVariable->Add( btnMapEventVariableEvent, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stMapEventVariableEvent = new wxStaticText( this, wxID_ANY, _("event to call"), wxDefaultPosition, wxDefaultSize, 0 );
	stMapEventVariableEvent->Wrap( -1 );
	szMapEventVariable->Add( stMapEventVariableEvent, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcMapEventVariablePage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szMapEventVariable->Add( tcMapEventVariablePage, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	btnMapEventVariablePage = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnMapEventVariablePage->SetDefault(); 
	szMapEventVariable->Add( btnMapEventVariablePage, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stMapEventVariablePage = new wxStaticText( this, wxID_ANY, _("page"), wxDefaultPosition, wxDefaultSize, 0 );
	stMapEventVariablePage->Wrap( -1 );
	szMapEventVariable->Add( stMapEventVariablePage, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	szEvent->Add( szMapEventVariable, 1, wxTOP|wxEXPAND, 1 );
	
	szCallEvent->Add( szEvent, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	szCallEvent->Add( szBottom, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szCallEvent );
	this->Layout();
	szCallEvent->Fit( this );
}

dlgEvtCmdCallEvent_Base::~dlgEvtCmdCallEvent_Base()
{
}

dlgEvtCmdNote_Base::dlgEvtCmdNote_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* szNote;
	szNote = new wxBoxSizer( wxVERTICAL );
	
	tcNote = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_LINEWRAP|wxTE_WORDWRAP );
	szNote->Add( tcNote, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* szBottom;
	szBottom = new wxBoxSizer( wxHORIZONTAL );
	
	btnOK = new wxButton( this, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	btnOK->SetDefault(); 
	szBottom->Add( btnOK, 0, wxALL, 1 );
	
	btnCancel = new wxButton( this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	szBottom->Add( btnCancel, 0, wxALL, 1 );
	
	btnHelp = new wxButton( this, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHelp->SetDefault(); 
	szBottom->Add( btnHelp, 0, wxALL, 1 );
	
	szNote->Add( szBottom, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( szNote );
	this->Layout();
	szNote->Fit( this );
}

dlgEvtCmdNote_Base::~dlgEvtCmdNote_Base()
{
}
