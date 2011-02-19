using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Sound : NotifyPropertyChanged
	{
		#region PrivateMembers
		private string name;
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
		public Sound()
		{
			name = "";
			volume = 100;
			tempo = 100;
			balance = 50;
		}
		#endregion
	}
}
