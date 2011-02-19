using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class BattlerAnimation : NotifyPropertyChanged
	{
		public enum SpeedType
		{
			Slow = 0,
			Normal = 8,
			Fast = 14
		}

		#region PrivateMembers
		private int id;
		private string name;
		private SpeedType speed;
		private List<BattlerAnimationExtension> baseData;
		private List<BattlerAnimationExtension> weaponData;
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
		public SpeedType Speed
		{
			get { return speed; }
			set { speed = value; OnPropertyChanged("Speed"); }
		}
		public List<BattlerAnimationExtension> BaseData
		{
			get { return baseData; }
			set { baseData = value; OnPropertyChanged("BaseData"); }
		}
		public List<BattlerAnimationExtension> WeaponData
		{
			get { return weaponData; }
			set { weaponData = value; OnPropertyChanged("WeaponData"); }
		}
		#endregion

		#region Constructor
		public BattlerAnimation()
		{
			id = 0;
			name = "";
			speed = SpeedType.Slow;
			baseData = new List<BattlerAnimationExtension>();
			weaponData = new List<BattlerAnimationExtension>();
		}
		#endregion
	}
}
