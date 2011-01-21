///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_events_page_1__
#define __gui_events_page_1__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/dialog.h>
#include <wx/radiobox.h>
#include <wx/checkbox.h>
#include <wx/statbox.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/spinctrl.h>
#include <wx/radiobut.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/listbox.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdMessage_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdMessage_Base : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* tcMessage;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdMessage_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Show message"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdMessage_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdMessageOptions_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdMessageOptions_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbWindowType;
		wxRadioBox* rbWindowPosition;
		wxCheckBox* chbDoNotCoverPlayer;
		wxCheckBox* chbDoNotStopEvent;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdMessageOptions_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Message options"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdMessageOptions_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdFaceGraphic_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdFaceGraphic_Base : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* bmpFaceGraphic;
		wxButton* btnSelect;
		wxButton* btnDelete;
		wxRadioBox* rbPosition;
		wxCheckBox* chbHorizontalMirror;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdFaceGraphic_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Show face graphic"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdFaceGraphic_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdChoice_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdChoice_Base : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* tcOption1;
		wxTextCtrl* tcOption2;
		wxTextCtrl* tcOption3;
		wxTextCtrl* tcOption4;
		wxRadioBox* rbCancel;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdChoice_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Select option"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdChoice_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdNumberInput_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdNumberInput_Base : public wxDialog 
{
	private:
	
	protected:
		wxSpinCtrl* spinFigures;
		wxTextCtrl* tcVariable;
		wxButton* btnVariable;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdNumberInput_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Show number input"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdNumberInput_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdSwitch_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdSwitch_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnSwitch;
		wxTextCtrl* tcSwitch;
		wxButton* btnSwitch;
		wxRadioButton* rbtnRange;
		wxSpinCtrl* spinRange1;
		wxStaticText* stRange;
		wxSpinCtrl* spinRange2;
		wxRadioButton* rbtnVariable;
		wxTextCtrl* tcVariable;
		wxButton* btnVariable;
		wxRadioBox* rbOperation;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdSwitch_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Switch operations"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdSwitch_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdVariable_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdVariable_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnSet;
		wxTextCtrl* tcSwitchSet;
		wxButton* btnSwitchSet;
		
		wxRadioButton* rbtnoSwitchRange;
		wxSpinCtrl* spinSwitchRange1;
		wxStaticText* tcSwitchRange;
		wxSpinCtrl* spinSwitchRange2;
		
		wxRadioButton* rbtnSwitchVariable;
		wxTextCtrl* tcSwitchVariable;
		wxButton* btnSwitchVariable;
		wxStaticText* stSwitchVariable;
		wxRadioBox* rbOperation;
		wxRadioButton* rbtnOperandConstant;
		wxSpinCtrl* spinOperandConstant;
		
		wxRadioButton* rbtnOperandVariableA;
		wxTextCtrl* tcOperandVariableA;
		wxButton* btnOperandVariableA;
		
		wxRadioButton* rbtnOperandVariableB;
		wxTextCtrl* tcOperandVariableB;
		wxButton* btnOperandVariableB;
		wxStaticText* stOperandVarVaiableB;
		wxRadioButton* rbtnOperandRandom;
		wxSpinCtrl* spinOperandRandom1;
		wxSpinCtrl* spinOperandRandom2;
		
		wxRadioButton* rbtnOperandObject;
		wxChoice* chOperandObject;
		wxChoice* chOperandObject2;
		wxRadioButton* rbtnOperandActor;
		wxChoice* chOperandActor;
		wxChoice* chOperandActor2;
		wxRadioButton* rbtnOperandSprite;
		wxChoice* chOperandSprite;
		wxChoice* chOperandSprite2;
		wxRadioButton* rbtnOperandPut;
		wxChoice* chOperandPut;
		
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdVariable_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Variable operations"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdVariable_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdTimer_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdTimer_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxRadioButton* rbtnSet;
		wxSpinCtrl* spinMinutes;
		wxStaticText* stMinutes;
		wxSpinCtrl* spinSeconds;
		wxStaticText* stSeconds;
		wxRadioButton* rbtnVariable;
		wxTextCtrl* tcVariable;
		wxButton* btnVariable;
		wxCheckBox* chbShowScreen;
		wxCheckBox* chbShowBattle;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdTimer_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Timer operations"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdTimer_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdMoney_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdMoney_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxRadioButton* RadioConstant;
		wxSpinCtrl* SpinConstant;
		wxRadioButton* RadioVar;
		wxTextCtrl* TextVar;
		wxButton* BtnVar;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdMoney_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change money amount"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdMoney_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdItem_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdItem_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxRadioButton* rbtnObjectFixed;
		wxChoice* chObjectFixed;
		wxRadioButton* rbtnObjectVariable;
		wxTextCtrl* tcObjectVariable;
		wxButton* btnObjectVariable;
		wxRadioButton* rbtnOperandConstant;
		wxSpinCtrl* spinOperandConstant;
		wxRadioButton* rbtnOperandVariable;
		wxTextCtrl* tcOperandVariable;
		wxButton* btnOperandVariable;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdItem_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change item"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdItem_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdParty_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdParty_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxRadioButton* rbtnActorFixed;
		wxChoice* chActorFixed;
		wxRadioButton* rbtnActorVariable;
		wxTextCtrl* tcActorVariable;
		wxButton* btnActorVariable;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdParty_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change party"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdParty_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdExperience_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdExperience_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTargetFixed;
		wxRadioButton* rbtnTargetParty;
		
		wxChoice* chFixed;
		wxRadioButton* rbtnVariable;
		wxTextCtrl* tcTargetVariable;
		wxButton* btnTargetVariable;
		wxRadioBox* rbOperation;
		wxRadioButton* rbtnOperandConstant;
		wxSpinCtrl* spinOperandConstant;
		wxRadioButton* rbtnOperandVariable;
		wxTextCtrl* tcOperandVariable;
		wxButton* btnOperandVariable;
		wxCheckBox* chbShowMessage;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdExperience_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change experience"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdExperience_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdLevel_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdLevel_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTargetParty;
		
		wxRadioButton* rbtnTargetFixed;
		wxChoice* chTargetFixed;
		wxRadioButton* rbtnTargetVariable;
		wxTextCtrl* tcTargetVariable;
		wxButton* btnTargetVariable;
		wxRadioBox* rbOperation;
		wxRadioButton* rbtnOperandConstant;
		wxSpinCtrl* spinOperandConstant;
		wxRadioButton* rbtnOperandVariable;
		wxTextCtrl* tcOperandVariable;
		wxButton* btnOperandVariable;
		wxCheckBox* chbShowMessage;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdLevel_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change level"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdLevel_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdParameter_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdParameter_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTargetParty;
		
		wxRadioButton* rbtnTargetFixed;
		wxChoice* chTargetFixed;
		wxRadioButton* rbtnTargetVariable;
		wxTextCtrl* tcTargetVariable;
		wxButton* btnTargetVariable;
		wxRadioBox* rbOperation;
		wxChoice* chType;
		wxRadioButton* rbtnOperandConstant;
		wxSpinCtrl* spinOperandConstant;
		wxRadioButton* rbtnOperandVar;
		wxTextCtrl* tcOperandVariable;
		wxButton* btnOperandVariable;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdParameter_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change parameter"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdParameter_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdSkill_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdSkill_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTargetParty;
		
		wxRadioButton* rbtnTargetFixed;
		wxChoice* chTargetFixed;
		wxRadioButton* rbtnTargetVariable;
		wxTextCtrl* tcTargetVariable;
		wxButton* btnTargetVariable;
		wxRadioBox* rbOperation;
		wxRadioButton* rbtnOperandConstant;
		wxChoice* chOperandConstant;
		wxRadioButton* rbtnOperandVariable;
		wxTextCtrl* tcOperandVariable;
		wxButton* btnOperandVariable;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdSkill_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change skill"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdSkill_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdEquipment_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdEquipment_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTargetParty;
		
		wxRadioButton* rbtnTargetFixed;
		wxChoice* chTargetFixed;
		wxRadioButton* rbtnTargetVariable;
		wxTextCtrl* tcTargetVariable;
		wxButton* btnTargetVariable;
		wxRadioBox* rbOperation;
		wxRadioButton* rbtnOperandConstant;
		wxChoice* chOperandConstant;
		wxRadioButton* rbtnOperandVariable;
		wxTextCtrl* tcOperandVariable;
		wxButton* btnOperandVariable;
		wxRadioBox* rbRemove;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdEquipment_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change equipment"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdEquipment_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdHP_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdHP_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTargetParty;
		
		wxRadioButton* rbtnTargetFixed;
		wxChoice* chTargetFixed;
		wxRadioButton* rbtnTargetVariable;
		wxTextCtrl* tcTargetVariable;
		wxButton* btnTargetVariable;
		wxRadioBox* rbOperation;
		wxRadioButton* rbtnOperandConstant;
		wxSpinCtrl* spinOperandConstant;
		wxRadioButton* rbtnOperandVariable;
		wxTextCtrl* tcOperandVariable;
		wxButton* btnOperandVariable;
		wxCheckBox* chbAllowNoBattle;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdHP_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change HP"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdHP_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdMP_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdMP_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTargetParty;
		
		wxRadioButton* rbtnTargetFixed;
		wxChoice* chTargetFixed;
		wxRadioButton* rbtnTargetVariable;
		wxTextCtrl* tcTargetVariable;
		wxButton* btnTargetVariable;
		wxRadioBox* rbtnOperation;
		wxRadioButton* rbtnOperandConstant;
		wxSpinCtrl* spinOperandConstant;
		wxRadioButton* rbtnOperandVariable;
		wxTextCtrl* tcOperandVariable;
		wxButton* btnOperandVariable;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdMP_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change MP"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdMP_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdState_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdState_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTargetParty;
		
		wxRadioButton* rbtnTargetFixed;
		wxChoice* chTargetFixed;
		wxRadioButton* rbtnTargetVariable;
		wxTextCtrl* tcTargetVariable;
		wxButton* btnTargetVariable;
		wxRadioBox* rbOperation;
		wxChoice* chState;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdState_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change state"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdState_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdRecover_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdRecover_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTargetParty;
		
		wxRadioButton* rbtnTargetFixed;
		wxChoice* chTargetFixed;
		wxRadioButton* rbtnTargetVariable;
		wxTextCtrl* tcTargetVariable;
		wxButton* btnTargetVariable;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdRecover_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Full recover"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdRecover_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdDamage_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdDamage_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* rbtnTargetParty;
		
		wxRadioButton* rbtnTargetFixed;
		wxChoice* chTargetFixed;
		wxRadioButton* rbtnTargetVariable;
		wxTextCtrl* tcTargetVariable;
		wxButton* btnTargetVariable;
		wxSpinCtrl* spinAttack;
		wxSpinCtrl* spinDefense;
		wxStaticText* stDefense;
		wxSpinCtrl* spinIntelligence;
		wxStaticText* stInteligence;
		wxSpinCtrl* spinAttack2;
		wxCheckBox* chbVariableEnable;
		wxTextCtrl* tcVariable;
		wxButton* btnVariable;
		wxButton* btmOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdDamage_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Take damage"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdDamage_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdActorName_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdActorName_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chActor;
		wxTextCtrl* tcName;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdActorName_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change actor name"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdActorName_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdActorTitle_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdActorTitle_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chActor;
		wxTextCtrl* tcTitle;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdActorTitle_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change actor title"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdActorTitle_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdActorGraphic_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdActorGraphic_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chActor;
		wxStaticBitmap* bmpGraphic;
		wxCheckBox* chbTranslucent;
		wxButton* btnGraphic;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdActorGraphic_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change actor graphic"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdActorGraphic_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdActorFaceGraphic_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdActorFaceGraphic_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chActor;
		wxStaticBitmap* bmpFaceGraphic;
		wxButton* btnFaceGraphic;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdActorFaceGraphic_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change actor face graphic"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdActorFaceGraphic_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdVehicleGraphic_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdVehicleGraphic_Base : public wxDialog 
{
	private:
	
	protected:
		wxRadioBox* rbOperation;
		wxStaticBitmap* bmpVehicleGraphic;
		wxButton* btnVehicleGraphic;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdVehicleGraphic_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change vehicle graphic"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdVehicleGraphic_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdSystemMusic_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdSystemMusic_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chSystemMusic;
		wxTextCtrl* tcMusic;
		wxButton* btnMusic;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdSystemMusic_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change system music"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdSystemMusic_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdSystemSound_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdSystemSound_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chSystemSound;
		wxTextCtrl* tcSound;
		wxButton* btnSound;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdSystemSound_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change system sound"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdSystemSound_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdSystemGraphic_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdSystemGraphic_Base : public wxDialog 
{
	private:
	
	protected:
		wxListBox* listSystem;
		wxStaticBitmap* bmpSystem;
		wxRadioBox* rbBackground;
		wxRadioBox* rbFont;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdSystemGraphic_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change system graphic"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdSystemGraphic_Base();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgEvtCmdTransition_Base
///////////////////////////////////////////////////////////////////////////////
class dlgEvtCmdTransition_Base : public wxDialog 
{
	private:
	
	protected:
		wxChoice* chIn;
		wxChoice* chOut;
		wxButton* btnOK;
		wxButton* btnCancel;
		wxButton* btnHelp;
	
	public:
		
		dlgEvtCmdTransition_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change window transition"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER ); 
		~dlgEvtCmdTransition_Base();
	
};

#endif //__gui_events_page_1__
