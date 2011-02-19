using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Database : NotifyPropertyChanged
	{
		#region PrivateMembers
		private List<Actor> actors;
		private List<Skill> skills;
		private List<Item> items;
		private List<Enemy> enemies;
		private List<Troop> troops;
		private List<Terrain> terrains;
		private List<Attribute> attributes;
		private List<State> states;
		private List<Animation> animations;
		private List<Chipset> chipsets;
		private List<CommonEvent> commonevents;
		private List<BattleCommand> battleCommands;
		private List<Class> classes;
		private List<BattlerAnimation> battlerAnimations;
		private Terms terms;
		private System system;
		private List<string> switches;
		private List<string> variables;
		#endregion

		#region PublicMembers
		public List<Actor> Actors
		{
			get { return actors; }
			set { actors = value; OnPropertyChanged("Actors"); }
		}
		public List<Skill> Skills
		{
			get { return skills; }
			set { skills = value; OnPropertyChanged("Skills"); }
		}
		public List<Item> Items
		{
			get { return items; }
			set { items = value; OnPropertyChanged("Items"); }
		}
		public List<Enemy> Enemies
		{
			get { return enemies; }
			set { enemies = value; OnPropertyChanged("Enemies"); }
		}
		public List<Troop> Troops
		{
			get { return troops; }
			set { troops = value; OnPropertyChanged("Troops"); }
		}
		public List<Terrain> Terrains
		{
			get { return terrains; }
			set { terrains = value; OnPropertyChanged("Terrains"); }
		}
		public List<Attribute> Attributes
		{
			get { return attributes; }
			set { attributes = value; OnPropertyChanged("Attributes"); }
		}
		public List<State> States
		{
			get { return states; }
			set { states = value; OnPropertyChanged("States"); }
		}
		public List<Animation> Animations
		{
			get { return animations; }
			set { animations = value; OnPropertyChanged("Animations"); }
		}
		public List<Chipset> Chipsets
		{
			get { return chipsets; }
			set { chipsets = value; OnPropertyChanged("Chipsets"); }
		}
		public List<CommonEvent> Commonevents
		{
			get { return commonevents; }
			set { commonevents = value; OnPropertyChanged("Commonevents"); }
		}
		public List<BattleCommand> BattleCommands
		{
			get { return battleCommands; }
			set { battleCommands = value; OnPropertyChanged("BattleCommands"); }
		}
		public List<Class> Classes
		{
			get { return classes; }
			set { classes = value; OnPropertyChanged("Classes"); }
		}
		public List<BattlerAnimation> BattlerAnimations
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
		public List<string> Switches
		{
			get { return switches; }
			set { switches = value; OnPropertyChanged("Switches"); }
		}
		public List<string> Variables
		{
			get { return variables; }
			set { variables = value; OnPropertyChanged("Variables"); }
		}
		#endregion

		#region Constructor
		public Database()
		{
			actors = new List<Actor>();
			skills = new List<Skill>();
			items = new List<Item>();
			enemies = new List<Enemy>();
			troops = new List<Troop>();
			terrains = new List<Terrain>();
			attributes = new List<Attribute>();
			states = new List<State>();
			animations = new List<Animation>();
			chipsets = new List<Chipset>();
			commonevents = new List<CommonEvent>();
			battleCommands = new List<BattleCommand>();
			classes = new List<Class>();
			battlerAnimations = new List<BattlerAnimation>();
			terms = new Terms();
			system = new System();
			switches = new List<string>();
			variables = new List<string>();
		}
		#endregion
	}
}
