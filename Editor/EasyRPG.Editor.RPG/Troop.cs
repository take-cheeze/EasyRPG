using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Troop : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private string name;
		private ExtendedObservableCollection<TroopMember> members;
		private ExtendedObservableCollection<bool> terrainSet;
		private ExtendedObservableCollection<TroopPage> pages;
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
		public ExtendedObservableCollection<TroopMember> Members
		{
			get { return members; }
			set { members = value; OnPropertyChanged("Members"); }
		}
		public ExtendedObservableCollection<bool> TerrainSet
		{
			get { return terrainSet; }
			set { terrainSet = value; OnPropertyChanged("TerrainSet"); }
		}
		public ExtendedObservableCollection<TroopPage> Pages
		{
			get { return pages; }
			set { pages = value; OnPropertyChanged("Pages"); }
		}
		#endregion

		#region Constructor
		public Troop()
		{
			id = 0;
			name = "";
			members = new ExtendedObservableCollection<TroopMember>();
			terrainSet = new ExtendedObservableCollection<bool>();
			pages = new ExtendedObservableCollection<TroopPage>();
		}
		#endregion
	}
}
