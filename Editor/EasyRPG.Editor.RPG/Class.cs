using System.Collections.Generic;
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
		private List<short> parameterMaxhp;
		private List<short> parameterMaxsp;
		private List<short> parameterAttack;
		private List<short> parameterDefense;
		private List<short> parameterSpirit;
		private List<short> parameterAgility;
		private int expBase;
		private int expInflation;
		private int expCorrection;
		private int unarmedAnimation;
		private List<Learning> skills;
		private List<byte> stateRanks;
		private List<byte> attributeRanks;
		private List<uint> battleCommands;
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
		public List<short> ParameterMaxhp
		{
			get { return parameterMaxhp; }
			set { parameterMaxhp = value; OnPropertyChanged("ParameterMaxhp"); }
		}
		public List<short> ParameterMaxsp
		{
			get { return parameterMaxsp; }
			set { parameterMaxsp = value; OnPropertyChanged("ParameterMaxsp"); }
		}
		public List<short> ParameterAttack
		{
			get { return parameterAttack; }
			set { parameterAttack = value; OnPropertyChanged("ParameterAttack"); }
		}
		public List<short> ParameterDefense
		{
			get { return parameterDefense; }
			set { parameterDefense = value; OnPropertyChanged("ParameterDefense"); }
		}
		public List<short> ParameterSpirit
		{
			get { return parameterSpirit; }
			set { parameterSpirit = value; OnPropertyChanged("ParameterSpirit"); }
		}
		public List<short> ParameterAgility
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
		public List<Learning> Skills
		{
			get { return skills; }
			set { skills = value; OnPropertyChanged("Skills"); }
		}
		public List<byte> StateRanks
		{
			get { return stateRanks; }
			set { stateRanks = value; OnPropertyChanged("StateRanks"); }
		}
		public List<byte> AttributeRanks
		{
			get { return attributeRanks; }
			set { attributeRanks = value; OnPropertyChanged("AttributeRanks"); }
		}
		public List<uint> BattleCommands
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
			parameterMaxhp = new List<short>();
			parameterMaxsp = new List<short>();
			parameterAttack = new List<short>();
			parameterDefense = new List<short>();
			parameterSpirit = new List<short>();
			parameterAgility = new List<short>();
			expBase = 300;
			expInflation = 300;
			expCorrection = 0;
			unarmedAnimation = 0;
			skills = new List<Learning>();
			stateRanks = new List<byte>();
			attributeRanks = new List<byte>();
			battleCommands = new List<uint>();
		}
		#endregion
	}
}
