///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_actors__
#define __gui_database_actors__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/listbox.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/statbox.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/choice.h>
#include <wx/listctrl.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnActor_Base
///////////////////////////////////////////////////////////////////////////////
class pnActor_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stActor;
		wxListBox* listActor;
		wxButton* btnActorMaxNumber;
		wxTextCtrl* tcActorName;
		wxTextCtrl* tcActorTitle;
		wxStaticBitmap* bmpWalkingGraphic;
		wxCheckBox* chbActorWalkingGraphicTranslucent;
		wxButton* btnActorWalkingGraphic;
		wxSpinCtrl* spinActorInitialLevel;
		wxSpinCtrl* spinActorMaxLevel;
		wxCheckBox* chbActorCriticalHitRate;
		wxSpinCtrl* spinActorCriticalHitRate;
		wxStaticText* stActorInitialWeapon;
		wxChoice* chActorInitialWeapon;
		wxStaticText* stActorInitialShield;
		wxChoice* chActorInitialShield;
		wxStaticText* stActorInitialArmor;
		wxChoice* chActorInitialArmor;
		wxStaticText* stActorInitialHelmet;
		wxChoice* chActorInitialHelmet;
		wxStaticText* stActorInitialAccessory;
		wxChoice* chActorInitialAccessory;
		wxStaticBitmap* bmpActorFaceGraphic;
		wxButton* btnActorFaceGraphic;
		wxCheckBox* chbActorOptionsUse2Weapons;
		wxCheckBox* chbActorOptionsFixedEquipment;
		wxCheckBox* chbActorOptionsControlledByAI;
		wxCheckBox* chbActorOptionsArmored;
		wxStaticBitmap* bmpActorMaxHP;
		wxStaticBitmap* bmpActorMaxMP;
		wxStaticBitmap* bmpActorAttack;
		wxStaticBitmap* bmpActorDefense;
		wxStaticBitmap* bmpActorIntelligence;
		wxStaticBitmap* bmpActorAgility;
		wxTextCtrl* tcActorExperienceCurve;
		wxButton* btnActorExperienceCurve;
		wxChoice* chActorAnimationWithoutWeapons;
		wxListCtrl* lcActorSkills;
		wxCheckBox* chbActorSkillsBattleCommand;
		wxTextCtrl* tcActorSkillsBattleCommand;
		wxListBox* listActorStateRates;
		wxListBox* listActorAttributeRates;
	
	public:
		
		pnActor_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnActor_Base();
	
};

#endif //__gui_database_actors__
