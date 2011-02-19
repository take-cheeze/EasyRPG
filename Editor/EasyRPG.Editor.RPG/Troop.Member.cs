using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class TroopMember : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private int x;
		private int y;
		private bool middle;
		#endregion

		#region PublicMembers
		public int Id
		{
			get { return id; }
			set { id = value; OnPropertyChanged("Id"); }
		}
		public int X
		{
			get { return x; }
			set { x = value; OnPropertyChanged("X"); }
		}
		public int Y
		{
			get { return y; }
			set { y = value; OnPropertyChanged("Y"); }
		}
		public bool Middle
		{
			get { return middle; }
			set { middle = value; OnPropertyChanged("Middle"); }
		}
		#endregion

		#region Constructor
		public TroopMember()
		{
			id = 1;
			x = 0;
			y = 0;
			middle = false;
		}
		#endregion
	}
}
