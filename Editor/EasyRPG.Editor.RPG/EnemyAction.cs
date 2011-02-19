using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class EnemyAction : NotifyPropertyChanged
	{
		public enum KindType
		{
			Basic = 0,
			Skill = 1,
			Transformation = 2
		}
		public enum BasicType
		{
			Attack = 0,
			DualAttack = 1,
			Defense = 2,
			Observe = 3,
			Charge = 4,
			AutoDestruction = 5,
			Nothing = 6
		}
		public enum ConditionTypeEnum
		{
			Always = 0,
			Switch = 1,
			Turn = 2,
			Actors = 3,
			Hp = 4,
			Sp = 5,
			PartyLevel = 6,
			PartyFatigue = 7
		}

		#region PrivateMembers
		private KindType kind;
		private BasicType basic;
		private int skillId;
		private int enemyId;
		private ConditionTypeEnum conditionType;
		private int conditionParam1;
		private int conditionParam2;
		private int switchId;
		private bool switchOn;
		private int switchOnId;
		private bool switchOff;
		private int switchOffId;
		private int rating;
		#endregion

		#region PublicMembers
		public KindType Kind
		{
			get { return kind; }
			set { kind = value; OnPropertyChanged("Kind"); }
		}
		public BasicType Basic
		{
			get { return basic; }
			set { basic = value; OnPropertyChanged("Basic"); }
		}
		public int SkillId
		{
			get { return skillId; }
			set { skillId = value; OnPropertyChanged("SkillId"); }
		}
		public int EnemyId
		{
			get { return enemyId; }
			set { enemyId = value; OnPropertyChanged("EnemyId"); }
		}
		public ConditionTypeEnum ConditionType
		{
			get { return conditionType; }
			set { conditionType = value; OnPropertyChanged("ConditionType"); }
		}
		public int ConditionParam1
		{
			get { return conditionParam1; }
			set { conditionParam1 = value; OnPropertyChanged("ConditionParam1"); }
		}
		public int ConditionParam2
		{
			get { return conditionParam2; }
			set { conditionParam2 = value; OnPropertyChanged("ConditionParam2"); }
		}
		public int SwitchId
		{
			get { return switchId; }
			set { switchId = value; OnPropertyChanged("SwitchId"); }
		}
		public bool SwitchOn
		{
			get { return switchOn; }
			set { switchOn = value; OnPropertyChanged("SwitchOn"); }
		}
		public int SwitchOnId
		{
			get { return switchOnId; }
			set { switchOnId = value; OnPropertyChanged("SwitchOnId"); }
		}
		public bool SwitchOff
		{
			get { return switchOff; }
			set { switchOff = value; OnPropertyChanged("SwitchOff"); }
		}
		public int SwitchOffId
		{
			get { return switchOffId; }
			set { switchOffId = value; OnPropertyChanged("SwitchOffId"); }
		}
		public int Rating
		{
			get { return rating; }
			set { rating = value; OnPropertyChanged("Rating"); }
		}
		#endregion

		#region Constructor
		public EnemyAction()
		{
			kind = KindType.Basic;
			basic = BasicType.Attack;
			skillId = 1;
			enemyId = 1;
			conditionType = ConditionTypeEnum.Always;
			conditionParam1 = 0;
			conditionParam2 = 0;
			switchId = 1;
			switchOn = false;
			switchOnId = 1;
			switchOff = false;
			switchOffId = 1;
			rating = 50;
		}
		#endregion
	}
}
