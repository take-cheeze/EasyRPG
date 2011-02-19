using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class ItemAnimation : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private int type;
		private int weaponAnim;
		private int movement;
		private int afterImage;
		private int attacks;
		private bool ranged;
		private int rangedAnim;
		private int rangedSpeed;
		private int battleAnim;
		#endregion

		#region PublicMembers
		public int Id
		{
			get { return id; }
			set { id = value; OnPropertyChanged("Id"); }
		}
		public int Type
		{
			get { return type; }
			set { type = value; OnPropertyChanged("Type"); }
		}
		public int WeaponAnim
		{
			get { return weaponAnim; }
			set { weaponAnim = value; OnPropertyChanged("WeaponAnim"); }
		}
		public int Movement
		{
			get { return movement; }
			set { movement = value; OnPropertyChanged("Movement"); }
		}
		public int AfterImage
		{
			get { return afterImage; }
			set { afterImage = value; OnPropertyChanged("AfterImage"); }
		}
		public int Attacks
		{
			get { return attacks; }
			set { attacks = value; OnPropertyChanged("Attacks"); }
		}
		public bool Ranged
		{
			get { return ranged; }
			set { ranged = value; OnPropertyChanged("Ranged"); }
		}
		public int RangedAnim
		{
			get { return rangedAnim; }
			set { rangedAnim = value; OnPropertyChanged("RangedAnim"); }
		}
		public int RangedSpeed
		{
			get { return rangedSpeed; }
			set { rangedSpeed = value; OnPropertyChanged("RangedSpeed"); }
		}
		public int BattleAnim
		{
			get { return battleAnim; }
			set { battleAnim = value; OnPropertyChanged("BattleAnim"); }
		}
		#endregion

		#region Constructor
		public ItemAnimation()
		{
			id = 0;
			type = 0;
			weaponAnim = 0;
			movement = 0;
			afterImage = 0;
			attacks = 0;
			ranged = false;
			rangedAnim = 0;
			rangedSpeed = 0;
			battleAnim = 0;
		}
		#endregion
	}
}
