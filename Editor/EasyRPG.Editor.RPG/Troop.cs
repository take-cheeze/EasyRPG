using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Troop : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private string name;
		private List<TroopMember> members;
		private List<bool> terrainSet;
		private List<TroopPage> pages;
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
		public List<TroopMember> Members
		{
			get { return members; }
			set { members = value; OnPropertyChanged("Members"); }
		}
		public List<bool> TerrainSet
		{
			get { return terrainSet; }
			set { terrainSet = value; OnPropertyChanged("TerrainSet"); }
		}
		public List<TroopPage> Pages
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
			members = new List<TroopMember>();
			terrainSet = new List<bool>();
			pages = new List<TroopPage>();
		}
		#endregion
	}
}
