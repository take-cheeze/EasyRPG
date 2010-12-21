///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_skills__
#define __gui_database_skills__

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
#include <wx/choice.h>
#include <wx/spinctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/slider.h>
#include <wx/checkbox.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnSkill_Base
///////////////////////////////////////////////////////////////////////////////
class pnSkill_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stSkill;
		wxListBox* listSkill;
		wxButton* btnSkillMaxNumber;
		wxTextCtrl* stSkillName;
		wxChoice* chSkillType;
		wxSpinCtrl* spinSkillMPCost;
		
		wxTextCtrl* tcSkillDescription;
		wxChoice* chSkillTarget;
		wxStaticText* stSkillCastMessageCharacterName;
		wxTextCtrl* tcSkillCastMessage1;
		wxTextCtrl* tcSkillCastMessage2;
		wxButton* btnSkillCastMessageCast;
		wxButton* btnSkillCastMessageThrow;
		wxButton* btnSkillCastMessageUse;
		wxStaticText* stSkillFailMessageCharacterName;
		wxTextCtrl* tcSkillFailMessage;
		wxStaticBitmap* bmpSkillAnimation;
		wxChoice* chSkillAnimation;
		wxSlider* slSkillAttackInfluence;
		wxSlider* slSkillMagicInfluence;
		wxSlider* slSkillVariance;
		wxSpinCtrl* spinSkillEffectRate;
		wxCheckBox* chbSkillAffectHP;
		wxCheckBox* chbSkillAffectMP;
		wxCheckBox* chbSkillAffectAttack;
		wxCheckBox* chbSkillAffectDefense;
		wxCheckBox* chbSkillAffectIntelligence;
		wxCheckBox* chbSkillAffectAgility;
		wxCheckBox* chbSkillAffectAbsorbHPMP;
		wxCheckBox* chbSkillAffectArmorBypass;
		wxSpinCtrl* spinSkillSuccessRate;
		wxStaticText* stSkillSuccessRate;
		wxListBox* listSkillChangeStates;
		wxListBox* listSkillAttributes;
		wxCheckBox* chbSkillAttributesDefenseUpDown;
	
	public:
		
		pnSkill_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnSkill_Base();
	
};

#endif //__gui_database_skills__
