using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class AnimationCellData : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int priority;
		private int id;
		private int x;
		private int y;
		private int zoom;
		private int toneRed;
		private int toneGreen;
		private int toneBlue;
		private int toneGray;
		private int opacity;
		#endregion

		#region PublicMembers
		public int Priority
		{
			get { return priority; }
			set { priority = value; OnPropertyChanged("Priority"); }
		}
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
		public int Zoom
		{
			get { return zoom; }
			set { zoom = value; OnPropertyChanged("Zoom"); }
		}
		public int ToneRed
		{
			get { return toneRed; }
			set { toneRed = value; OnPropertyChanged("ToneRed"); }
		}
		public int ToneGreen
		{
			get { return toneGreen; }
			set { toneGreen = value; OnPropertyChanged("ToneGreen"); }
		}
		public int ToneBlue
		{
			get { return toneBlue; }
			set { toneBlue = value; OnPropertyChanged("ToneBlue"); }
		}
		public int ToneGray
		{
			get { return toneGray; }
			set { toneGray = value; OnPropertyChanged("ToneGray"); }
		}
		public int Opacity
		{
			get { return opacity; }
			set { opacity = value; OnPropertyChanged("Opacity"); }
		}
		#endregion

		#region Constructor
		public AnimationCellData()
		{
			priority = 1;
			id = 1;
			x = 0;
			y = 0;
			zoom = 100;
			toneRed = 0;
			toneGreen = 0;
			toneBlue = 0;
			toneGray = 0;
			opacity = 0;
		}
		#endregion
	}
}
