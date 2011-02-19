using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Event : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private string name;
		private int x;
		private int y;
		private List<EventPage> pages;
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
		public List<EventPage> Pages
		{
			get { return pages; }
			set { pages = value; OnPropertyChanged("Pages"); }
		}
		#endregion

		#region Constructor
		public Event()
		{
			id = 0;
			name = "";
			x = 0;
			y = 0;
			pages = new List<EventPage>();
		}
		#endregion
	}
}
