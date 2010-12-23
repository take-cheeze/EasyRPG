///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui_database_animations.h"

///////////////////////////////////////////////////////////////////////////

pnAnimation_Base::pnAnimation_Base( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxBoxSizer* szAnimation;
	szAnimation = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szAnimationLeft;
	szAnimationLeft = new wxBoxSizer( wxVERTICAL );
	
	stAnimation = new wxStaticText( this, wxID_ANY, _("Animations"), wxDefaultPosition, wxDefaultSize, 0 );
	stAnimation->Wrap( -1 );
	stAnimation->SetFont( wxFont( 12, 70, 90, 92, false, wxEmptyString ) );
	
	szAnimationLeft->Add( stAnimation, 0, wxALIGN_CENTER_HORIZONTAL, 0 );
	
	listAnimation = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szAnimationLeft->Add( listAnimation, 1, wxALL|wxEXPAND, 1 );
	
	btnAnimationMaxNumber = new wxButton( this, wxID_ANY, _("Max Number..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnAnimationMaxNumber->SetDefault(); 
	szAnimationLeft->Add( btnAnimationMaxNumber, 0, wxALL|wxEXPAND, 1 );
	
	szAnimation->Add( szAnimationLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRight;
	szRight = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* szRightTop;
	szRightTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* szAnimationName;
	szAnimationName = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Name") ), wxHORIZONTAL );
	
	stAnimationName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szAnimationName->Add( stAnimationName, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szAnimationName, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szAnimationGraphic;
	szAnimationGraphic = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Animation graphic") ), wxHORIZONTAL );
	
	tcAnimationGraphic = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), 0 );
	szAnimationGraphic->Add( tcAnimationGraphic, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	btnAnimationGraphic = new wxButton( this, wxID_ANY, _("..."), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnAnimationGraphic->SetDefault(); 
	szAnimationGraphic->Add( btnAnimationGraphic, 0, 0, 0 );
	
	szRightTop->Add( szAnimationGraphic, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szEnemyTargetTest;
	szEnemyTargetTest = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Enemy target (for testing)") ), wxHORIZONTAL );
	
	wxArrayString chEnemyTargetTestChoices;
	chEnemyTargetTest = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chEnemyTargetTestChoices, 0 );
	chEnemyTargetTest->SetSelection( 0 );
	szEnemyTargetTest->Add( chEnemyTargetTest, 1, wxALIGN_CENTER_VERTICAL, 0 );
	
	szRightTop->Add( szEnemyTargetTest, 1, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	szRight->Add( szRightTop, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRightMiddle;
	szRightMiddle = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* szRightMiddleLeft;
	szRightMiddleLeft = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szAnimationNumberOfFrames;
	szAnimationNumberOfFrames = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("# of frames") ), wxHORIZONTAL );
	
	spinAnimationNumberOfFrames = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50, -1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	szAnimationNumberOfFrames->Add( spinAnimationNumberOfFrames, 1, 0, 0 );
	
	szRightMiddleLeft->Add( szAnimationNumberOfFrames, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szAnimationFrames;
	szAnimationFrames = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Frames") ), wxVERTICAL );
	
	szAnimationFramesPrevious = new wxButton( this, wxID_ANY, _("&Previous"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	szAnimationFramesPrevious->SetDefault(); 
	szAnimationFrames->Add( szAnimationFramesPrevious, 0, wxBOTTOM|wxEXPAND, 1 );
	
	listAnimationFrames = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), 0, NULL, 0 ); 
	szAnimationFrames->Add( listAnimationFrames, 1, wxTOP|wxBOTTOM|wxEXPAND, 1 );
	
	btnAnimationFramesNext = new wxButton( this, wxID_ANY, _("&Next"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	btnAnimationFramesNext->SetDefault(); 
	szAnimationFrames->Add( btnAnimationFramesNext, 0, wxTOP|wxEXPAND, 1 );
	
	szRightMiddleLeft->Add( szAnimationFrames, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	szRightMiddle->Add( szRightMiddleLeft, 0, wxEXPAND, 0 );
	
	wxBoxSizer* szRightMiddleCenter;
	szRightMiddleCenter = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szAnimationTimeline;
	szAnimationTimeline = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Sounds, shaking and blinking timeline") ), wxHORIZONTAL );
	
	lcAnimationTimeline = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( 50, 50 ), wxLC_REPORT|wxSUNKEN_BORDER );
	szAnimationTimeline->Add( lcAnimationTimeline, 1, wxEXPAND, 0 );
	
	szRightMiddleCenter->Add( szAnimationTimeline, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	bmpAnimationCanvas = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 320, 160 ), wxSUNKEN_BORDER );
	bmpAnimationCanvas->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	szRightMiddleCenter->Add( bmpAnimationCanvas, 2, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1 );
	
	szRightMiddle->Add( szRightMiddleCenter, 1, wxEXPAND, 0 );
	
	wxBoxSizer* szRightMiddleRight;
	szRightMiddleRight = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* szAnimationRange;
	szAnimationRange = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Range") ), wxHORIZONTAL );
	
	wxArrayString chAnimationRangeChoices;
	chAnimationRange = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chAnimationRangeChoices, 0 );
	chAnimationRange->SetSelection( 0 );
	szAnimationRange->Add( chAnimationRange, 1, 0, 0 );
	
	szRightMiddleRight->Add( szAnimationRange, 0, wxLEFT|wxRIGHT|wxEXPAND, 1 );
	
	wxStaticBoxSizer* szAnimationYOrdinate;
	szAnimationYOrdinate = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Y ordinate") ), wxHORIZONTAL );
	
	wxArrayString chAnimationYOrdinateChoices;
	chAnimationYOrdinate = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50, -1 ), chAnimationYOrdinateChoices, 0 );
	chAnimationYOrdinate->SetSelection( 0 );
	szAnimationYOrdinate->Add( chAnimationYOrdinate, 1, 0, 0 );
	
	szRightMiddleRight->Add( szAnimationYOrdinate, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 1 );
	
	
	szRightMiddleRight->Add( 0,  0, 1, wxEXPAND, 0 );
	
	chbAnimationSnapToGrid = new wxCheckBox( this, wxID_ANY, _("Snap to grid"), wxDefaultPosition, wxDefaultSize, 0 );
	chbAnimationSnapToGrid->SetValue(true); 
	szRightMiddleRight->Add( chbAnimationSnapToGrid, 0, wxALL|wxEXPAND, 1 );
	
	btnAnimationLikePrevious = new wxButton( this, wxID_ANY, _("Like previous"), wxDefaultPosition, wxDefaultSize, 0 );
	btnAnimationLikePrevious->SetDefault(); 
	szRightMiddleRight->Add( btnAnimationLikePrevious, 0, wxALL|wxEXPAND, 1 );
	
	btnAnimationEdit = new wxButton( this, wxID_ANY, _("Edit..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnAnimationEdit->SetDefault(); 
	szRightMiddleRight->Add( btnAnimationEdit, 0, wxALL|wxEXPAND, 1 );
	
	btnAnimationComplete = new wxButton( this, wxID_ANY, _("Complete..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnAnimationComplete->SetDefault(); 
	szRightMiddleRight->Add( btnAnimationComplete, 0, wxALL|wxEXPAND, 1 );
	
	btnAnimationMakeAll = new wxButton( this, wxID_ANY, _("Make all..."), wxDefaultPosition, wxDefaultSize, 0 );
	btnAnimationMakeAll->SetDefault(); 
	szRightMiddleRight->Add( btnAnimationMakeAll, 0, wxALL|wxEXPAND, 1 );
	
	btnAnimationPlay = new wxButton( this, wxID_ANY, _("Play"), wxDefaultPosition, wxDefaultSize, 0 );
	btnAnimationPlay->SetDefault(); 
	szRightMiddleRight->Add( btnAnimationPlay, 0, wxALL|wxEXPAND, 1 );
	
	
	szRightMiddleRight->Add( 0,  0, 1, wxEXPAND, 0 );
	
	szRightMiddle->Add( szRightMiddleRight, 0, wxEXPAND, 0 );
	
	szRight->Add( szRightMiddle, 1, wxEXPAND, 0 );
	
	listAnimationGraphic = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( -1,96 ), 0, NULL, wxLB_MULTIPLE|wxLB_HSCROLL ); 
	szRight->Add( listAnimationGraphic, 0, wxALL|wxEXPAND, 1 );
	
	szAnimation->Add( szRight, 1, wxEXPAND, 0 );
	
	this->SetSizer( szAnimation );
	this->Layout();
	szAnimation->Fit( this );
}

pnAnimation_Base::~pnAnimation_Base()
{
}
