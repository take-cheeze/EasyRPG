using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class MoveRoute : NotifyPropertyChanged
	{
		#region PrivateMembers
		private List<MoveCommand> moveCommands;
		private bool repeat;
		private bool skippable;
		#endregion

		#region PublicMembers
		public List<MoveCommand> MoveCommands
		{
			get { return moveCommands; }
			set { moveCommands = value; OnPropertyChanged("MoveCommands"); }
		}
		public bool Repeat
		{
			get { return repeat; }
			set { repeat = value; OnPropertyChanged("Repeat"); }
		}
		public bool Skippable
		{
			get { return skippable; }
			set { skippable = value; OnPropertyChanged("Skippable"); }
		}
		#endregion

		#region Constructor
		public MoveRoute()
		{
			moveCommands = new List<MoveCommand>();
			repeat = true;
			skippable = false;
		}
		#endregion
	}
}
