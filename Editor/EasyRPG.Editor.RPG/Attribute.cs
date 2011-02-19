using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Attribute : NotifyPropertyChanged
	{
		public enum AttributeType
		{
			Physical = 0,
			Magical = 1
		}

		#region PrivateMembers
		private int id;
		private string name;
		private AttributeType type;
		private int aRate;
		private int bRate;
		private int cRate;
		private int dRate;
		private int eRate;
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
		public AttributeType Type
		{
			get { return type; }
			set { type = value; OnPropertyChanged("Type"); }
		}
		public int ARate
		{
			get { return aRate; }
			set { aRate = value; OnPropertyChanged("ARate"); }
		}
		public int BRate
		{
			get { return bRate; }
			set { bRate = value; OnPropertyChanged("BRate"); }
		}
		public int CRate
		{
			get { return cRate; }
			set { cRate = value; OnPropertyChanged("CRate"); }
		}
		public int DRate
		{
			get { return dRate; }
			set { dRate = value; OnPropertyChanged("DRate"); }
		}
		public int ERate
		{
			get { return eRate; }
			set { eRate = value; OnPropertyChanged("ERate"); }
		}
		#endregion

		#region Constructor
		public Attribute()
		{
			id = 0;
			name = "";
			type = AttributeType.Physical;
			aRate = 300;
			bRate = 200;
			cRate = 100;
			dRate = 50;
			eRate = 0;
		}
		#endregion
	}
}
