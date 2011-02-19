using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Item : NotifyPropertyChanged
	{
		public enum ItemType
		{
			Normal = 0,
			Weapon = 1,
			Shield = 2,
			Armor = 3,
			Helmet = 4,
			Accesssory = 5,
			Medicine = 6,
			Book = 7,
			Material = 8,
			Special = 9,
			Switch = 10
		}

		#region PrivateMembers
		private int id;
		private string name;
		private string description;
		private ItemType type;
		private int price;
		private List<bool> actorSet;
		private List<bool> classSet;
		private int uses;
		private int atkPoints;
		private int defPoints;
		private int spiPoints;
		private int agiPoints;
		private List<bool> attributeSet;
		private List<bool> stateSet;
		private bool stateEffect;
		private int stateChance;
		private bool cursed;
		private bool twoHanded;
		private int spCost;
		private int hit;
		private int criticalHit;
		private int animationId;
		private bool preemptive;
		private bool dualAttack;
		private bool attackAll;
		private bool ignoreEvasion;
		private int weaponAnimation;
		private bool useSkill;
		private int rangedTrajectory;
		private int rangedTarget;
		private bool preventCritical;
		private bool raiseEvasion;
		private bool halfSpCost;
		private bool noTerrainDamage;
		private bool entireParty;
		private int recoverHp;
		private int recoverHpRate;
		private int recoverSp;
		private int recoverSpRate;
		private bool ocassionField;
		private bool koOnly;
		private int skillId;
		private int usingMesssage;
		private int maxHpPoints;
		private int maxSpPoints;
		private int switchId;
		private bool ocassionBattle;
		private List<ItemAnimation> animationData;
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
		public string Description
		{
			get { return description; }
			set { description = value; OnPropertyChanged("Description"); }
		}
		public ItemType Type
		{
			get { return type; }
			set { type = value; OnPropertyChanged("Type"); }
		}
		public int Price
		{
			get { return price; }
			set { price = value; OnPropertyChanged("Price"); }
		}
		public List<bool> ActorSet
		{
			get { return actorSet; }
			set { actorSet = value; OnPropertyChanged("ActorSet"); }
		}
		public List<bool> ClassSet // RPG2003
		{
			get { return classSet; }
			set { classSet = value; OnPropertyChanged("ClassSet"); }
		}
		public int Uses // Consumables only
		{
			get { return uses; }
			set { uses = value; OnPropertyChanged("Uses"); }
		}

		// Equipable
		public int AtkPoints
		{
			get { return atkPoints; }
			set { atkPoints = value; OnPropertyChanged("AtkPoints"); }
		}
		public int DefPoints
		{
			get { return defPoints; }
			set { defPoints = value; OnPropertyChanged("DefPoints"); }
		}
		public int SpiPoints
		{
			get { return spiPoints; }
			set { spiPoints = value; OnPropertyChanged("SpiPoints"); }
		}
		public int AgiPoints
		{
			get { return agiPoints; }
			set { agiPoints = value; OnPropertyChanged("AgiPoints"); }
		}
		public List<bool> AttributeSet
		{
			get { return attributeSet; }
			set { attributeSet = value; OnPropertyChanged("AttributeSet"); }
		}
		public List<bool> StateSet
		{
			get { return stateSet; }
			set { stateSet = value; OnPropertyChanged("StateSet"); }
		}
		public bool StateEffect // RPG2003
		{
			get { return stateEffect; }
			set { stateEffect = value; OnPropertyChanged("StateEffect"); }
		}
		public int StateChance
		{
			get { return stateChance; }
			set { stateChance = value; OnPropertyChanged("StateChance"); }
		}
		public bool Cursed // RPG2003
		{
			get { return cursed; }
			set { cursed = value; OnPropertyChanged("Cursed"); }
		}

		public bool TwoHanded
		{
			get { return twoHanded; }
			set { twoHanded = value; OnPropertyChanged("TwoHanded"); }
		}
		public int SpCost
		{
			get { return spCost; }
			set { spCost = value; OnPropertyChanged("SpCost"); }
		}
		public int Hit
		{
			get { return hit; }
			set { hit = value; OnPropertyChanged("Hit"); }
		}
		public int CriticalHit
		{
			get { return criticalHit; }
			set { criticalHit = value; OnPropertyChanged("CriticalHit"); }
		}
		public int AnimationId
		{
			get { return animationId; }
			set { animationId = value; OnPropertyChanged("AnimationId"); }
		}
		public bool Preemptive
		{
			get { return preemptive; }
			set { preemptive = value; OnPropertyChanged("Preemptive"); }
		}
		public bool DualAttack
		{
			get { return dualAttack; }
			set { dualAttack = value; OnPropertyChanged("DualAttack"); }
		}
		public bool AttackAll
		{
			get { return attackAll; }
			set { attackAll = value; OnPropertyChanged("AttackAll"); }
		}
		public bool IgnoreEvasion
		{
			get { return ignoreEvasion; }
			set { ignoreEvasion = value; OnPropertyChanged("IgnoreEvasion"); }
		}
		public int WeaponAnimation // RPG2003
		{
			get { return weaponAnimation; }
			set { weaponAnimation = value; OnPropertyChanged("WeaponAnimation"); }
		}
		public bool UseSkill // RPG2003
		{
			get { return useSkill; }
			set { useSkill = value; OnPropertyChanged("UseSkill"); }
		}
		public int RangedTrajectory // RPG2003
		{
			get { return rangedTrajectory; }
			set { rangedTrajectory = value; OnPropertyChanged("RangedTrajectory"); }
		}
		public int RangedTarget // RPG2003
		{
			get { return rangedTarget; }
			set { rangedTarget = value; OnPropertyChanged("RangedTarget"); }
		}

		// Shield Armor Head Other
		public bool PreventCritical
		{
			get { return preventCritical; }
			set { preventCritical = value; OnPropertyChanged("PreventCritical"); }
		}
		public bool RaiseEvasion
		{
			get { return raiseEvasion; }
			set { raiseEvasion = value; OnPropertyChanged("RaiseEvasion"); }
		}
		public bool HalfSpCost
		{
			get { return halfSpCost; }
			set { halfSpCost = value; OnPropertyChanged("HalfSpCost"); }
		}
		public bool NoTerrainDamage
		{
			get { return noTerrainDamage; }
			set { noTerrainDamage = value; OnPropertyChanged("NoTerrainDamage"); }
		}

		// Medicine
		public bool EntireParty
		{
			get { return entireParty; }
			set { entireParty = value; OnPropertyChanged("EntireParty"); }
		}
		public int RecoverHp
		{
			get { return recoverHp; }
			set { recoverHp = value; OnPropertyChanged("RecoverHp"); }
		}
		public int RecoverHpRate
		{
			get { return recoverHpRate; }
			set { recoverHpRate = value; OnPropertyChanged("RecoverHpRate"); }
		}
		public int RecoverSp
		{
			get { return recoverSp; }
			set { recoverSp = value; OnPropertyChanged("RecoverSp"); }
		}
		public int RecoverSpRate
		{
			get { return recoverSpRate; }
			set { recoverSpRate = value; OnPropertyChanged("RecoverSpRate"); }
		}
		public bool OcassionField // Switch
		{
			get { return ocassionField; }
			set { ocassionField = value; OnPropertyChanged("OcassionField"); }
		}
		public bool KoOnly
		{
			get { return koOnly; }
			set { koOnly = value; OnPropertyChanged("KoOnly"); }
		}

		// Book - Unique
		public int SkillId
		{
			get { return skillId; }
			set { skillId = value; OnPropertyChanged("SkillId"); }
		}
		public int UsingMesssage
		{
			get { return usingMesssage; }
			set { usingMesssage = value; OnPropertyChanged("UsingMesssage"); }
		}

		// Material (See also Equipable *_points)
		public int MaxHpPoints
		{
			get { return maxHpPoints; }
			set { maxHpPoints = value; OnPropertyChanged("MaxHpPoints"); }
		}
		public int MaxSpPoints
		{
			get { return maxSpPoints; }
			set { maxSpPoints = value; OnPropertyChanged("MaxSpPoints"); }
		}

		// Switch
		public int SwitchId
		{
			get { return switchId; }
			set { switchId = value; OnPropertyChanged("SwitchId"); }
		}
		public bool OcassionBattle
		{
			get { return ocassionBattle; }
			set { ocassionBattle = value; OnPropertyChanged("OcassionBattle"); }
		}

		public List<ItemAnimation> AnimationData
		{
			get { return animationData; }
			set { animationData = value; OnPropertyChanged("AnimationData"); }
		}
		#endregion

		#region Constructor
		public Item()
		{
			id = 0;
			name = "";
			description = "";
			type = ItemType.Normal;
			price = 0;
			actorSet = new List<bool>();
			classSet = new List<bool>();
			uses = 1;
			atkPoints = 0;
			defPoints = 0;
			spiPoints = 0;
			agiPoints = 0;
			attributeSet = new List<bool>();
			stateSet = new List<bool>();
			stateEffect = false;
			stateChance = 0;
			cursed = false;
			twoHanded = false;
			spCost = 0;
			hit = 90;
			criticalHit = 0;
			animationId = 1;
			preemptive = false;
			dualAttack = false;
			attackAll = false;
			ignoreEvasion = false;
			weaponAnimation = 1;
			useSkill = false;
			rangedTrajectory = 0;
			rangedTarget = 0;
			preventCritical = false;
			raiseEvasion = false;
			halfSpCost = false;
			noTerrainDamage = false;
			entireParty = false;
			recoverHp = 0;
			recoverHpRate = 0;
			recoverSp = 0;
			recoverSpRate = 0;
			ocassionField = false;
			koOnly = false;
			skillId = 1;
			usingMesssage = 0;
			maxHpPoints = 0;
			maxSpPoints = 0;
			switchId = 1;
			ocassionBattle = false;
			animationData = new List<ItemAnimation>();
		}
		#endregion
	}
}
