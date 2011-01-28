///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_system__
#define __gui_database_system__

#include <wx/intl.h>

#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/string.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/choice.h>
#include <wx/textctrl.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnSystem_Base
///////////////////////////////////////////////////////////////////////////////
class pnSystem_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticBitmap* bmpSystemVehicleGraphicSmallShip;
		wxButton* btnSystemVehicleGraphicSmallShip;
		wxStaticBitmap* bmpSystemVehicleGraphicBigShip;
		wxButton* btnSystemVehicleGraphicBigShip;
		wxStaticBitmap* bmpSystemVehicleGraphicAirship;
		wxButton* btnSystemVehicleGraphicAirship;
		wxStaticBitmap* bmpSystemTitleGraphic;
		wxButton* btnSystemTitleGraphic;
		wxStaticBitmap* bmpSystemGameOverGraphic;
		wxButton* btnSystemGameOverGraphic;
		wxChoice* chSystemStartingPartyActor1;
		wxChoice* chSystemStartingPartyActor2;
		wxChoice* chSystemStartingPartyActor3;
		wxChoice* chSystemStartingPartyActor4;
		wxTextCtrl* tcSystemMusicTitle;
		wxButton* btnSystemMusicTitle;
		wxTextCtrl* tcSystemMusicSmallShip;
		wxButton* btnSystemMusicSmallShip;
		wxTextCtrl* tcSystemMusicBattle;
		wxButton* btnSystemMusicBattle;
		wxTextCtrl* tcSystemMusicBigShip;
		wxButton* btnSystemMusicBigShip;
		wxTextCtrl* tcSystemMusicVictory;
		wxButton* btnSystemMusicVictory;
		wxTextCtrl* tcSystemMusicAirship;
		wxButton* btnSystemMusicAirship;
		wxTextCtrl* tcSystemMusicInn;
		wxButton* btnSystemMusicInn;
		wxTextCtrl* tcSystemMusicGameOver;
		wxButton* btnSystemMusicGameOver;
		wxTextCtrl* tcSystemSoundCursor;
		wxButton* btnSystemSoundCursor;
		wxTextCtrl* tcSystemSoundStartBattle;
		wxButton* btnSystemSoundStartBattle;
		wxTextCtrl* tcSystemSoundActorDamage;
		wxButton* btnSystemSoundActorDamage;
		wxTextCtrl* tcSystemSoundOK;
		wxButton* btnSystemSoundOK;
		wxTextCtrl* tcSystemSoundEscape;
		wxButton* btnSystemSoundEscape;
		wxTextCtrl* tcSystemSoundDodge;
		wxButton* btnSystemSoundDodge;
		wxTextCtrl* tcSystemSoundCancel;
		wxButton* btnSystemSoundCancel;
		wxTextCtrl* tcSystemSoundEnemyAttack;
		wxButton* btnSystemSoundEnemyAttack;
		wxTextCtrl* tcSystemSoundEnemyDeath;
		wxButton* btnSystemSoundEnemyDeath;
		wxTextCtrl* tcSystemSoundError;
		wxButton* btnSystemSoundError;
		wxTextCtrl* tcSystemSoundEnemyDamage;
		wxButton* btnSystemSoundEnemyDamage;
		wxTextCtrl* tcSystemSoundUseObject;
		wxButton* btnSystemSoundUseObject;
		wxStaticBitmap* bmpSystemGraphic;
		wxButton* btnSystemGraphic;
		wxChoice* chSystemTransitionTypeEraseScreen;
		wxChoice* chSystemTransitionTypeShowScreen;
		wxChoice* chSystemStartBattleEraseScreen;
		wxChoice* chSystemStartBattleShowScreen;
		wxChoice* chSystemEndBattleEraseScreen;
		wxChoice* chSystemEndBattleShowScreen;
	
	public:
		
		pnSystem_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnSystem_Base();
	
};

#endif //__gui_database_system__
