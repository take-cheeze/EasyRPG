using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Database : NotifyPropertyChanged
	{
		#region PrivateMembers
		private ExtendedObservableCollection<Actor> actors;
		private ExtendedObservableCollection<Skill> skills;
		private ExtendedObservableCollection<Item> items;
		private ExtendedObservableCollection<Enemy> enemies;
		private ExtendedObservableCollection<Troop> troops;
		private ExtendedObservableCollection<Terrain> terrains;
		private ExtendedObservableCollection<Attribute> attributes;
		private ExtendedObservableCollection<State> states;
		private ExtendedObservableCollection<Animation> animations;
		private ExtendedObservableCollection<Chipset> chipsets;
		private ExtendedObservableCollection<CommonEvent> commonevents;
		private BattleCommands battleCommands;
		private ExtendedObservableCollection<Class> classes;
		private ExtendedObservableCollection<BattlerAnimation> battlerAnimations;
		private Terms terms;
		private System system;
		private ExtendedObservableCollection<string> switches;
		private ExtendedObservableCollection<string> variables;
		#endregion

		#region PublicMembers
		public ExtendedObservableCollection<Actor> Actors
		{
			get { return actors; }
			set { actors = value; OnPropertyChanged("Actors"); }
		}
		public ExtendedObservableCollection<Skill> Skills
		{
			get { return skills; }
			set { skills = value; OnPropertyChanged("Skills"); }
		}
		public ExtendedObservableCollection<Item> Items
		{
			get { return items; }
			set { items = value; OnPropertyChanged("Items"); }
		}
		public ExtendedObservableCollection<Enemy> Enemies
		{
			get { return enemies; }
			set { enemies = value; OnPropertyChanged("Enemies"); }
		}
		public ExtendedObservableCollection<Troop> Troops
		{
			get { return troops; }
			set { troops = value; OnPropertyChanged("Troops"); }
		}
		public ExtendedObservableCollection<Terrain> Terrains
		{
			get { return terrains; }
			set { terrains = value; OnPropertyChanged("Terrains"); }
		}
		public ExtendedObservableCollection<Attribute> Attributes
		{
			get { return attributes; }
			set { attributes = value; OnPropertyChanged("Attributes"); }
		}
		public ExtendedObservableCollection<State> States
		{
			get { return states; }
			set { states = value; OnPropertyChanged("States"); }
		}
		public ExtendedObservableCollection<Animation> Animations
		{
			get { return animations; }
			set { animations = value; OnPropertyChanged("Animations"); }
		}
		public ExtendedObservableCollection<Chipset> Chipsets
		{
			get { return chipsets; }
			set { chipsets = value; OnPropertyChanged("Chipsets"); }
		}
		public ExtendedObservableCollection<CommonEvent> Commonevents
		{
			get { return commonevents; }
			set { commonevents = value; OnPropertyChanged("Commonevents"); }
		}
		public BattleCommands BattleCommands
		{
			get { return battleCommands; }
			set { battleCommands = value; OnPropertyChanged("BattleCommands"); }
		}
		public ExtendedObservableCollection<Class> Classes
		{
			get { return classes; }
			set { classes = value; OnPropertyChanged("Classes"); }
		}
		public ExtendedObservableCollection<BattlerAnimation> BattlerAnimations
		{
			get { return battlerAnimations; }
			set { battlerAnimations = value; OnPropertyChanged("BattlerAnimations"); }
		}
		public Terms Terms
		{
			get { return terms; }
			set { terms = value; OnPropertyChanged("Terms"); }
		}
		public System System
		{
			get { return system; }
			set { system = value; OnPropertyChanged("System"); }
		}
		public ExtendedObservableCollection<string> Switches
		{
			get { return switches; }
			set { switches = value; OnPropertyChanged("Switches"); }
		}
		public ExtendedObservableCollection<string> Variables
		{
			get { return variables; }
			set { variables = value; OnPropertyChanged("Variables"); }
		}
		#endregion

		#region Constructor
		public Database()
		{
			actors = new ExtendedObservableCollection<Actor>();
			skills = new ExtendedObservableCollection<Skill>();
			items = new ExtendedObservableCollection<Item>();
			enemies = new ExtendedObservableCollection<Enemy>();
			troops = new ExtendedObservableCollection<Troop>();
			terrains = new ExtendedObservableCollection<Terrain>();
			attributes = new ExtendedObservableCollection<Attribute>();
			states = new ExtendedObservableCollection<State>();
			animations = new ExtendedObservableCollection<Animation>();
			chipsets = new ExtendedObservableCollection<Chipset>();
			commonevents = new ExtendedObservableCollection<CommonEvent>();
			battleCommands = new BattleCommands();
			classes = new ExtendedObservableCollection<Class>();
			battlerAnimations = new ExtendedObservableCollection<BattlerAnimation>();
			terms = new Terms();
			system = new System();
			switches = new ExtendedObservableCollection<string>();
			variables = new ExtendedObservableCollection<string>();
		}
		#endregion
	}
}
