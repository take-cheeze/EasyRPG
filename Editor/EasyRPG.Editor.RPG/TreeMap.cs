using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class TreeMap : NotifyPropertyChanged
	{
		#region PrivateMembers
		private List<MapInfo> maps;
		private List<int> treeOrder;
		private int activeNode;
		private int startMapId;
		private int startX;
		private int startY;
		private int boatMapId;
		private int boatX;
		private int boatY;
		private int shipMapId;
		private int shipX;
		private int shipY;
		private int airshipMapId;
		private int airshipX;
		private int airshipY;
		#endregion

		#region PublicMembers
		public List<MapInfo> Maps
		{
			get { return maps; }
			set { maps = value; OnPropertyChanged("Maps"); }
		}
		public List<int> TreeOrder
		{
			get { return treeOrder; }
			set { treeOrder = value; OnPropertyChanged("TreeOrder"); }
		}
		public int ActiveNode
		{
			get { return activeNode; }
			set { activeNode = value; OnPropertyChanged("ActiveNode"); }
		}
		public int StartMapId
		{
			get { return startMapId; }
			set { startMapId = value; OnPropertyChanged("StartMapId"); }
		}
		public int StartX
		{
			get { return startX; }
			set { startX = value; OnPropertyChanged("StartX"); }
		}
		public int StartY
		{
			get { return startY; }
			set { startY = value; OnPropertyChanged("StartY"); }
		}
		public int BoatMapId
		{
			get { return boatMapId; }
			set { boatMapId = value; OnPropertyChanged("BoatMapId"); }
		}
		public int BoatX
		{
			get { return boatX; }
			set { boatX = value; OnPropertyChanged("BoatX"); }
		}
		public int BoatY
		{
			get { return boatY; }
			set { boatY = value; OnPropertyChanged("BoatY"); }
		}
		public int ShipMapId
		{
			get { return shipMapId; }
			set { shipMapId = value; OnPropertyChanged("ShipMapId"); }
		}
		public int ShipX
		{
			get { return shipX; }
			set { shipX = value; OnPropertyChanged("ShipX"); }
		}
		public int ShipY
		{
			get { return shipY; }
			set { shipY = value; OnPropertyChanged("ShipY"); }
		}
		public int AirshipMapId
		{
			get { return airshipMapId; }
			set { airshipMapId = value; OnPropertyChanged("AirshipMapId"); }
		}
		public int AirshipX
		{
			get { return airshipX; }
			set { airshipX = value; OnPropertyChanged("AirshipX"); }
		}
		public int AirshipY
		{
			get { return airshipY; }
			set { airshipY = value; OnPropertyChanged("AirshipY"); }
		}
		#endregion

		#region Constructor
		public TreeMap()
		{
			maps = new List<MapInfo>();
			treeOrder = new List<int>();
			activeNode = 0;
			startMapId = 0;
			startX = 0;
			startY = 0;
			boatMapId = 0;
			boatX = 0;
			boatY = 0;
			shipMapId = 0;
			shipX = 0;
			shipY = 0;
			airshipMapId = 0;
			airshipX = 0;
			airshipY = 0;
		}
		#endregion
	}
}
