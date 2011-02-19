using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class State : NotifyPropertyChanged
	{
		public enum StateType
		{
			Battle = 0,
			Map = 1
		}
		public enum RestrictionType
		{
			Normal = 0,
			DoNothing = 1,
			AttackEnemy = 2,
			AttackAlly = 3
		}
		public enum AffectTypeEnum
		{
			Nothing = 0,
			Doble = 1,
			Half = 2
		}
		public enum ChangeType
		{
			Nothing = 0,
			Plus = 1,
			Minus = 2
		}

		#region PrivateMembers
		private int id;
		private string name;
		private StateType type;
		private int color;
		private int priority;
		private RestrictionType restriction;
		private int aRate;
		private int bRate;
		private int cRate;
		private int dRate;
		private int eRate;
		private int holdTurn;
		private int autoReleaseProb;
		private int releaseByDamage;
		private AffectTypeEnum affectType;
		private bool affectAttack;
		private bool affectDefense;
		private bool affectSpirit;
		private bool affectAgility;
		private int reduceHitRatio;
		private bool avoidAttacks;
		private bool reflectMagic;
		private bool cursed;
		private int battlerAnimationId;
		private bool restrictSkill;
		private int restrictSkillLevel;
		private bool restrictMagic;
		private int restrictMagicLevel;
		private ChangeType hpChangeType;
		private ChangeType spChangeType;
		private string messageActor;
		private string messageEnemy;
		private string messageAlready;
		private string messageAffected;
		private string messageRecovery;
		private int hpChangeMax;
		private int hpChangeVal;
		private int hpChangeMapVal;
		private int hpChangeMapSteps;
		private int spChangeMax;
		private int spChangeVal;
		private int spChangeMapVal;
		private int spChangeMapSteps;
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
		public StateType Type
		{
			get { return type; }
			set { type = value; OnPropertyChanged("Type"); }
		}
		public int Color
		{
			get { return color; }
			set { color = value; OnPropertyChanged("Color"); }
		}
		public int Priority
		{
			get { return priority; }
			set { priority = value; OnPropertyChanged("Priority"); }
		}
		public RestrictionType Restriction
		{
			get { return restriction; }
			set { restriction = value; OnPropertyChanged("Restriction"); }
		}
		public int ARate
		{
			get { return aRate; }
			set { aRate = value; OnPropertyChanged("ARate"); }
		}
		public int BRate
		{
			get { return bRate; }
			set { bRate = value; OnPropertyChanged("BRate"); }
		}
		public int CRate
		{
			get { return cRate; }
			set { cRate = value; OnPropertyChanged("CRate"); }
		}
		public int DRate
		{
			get { return dRate; }
			set { dRate = value; OnPropertyChanged("DRate"); }
		}
		public int ERate
		{
			get { return eRate; }
			set { eRate = value; OnPropertyChanged("ERate"); }
		}
		public int HoldTurn
		{
			get { return holdTurn; }
			set { holdTurn = value; OnPropertyChanged("HoldTurn"); }
		}
		public int AutoReleaseProb
		{
			get { return autoReleaseProb; }
			set { autoReleaseProb = value; OnPropertyChanged("AutoReleaseProb"); }
		}
		public int ReleaseByDamage
		{
			get { return releaseByDamage; }
			set { releaseByDamage = value; OnPropertyChanged("ReleaseByDamage"); }
		}
		public AffectTypeEnum AffectType
		{
			get { return affectType; }
			set { affectType = value; OnPropertyChanged("AffectType"); }
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
		public int ReduceHitRatio
		{
			get { return reduceHitRatio; }
			set { reduceHitRatio = value; OnPropertyChanged("ReduceHitRatio"); }
		}
		public bool AvoidAttacks
		{
			get { return avoidAttacks; }
			set { avoidAttacks = value; OnPropertyChanged("AvoidAttacks"); }
		}
		public bool ReflectMagic
		{
			get { return reflectMagic; }
			set { reflectMagic = value; OnPropertyChanged("ReflectMagic"); }
		}
		public bool Cursed
		{
			get { return cursed; }
			set { cursed = value; OnPropertyChanged("Cursed"); }
		}
		public int BattlerAnimationId
		{
			get { return battlerAnimationId; }
			set { battlerAnimationId = value; OnPropertyChanged("BattlerAnimationId"); }
		}
		public bool RestrictSkill
		{
			get { return restrictSkill; }
			set { restrictSkill = value; OnPropertyChanged("RestrictSkill"); }
		}
		public int RestrictSkillLevel
		{
			get { return restrictSkillLevel; }
			set { restrictSkillLevel = value; OnPropertyChanged("RestrictSkillLevel"); }
		}
		public bool RestrictMagic
		{
			get { return restrictMagic; }
			set { restrictMagic = value; OnPropertyChanged("RestrictMagic"); }
		}
		public int RestrictMagicLevel
		{
			get { return restrictMagicLevel; }
			set { restrictMagicLevel = value; OnPropertyChanged("RestrictMagicLevel"); }
		}
		public ChangeType HpChangeType
		{
			get { return hpChangeType; }
			set { hpChangeType = value; OnPropertyChanged("HpChangeType"); }
		}
		public ChangeType SpChangeType
		{
			get { return spChangeType; }
			set { spChangeType = value; OnPropertyChanged("SpChangeType"); }
		}
		public string MessageActor
		{
			get { return messageActor; }
			set { messageActor = value; OnPropertyChanged("MessageActor"); }
		}
		public string MessageEnemy
		{
			get { return messageEnemy; }
			set { messageEnemy = value; OnPropertyChanged("MessageEnemy"); }
		}
		public string MessageAlready
		{
			get { return messageAlready; }
			set { messageAlready = value; OnPropertyChanged("MessageAlready"); }
		}
		public string MessageAffected
		{
			get { return messageAffected; }
			set { messageAffected = value; OnPropertyChanged("MessageAffected"); }
		}
		public string MessageRecovery
		{
			get { return messageRecovery; }
			set { messageRecovery = value; OnPropertyChanged("MessageRecovery"); }
		}
		public int HpChangeMax
		{
			get { return hpChangeMax; }
			set { hpChangeMax = value; OnPropertyChanged("HpChangeMax"); }
		}
		public int HpChangeVal
		{
			get { return hpChangeVal; }
			set { hpChangeVal = value; OnPropertyChanged("HpChangeVal"); }
		}
		public int HpChangeMapVal
		{
			get { return hpChangeMapVal; }
			set { hpChangeMapVal = value; OnPropertyChanged("HpChangeMapVal"); }
		}
		public int HpChangeMapSteps
		{
			get { return hpChangeMapSteps; }
			set { hpChangeMapSteps = value; OnPropertyChanged("HpChangeMapSteps"); }
		}
		public int SpChangeMax
		{
			get { return spChangeMax; }
			set { spChangeMax = value; OnPropertyChanged("SpChangeMax"); }
		}
		public int SpChangeVal
		{
			get { return spChangeVal; }
			set { spChangeVal = value; OnPropertyChanged("SpChangeVal"); }
		}
		public int SpChangeMapVal
		{
			get { return spChangeMapVal; }
			set { spChangeMapVal = value; OnPropertyChanged("SpChangeMapVal"); }
		}
		public int SpChangeMapSteps
		{
			get { return spChangeMapSteps; }
			set { spChangeMapSteps = value; OnPropertyChanged("SpChangeMapSteps"); }
		}
		#endregion

		#region Constructor
		public State()
		{
			id = 0;
			name = "";
			type = StateType.Battle;
			color = 6;
			priority = 50;
			restriction = RestrictionType.Normal;
			aRate = 100;
			bRate = 80;
			cRate = 60;
			dRate = 30;
			eRate = 0;
			holdTurn = 0;
			autoReleaseProb = 0;
			releaseByDamage = 0;
			affectType = AffectTypeEnum.Nothing;
			affectAttack = false;
			affectDefense = false;
			affectSpirit = false;
			affectAgility = false;
			reduceHitRatio = 100;
			avoidAttacks = false;
			reflectMagic = false;
			cursed = false;
			battlerAnimationId = 100;
			restrictSkill = false;
			restrictSkillLevel = 0;
			restrictMagic = false;
			restrictMagicLevel = 0;
			hpChangeType = ChangeType.Nothing;
			spChangeType = ChangeType.Nothing;
			messageActor = "";
			messageEnemy = "";
			messageAlready = "";
			messageAffected = "";
			messageRecovery = "";
			hpChangeMax = 0;
			hpChangeVal = 0;
			hpChangeMapVal = 0;
			hpChangeMapSteps = 0;
			spChangeMax = 0;
			spChangeVal = 0;
			spChangeMapVal = 0;
			spChangeMapSteps = 0;
		}
		#endregion
	}
}
