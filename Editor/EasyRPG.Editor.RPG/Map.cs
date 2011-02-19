using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Map : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private int chipsetId;
		private int width;
		private int height;
		private int scrollType;
		private bool parallaxFlag;
		private string parallaxName;
		private bool parallaxLoopX;
		private bool parallaxLoopY;
		private bool parallaxAutoLoopX;
		private int parallaxSx;
		private bool parallaxAutoLoopY;
		private int parallaxSy;
		private List<short> lowerLayer;
		private List<short> upperLayer;
		private List<Event> events;
		private int saveTimes;
		private bool topLevel;
		private bool generatorFlag;
		private int generatorMode;
		private int generatorTiles;
		private int generatorWidth;
		private int generatorHeight;
		private bool generatorSurround;
		private bool generatorUpperWall;
		private bool generatorFloorB;
		private bool generatorFloorC;
		private bool generatorExtraB;
		private bool generatorExtraC;
		private List<uint> generatorX;
		private List<uint> generatorY;
		private List<short> generatorTileIds;
		#endregion

		#region PublicMembers
		public int Id
		{
			get { return id; }
			set { id = value; OnPropertyChanged("Id"); }
		}
		public int ChipsetId
		{
			get { return chipsetId; }
			set { chipsetId = value; OnPropertyChanged("ChipsetId"); }
		}
		public int Width
		{
			get { return width; }
			set { width = value; OnPropertyChanged("Width"); }
		}
		public int Height
		{
			get { return height; }
			set { height = value; OnPropertyChanged("Height"); }
		}
		public int ScrollType
		{
			get { return scrollType; }
			set { scrollType = value; OnPropertyChanged("ScrollType"); }
		}
		public bool ParallaxFlag
		{
			get { return parallaxFlag; }
			set { parallaxFlag = value; OnPropertyChanged("ParallaxFlag"); }
		}
		public string ParallaxName
		{
			get { return parallaxName; }
			set { parallaxName = value; OnPropertyChanged("ParallaxName"); }
		}
		public bool ParallaxLoopX
		{
			get { return parallaxLoopX; }
			set { parallaxLoopX = value; OnPropertyChanged("ParallaxLoopX"); }
		}
		public bool ParallaxLoopY
		{
			get { return parallaxLoopY; }
			set { parallaxLoopY = value; OnPropertyChanged("ParallaxLoopY"); }
		}
		public bool ParallaxAutoLoopX
		{
			get { return parallaxAutoLoopX; }
			set { parallaxAutoLoopX = value; OnPropertyChanged("ParallaxAutoLoopX"); }
		}
		public int ParallaxSx
		{
			get { return parallaxSx; }
			set { parallaxSx = value; OnPropertyChanged("ParallaxSx"); }
		}
		public bool ParallaxAutoLoopY
		{
			get { return parallaxAutoLoopY; }
			set { parallaxAutoLoopY = value; OnPropertyChanged("ParallaxAutoLoopY"); }
		}
		public int ParallaxSy
		{
			get { return parallaxSy; }
			set { parallaxSy = value; OnPropertyChanged("ParallaxSy"); }
		}
		public List<short> LowerLayer
		{
			get { return lowerLayer; }
			set { lowerLayer = value; OnPropertyChanged("LowerLayer"); }
		}
		public List<short> UpperLayer
		{
			get { return upperLayer; }
			set { upperLayer = value; OnPropertyChanged("UpperLayer"); }
		}
		public List<Event> Events
		{
			get { return events; }
			set { events = value; OnPropertyChanged("Events"); }
		}
		public int SaveTimes
		{
			get { return saveTimes; }
			set { saveTimes = value; OnPropertyChanged("SaveTimes"); }
		}
		public bool TopLevel
		{
			get { return topLevel; }
			set { topLevel = value; OnPropertyChanged("TopLevel"); }
		}

		public bool GeneratorFlag
		{
			get { return generatorFlag; }
			set { generatorFlag = value; OnPropertyChanged("GeneratorFlag"); }
		}
		public int GeneratorMode
		{
			get { return generatorMode; }
			set { generatorMode = value; OnPropertyChanged("GeneratorMode"); }
		}
		public int GeneratorTiles
		{
			get { return generatorTiles; }
			set { generatorTiles = value; OnPropertyChanged("GeneratorTiles"); }
		}
		public int GeneratorWidth
		{
			get { return generatorWidth; }
			set { generatorWidth = value; OnPropertyChanged("GeneratorWidth"); }
		}
		public int GeneratorHeight
		{
			get { return generatorHeight; }
			set { generatorHeight = value; OnPropertyChanged("GeneratorHeight"); }
		}
		public bool GeneratorSurround
		{
			get { return generatorSurround; }
			set { generatorSurround = value; OnPropertyChanged("GeneratorSurround"); }
		}
		public bool GeneratorUpperWall
		{
			get { return generatorUpperWall; }
			set { generatorUpperWall = value; OnPropertyChanged("GeneratorUpperWall"); }
		}
		public bool GeneratorFloorB
		{
			get { return generatorFloorB; }
			set { generatorFloorB = value; OnPropertyChanged("GeneratorFloorB"); }
		}
		public bool GeneratorFloorC
		{
			get { return generatorFloorC; }
			set { generatorFloorC = value; OnPropertyChanged("GeneratorFloorC"); }
		}
		public bool GeneratorExtraB
		{
			get { return generatorExtraB; }
			set { generatorExtraB = value; OnPropertyChanged("GeneratorExtraB"); }
		}
		public bool GeneratorExtraC
		{
			get { return generatorExtraC; }
			set { generatorExtraC = value; OnPropertyChanged("GeneratorExtraC"); }
		}
		public List<uint> GeneratorX
		{
			get { return generatorX; }
			set { generatorX = value; OnPropertyChanged("GeneratorX"); }
		}
		public List<uint> GeneratorY
		{
			get { return generatorY; }
			set { generatorY = value; OnPropertyChanged("GeneratorY"); }
		}
		public List<short> GeneratorTileIds
		{
			get { return generatorTileIds; }
			set { generatorTileIds = value; OnPropertyChanged("GeneratorTileIds"); }
		}
		#endregion

		#region Constructor
		public Map()
		{
			id = 0;
			chipsetId = 1;
			width = 20;
			height = 15;
			scrollType = 0;
			parallaxFlag = false;
			parallaxName = "";
			parallaxLoopX = false;
			parallaxLoopY = false;
			parallaxAutoLoopX = false;
			parallaxSx = 0;
			parallaxAutoLoopY = false;
			parallaxSy = 0;
			lowerLayer = new List<short>();
			upperLayer = new List<short>();
			events = new List<Event>();
			saveTimes = 0;
			topLevel = false;

			generatorFlag = false;
			generatorMode = 0;
			generatorTiles = 0;
			generatorWidth = 4;
			generatorHeight = 1;
			generatorSurround = true;
			generatorUpperWall = true;
			generatorFloorB = true;
			generatorFloorC = true;
			generatorExtraB = true;
			generatorExtraC = true;
			generatorX = new List<uint>();
			generatorY = new List<uint>();
			generatorTileIds = new List<short>();
		}
		#endregion
	}
}
