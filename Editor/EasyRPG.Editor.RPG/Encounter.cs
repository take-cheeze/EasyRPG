using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Encounter : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		#endregion

		#region PublicMembers
		public int Id
		{
			get { return id; }
			set { id = value; OnPropertyChanged("Id"); }
		}
		#endregion

		#region Constructor
		public Encounter()
		{
			id = 1;
		}
		#endregion
	}
}
