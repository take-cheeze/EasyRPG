using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Enemy : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private string name;
		private string battlerName;
		private int battlerHue;
		private int maxHp;
		private int maxSp;
		private int attack;
		private int defense;
		private int spirit;
		private int agility;
		private bool transparent;
		private int exp;
		private int gold;
		private int dropId;
		private int dropProb;
		private bool criticalHit;
		private int criticalHitChance;
		private bool miss;
		private bool levitate;
		private ExtendedObservableCollection<byte> stateRanks;
		private ExtendedObservableCollection<byte> attributeRanks;
		private ExtendedObservableCollection<EnemyAction> actions;
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
		public string BattlerName
		{
			get { return battlerName; }
			set { battlerName = value; OnPropertyChanged("BattlerName"); }
		}
		public int BattlerHue
		{
			get { return battlerHue; }
			set { battlerHue = value; OnPropertyChanged("BattlerHue"); }
		}
		public int MaxHp
		{
			get { return maxHp; }
			set { maxHp = value; OnPropertyChanged("MaxHp"); }
		}
		public int MaxSp
		{
			get { return maxSp; }
			set { maxSp = value; OnPropertyChanged("MaxSp"); }
		}
		public int Attack
		{
			get { return attack; }
			set { attack = value; OnPropertyChanged("Attack"); }
		}
		public int Defense
		{
			get { return defense; }
			set { defense = value; OnPropertyChanged("Defense"); }
		}
		public int Spirit
		{
			get { return spirit; }
			set { spirit = value; OnPropertyChanged("Spirit"); }
		}
		public int Agility
		{
			get { return agility; }
			set { agility = value; OnPropertyChanged("Agility"); }
		}
		public bool Transparent
		{
			get { return transparent; }
			set { transparent = value; OnPropertyChanged("Transparent"); }
		}
		public int Exp
		{
			get { return exp; }
			set { exp = value; OnPropertyChanged("Exp"); }
		}
		public int Gold
		{
			get { return gold; }
			set { gold = value; OnPropertyChanged("Gold"); }
		}
		public int DropId
		{
			get { return dropId; }
			set { dropId = value; OnPropertyChanged("DropId"); }
		}
		public int DropProb
		{
			get { return dropProb; }
			set { dropProb = value; OnPropertyChanged("DropProb"); }
		}
		public bool CriticalHit
		{
			get { return criticalHit; }
			set { criticalHit = value; OnPropertyChanged("CriticalHit"); }
		}
		public int CriticalHitChance
		{
			get { return criticalHitChance; }
			set { criticalHitChance = value; OnPropertyChanged("CriticalHitChance"); }
		}
		public bool Miss
		{
			get { return miss; }
			set { miss = value; OnPropertyChanged("Miss"); }
		}
		public bool Levitate
		{
			get { return levitate; }
			set { levitate = value; OnPropertyChanged("Levitate"); }
		}
		public ExtendedObservableCollection<byte> StateRanks
		{
			get { return stateRanks; }
			set { stateRanks = value; OnPropertyChanged("StateRanks"); }
		}
		public ExtendedObservableCollection<byte> AttributeRanks
		{
			get { return attributeRanks; }
			set { attributeRanks = value; OnPropertyChanged("AttributeRanks"); }
		}
		public ExtendedObservableCollection<EnemyAction> Actions
		{
			get { return actions; }
			set { actions = value; OnPropertyChanged("Actions"); }
		}
		#endregion

		#region Constructor
		public Enemy()
		{
			id = 0;
			name = "";
			battlerName = "";
			battlerHue = 0;
			maxHp = 10;
			maxSp = 10;
			attack = 10;
			defense = 10;
			spirit = 10;
			agility = 10;
			transparent = false;
			exp = 0;
			gold = 0;
			dropId = 0;
			dropProb = 100;
			criticalHit = false;
			criticalHitChance = 30;
			miss = false;
			levitate = false;
			stateRanks = new ExtendedObservableCollection<byte>();
			attributeRanks = new ExtendedObservableCollection<byte>();
			actions = new ExtendedObservableCollection<EnemyAction>();
		}
		#endregion
	}
}
