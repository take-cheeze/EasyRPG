using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class MapInfo : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private string name;
		private int parentMap;
		private int type;
		private int musicType;
		private Music music;
		private int backgroundType;
		private string backgroundName;
		private int teleport;
		private int escape;
		private int save;
		private ExtendedObservableCollection<Encounter> encounters;
		private int encounterSteps;
		private int areaX;
		private int areaY;
		private int areaW;
		private int areaH;
		private int indentation;
		private int scrollbarX;
		private int scrollbarY;
		private bool expandedNode;
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
		public int ParentMap
		{
			get { return parentMap; }
			set { parentMap = value; OnPropertyChanged("ParentMap"); }
		}
		public int Type
		{
			get { return type; }
			set { type = value; OnPropertyChanged("Type"); }
		}
		public int MusicType
		{
			get { return musicType; }
			set { musicType = value; OnPropertyChanged("MusicType"); }
		}
		public Music Music
		{
			get { return music; }
			set { music = value; OnPropertyChanged("Music"); }
		}
		public int BackgroundType
		{
			get { return backgroundType; }
			set { backgroundType = value; OnPropertyChanged("BackgroundType"); }
		}
		public string BackgroundName
		{
			get { return backgroundName; }
			set { backgroundName = value; OnPropertyChanged("BackgroundName"); }
		}
		public int Teleport
		{
			get { return teleport; }
			set { teleport = value; OnPropertyChanged("Teleport"); }
		}
		public int Escape
		{
			get { return escape; }
			set { escape = value; OnPropertyChanged("Escape"); }
		}
		public int Save
		{
			get { return save; }
			set { save = value; OnPropertyChanged("Save"); }
		}
		public ExtendedObservableCollection<Encounter> Encounters
		{
			get { return encounters; }
			set { encounters = value; OnPropertyChanged("Encounters"); }
		}
		public int EncounterSteps
		{
			get { return encounterSteps; }
			set { encounterSteps = value; OnPropertyChanged("EncounterSteps"); }
		}
		public int AreaX
		{
			get { return areaX; }
			set { areaX = value; OnPropertyChanged("AreaX"); }
		}
		public int AreaY
		{
			get { return areaY; }
			set { areaY = value; OnPropertyChanged("AreaY"); }
		}
		public int AreaW
		{
			get { return areaW; }
			set { areaW = value; OnPropertyChanged("AreaW"); }
		}
		public int AreaH
		{
			get { return areaH; }
			set { areaH = value; OnPropertyChanged("AreaH"); }
		}
		public int Indentation
		{
			get { return indentation; }
			set { indentation = value; OnPropertyChanged("Indentation"); }
		}
		public int ScrollbarX
		{
			get { return scrollbarX; }
			set { scrollbarX = value; OnPropertyChanged("ScrollbarX"); }
		}
		public int ScrollbarY
		{
			get { return scrollbarY; }
			set { scrollbarY = value; OnPropertyChanged("ScrollbarY"); }
		}
		public bool ExpandedNode
		{
			get { return expandedNode; }
			set { expandedNode = value; OnPropertyChanged("ExpandedNode"); }
		}
		#endregion

		#region Constructor
		public MapInfo()
		{
			id = 0;
			name = "";
			parentMap = 0;
			type = 1;
			musicType = 0;
			music = new Music();
			backgroundType = 0;
			backgroundName = "";
			teleport = 0;
			escape = 0;
			save = 0;
			encounters = new ExtendedObservableCollection<Encounter>();
			encounterSteps = 25;
			areaX = 0;
			areaY = 0;
			areaW = 0;
			areaH = 0;
			indentation = 0;
			scrollbarX = 0;
			scrollbarY = 0;
			expandedNode = false;
		}
		#endregion
	}
}
