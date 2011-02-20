using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Class : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private string name;
		private bool twoSwordsStyle;
		private bool fixEquipment;
		private bool autoBattle;
		private bool superGuard;
		private ExtendedObservableCollection<short> parameterMaxhp;
		private ExtendedObservableCollection<short> parameterMaxsp;
		private ExtendedObservableCollection<short> parameterAttack;
		private ExtendedObservableCollection<short> parameterDefense;
		private ExtendedObservableCollection<short> parameterSpirit;
		private ExtendedObservableCollection<short> parameterAgility;
		private int expBase;
		private int expInflation;
		private int expCorrection;
		private int unarmedAnimation;
		private ExtendedObservableCollection<Learning> skills;
		private ExtendedObservableCollection<byte> stateRanks;
		private ExtendedObservableCollection<byte> attributeRanks;
		private ExtendedObservableCollection<uint> battleCommands;
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
		public bool TwoSwordsStyle
		{
			get { return twoSwordsStyle; }
			set { twoSwordsStyle = value; OnPropertyChanged("TwoSwordsStyle"); }
		}
		public bool FixEquipment
		{
			get { return fixEquipment; }
			set { fixEquipment = value; OnPropertyChanged("FixEquipment"); }
		}
		public bool AutoBattle
		{
			get { return autoBattle; }
			set { autoBattle = value; OnPropertyChanged("AutoBattle"); }
		}
		public bool SuperGuard
		{
			get { return superGuard; }
			set { superGuard = value; OnPropertyChanged("SuperGuard"); }
		}
		public ExtendedObservableCollection<short> ParameterMaxhp
		{
			get { return parameterMaxhp; }
			set { parameterMaxhp = value; OnPropertyChanged("ParameterMaxhp"); }
		}
		public ExtendedObservableCollection<short> ParameterMaxsp
		{
			get { return parameterMaxsp; }
			set { parameterMaxsp = value; OnPropertyChanged("ParameterMaxsp"); }
		}
		public ExtendedObservableCollection<short> ParameterAttack
		{
			get { return parameterAttack; }
			set { parameterAttack = value; OnPropertyChanged("ParameterAttack"); }
		}
		public ExtendedObservableCollection<short> ParameterDefense
		{
			get { return parameterDefense; }
			set { parameterDefense = value; OnPropertyChanged("ParameterDefense"); }
		}
		public ExtendedObservableCollection<short> ParameterSpirit
		{
			get { return parameterSpirit; }
			set { parameterSpirit = value; OnPropertyChanged("ParameterSpirit"); }
		}
		public ExtendedObservableCollection<short> ParameterAgility
		{
			get { return parameterAgility; }
			set { parameterAgility = value; OnPropertyChanged("ParameterAgility"); }
		}
		public int ExpBase
		{
			get { return expBase; }
			set { expBase = value; OnPropertyChanged("ExpBase"); }
		}
		public int ExpInflation
		{
			get { return expInflation; }
			set { expInflation = value; OnPropertyChanged("ExpInflation"); }
		}
		public int ExpCorrection
		{
			get { return expCorrection; }
			set { expCorrection = value; OnPropertyChanged("ExpCorrection"); }
		}
		public int UnarmedAnimation
		{
			get { return unarmedAnimation; }
			set { unarmedAnimation = value; OnPropertyChanged("UnarmedAnimation"); }
		}
		public ExtendedObservableCollection<Learning> Skills
		{
			get { return skills; }
			set { skills = value; OnPropertyChanged("Skills"); }
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
		public ExtendedObservableCollection<uint> BattleCommands
		{
			get { return battleCommands; }
			set { battleCommands = value; OnPropertyChanged("BattleCommands"); }
		}
		#endregion

		#region Constructor
		public Class()
		{
			id = 0;
			name = "";
			twoSwordsStyle = false;
			fixEquipment = false;
			autoBattle = false;
			superGuard = false;
			parameterMaxhp = new ExtendedObservableCollection<short>();
			parameterMaxsp = new ExtendedObservableCollection<short>();
			parameterAttack = new ExtendedObservableCollection<short>();
			parameterDefense = new ExtendedObservableCollection<short>();
			parameterSpirit = new ExtendedObservableCollection<short>();
			parameterAgility = new ExtendedObservableCollection<short>();
			expBase = 300;
			expInflation = 300;
			expCorrection = 0;
			unarmedAnimation = 0;
			skills = new ExtendedObservableCollection<Learning>();
			stateRanks = new ExtendedObservableCollection<byte>();
			attributeRanks = new ExtendedObservableCollection<byte>();
			battleCommands = new ExtendedObservableCollection<uint>();
		}
		#endregion
	}
}
