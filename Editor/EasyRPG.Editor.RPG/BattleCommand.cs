using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class BattleCommand : NotifyPropertyChanged
	{
		public enum CommandType
		{
			Attack = 0,
			Skill = 1,
			Subskill = 2,
			Defense = 3,
			Item = 4,
			Escape = 5,
			Special = 6
		}

		#region PrivateMembers
		private int id;
		private string name;
		private CommandType type;
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
		public CommandType Type
		{
			get { return type; }
			set { type = value; OnPropertyChanged("Type"); }
		}
		#endregion

		#region Constructor
		public BattleCommand()
		{
			id = 0;
			name = "";
			type = CommandType.Attack;
		}
		#endregion
	}
}
