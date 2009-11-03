/* START ACTOR DATA BASE PAGE */

struct Point{
	int x;
	int y;
};

struct ActorCharaSet{
	int ID_Category; // enum{ID_CHARA, ID_ANIMATION}
	int ID_SubCategory; // Defined my user, example: enum {ID_Atack_Sword, ID_Attack_Bow}
	wxString GraphicFileName;
	Point WeaponMountPoint;
};

struct InitialEquipment{
	int ID_Item_Category; //Flags: enum{Weapon = 1, Shield, Armor, Head, Accesory, ... (Especified by User)}
	int ID_Item;
};

struct ActorSkills{
	int ID_Skill;
	int LearningLevel;
};

struct strActors{
	//Actor Representation Info
	wxString Name;
	wxString Job;
	int ID_CharaSet;
	int StartingLevel;
	int MaxLevel;
	bool CriticalHit;
	int CriticalChance;
	wxString FaceGraphic;
	//Actor Flags
	bool DualBlades;
	bool FixedEquipment;
	bool AutoFight;
	bool HighDefense;
	//Actor Curves
	int ID_HpCurve;
	int ID_MpCurve;
	int ID_AtkCurve;
	int ID_DefCurve;
	int ID_IntCurve;
	int ID_DexCurve;
	//Actor Experience Formula;
	int ID_ExpCurve;
	//Actor Initial Equipment
	std::vector<InitialEquipment> InitEquipment;
	int ID_NonWeaponHitAnimation;
	std::vector<ActorSkills> SkillList;
	bool RenameBattleCommand;
	wxString NewBattleCommandName;
	std::vector<char> ConditionsEndurance;
	std::vector<char> AttributeEffectiveness;
	void set_default(){
		Name = wxEmptyString;
		Job = wxEmptyString;
		StartingLevel = 1;
		MaxLevel = 50;
		CriticalHit = false;
		CriticalChance = 30;
		FaceGraphic = wxEmptyString;
		DualBlades = false;
		FixedEquipment = false;
		AutoFight = false;
		HighDefense = false;
		ID_HpCurve = -1;
		ID_MpCurve = -1;
		ID_AtkCurve = -1;
		ID_DefCurve = -1;
		ID_IntCurve = -1;
		ID_DexCurve = -1;
		ID_ExpCurve = -1;
		ID_NonWeaponHitAnimation = -1; //2003
		//Actor Initial Equipment
		RenameBattleCommand = false;
		NewBattleCommandName = wxEmptyString;
	};
};

/* END OF ACTOR DATA BASE PAGE */

/*START KILL DATABASE PAGE*/

struct strSkills{
	wxString Name;
	wxString Description;
	wxString _Caster_UseSkillText;
	wxString TextLine;
	int ID_SpellType;
	int MPConsumition;
	int ID_FailureMessage;
};

/* END OF SKILL DATA BASE PAGE (STILL NOT COMPLETE) */
