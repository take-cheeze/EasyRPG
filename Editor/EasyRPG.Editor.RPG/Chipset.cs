using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Chipset : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private string name;
		private string chipsetName;
		private List<short> terrainData;
		private List<byte> passableDataLower;
		private List<byte> passableDataUpper;
		private int animationType;
		private int animationSpeed;
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
		public string ChipsetName
		{
			get { return chipsetName; }
			set { chipsetName = value; OnPropertyChanged("ChipsetName"); }
		}
		public List<short> TerrainData
		{
			get { return terrainData; }
			set { terrainData = value; OnPropertyChanged("TerrainData"); }
		}
		public List<byte> PassableDataLower
		{
			get { return passableDataLower; }
			set { passableDataLower = value; OnPropertyChanged("PassableDataLower"); }
		}
		public List<byte> PassableDataUpper
		{
			get { return passableDataUpper; }
			set { passableDataUpper = value; OnPropertyChanged("PassableDataUpper"); }
		}
		public int AnimationType
		{
			get { return animationType; }
			set { animationType = value; OnPropertyChanged("AnimationType"); }
		}
		public int AnimationSpeed
		{
			get { return animationSpeed; }
			set { animationSpeed = value; OnPropertyChanged("AnimationSpeed"); }
		}
		#endregion

		#region Constructor
		public Chipset()
		{
			id = 0;
			name = "";
			chipsetName = "";
			terrainData = new List<short>();
			passableDataLower = new List<byte>();
			passableDataUpper = new List<byte>();
			animationType = 0;
			animationSpeed = 0;
		}
		#endregion
	}
}
