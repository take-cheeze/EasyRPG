///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_texts__
#define __gui_database_texts__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/notebook.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnText_Base
///////////////////////////////////////////////////////////////////////////////
class pnText_Base : public wxPanel 
{
	private:
	
	protected:
		wxNotebook* nbText;
		wxPanel* pnTextBattleMessages1And2;
		wxStaticText* stTextBattleStartBattle;
		wxTextCtrl* tcTextBattleStartBattle;
		wxTextCtrl* tcTextBattlePriorityAttack;
		wxTextCtrl* tcTextBattleSuccessfulEscape;
		wxTextCtrl* tcTextBattleFailedEscape;
		wxTextCtrl* tcTextBattleVictory;
		wxTextCtrl* tcTextBattleDeadGroup;
		wxStaticText* stTextBattleExperience;
		wxTextCtrl* tcTextBattleExperience;
		wxTextCtrl* tcTextBattleObtainedMoney1;
		wxStaticText* stTextBattleObtainedMoney;
		wxTextCtrl* TextBattleObtainedMoney2;
		wxStaticText* stTextBattleObtainedObject;
		wxTextCtrl* tcTextBattleObtainedObject;
		wxStaticText* stTextBattleNormalAttack;
		wxTextCtrl* tcTextBattleNormalAttack;
		wxTextCtrl* tcTextBattleActorDeath;
		wxTextCtrl* tcTextBattleEnemyDeath;
		wxStaticText* stTextBattleDefense;
		wxTextCtrl* tcTextBattleDefense;
		wxStaticText* stTextBattleStateControl;
		wxTextCtrl* tcTextBattleStateControl;
		wxStaticText* stTextBattleStrengthGain;
		wxTextCtrl* tcTextBattleStrengthGain;
		wxStaticText* stTextBattleAutodestruction;
		wxTextCtrl* tcTextBattleAutodestruction;
		wxStaticText* stTextBattleEnemyEscape;
		wxTextCtrl* tcTextBattleEnemyEscape;
		wxStaticText* stTextBattleTransformation;
		wxTextCtrl* tcTextBattleTransformation;
		wxPanel* pnTextBattleMessages3And4;
		wxStaticText* stTextBattleActorAttack;
		wxTextCtrl* tcTextBattleActorAttack;
		wxStaticText* stTextBattleFailedActorAttack;
		wxTextCtrl* tcTextBattleFailedActorAttack;
		wxStaticText* stTextBattleEnemyAttack;
		wxTextCtrl* tcTextBattleEnemyAttack;
		wxStaticText* stTextBattleFailedEnemyAttack;
		wxTextCtrl* tcTextBattleFailedEnemyAttack;
		wxStaticText* stTextBattleFailedSkillA;
		wxTextCtrl* tcTextBattleFailedSkillA;
		wxStaticText* stTextBattleFailedSkillB;
		wxTextCtrl* tcTextBattleFailedSkillB;
		wxStaticText* stTextBattleFailedSkillC;
		wxTextCtrl* tcTextBattleFailedSkillC;
		wxStaticText* stTextBattleEvadePhysicalAttack;
		wxTextCtrl* tcTextBattleEvadePhysicalAttack;
		wxStaticText* stTextBattleUseItem;
		wxTextCtrl* tcTextBattleUseItem;
		wxStaticText* stTextBattleRecoverHP;
		wxTextCtrl* tcTextBattleRecoverHP;
		wxStaticText* stTextBattleParameterUp;
		wxTextCtrl* tcTextBattleParameterUp;
		wxStaticText* stTextBattleParameterDown;
		wxTextCtrl* tcTextBattleParameterDown;
		wxStaticText* stTextBattleParameterAbsorptionAllied;
		wxTextCtrl* tcTextBattleParameterAbsorptionAllied;
		wxStaticText* stTextBattleParameterAbsorptionEnemy;
		wxTextCtrl* tcTextBattleParameterAbsorptionEnemy;
		wxStaticText* stTextBattleDefenseUp;
		wxTextCtrl* tcTextBattleDefenseUp;
		wxStaticText* stTextBattleDefenseDown;
		wxTextCtrl* tcTextBattleDefenseDown;
		wxStaticText* stTextBattleLevelUp;
		wxTextCtrl* tcTextBattleLevelUp;
		wxStaticText* stTextBattleLearnSkill;
		wxTextCtrl* tcTextBattleLearnSkill;
		wxPanel* pnTextCommerceMessages;
		wxTextCtrl* tcTextCommerceMessagesABuySelection;
		wxTextCtrl* tcTextCommerceMessagesABuySelectionSecondTimeAndLater;
		wxTextCtrl* tcTextCommerceMessagesABuy;
		wxTextCtrl* tcTextCommerceMessagesASell;
		wxTextCtrl* tcTextCommerceMessagesAExit;
		wxTextCtrl* tcTextCommerceMessagesAItemToBuySelection;
		wxTextCtrl* tcTextCommerceMessagesAItemToBuyNumberSelection;
		wxTextCtrl* tcTextCommerceMessagesABuyCompleted;
		wxTextCtrl* tcTextCommerceMessagesAItemToSellSelection;
		wxTextCtrl* tcTextCommerceMessagesAItemToSellNumberSelection;
		wxTextCtrl* tcTextCommerceMessagesASellCompleted;
		wxTextCtrl* tcTextCommerceMessagesBBuySelection;
		wxTextCtrl* tcTextCommerceMessagesBBuySelectionSecondTimeAndLater;
		wxTextCtrl* tcTextCommerceMessagesBBuy;
		wxTextCtrl* tcTextCommerceMessagesBSell;
		wxTextCtrl* tcTextCommerceMessagesBExit;
		wxTextCtrl* tcTextCommerceMessagesBItemToBuySelection;
		wxTextCtrl* tcTextCommerceMessagesBItemToBuyNumberSelection;
		wxTextCtrl* tcTextCommerceMessagesBBuyCompleted;
		wxTextCtrl* tcTextCommerceMessagesBItemToSellSelection;
		wxTextCtrl* tcTextCommerceMessagesBItemToSellNumberSelection;
		wxTextCtrl* tcTextCommerceMessagesBSellCompleted;
		wxPanel* pnTextCommerceAndInn;
		wxTextCtrl* tcTextCommerceMessagesCBuySelection;
		wxTextCtrl* tcTextCommerceMessagesCBuySelectionSecondTimeAndLater;
		wxTextCtrl* tcTextCommerceMessagesCBuy;
		wxTextCtrl* tcTextCommerceMessagesCSell;
		wxTextCtrl* tcTextCommerceMessagesCExit;
		wxTextCtrl* tcTextCommerceMessagesCItemToBuySelection;
		wxTextCtrl* tcTextCommerceMessagesCItemToBuyNumberSelection;
		wxTextCtrl* tcTextCommerceMessagesCBuyCompleted;
		wxTextCtrl* tcTextCommerceMessagesCItemToSellSelection;
		wxTextCtrl* tcTextCommerceMessagesCItemToSellNumberSelection;
		wxTextCtrl* tcTextCommerceMessagesCSellCompleted;
		wxTextCtrl* tcTextInnMessagesASelectedInn1;
		wxStaticText* stTextInnMessagesASelectedInn;
		wxTextCtrl* tcTextInnMessagesASelectedInn2;
		wxTextCtrl* tcTextInnMessagesASelectedInn3;
		wxTextCtrl* tcTextInnMessagesAStay;
		wxTextCtrl* tcTextInnMessagesADontStay;
		
		wxTextCtrl* tcTextInnMessagesBSelectedInn1;
		wxStaticText* stTextInnMessagesBSelectedInn;
		wxTextCtrl* tcTextInnMessagesBSelectedInn2;
		wxTextCtrl* tcTextInnMessagesBSelectedInn3;
		wxTextCtrl* tcTextInnMessagesBStay;
		wxTextCtrl* tcTextInnMessagesBDontStay;
		
		wxTextCtrl* tcTextCommercePossessedItems;
		wxTextCtrl* tcTextCommerceEquipedItems;
		wxTextCtrl* tcTextCommerceCurrency;
		
		wxPanel* pnTextParametersAndOther;
		wxTextCtrl* tcTextLevel;
		wxTextCtrl* tcTextLevelShorter;
		wxTextCtrl* tcTextHP;
		wxTextCtrl* tcTextHPShorter;
		wxTextCtrl* tcTextMP;
		wxTextCtrl* tcTextMPShorter;
		wxTextCtrl* tcTextNormal;
		wxTextCtrl* tcTextEXPShorter;
		wxTextCtrl* tcTextMPCost;
		wxTextCtrl* tcTextWeapons;
		wxTextCtrl* tcTextAttack;
		wxTextCtrl* tcTextShield;
		wxTextCtrl* tcTextDefense;
		wxTextCtrl* tcTextArmor;
		wxTextCtrl* tcTextIntelligence;
		wxTextCtrl* tcTextHelmet;
		wxTextCtrl* tcTextAgility;
		wxTextCtrl* tcTextOther;
		wxTextCtrl* tcTextCommandFight;
		wxTextCtrl* tcTextCommandAttack;
		wxTextCtrl* tcTextCommandEquipment;
		wxTextCtrl* tcTextCommandNewGame;
		wxTextCtrl* tcTextCommandAutomatic;
		wxTextCtrl* tcTextCommandDefense;
		wxTextCtrl* tcTextCommandSave;
		wxTextCtrl* tcTextCommandLoad;
		wxTextCtrl* tcTextCommandEscape;
		wxTextCtrl* tcTextCommandObjects;
		wxTextCtrl* tcTextCommandExit;
		wxTextCtrl* tcTextCommandEnd;
		
		wxTextCtrl* tcTextCommandSkills;
		
		
		wxTextCtrl* tcTextSaveSlotSelection;
		wxTextCtrl* tcTextLoadSlotSelection;
		wxTextCtrl* tcTextConfirmExit;
		wxTextCtrl* tcTextFile;
		wxTextCtrl* tcTextOK;
		wxTextCtrl* tcTextCancel;
		
	
	public:
		
		pnText_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnText_Base();
	
};

#endif //__gui_database_texts__
