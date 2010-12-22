///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_enemies__
#define __gui_database_enemies__

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
#include <wx/spinctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include <wx/listctrl.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnEnemy_Base
///////////////////////////////////////////////////////////////////////////////
class pnEnemy_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stEnemy;
		wxListBox* listEnemy;
		wxButton* btnEnemyMaxNumber;
		wxTextCtrl* tcEnemyName;
		wxSpinCtrl* spinEnemyMaxHP;
		wxSpinCtrl* spinEnemyAttack;
		wxSpinCtrl* spinEnemyIntelligence;
		wxSpinCtrl* spinEnemyMaxMP;
		wxSpinCtrl* spinEnemyDefense;
		wxSpinCtrl* spinEnemyAgility;
		wxStaticBitmap* bmpEnemyGraphic;
		wxCheckBox* chbEnemyGraphicTransparent;
		wxCheckBox* chbEnemyGraphicFlying;
		
		wxButton* btnEnemyGraphic;
		wxSpinCtrl* spinEnemyGetEXP;
		wxSpinCtrl* spinEnemyGetMoney;
		wxChoice* chEnemyGetItem;
		
		wxSpinCtrl* spinEnemyGetItemChance;
		wxStaticText* stEnemyGetItemChance;
		wxCheckBox* chbEnemyCriticalHitRate;
		wxSpinCtrl* spinEnemyCriticalHitRate;
		wxCheckBox* chbEnemyFailOften;
		wxListCtrl* lcEnemyActions;
		wxListBox* listEnemyAttributesResistance;
		wxListBox* listEnemyStatesResistance;
	
	public:
		
		pnEnemy_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnEnemy_Base();
	
};

#endif //__gui_database_enemies__
