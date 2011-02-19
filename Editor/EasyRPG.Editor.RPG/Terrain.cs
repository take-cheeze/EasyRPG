using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Terrain : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private string name;
		private int damage;
		private int encounterRate;
		private string backgroundName;
		private bool boatPass;
		private bool shipPass;
		private bool airshipPass;
		private bool airshipLand;
		private int bushDepth;
		private Sound footstep;
		private bool onDamageSe;
		private int backgroundType;
		private string backgroundAName;
		private bool backgroundAScrollH;
		private bool backgroundAScrollV;
		private int backgroundAScrollHSpeed;
		private int backgroundAScrollVSpeed;
		private bool backgroundB;
		private string backgroundBName;
		private bool backgroundBScrollH;
		private bool backgroundBScrollV;
		private int backgroundBScrollHSpeed;
		private int backgroundBScrollVSpeed;
		private bool specialBackPartyFlag;
		private bool specialBackEnemiesFlag;
		private bool specialLateralPartyFlag;
		private bool specialLateralEnemiesFlag;
		private int specialBackParty;
		private int specialBackEnemies;
		private int specialLateralParty;
		private int specialLateralEnemies;
		private int gridLocation;
		private int gridA;
		private int gridB;
		private int gridC;
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
		public int Damage
		{
			get { return damage; }
			set { damage = value; OnPropertyChanged("Damage"); }
		}
		public int EncounterRate
		{
			get { return encounterRate; }
			set { encounterRate = value; OnPropertyChanged("EncounterRate"); }
		}
		public string BackgroundName
		{
			get { return backgroundName; }
			set { backgroundName = value; OnPropertyChanged("BackgroundName"); }
		}
		public bool BoatPass
		{
			get { return boatPass; }
			set { boatPass = value; OnPropertyChanged("BoatPass"); }
		}
		public bool ShipPass
		{
			get { return shipPass; }
			set { shipPass = value; OnPropertyChanged("ShipPass"); }
		}
		public bool AirshipPass
		{
			get { return airshipPass; }
			set { airshipPass = value; OnPropertyChanged("AirshipPass"); }
		}
		public bool AirshipLand
		{
			get { return airshipLand; }
			set { airshipLand = value; OnPropertyChanged("AirshipLand"); }
		}
		public int BushDepth
		{
			get { return bushDepth; }
			set { bushDepth = value; OnPropertyChanged("BushDepth"); }
		}
		public Sound Footstep
		{
			get { return footstep; }
			set { footstep = value; OnPropertyChanged("Footstep"); }
		}
		public bool OnDamageSe
		{
			get { return onDamageSe; }
			set { onDamageSe = value; OnPropertyChanged("OnDamageSe"); }
		}
		public int BackgroundType
		{
			get { return backgroundType; }
			set { backgroundType = value; OnPropertyChanged("BackgroundType"); }
		}
		public string BackgroundAName
		{
			get { return backgroundAName; }
			set { backgroundAName = value; OnPropertyChanged("BackgroundAName"); }
		}
		public bool BackgroundAScrollH
		{
			get { return backgroundAScrollH; }
			set { backgroundAScrollH = value; OnPropertyChanged("BackgroundAScrollH"); }
		}
		public bool BackgroundAScrollV
		{
			get { return backgroundAScrollV; }
			set { backgroundAScrollV = value; OnPropertyChanged("BackgroundAScrollV"); }
		}
		public int BackgroundAScrollHSpeed
		{
			get { return backgroundAScrollHSpeed; }
			set { backgroundAScrollHSpeed = value; OnPropertyChanged("BackgroundAScrollHSpeed"); }
		}
		public int BackgroundAScrollVSpeed
		{
			get { return backgroundAScrollVSpeed; }
			set { backgroundAScrollVSpeed = value; OnPropertyChanged("BackgroundAScrollVSpeed"); }
		}
		public bool BackgroundB
		{
			get { return backgroundB; }
			set { backgroundB = value; OnPropertyChanged("BackgroundB"); }
		}
		public string BackgroundBName
		{
			get { return backgroundBName; }
			set { backgroundBName = value; OnPropertyChanged("BackgroundBName"); }
		}
		public bool BackgroundBScrollH
		{
			get { return backgroundBScrollH; }
			set { backgroundBScrollH = value; OnPropertyChanged("BackgroundBScrollH"); }
		}
		public bool BackgroundBScrollV
		{
			get { return backgroundBScrollV; }
			set { backgroundBScrollV = value; OnPropertyChanged("BackgroundBScrollV"); }
		}
		public int BackgroundBScrollHSpeed
		{
			get { return backgroundBScrollHSpeed; }
			set { backgroundBScrollHSpeed = value; OnPropertyChanged("BackgroundBScrollHSpeed"); }
		}
		public int BackgroundBScrollVSpeed
		{
			get { return backgroundBScrollVSpeed; }
			set { backgroundBScrollVSpeed = value; OnPropertyChanged("BackgroundBScrollVSpeed"); }
		}
		public bool SpecialBackPartyFlag
		{
			get { return specialBackPartyFlag; }
			set { specialBackPartyFlag = value; OnPropertyChanged("SpecialBackPartyFlag"); }
		}
		public bool SpecialBackEnemiesFlag
		{
			get { return specialBackEnemiesFlag; }
			set { specialBackEnemiesFlag = value; OnPropertyChanged("SpecialBackEnemiesFlag"); }
		}
		public bool SpecialLateralPartyFlag
		{
			get { return specialLateralPartyFlag; }
			set { specialLateralPartyFlag = value; OnPropertyChanged("SpecialLateralPartyFlag"); }
		}
		public bool SpecialLateralEnemiesFlag
		{
			get { return specialLateralEnemiesFlag; }
			set { specialLateralEnemiesFlag = value; OnPropertyChanged("SpecialLateralEnemiesFlag"); }
		}
		public int SpecialBackParty
		{
			get { return specialBackParty; }
			set { specialBackParty = value; OnPropertyChanged("SpecialBackParty"); }
		}
		public int SpecialBackEnemies
		{
			get { return specialBackEnemies; }
			set { specialBackEnemies = value; OnPropertyChanged("SpecialBackEnemies"); }
		}
		public int SpecialLateralParty
		{
			get { return specialLateralParty; }
			set { specialLateralParty = value; OnPropertyChanged("SpecialLateralParty"); }
		}
		public int SpecialLateralEnemies
		{
			get { return specialLateralEnemies; }
			set { specialLateralEnemies = value; OnPropertyChanged("SpecialLateralEnemies"); }
		}
		public int GridLocation
		{
			get { return gridLocation; }
			set { gridLocation = value; OnPropertyChanged("GridLocation"); }
		}
		public int GridA
		{
			get { return gridA; }
			set { gridA = value; OnPropertyChanged("GridA"); }
		}
		public int GridB
		{
			get { return gridB; }
			set { gridB = value; OnPropertyChanged("GridB"); }
		}
		public int GridC
		{
			get { return gridC; }
			set { gridC = value; OnPropertyChanged("GridC"); }
		}
		#endregion

		#region Constructor
		public Terrain()
		{
			id = 0;
			name = "";
			damage = 0;
			encounterRate = 100;
			backgroundName = "";
			boatPass = false;
			shipPass = false;
			airshipPass = true;
			airshipLand = true;
			bushDepth = 0;
			footstep = new Sound();
			onDamageSe = false;
			backgroundType = 0;
			backgroundAName = "";
			backgroundAScrollH = false;
			backgroundAScrollV = false;
			backgroundAScrollHSpeed = 0;
			backgroundAScrollVSpeed = 0;
			backgroundB = false;
			backgroundBName = "";
			backgroundBScrollH = false;
			backgroundBScrollV = false;
			backgroundBScrollHSpeed = 0;
			backgroundBScrollVSpeed = 0;
			specialBackPartyFlag = false;
			specialBackEnemiesFlag = false;
			specialLateralPartyFlag = false;
			specialLateralEnemiesFlag = false;
			specialBackParty = 15;
			specialBackEnemies = 10;
			specialLateralParty = 10;
			specialLateralEnemies = 5;
			gridLocation = 0;
			gridA = 0;
			gridB = 0;
			gridC = 0;
		}
		#endregion
	}
}
