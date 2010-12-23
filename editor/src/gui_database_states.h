///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_states__
#define __gui_database_states__

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
#include <wx/checkbox.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnState_Base
///////////////////////////////////////////////////////////////////////////////
class pnState_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stState;
		wxListBox* listState;
		wxButton* btnStateMaxNumber;
		wxTextCtrl* tcStateName;
		wxChoice* chStateType;
		wxChoice* chStateColor;
		wxSpinCtrl* spinStatePriority;
		wxChoice* chStateActionRange;
		wxStaticText* stStateEffectRateA;
		wxSpinCtrl* spinStateEffectRateA;
		wxStaticText* stStateEffectRateAPercent;
		wxStaticText* stStateEffectRateB;
		wxSpinCtrl* spinStateEffectRateB;
		wxStaticText* stStateEffectRateBPercent;
		wxStaticText* stStateEffectRateC;
		wxSpinCtrl* spinStateEffectRateC;
		wxStaticText* stStateEffectRateCPercent;
		wxStaticText* stStateEffectRateD;
		wxSpinCtrl* spinStateEffectRateD;
		wxStaticText* stStateEffectRateDPercent;
		wxStaticText* stStateEffectRateE;
		wxSpinCtrl* spinStateEffectRateE;
		wxStaticText* stStateEffectRateEPercent;
		wxStaticText* stStateNaturalHealingAfter;
		wxSpinCtrl* spinStateNaturalHealingTurn;
		wxStaticText* stStateNaturalHealingTurn;
		
		wxSpinCtrl* spinStateNaturalHealingHealChance;
		wxStaticText* stStateNaturalHealingHealChance;
		wxStaticText* stStateAfterHitHealingPhysicalAttack;
		wxSpinCtrl* spinStateAfterHitHealingHealChance;
		wxStaticText* stStateAfterHitHealingHealChance;
		wxCheckBox* chbStateDecreaseAttack;
		wxCheckBox* chbStateDecreaseIntelligence;
		wxCheckBox* chbStateDecreaseDefense;
		wxCheckBox* chbStateDecreaseAgility;
		wxSpinCtrl* spinStateAttackChance;
		wxStaticText* stStateAttackChance;
		wxCheckBox* chbStateSkillExceptionsAttackChance;
		wxSpinCtrl* spinStateSkillExceptionsAttackChance;
		wxStaticText* stStateSkillExceptionsAttackChance;
		wxCheckBox* chbStateSkillExceptionsSkillChance;
		wxSpinCtrl* spinStateSkillExceptionsSkillChance;
		wxStaticText* stStateSkillExceptionsSkillChance;
		wxStaticText* stStateMessageActorHit;
		wxTextCtrl* tcStateMessageActorHit;
		wxStaticText* stStateMessageEnemyHit;
		wxTextCtrl* tcStateMessageEnemyHit;
		wxStaticText* stStateMessageAlreadyInState;
		wxTextCtrl* tcStateMessageAlreadyInState;
		wxStaticText* stStateMessageNormalState;
		wxTextCtrl* tcStateMessageNormalState;
		wxStaticText* stStateMessageRecover;
		wxTextCtrl* tcStateMessageRecover;
		wxStaticText* stStateHPReductionInEveryTurnMax;
		wxSpinCtrl* spinStateHPReductionInEveryTurnMax;
		wxStaticText* stStateHPReductionInEveryTurnPercentPlus;
		wxSpinCtrl* spinStateHPReductionInEveryTurnHP;
		wxStaticText* stStateHPReductionInEveryTurnHP;
		wxSpinCtrl* spinStateHPReductionOnMoveSteps;
		wxStaticText* stStateHPReductionOnMoveSteps;
		wxSpinCtrl* spinStateHPReductionOnMoveHP;
		wxStaticText* stStateHPReductionOnMoveHP;
		wxStaticText* stStateMPReductionInEveryTurnMax;
		wxSpinCtrl* spinStateMPReductionInEveryTurnMax;
		wxStaticText* stStateMPReductionInEveryTurnPercentPlus;
		wxSpinCtrl* spinStateMPReductionInEveryTurnMP;
		wxStaticText* stStateMPReductionInEveryTurnMP;
		wxSpinCtrl* spinStateMPReductionOnMoveSteps;
		wxStaticText* stStateMPReductionOnMoveSteps;
		wxSpinCtrl* spinStateMPReductionOnMoveMP;
		wxStaticText* stStateMPReductionOnMoveMP;
	
	public:
		
		pnState_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnState_Base();
	
};

#endif //__gui_database_states__
