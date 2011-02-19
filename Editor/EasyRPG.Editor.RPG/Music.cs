using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Music : NotifyPropertyChanged
	{
		#region PublicMembers
		private string name;
		private int fadein;
		private int volume;
		private int tempo;
		private int balance;
		#endregion

		#region PublicMembers
		public string Name
		{
			get { return name; }
			set { name = value; OnPropertyChanged("Name"); }
		}
		public int Fadein
		{
			get { return fadein; }
			set { fadein = value; OnPropertyChanged("Fadein"); }
		}
		public int Volume
		{
			get { return volume; }
			set { volume = value; OnPropertyChanged("Volume"); }
		}
		public int Tempo
		{
			get { return tempo; }
			set { tempo = value; OnPropertyChanged("Tempo"); }
		}
		public int Balance
		{
			get { return balance; }
			set { balance = value; OnPropertyChanged("Balance"); }
		}
		#endregion

		#region Constructor
		public Music()
		{
			name = "(OFF)";
			fadein = 0;
			volume = 100;
			tempo = 100;
			balance = 50;
		}
		#endregion
	}
}
