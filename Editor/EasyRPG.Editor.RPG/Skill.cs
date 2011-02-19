using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Skill : NotifyPropertyChanged
	{
		public enum SkillType
		{
			Normal = 0,
			Teleport = 1,
			Escape = 2,
			Switch = 3
		}
		public enum SpTypeEnum
		{
			Cost = 0,
			Percent = 1
		}
		public enum ScopeType
		{
			Enemy = 0,
			Enemies = 1,
			Self = 2,
			Ally = 3,
			Party = 4
		}

		#region PrivateMembers
		private int id;
		private string name;
		private SkillType type;
		private SpTypeEnum spType;
		private int spCost;
		private int spPercent;
		private string description;
		private ScopeType scope;
		private int animationId;
		private string usingMessage1;
		private string usingMessage2;
		private int failureMessage;
		private int pdefF;
		private int mdefF;
		private int variance;
		private int power;
		private int hit;
		private bool affectHp;
		private bool affectSp;
		private bool affectAttack;
		private bool affectDefense;
		private bool affectSpirit;
		private bool affectAgility;
		private bool absorbDamage;
		private bool ignoreDefense;
		private bool stateEffect;
		private List<bool> stateEffects;
		private List<bool> attributeEffects;
		private bool affectAttrDefence;
		private int battlerAnimation;
		private Sound soundEffect;
		private int switchId;
		private bool occasionField;
		private bool occasionBattle;
		private List<BattlerAnimationData> battlerAnimationData;
		#endregion

		#region PublicMembers
		public int Id
		{
			get { return id; }
			set { id = value; OnPropertyChanged("Id"); }
		}
		public string Name
		{
			get { return name; }
			set { name = value; OnPropertyChanged("Name"); }
		}
		public SkillType Type
		{
			get { return type; }
			set { type = value; OnPropertyChanged("Type"); }
		}
		public SpTypeEnum SpType // RPG2003
		{
			get { return spType; }
			set { spType = value; OnPropertyChanged("SpType"); }
		}
		public int SpCost
		{
			get { return spCost; }
			set { spCost = value; OnPropertyChanged("SpCost"); }
		}
		public int SpPercent // RPG2003
		{
			get { return spPercent; }
			set { spPercent = value; OnPropertyChanged("SpPercent"); }
		}
		public string Description
		{
			get { return description; }
			set { description = value; OnPropertyChanged("Description"); }
		}

		// Type == Normal
		public ScopeType Scope
		{
			get { return scope; }
			set { scope = value; OnPropertyChanged("Scope"); }
		}
		public int AnimationId
		{
			get { return animationId; }
			set { animationId = value; OnPropertyChanged("AnimationId"); }
		}
		public string UsingMessage1 // RPG2000
		{
			get { return usingMessage1; }
			set { usingMessage1 = value; OnPropertyChanged("UsingMessage1"); }
		}
		public string UsingMessage2 // RPG2000
		{
			get { return usingMessage2; }
			set { usingMessage2 = value; OnPropertyChanged("UsingMessage2"); }
		}
		public int FailureMessage // RPG2000
		{
			get { return failureMessage; }
			set { failureMessage = value; OnPropertyChanged("FailureMessage"); }
		}
		public int PdefF
		{
			get { return pdefF; }
			set { pdefF = value; OnPropertyChanged("PdefF"); }
		}
		public int MdefF
		{
			get { return mdefF; }
			set { mdefF = value; OnPropertyChanged("MdefF"); }
		}
		public int Variance
		{
			get { return variance; }
			set { variance = value; OnPropertyChanged("Variance"); }
		}
		public int Power
		{
			get { return power; }
			set { power = value; OnPropertyChanged("Power"); }
		}
		public int Hit
		{
			get { return hit; }
			set { hit = value; OnPropertyChanged("Hit"); }
		}
		public bool AffectHp
		{
			get { return affectHp; }
			set { affectHp = value; OnPropertyChanged("AffectHp"); }
		}
		public bool AffectSp
		{
			get { return affectSp; }
			set { affectSp = value; OnPropertyChanged("AffectSp"); }
		}
		public bool AffectAttack
		{
			get { return affectAttack; }
			set { affectAttack = value; OnPropertyChanged("AffectAttack"); }
		}
		public bool AffectDefense
		{
			get { return affectDefense; }
			set { affectDefense = value; OnPropertyChanged("AffectDefense"); }
		}
		public bool AffectSpirit
		{
			get { return affectSpirit; }
			set { affectSpirit = value; OnPropertyChanged("AffectSpirit"); }
		}
		public bool AffectAgility
		{
			get { return affectAgility; }
			set { affectAgility = value; OnPropertyChanged("AffectAgility"); }
		}
		public bool AbsorbDamage
		{
			get { return absorbDamage; }
			set { absorbDamage = value; OnPropertyChanged("AbsorbDamage"); }
		}
		public bool IgnoreDefense
		{
			get { return ignoreDefense; }
			set { ignoreDefense = value; OnPropertyChanged("IgnoreDefense"); }
		}
		public bool StateEffect // RPG2003
		{
			get { return stateEffect; }
			set { stateEffect = value; OnPropertyChanged("StateEffect"); }
		}
		public List<bool> StateEffects
		{
			get { return stateEffects; }
			set { stateEffects = value; OnPropertyChanged("StateEffects"); }
		}
		public List<bool> AttributeEffects
		{
			get { return attributeEffects; }
			set { attributeEffects = value; OnPropertyChanged("AttributeEffects"); }
		}
		public bool AffectAttrDefence
		{
			get { return affectAttrDefence; }
			set { affectAttrDefence = value; OnPropertyChanged("AffectAttrDefence"); }
		}
		public int BattlerAnimation // RPG2003
		{
			get { return battlerAnimation; }
			set { battlerAnimation = value; OnPropertyChanged("BattlerAnimation"); }
		}

		// Type == Teleport/Escape
		public Sound SoundEffect
		{
			get { return soundEffect; }
			set { soundEffect = value; OnPropertyChanged("SoundEffect"); }
		}

		// Type == Switch
		public int SwitchId
		{
			get { return switchId; }
			set { switchId = value; OnPropertyChanged("SwitchId"); }
		}
		public bool OccasionField
		{
			get { return occasionField; }
			set { occasionField = value; OnPropertyChanged("OccasionField"); }
		}
		public bool OccasionBattle
		{
			get { return occasionBattle; }
			set { occasionBattle = value; OnPropertyChanged("OccasionBattle"); }
		}

		public List<BattlerAnimationData> BattlerAnimationData // RPG2003
		{
			get { return battlerAnimationData; }
			set { battlerAnimationData = value; OnPropertyChanged("BattlerAnimationData"); }
		}
		#endregion

		#region Constructor
		public Skill()
		{
			id = 0;
			name = "";
			type = SkillType.Normal;
			spType = SpTypeEnum.Cost;
			spCost = 0;
			spPercent = 1;
			description = "";
			scope = ScopeType.Enemy;
			animationId = 0;
			usingMessage1 = "";
			usingMessage2 = "";
			failureMessage = 0;
			pdefF = 0;
			mdefF = 3;
			variance = 4;
			power = 0;
			hit = 100;
			affectHp = false;
			affectSp = false;
			affectAttack = false;
			affectDefense = false;
			affectSpirit = false;
			affectAgility = false;
			absorbDamage = false;
			ignoreDefense = false;
			stateEffect = false;
			stateEffects = new List<bool>();
			attributeEffects = new List<bool>();
			affectAttrDefence = false;
			battlerAnimation = 1;
			switchId = 1;
			occasionField = true;
			occasionBattle = false;
			battlerAnimationData = new List<BattlerAnimationData>();
		}
		#endregion
	}
}
