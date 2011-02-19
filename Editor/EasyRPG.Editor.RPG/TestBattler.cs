using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class TestBattler : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private int level;
		private int weaponId;
		private int shieldId;
		private int armorId;
		private int helmetId;
		private int accessoryId;
		#endregion

		#region PublicMembers
		public int Id
		{
			get { return id; }
			set { id = value; OnPropertyChanged("Id"); }
		}
		public int Level
		{
			get { return level; }
			set { level = value; OnPropertyChanged("Level"); }
		}
		public int WeaponId
		{
			get { return weaponId; }
			set { weaponId = value; OnPropertyChanged("WeaponId"); }
		}
		public int ShieldId
		{
			get { return shieldId; }
			set { shieldId = value; OnPropertyChanged("ShieldId"); }
		}
		public int ArmorId
		{
			get { return armorId; }
			set { armorId = value; OnPropertyChanged("ArmorId"); }
		}
		public int HelmetId
		{
			get { return helmetId; }
			set { helmetId = value; OnPropertyChanged("HelmetId"); }
		}
		public int AccessoryId
		{
			get { return accessoryId; }
			set { accessoryId = value; OnPropertyChanged("AccessoryId"); }
		}
		#endregion

		#region Constructor
		public TestBattler()
		{
			id = 1;
			level = 1;
			weaponId = 0;
			shieldId = 0;
			armorId = 0;
			helmetId = 0;
			accessoryId = 0;
		}
		#endregion
	}
}
