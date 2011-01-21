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
	
	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer( wxHORIZONTAL );
	
	listMusic = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 150,-1 ), 0, NULL, 0 ); 
	bSizer64->Add( listMusic, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer65;
	bSizer65 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer35;
	sbSizer35 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Fade in") ), wxVERTICAL );
	
	slFadeIn = new wxSlider( this, wxID_ANY, 0, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	sbSizer35->Add( slFadeIn, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer66;
	bSizer66 = new wxBoxSizer( wxHORIZONTAL );
	
	stFadeInNone = new wxStaticText( this, wxID_ANY, _("None"), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeInNone->Wrap( -1 );
	bSizer66->Add( stFadeInNone, 0, wxRIGHT, 1 );
	
	
	bSizer66->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stFadeIn5Seconds = new wxStaticText( this, wxID_ANY, _("5 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeIn5Seconds->Wrap( -1 );
	bSizer66->Add( stFadeIn5Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer66->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stFadeIn10Seconds = new wxStaticText( this, wxID_ANY, _("10 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeIn10Seconds->Wrap( -1 );
	bSizer66->Add( stFadeIn10Seconds, 0, wxLEFT, 1 );
	
	sbSizer35->Add( bSizer66, 0, wxEXPAND, 0 );
	
	bSizer65->Add( sbSizer35, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer36;
	sbSizer36 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Volume") ), wxVERTICAL );
	
	slVolume = new wxSlider( this, wxID_ANY, 10, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	sbSizer36->Add( slVolume, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer67;
	bSizer67 = new wxBoxSizer( wxHORIZONTAL );
	
	stVolume0Percent = new wxStaticText( this, wxID_ANY, _("0%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume0Percent->Wrap( -1 );
	bSizer67->Add( stVolume0Percent, 0, wxRIGHT, 1 );
	
	
	bSizer67->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVolume50Percent = new wxStaticText( this, wxID_ANY, _("50%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume50Percent->Wrap( -1 );
	bSizer67->Add( stVolume50Percent, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer67->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVolume100Percent = new wxStaticText( this, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume100Percent->Wrap( -1 );
	bSizer67->Add( stVolume100Percent, 0, wxLEFT, 1 );
	
	sbSizer36->Add( bSizer67, 0, wxEXPAND, 0 );
	
	bSizer65->Add( sbSizer36, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer37;
	sbSizer37 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tempo") ), wxVERTICAL );
	
	slTempo = new wxSlider( this, wxID_ANY, 5, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	sbSizer37->Add( slTempo, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );
	
	stTempo50Percent = new wxStaticText( this, wxID_ANY, _("50%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo50Percent->Wrap( -1 );
	bSizer68->Add( stTempo50Percent, 0, wxRIGHT, 1 );
	
	
	bSizer68->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTempo100Percent = new wxStaticText( this, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo100Percent->Wrap( -1 );
	bSizer68->Add( stTempo100Percent, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer68->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTempo150Percent = new wxStaticText( this, wxID_ANY, _("150%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo150Percent->Wrap( -1 );
	bSizer68->Add( stTempo150Percent, 0, wxLEFT, 1 );
	
	sbSizer37->Add( bSizer68, 0, wxEXPAND, 0 );
	
	bSizer65->Add( sbSizer37, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer38;
	sbSizer38 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Balance") ), wxVERTICAL );
	
	slBalance = new wxSlider( this, wxID_ANY, 0, -5,  5, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	sbSizer38->Add( slBalance, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer69;
	bSizer69 = new wxBoxSizer( wxHORIZONTAL );
	
	stBalanceLeft = new wxStaticText( this, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceLeft->Wrap( -1 );
	bSizer69->Add( stBalanceLeft, 0, wxRIGHT, 1 );
	
	
	bSizer69->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stBalanceCenter = new wxStaticText( this, wxID_ANY, _("Center"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceCenter->Wrap( -1 );
	bSizer69->Add( stBalanceCenter, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer69->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stBalanceRight = new wxStaticText( this, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceRight->Wrap( -1 );
	bSizer69->Add( stBalanceRight, 0, wxLEFT, 1 );
	
	sbSizer38->Add( bSizer69, 0, wxEXPAND, 0 );
	
	bSizer65->Add( sbSizer38, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxHORIZONTAL );
	
	btnPlay = new wxButton( this, wxID_ANY, _("Play"), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlay->SetDefault(); 
	bSizer70->Add( btnPlay, 0, wxALL, 1 );
	
	btnStop = new wxButton( this, wxID_ANY, _("Stop"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStop->SetDefault(); 
	bSizer70->Add( btnStop, 0, wxALL, 1 );
	
	bSizer65->Add( bSizer70, 0, wxEXPAND, 0 );
	
	bSizer64->Add( bSizer65, 0, wxEXPAND, 0 );
	
	bSizer63->Add( bSizer64, 1, wxEXPAND, 0 );
	
	linePlayMusic = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer63->Add( linePlayMusic, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer71->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer71->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer71->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer63->Add( bSizer71, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer63 );
	this->Layout();
	bSizer63->Fit( this );
}

dlgEvtCmdPlayMusic_Base::~dlgEvtCmdPlayMusic_Base()
{
}

dlgEvtCmdFadeMusic_Base::dlgEvtCmdFadeMusic_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer84;
	bSizer84 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer48;
	sbSizer48 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Fade time") ), wxHORIZONTAL );
	
	wxBoxSizer* bSizer85;
	bSizer85 = new wxBoxSizer( wxVERTICAL );
	
	slTime = new wxSlider( this, wxID_ANY, 5, 0,  20, wxDefaultPosition, wxSize( 200, -1 ), wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	bSizer85->Add( slTime, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer86;
	bSizer86 = new wxBoxSizer( wxHORIZONTAL );
	
	stTime0Seconds = new wxStaticText( this, wxID_ANY, _("0 sec"), wxDefaultPosition, wxDefaultSize, 0 );
	stTime0Seconds->Wrap( -1 );
	bSizer86->Add( stTime0Seconds, 0, wxRIGHT, 1 );
	
	
	bSizer86->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTime5Seconds = new wxStaticText( this, wxID_ANY, _("5 sec"), wxDefaultPosition, wxDefaultSize, 0 );
	stTime5Seconds->Wrap( -1 );
	bSizer86->Add( stTime5Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer86->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTime10Seconds = new wxStaticText( this, wxID_ANY, _("10 sec"), wxDefaultPosition, wxDefaultSize, 0 );
	stTime10Seconds->Wrap( -1 );
	bSizer86->Add( stTime10Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer86->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTime15Seconds = new wxStaticText( this, wxID_ANY, _("15 sec"), wxDefaultPosition, wxDefaultSize, 0 );
	stTime15Seconds->Wrap( -1 );
	bSizer86->Add( stTime15Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer86->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTime20Seconds = new wxStaticText( this, wxID_ANY, _("20 sec"), wxDefaultPosition, wxDefaultSize, 0 );
	stTime20Seconds->Wrap( -1 );
	bSizer86->Add( stTime20Seconds, 0, wxLEFT, 1 );
	
	bSizer85->Add( bSizer86, 0, wxEXPAND, 0 );
	
	sbSizer48->Add( bSizer85, 1, wxEXPAND, 0 );
	
	btnFade = new wxButton( this, wxID_ANY, _("Fade"), wxDefaultPosition, wxDefaultSize, 0 );
	btnFade->SetDefault(); 
	sbSizer48->Add( btnFade, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnPlay = new wxButton( this, wxID_ANY, _("Play"), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlay->SetDefault(); 
	sbSizer48->Add( btnPlay, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer84->Add( sbSizer48, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer87;
	bSizer87 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer87->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer87->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer87->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer84->Add( bSizer87, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer84 );
	this->Layout();
	bSizer84->Fit( this );
}

dlgEvtCmdFadeMusic_Base::~dlgEvtCmdFadeMusic_Base()
{
}

dlgEvtCmdPlaySound_Base::dlgEvtCmdPlaySound_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer126;
	bSizer126 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer127;
	bSizer127 = new wxBoxSizer( wxHORIZONTAL );
	
	listSound = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 150,-1 ), 0, NULL, 0 ); 
	bSizer127->Add( listSound, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer128;
	bSizer128 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer69;
	sbSizer69 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Fade in") ), wxVERTICAL );
	
	slFadeIn = new wxSlider( this, wxID_ANY, 0, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	sbSizer69->Add( slFadeIn, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer129;
	bSizer129 = new wxBoxSizer( wxHORIZONTAL );
	
	stFadeInNone = new wxStaticText( this, wxID_ANY, _("None"), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeInNone->Wrap( -1 );
	bSizer129->Add( stFadeInNone, 0, wxRIGHT, 1 );
	
	
	bSizer129->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stFadeIn5Seconds = new wxStaticText( this, wxID_ANY, _("5 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeIn5Seconds->Wrap( -1 );
	bSizer129->Add( stFadeIn5Seconds, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer129->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stFadeIn10Seconds = new wxStaticText( this, wxID_ANY, _("10 sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stFadeIn10Seconds->Wrap( -1 );
	bSizer129->Add( stFadeIn10Seconds, 0, wxLEFT, 1 );
	
	sbSizer69->Add( bSizer129, 0, wxEXPAND, 0 );
	
	bSizer128->Add( sbSizer69, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer70;
	sbSizer70 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Volume") ), wxVERTICAL );
	
	slVolume = new wxSlider( this, wxID_ANY, 10, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	sbSizer70->Add( slVolume, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer130;
	bSizer130 = new wxBoxSizer( wxHORIZONTAL );
	
	stVolume0Percent = new wxStaticText( this, wxID_ANY, _("0%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume0Percent->Wrap( -1 );
	bSizer130->Add( stVolume0Percent, 0, wxRIGHT, 1 );
	
	
	bSizer130->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVolume50Percent = new wxStaticText( this, wxID_ANY, _("50%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume50Percent->Wrap( -1 );
	bSizer130->Add( stVolume50Percent, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer130->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVolume100Percent = new wxStaticText( this, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	stVolume100Percent->Wrap( -1 );
	bSizer130->Add( stVolume100Percent, 0, wxLEFT, 1 );
	
	sbSizer70->Add( bSizer130, 0, wxEXPAND, 0 );
	
	bSizer128->Add( sbSizer70, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer71;
	sbSizer71 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tempo") ), wxVERTICAL );
	
	slTempo = new wxSlider( this, wxID_ANY, 5, 0,  10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	sbSizer71->Add( slTempo, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );
	
	stTempo50Percent = new wxStaticText( this, wxID_ANY, _("50%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo50Percent->Wrap( -1 );
	bSizer131->Add( stTempo50Percent, 0, wxRIGHT, 1 );
	
	
	bSizer131->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTempo100Percent = new wxStaticText( this, wxID_ANY, _("100%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo100Percent->Wrap( -1 );
	bSizer131->Add( stTempo100Percent, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer131->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stTempo150Percent = new wxStaticText( this, wxID_ANY, _("150%"), wxDefaultPosition, wxDefaultSize, 0 );
	stTempo150Percent->Wrap( -1 );
	bSizer131->Add( stTempo150Percent, 0, wxLEFT, 1 );
	
	sbSizer71->Add( bSizer131, 0, wxEXPAND, 0 );
	
	bSizer128->Add( sbSizer71, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer72;
	sbSizer72 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Balance") ), wxVERTICAL );
	
	slBalance = new wxSlider( this, wxID_ANY, 0, -5,  5, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_AUTOTICKS );
	sbSizer72->Add( slBalance, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxHORIZONTAL );
	
	stBalanceLeft = new wxStaticText( this, wxID_ANY, _("Left"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceLeft->Wrap( -1 );
	bSizer132->Add( stBalanceLeft, 0, wxRIGHT, 1 );
	
	
	bSizer132->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stBalanceCenter = new wxStaticText( this, wxID_ANY, _("Center"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceCenter->Wrap( -1 );
	bSizer132->Add( stBalanceCenter, 0, wxLEFT|wxRIGHT, 1 );
	
	
	bSizer132->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stBalanceRight = new wxStaticText( this, wxID_ANY, _("Right"), wxDefaultPosition, wxDefaultSize, 0 );
	stBalanceRight->Wrap( -1 );
	bSizer132->Add( stBalanceRight, 0, wxLEFT, 1 );
	
	sbSizer72->Add( bSizer132, 0, wxEXPAND, 0 );
	
	bSizer128->Add( sbSizer72, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer133;
	bSizer133 = new wxBoxSizer( wxHORIZONTAL );
	
	btnPlay = new wxButton( this, wxID_ANY, _("Play"), wxDefaultPosition, wxDefaultSize, 0 );
	btnPlay->SetDefault(); 
	bSizer133->Add( btnPlay, 0, wxALL, 1 );
	
	btnStop = new wxButton( this, wxID_ANY, _("Stop"), wxDefaultPosition, wxDefaultSize, 0 );
	btnStop->SetDefault(); 
	bSizer133->Add( btnStop, 0, wxALL, 1 );
	
	bSizer128->Add( bSizer133, 0, wxEXPAND, 0 );
	
	bSizer127->Add( bSizer128, 0, wxEXPAND, 0 );
	
	bSizer126->Add( bSizer127, 1, wxEXPAND, 0 );
	
	linePlayMusic = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer126->Add( linePlayMusic, 0, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer134;
	bSizer134 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer134->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer134->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer134->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer126->Add( bSizer134, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer126 );
	this->Layout();
	bSizer126->Fit( this );
}

dlgEvtCmdPlaySound_Base::~dlgEvtCmdPlaySound_Base()
{
}

dlgEvtCmdPlayVideo_Base::dlgEvtCmdPlayVideo_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer257;
	bSizer257 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer258;
	bSizer258 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer131;
	sbSizer131 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Video file") ), wxHORIZONTAL );
	
	stVideo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	sbSizer131->Add( stVideo, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVideo = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVideo->SetDefault(); 
	sbSizer131->Add( btnVideo, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer258->Add( sbSizer131, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer132;
	sbSizer132 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Size in window") ), wxHORIZONTAL );
	
	spinSizeX = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 320, 0 );
	sbSizer132->Add( spinSizeX, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stSize = new wxStaticText( this, wxID_ANY, _("X"), wxDefaultPosition, wxDefaultSize, 0 );
	stSize->Wrap( -1 );
	sbSizer132->Add( stSize, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinSizeY = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 240, 0 );
	sbSizer132->Add( spinSizeY, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer258->Add( sbSizer132, 0, wxEXPAND, 0 );
	
	bSizer257->Add( bSizer258, 0, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer133;
	sbSizer133 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Move to position (coordinates)") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer29;
	fgSizer29 = new wxFlexGridSizer( 4, 3, 2, 2 );
	fgSizer29->AddGrowableCol( 2 );
	fgSizer29->SetFlexibleDirection( wxBOTH );
	fgSizer29->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnSpecify = new wxRadioButton( this, wxID_ANY, _("Specify"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSpecify->SetValue( true ); 
	fgSizer29->Add( rbtnSpecify, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	szSpecifyX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	szSpecifyX->Wrap( -1 );
	fgSizer29->Add( szSpecifyX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyX = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 320, 0 );
	fgSizer29->Add( spinSpecifyX, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	fgSizer29->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stSpecifyY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stSpecifyY->Wrap( -1 );
	fgSizer29->Add( stSpecifyY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinSpecifyY = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 240, 0 );
	fgSizer29->Add( spinSpecifyY, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnVariable = new wxRadioButton( this, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	fgSizer29->Add( rbtnVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	stVariableX = new wxStaticText( this, wxID_ANY, _("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableX->Wrap( -1 );
	fgSizer29->Add( stVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer259;
	bSizer259 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableX = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer259->Add( tcVariableX, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableX = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableX->SetDefault(); 
	bSizer259->Add( btnVariableX, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer29->Add( bSizer259, 1, wxEXPAND, 0 );
	
	
	fgSizer29->Add( 0,  0, 1, wxEXPAND, 0 );
	
	stVariableY = new wxStaticText( this, wxID_ANY, _("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariableY->Wrap( -1 );
	fgSizer29->Add( stVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer260;
	bSizer260 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableY = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer260->Add( tcVariableY, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableY = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableY->SetDefault(); 
	bSizer260->Add( btnVariableY, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer29->Add( bSizer260, 1, wxEXPAND, 0 );
	
	sbSizer133->Add( fgSizer29, 1, wxBOTTOM|wxEXPAND, 1 );
	
	bSizer257->Add( sbSizer133, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer261;
	bSizer261 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer261->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer261->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer261->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer257->Add( bSizer261, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer257 );
	this->Layout();
	bSizer257->Fit( this );
}

dlgEvtCmdPlayVideo_Base::~dlgEvtCmdPlayVideo_Base()
{
}

dlgEvtCmdKeyAssignment_Base::dlgEvtCmdKeyAssignment_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer162;
	bSizer162 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer163;
	bSizer163 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer164;
	bSizer164 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer86;
	sbSizer86 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Store value in variable") ), wxHORIZONTAL );
	
	tcVariable = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70, -1 ), 0 );
	sbSizer86->Add( tcVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariable = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxSize( 25, -1 ), wxBU_EXACTFIT );
	btnVariable->SetDefault(); 
	sbSizer86->Add( btnVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer164->Add( sbSizer86, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer87;
	sbSizer87 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbWait = new wxCheckBox( this, wxID_ANY, _("Wait for key press"), wxDefaultPosition, wxDefaultSize, 0 );
	chbWait->SetValue(true); 
	sbSizer87->Add( chbWait, 0, 0, 0 );
	
	bSizer164->Add( sbSizer87, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer163->Add( bSizer164, 1, wxEXPAND, 0 );
	
	wxStaticBoxSizer* sbSizer88;
	sbSizer88 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Keys to assign") ), wxHORIZONTAL );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 4, 2, 2, 2 );
	
	chbDown = new wxCheckBox( this, wxID_ANY, _("Down (1)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbDown->SetValue(true); 
	gSizer1->Add( chbDown, 0, 0, 0 );
	
	chbDecision = new wxCheckBox( this, wxID_ANY, _("Decision key (5)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbDecision->SetValue(true); 
	gSizer1->Add( chbDecision, 0, 0, 0 );
	
	chbLeft = new wxCheckBox( this, wxID_ANY, _("Left (2)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbLeft->SetValue(true); 
	gSizer1->Add( chbLeft, 0, 0, 0 );
	
	chbCancel = new wxCheckBox( this, wxID_ANY, _("Cancel key (6)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbCancel->SetValue(true); 
	gSizer1->Add( chbCancel, 0, 0, 0 );
	
	chbRight = new wxCheckBox( this, wxID_ANY, _("Right (3)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbRight->SetValue(true); 
	gSizer1->Add( chbRight, 0, 0, 0 );
	
	chbShift = new wxCheckBox( this, wxID_ANY, _("Shift key (7)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbShift->SetValue(true); 
	gSizer1->Add( chbShift, 0, 0, 0 );
	
	chbUp = new wxCheckBox( this, wxID_ANY, _("Up (4)"), wxDefaultPosition, wxDefaultSize, 0 );
	chbUp->SetValue(true); 
	gSizer1->Add( chbUp, 0, 0, 0 );
	
	
	gSizer1->Add( 0,  0, 1, wxEXPAND, 0 );
	
	sbSizer88->Add( gSizer1, 1, 0, 0 );
	
	bSizer163->Add( sbSizer88, 0, wxLEFT|wxRIGHT|wxBOTTOM, 1 );
	
	bSizer162->Add( bSizer163, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer165;
	bSizer165 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer165->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	btnCancel = new wxButton( this, wxID_ANY, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	btnCancel->SetDefault(); 
	bSizer165->Add( btnCancel, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer165->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer162->Add( bSizer165, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer162 );
	this->Layout();
	bSizer162->Fit( this );
}

dlgEvtCmdKeyAssignment_Base::~dlgEvtCmdKeyAssignment_Base()
{
}

dlgEvtCmdTileset_Base::dlgEvtCmdTileset_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer23;
	sbSizer23 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("ChipSet") ), wxHORIZONTAL );
	
	wxArrayString chChipSetChoices;
	chChipSet = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, chChipSetChoices, 0 );
	chChipSet->SetSelection( 0 );
	sbSizer23->Add( chChipSet, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer42->Add( sbSizer23, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer43->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer43->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer43->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer42->Add( bSizer43, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer42 );
	this->Layout();
	bSizer42->Fit( this );
}

dlgEvtCmdTileset_Base::~dlgEvtCmdTileset_Base()
{
}

dlgEvtCmdPanorama_Base::dlgEvtCmdPanorama_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Background") ), wxVERTICAL );
	
	bmpBackground = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 160, 120 ), wxSUNKEN_BORDER );
	sbSizer1->Add( bmpBackground, 0, wxBOTTOM, 1 );
	
	btnBackground = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnBackground->SetDefault(); 
	sbSizer1->Add( btnBackground, 0, wxTOP|wxALIGN_RIGHT, 1 );
	
	bSizer2->Add( sbSizer1, 0, wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );
	
	
	sbSizer2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	btnHScroll = new wxCheckBox( this, wxID_ANY, _("Horizontal scroll"), wxDefaultPosition, wxDefaultSize, 0 );
	btnHScroll->SetValue(true); 
	sbSizer2->Add( btnHScroll, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer3->Add( 15,  15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbHScrollAuto = new wxCheckBox( this, wxID_ANY, _("Automatic"), wxDefaultPosition, wxDefaultSize, 0 );
	chbHScrollAuto->SetValue(true); 
	bSizer3->Add( chbHScrollAuto, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer2->Add( bSizer3, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	stHScrollSpeed = new wxStaticText( this, wxID_ANY, _("Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	stHScrollSpeed->Wrap( -1 );
	bSizer4->Add( stHScrollSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinHScrollSpeed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 0 );
	bSizer4->Add( spinHScrollSpeed, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer2->Add( bSizer4, 0, wxEXPAND, 0 );
	
	
	sbSizer2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	lineOptions = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	sbSizer2->Add( lineOptions, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	
	sbSizer2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	btnVScroll = new wxCheckBox( this, wxID_ANY, _("Vertical scroll"), wxDefaultPosition, wxDefaultSize, 0 );
	btnVScroll->SetValue(true); 
	sbSizer2->Add( btnVScroll, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer5->Add( 15,  15, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	chbVScrollAuto = new wxCheckBox( this, wxID_ANY, _("Automatic"), wxDefaultPosition, wxDefaultSize, 0 );
	chbVScrollAuto->SetValue(true); 
	bSizer5->Add( chbVScrollAuto, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer2->Add( bSizer5, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	stVcrollSpeed = new wxStaticText( this, wxID_ANY, _("Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	stVcrollSpeed->Wrap( -1 );
	bSizer6->Add( stVcrollSpeed, 0, wxRIGHT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinVScrollSpeed = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 0 );
	bSizer6->Add( spinVScrollSpeed, 1, wxLEFT|wxTOP, 1 );
	
	sbSizer2->Add( bSizer6, 0, wxEXPAND, 0 );
	
	
	sbSizer2->Add( 0,  0, 1, wxEXPAND, 0 );
	
	bSizer2->Add( sbSizer2, 1, wxLEFT|wxEXPAND, 1 );
	
	bSizer1->Add( bSizer2, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer7->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer7->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer7->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer1->Add( bSizer7, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );
}

dlgEvtCmdPanorama_Base::~dlgEvtCmdPanorama_Base()
{
}

dlgEvtCmdEncounterRate_Base::dlgEvtCmdEncounterRate_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer271;
	bSizer271 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer141;
	sbSizer141 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Number of steps") ), wxHORIZONTAL );
	
	spinSteps = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 999, 25 );
	sbSizer141->Add( spinSteps, 1, wxALIGN_CENTER_VERTICAL, 1 );
	
	bSizer271->Add( sbSizer141, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer272;
	bSizer272 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer272->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer272->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer272->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer271->Add( bSizer272, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer271 );
	this->Layout();
	bSizer271->Fit( this );
}

dlgEvtCmdEncounterRate_Base::~dlgEvtCmdEncounterRate_Base()
{
}

dlgEvtCmdTile_Base::dlgEvtCmdTile_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer168;
	bSizer168 = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOptionsChoices[] = { _("Lower"), _("Upper") };
	int rbOptionsNChoices = sizeof( rbOptionsChoices ) / sizeof( wxString );
	rbOptions = new wxRadioBox( this, wxID_ANY, _("Tile type"), wxDefaultPosition, wxDefaultSize, rbOptionsNChoices, rbOptionsChoices, 1, wxRA_SPECIFY_ROWS );
	rbOptions->SetSelection( 0 );
	bSizer168->Add( rbOptions, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer169;
	bSizer169 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer89;
	sbSizer89 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Tile to replace") ), wxHORIZONTAL );
	
	bmpOriginal = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 32, 32 ), wxSUNKEN_BORDER );
	sbSizer89->Add( bmpOriginal, 0, wxRIGHT, 1 );
	
	btnOriginal = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnOriginal->SetDefault(); 
	sbSizer89->Add( btnOriginal, 0, wxLEFT, 1 );
	
	bSizer169->Add( sbSizer89, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer90;
	sbSizer90 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Replace with") ), wxHORIZONTAL );
	
	bmpReplacer = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 32, 32 ), wxSUNKEN_BORDER );
	sbSizer90->Add( bmpReplacer, 0, wxRIGHT, 1 );
	
	btnReplacer = new wxButton( this, wxID_ANY, _("Select..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnReplacer->SetDefault(); 
	sbSizer90->Add( btnReplacer, 0, wxLEFT, 1 );
	
	bSizer169->Add( sbSizer90, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bSizer168->Add( bSizer169, 0, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer170;
	bSizer170 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer170->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer170->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer170->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer168->Add( bSizer170, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer168 );
	this->Layout();
	bSizer168->Fit( this );
}

dlgEvtCmdTile_Base::~dlgEvtCmdTile_Base()
{
}

dlgEvtCmdTeleportPlace_Base::dlgEvtCmdTeleportPlace_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer299;
	bSizer299 = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Add teleport"), _("Remove teleport") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	bSizer299->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer154;
	sbSizer154 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Teleport position") ), wxHORIZONTAL );
	
	tcPosition = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125, -1 ), 0 );
	sbSizer154->Add( tcPosition, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPosition = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPosition->SetDefault(); 
	sbSizer154->Add( btnPosition, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer299->Add( sbSizer154, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer155;
	sbSizer155 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enable switch after teleporting") ), wxHORIZONTAL );
	
	chbSwitch = new wxCheckBox( this, wxID_ANY, _("Enable"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSwitch->SetValue(true); 
	sbSizer155->Add( chbSwitch, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcSwitch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125, -1 ), 0 );
	sbSizer155->Add( tcSwitch, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSwitch = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitch->SetDefault(); 
	sbSizer155->Add( btnSwitch, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer299->Add( sbSizer155, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer300;
	bSizer300 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer300->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer300->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer300->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer299->Add( bSizer300, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer299 );
	this->Layout();
	bSizer299->Fit( this );
}

dlgEvtCmdTeleportPlace_Base::~dlgEvtCmdTeleportPlace_Base()
{
}

dlgEvtCmdTeleportPermissions_Base::dlgEvtCmdTeleportPermissions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer75;
	bSizer75 = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Forbid teleporting"), _("Alllow teleporting") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	bSizer75->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer76->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer76->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer76->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer75->Add( bSizer76, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer75 );
	this->Layout();
	bSizer75->Fit( this );
}

dlgEvtCmdTeleportPermissions_Base::~dlgEvtCmdTeleportPermissions_Base()
{
}

dlgEvtCmdEscapePlace_Base::dlgEvtCmdEscapePlace_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer234;
	bSizer234 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer121;
	sbSizer121 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Escape position") ), wxHORIZONTAL );
	
	tcPosition = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125, -1 ), 0 );
	sbSizer121->Add( tcPosition, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnPosition = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnPosition->SetDefault(); 
	sbSizer121->Add( btnPosition, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer234->Add( sbSizer121, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer122;
	sbSizer122 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enable switch after escape") ), wxHORIZONTAL );
	
	chbSwitch = new wxCheckBox( this, wxID_ANY, _("Enable"), wxDefaultPosition, wxDefaultSize, 0 );
	chbSwitch->SetValue(true); 
	sbSizer122->Add( chbSwitch, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcSwitch = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 125, -1 ), 0 );
	sbSizer122->Add( tcSwitch, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnSwitch = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitch->SetDefault(); 
	sbSizer122->Add( btnSwitch, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer234->Add( sbSizer122, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer235;
	bSizer235 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer235->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer235->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer235->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer234->Add( bSizer235, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer234 );
	this->Layout();
	bSizer234->Fit( this );
}

dlgEvtCmdEscapePlace_Base::~dlgEvtCmdEscapePlace_Base()
{
}

dlgEvtCmdEscapePermissions_Base::dlgEvtCmdEscapePermissions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer278;
	bSizer278 = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Forbid escape"), _("Alllow escape") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	bSizer278->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer279;
	bSizer279 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer279->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer279->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer279->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer278->Add( bSizer279, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer278 );
	this->Layout();
	bSizer278->Fit( this );
}

dlgEvtCmdEscapePermissions_Base::~dlgEvtCmdEscapePermissions_Base()
{
}

dlgEvtCmdSavePermissions_Base::dlgEvtCmdSavePermissions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer283;
	bSizer283 = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Forbid saving"), _("Alllow saving") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	bSizer283->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer284;
	bSizer284 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer284->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer284->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer284->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer283->Add( bSizer284, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer283 );
	this->Layout();
	bSizer283->Fit( this );
}

dlgEvtCmdSavePermissions_Base::~dlgEvtCmdSavePermissions_Base()
{
}

dlgEvtCmdSystemMenuPermissions_Base::dlgEvtCmdSystemMenuPermissions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer236;
	bSizer236 = new wxBoxSizer( wxVERTICAL );
	
	wxString rbOperationChoices[] = { _("Forbid menu"), _("Alllow menu") };
	int rbOperationNChoices = sizeof( rbOperationChoices ) / sizeof( wxString );
	rbOperation = new wxRadioBox( this, wxID_ANY, _("Operation"), wxDefaultPosition, wxDefaultSize, rbOperationNChoices, rbOperationChoices, 1, wxRA_SPECIFY_ROWS );
	rbOperation->SetSelection( 0 );
	bSizer236->Add( rbOperation, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer237;
	bSizer237 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer237->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer237->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer237->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer236->Add( bSizer237, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer236 );
	this->Layout();
	bSizer236->Fit( this );
}

dlgEvtCmdSystemMenuPermissions_Base::~dlgEvtCmdSystemMenuPermissions_Base()
{
}

dlgEvtCmdConditions_Base::dlgEvtCmdConditions_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer88;
	bSizer88 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer49;
	sbSizer49 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Conditions") ), wxHORIZONTAL );
	
	nbConditions = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	pnConditions1 = new wxPanel( nbConditions, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 6, 2, 2, 2 );
	fgSizer11->AddGrowableCol( 1 );
	fgSizer11->SetFlexibleDirection( wxBOTH );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnSwitch = new wxRadioButton( pnConditions1, wxID_ANY, _("Switch"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnSwitch->SetValue( true ); 
	fgSizer11->Add( rbtnSwitch, 0, wxLEFT|wxTOP|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* bSizer89;
	bSizer89 = new wxBoxSizer( wxHORIZONTAL );
	
	tcSwitch = new wxTextCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100, -1 ), 0 );
	bSizer89->Add( tcSwitch, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnSwitch = new wxButton( pnConditions1, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnSwitch->SetDefault(); 
	bSizer89->Add( btnSwitch, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stSwitch = new wxStaticText( pnConditions1, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	stSwitch->Wrap( -1 );
	bSizer89->Add( stSwitch, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chSwitchChoices;
	chSwitch = new wxChoice( pnConditions1, wxID_ANY, wxDefaultPosition, wxSize( 90, -1 ), chSwitchChoices, 0 );
	chSwitch->SetSelection( 0 );
	bSizer89->Add( chSwitch, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	fgSizer11->Add( bSizer89, 1, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	rbtnVariable = new wxRadioButton( pnConditions1, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariable->SetValue( true ); 
	fgSizer11->Add( rbtnVariable, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* bSizer90;
	bSizer90 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariable = new wxTextCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100, -1 ), 0 );
	bSizer90->Add( tcVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariable = new wxButton( pnConditions1, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariable->SetDefault(); 
	bSizer90->Add( btnVariable, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stVariable = new wxStaticText( pnConditions1, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	stVariable->Wrap( -1 );
	bSizer90->Add( stVariable, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	bSizer90->Add( 90,  0, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	fgSizer11->Add( bSizer90, 1, wxTOP|wxEXPAND, 1 );
	
	
	fgSizer11->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxFlexGridSizer* fgSizer12;
	fgSizer12 = new wxFlexGridSizer( 2, 2, 2, 2 );
	fgSizer12->AddGrowableCol( 1 );
	fgSizer12->SetFlexibleDirection( wxBOTH );
	fgSizer12->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnVariableFixed = new wxRadioButton( pnConditions1, wxID_ANY, _("Fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariableFixed->SetValue( true ); 
	fgSizer12->Add( rbtnVariableFixed, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	spinVariableFiexd = new wxSpinCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 9999999, 0 );
	fgSizer12->Add( spinVariableFiexd, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnVariableVariable = new wxRadioButton( pnConditions1, wxID_ANY, _("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVariableVariable->SetValue( true ); 
	fgSizer12->Add( rbtnVariableVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxHORIZONTAL );
	
	tcVariableVariable = new wxTextCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer91->Add( tcVariableVariable, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnVariableVariable = new wxButton( pnConditions1, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnVariableVariable->SetDefault(); 
	bSizer91->Add( btnVariableVariable, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer12->Add( bSizer91, 1, wxEXPAND, 0 );
	
	fgSizer11->Add( fgSizer12, 1, wxALL|wxEXPAND, 1 );
	
	
	fgSizer11->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxArrayString chVariableChoices;
	chVariable = new wxChoice( pnConditions1, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chVariableChoices, 0 );
	chVariable->SetSelection( 0 );
	fgSizer11->Add( chVariable, 0, wxRIGHT|wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnTimer = new wxRadioButton( pnConditions1, wxID_ANY, _("Timer"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnTimer->SetValue( true ); 
	fgSizer11->Add( rbtnTimer, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxHORIZONTAL );
	
	spinTimerMinutes = new wxSpinCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	bSizer92->Add( spinTimerMinutes, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTimerMinutes = new wxStaticText( pnConditions1, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	stTimerMinutes->Wrap( -1 );
	bSizer92->Add( stTimerMinutes, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinTimerSeconds = new wxSpinCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 59, 0 );
	bSizer92->Add( spinTimerSeconds, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stTimerSeconds = new wxStaticText( pnConditions1, wxID_ANY, _("sec."), wxDefaultPosition, wxDefaultSize, 0 );
	stTimerSeconds->Wrap( -1 );
	bSizer92->Add( stTimerSeconds, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chTimerChoices;
	chTimer = new wxChoice( pnConditions1, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chTimerChoices, 0 );
	chTimer->SetSelection( 0 );
	bSizer92->Add( chTimer, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	fgSizer11->Add( bSizer92, 1, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	rbtnMoney = new wxRadioButton( pnConditions1, wxID_ANY, _("Money"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMoney->SetValue( true ); 
	fgSizer11->Add( rbtnMoney, 0, wxLEFT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* bSizer93;
	bSizer93 = new wxBoxSizer( wxHORIZONTAL );
	
	spinMoney = new wxSpinCtrl( pnConditions1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60, -1 ), wxSP_ARROW_KEYS, 0, 9999999, 0 );
	bSizer93->Add( spinMoney, 0, wxRIGHT|wxBOTTOM, 1 );
	
	wxArrayString chMoneyChoices;
	chMoney = new wxChoice( pnConditions1, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMoneyChoices, 0 );
	chMoney->SetSelection( 0 );
	bSizer93->Add( chMoney, 3, wxLEFT|wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 1 );
	
	fgSizer11->Add( bSizer93, 1, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	pnConditions1->SetSizer( fgSizer11 );
	pnConditions1->Layout();
	fgSizer11->Fit( pnConditions1 );
	nbConditions->AddPage( pnConditions1, _("1"), true );
	nbConditions2 = new wxPanel( nbConditions, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer94;
	bSizer94 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer13;
	fgSizer13 = new wxFlexGridSizer( 5, 2, 3, 2 );
	fgSizer13->AddGrowableCol( 1 );
	fgSizer13->SetFlexibleDirection( wxBOTH );
	fgSizer13->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	rbtnItem = new wxRadioButton( nbConditions2, wxID_ANY, _("Item"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnItem->SetValue( true ); 
	fgSizer13->Add( rbtnItem, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString chItemChoices;
	chItem = new wxChoice( nbConditions2, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chItemChoices, 0 );
	chItem->SetSelection( 0 );
	bSizer95->Add( chItem, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chItem2Choices;
	chItem2 = new wxChoice( nbConditions2, wxID_ANY, wxDefaultPosition, wxSize( 90, -1 ), chItem2Choices, 0 );
	chItem2->SetSelection( 0 );
	bSizer95->Add( chItem2, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	fgSizer13->Add( bSizer95, 1, wxEXPAND, 0 );
	
	rbtnoActor = new wxRadioButton( nbConditions2, wxID_ANY, _("Actor"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnoActor->SetValue( true ); 
	fgSizer13->Add( rbtnoActor, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer96;
	bSizer96 = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString chActorChoices;
	chActor = new wxChoice( nbConditions2, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chActorChoices, 0 );
	chActor->SetSelection( 0 );
	bSizer96->Add( chActor, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	
	bSizer96->Add( 90,  0, 0, wxEXPAND, 0 );
	
	fgSizer13->Add( bSizer96, 1, wxEXPAND, 0 );
	
	
	fgSizer13->Add( 0,  0, 1, wxEXPAND, 0 );
	
	wxBoxSizer* bSizer97;
	bSizer97 = new wxBoxSizer( wxHORIZONTAL );
	
	tcActor2 = new wxTextCtrl( nbConditions2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	bSizer97->Add( tcActor2, 1, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	btnActor = new wxButton( nbConditions2, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnActor->SetDefault(); 
	bSizer97->Add( btnActor, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	fgSizer13->Add( bSizer97, 1, wxEXPAND, 0 );
	
	rbtnGroup = new wxRadioButton( nbConditions2, wxID_ANY, _("Group"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnGroup->SetValue( true ); 
	fgSizer13->Add( rbtnGroup, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer98;
	bSizer98 = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString chGroupChoices;
	chGroup = new wxChoice( nbConditions2, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chGroupChoices, 0 );
	chGroup->SetSelection( 0 );
	bSizer98->Add( chGroup, 1, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	stGroup = new wxStaticText( nbConditions2, wxID_ANY, _(":"), wxDefaultPosition, wxDefaultSize, 0 );
	stGroup->Wrap( -1 );
	bSizer98->Add( stGroup, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chGroup2Choices;
	chGroup2 = new wxChoice( nbConditions2, wxID_ANY, wxDefaultPosition, wxSize( 90, -1 ), chGroup2Choices, 0 );
	chGroup2->SetSelection( 0 );
	bSizer98->Add( chGroup2, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stGroup2 = new wxStaticText( nbConditions2, wxID_ANY, _("direction"), wxDefaultPosition, wxDefaultSize, 0 );
	stGroup2->Wrap( -1 );
	bSizer98->Add( stGroup2, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	fgSizer13->Add( bSizer98, 1, wxEXPAND, 0 );
	
	rbtnVehicle = new wxRadioButton( nbConditions2, wxID_ANY, _("Vehicle"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnVehicle->SetValue( true ); 
	fgSizer13->Add( rbtnVehicle, 0, wxALIGN_CENTER_VERTICAL, 0 );
	
	wxBoxSizer* bSizer99;
	bSizer99 = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString chVehicleChoices;
	chVehicle = new wxChoice( nbConditions2, wxID_ANY, wxDefaultPosition, wxSize( 90, -1 ), chVehicleChoices, 0 );
	chVehicle->SetSelection( 0 );
	bSizer99->Add( chVehicle, 0, wxLEFT|wxRIGHT, 1 );
	
	stVehicle = new wxStaticText( nbConditions2, wxID_ANY, _("boarded"), wxDefaultPosition, wxDefaultSize, 0 );
	stVehicle->Wrap( -1 );
	bSizer99->Add( stVehicle, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	fgSizer13->Add( bSizer99, 1, wxEXPAND, 0 );
	
	bSizer94->Add( fgSizer13, 0, wxALL|wxEXPAND, 1 );
	
	rbtnKey = new wxRadioButton( nbConditions2, wxID_ANY, _("Pressed decision key"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnKey->SetValue( true ); 
	bSizer94->Add( rbtnKey, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnMusic = new wxRadioButton( nbConditions2, wxID_ANY, _("Playing music"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMusic->SetValue( true ); 
	bSizer94->Add( rbtnMusic, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	nbConditions2->SetSizer( bSizer94 );
	nbConditions2->Layout();
	bSizer94->Fit( nbConditions2 );
	nbConditions->AddPage( nbConditions2, _("2"), false );
	
	sbSizer49->Add( nbConditions, 1, wxEXPAND, 0 );
	
	bSizer88->Add( sbSizer49, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* sbSizer50;
	sbSizer50 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxHORIZONTAL );
	
	chbElse = new wxCheckBox( this, wxID_ANY, _("Exception if conditions are insatisfied"), wxDefaultPosition, wxDefaultSize, 0 );
	chbElse->SetValue(true); 
	sbSizer50->Add( chbElse, 0, 0, 0 );
	
	bSizer88->Add( sbSizer50, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer100;
	bSizer100 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer100->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer100->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer100->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer88->Add( bSizer100, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer88 );
	this->Layout();
	bSizer88->Fit( this );
}

dlgEvtCmdConditions_Base::~dlgEvtCmdConditions_Base()
{
}

dlgEvtCmdLabel_Base::dlgEvtCmdLabel_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer18;
	sbSizer18 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Label number") ), wxHORIZONTAL );
	
	spinNumber = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1, 9999, 1 );
	sbSizer18->Add( spinNumber, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer34->Add( sbSizer18, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer35->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer35->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer35->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer34->Add( bSizer35, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer34 );
	this->Layout();
	bSizer34->Fit( this );
}

dlgEvtCmdLabel_Base::~dlgEvtCmdLabel_Base()
{
}

dlgEvtCmdGoToLabel_Base::dlgEvtCmdGoToLabel_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer17;
	sbSizer17 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Label number") ), wxHORIZONTAL );
	
	spinNumber = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1, 9999, 1 );
	sbSizer17->Add( spinNumber, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	bSizer32->Add( sbSizer17, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer33->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer33->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer33->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer32->Add( bSizer33, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer32 );
	this->Layout();
	bSizer32->Fit( this );
}

dlgEvtCmdGoToLabel_Base::~dlgEvtCmdGoToLabel_Base()
{
}

dlgEvtCmdCallEvent_Base::dlgEvtCmdCallEvent_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer296;
	bSizer296 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer153;
	sbSizer153 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Event to call") ), wxVERTICAL );
	
	rbtnCommonEvent = new wxRadioButton( this, wxID_ANY, _("Common event"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnCommonEvent->SetValue( true ); 
	sbSizer153->Add( rbtnCommonEvent, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxArrayString chCommonEventChoices;
	chCommonEvent = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chCommonEventChoices, 0 );
	chCommonEvent->SetSelection( 0 );
	sbSizer153->Add( chCommonEvent, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	rbtnMapEvent = new wxRadioButton( this, wxID_ANY, _("Map event"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMapEvent->SetValue( true ); 
	sbSizer153->Add( rbtnMapEvent, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxBoxSizer* bSizer297;
	bSizer297 = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString chMapEventChoices;
	chMapEvent = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chMapEventChoices, 0 );
	chMapEvent->SetSelection( 0 );
	bSizer297->Add( chMapEvent, 1, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	spinMapEvent = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 1, 9999, 1 );
	bSizer297->Add( spinMapEvent, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stMapEvent = new wxStaticText( this, wxID_ANY, _("page"), wxDefaultPosition, wxDefaultSize, 0 );
	stMapEvent->Wrap( -1 );
	bSizer297->Add( stMapEvent, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer153->Add( bSizer297, 0, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	rbtnMapEventVariable = new wxRadioButton( this, wxID_ANY, _("Map event by variable"), wxDefaultPosition, wxDefaultSize, 0 );
	rbtnMapEventVariable->SetValue( true ); 
	sbSizer153->Add( rbtnMapEventVariable, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_VERTICAL, 1 );
	
	wxFlexGridSizer* fgSizer34;
	fgSizer34 = new wxFlexGridSizer( 2, 3, 2, 0 );
	fgSizer34->AddGrowableCol( 0 );
	fgSizer34->SetFlexibleDirection( wxBOTH );
	fgSizer34->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	tcMapEventVariableEvent = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	fgSizer34->Add( tcMapEventVariableEvent, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	btnMapEventVariableEvent = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnMapEventVariableEvent->SetDefault(); 
	fgSizer34->Add( btnMapEventVariableEvent, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stMapEventVariableEvent = new wxStaticText( this, wxID_ANY, _("event to call"), wxDefaultPosition, wxDefaultSize, 0 );
	stMapEventVariableEvent->Wrap( -1 );
	fgSizer34->Add( stMapEventVariableEvent, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	tcMapEventVariablePage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	fgSizer34->Add( tcMapEventVariablePage, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0 );
	
	btnMapEventVariablePage = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnMapEventVariablePage->SetDefault(); 
	fgSizer34->Add( btnMapEventVariablePage, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 1 );
	
	stMapEventVariablePage = new wxStaticText( this, wxID_ANY, _("page"), wxDefaultPosition, wxDefaultSize, 0 );
	stMapEventVariablePage->Wrap( -1 );
	fgSizer34->Add( stMapEventVariablePage, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 1 );
	
	sbSizer153->Add( fgSizer34, 1, wxTOP|wxEXPAND, 1 );
	
	bSizer296->Add( sbSizer153, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer298;
	bSizer298 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer298->Add( wxID_OK, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer298->Add( wxID_CANCEL, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer298->Add( wxID_HELP, 0, wxALL|wxALIGN_BOTTOM, 1 );
	
	bSizer296->Add( bSizer298, 1, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer296 );
	this->Layout();
	bSizer296->Fit( this );
}

dlgEvtCmdCallEvent_Base::~dlgEvtCmdCallEvent_Base()
{
}

dlgEvtCmdNotes_Base::dlgEvtCmdNotes_Base( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer251;
	bSizer251 = new wxBoxSizer( wxVERTICAL );
	
	tcNotes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_LINEWRAP|wxTE_WORDWRAP );
	bSizer251->Add( tcNotes, 1, wxALL|wxEXPAND, 1 );
	
	wxBoxSizer* bSizer252;
	bSizer252 = new wxBoxSizer( wxHORIZONTAL );
	
	wxID_OK = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_OK->SetDefault(); 
	bSizer252->Add( wxID_OK, 0, wxALL, 1 );
	
	wxID_CANCEL = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_CANCEL->SetDefault(); 
	bSizer252->Add( wxID_CANCEL, 0, wxALL, 1 );
	
	wxID_HELP = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	wxID_HELP->SetDefault(); 
	bSizer252->Add( wxID_HELP, 0, wxALL, 1 );
	
	bSizer251->Add( bSizer252, 0, wxRIGHT|wxBOTTOM|wxALIGN_RIGHT, 3 );
	
	this->SetSizer( bSizer251 );
	this->Layout();
	bSizer251->Fit( this );
}

dlgEvtCmdNotes_Base::~dlgEvtCmdNotes_Base()
{
}
