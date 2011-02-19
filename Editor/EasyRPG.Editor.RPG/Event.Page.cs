using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class EventPage : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private EventPageCondition condition;
		private string characterName;
		private int characterIndex;
		private int characterDirection;
		private int characterPattern;
		private bool translucent;
		private int moveType;
		private int moveFrequency;
		private int trigger;
		private int priorityType;
		private bool overlap;
		private int animationType;
		private int moveSpeed;
		private MoveRoute moveRoute;
		private List<EventCommand> eventCommands;
		#endregion


		#region PublicMembers
		public int Id
		{
			get { return id; }
			set { id = value; OnPropertyChanged("Id"); }
		}
		public EventPageCondition Condition
		{
			get { return condition; }
			set { condition = value; OnPropertyChanged("Condition"); }
		}
		public string CharacterName
		{
			get { return characterName; }
			set { characterName = value; OnPropertyChanged("CharacterName"); }
		}
		public int CharacterIndex
		{
			get { return characterIndex; }
			set { characterIndex = value; OnPropertyChanged("CharacterIndex"); }
		}
		public int CharacterDirection
		{
			get { return characterDirection; }
			set { characterDirection = value; OnPropertyChanged("CharacterDirection"); }
		}
		public int CharacterPattern
		{
			get { return characterPattern; }
			set { characterPattern = value; OnPropertyChanged("CharacterPattern"); }
		}
		public bool Translucent
		{
			get { return translucent; }
			set { translucent = value; OnPropertyChanged("Translucent"); }
		}
		public int MoveType
		{
			get { return moveType; }
			set { moveType = value; OnPropertyChanged("MoveType"); }
		}
		public int MoveFrequency
		{
			get { return moveFrequency; }
			set { moveFrequency = value; OnPropertyChanged("MoveFrequency"); }
		}
		public int Trigger
		{
			get { return trigger; }
			set { trigger = value; OnPropertyChanged("Trigger"); }
		}
		public int PriorityType
		{
			get { return priorityType; }
			set { priorityType = value; OnPropertyChanged("PriorityType"); }
		}
		public bool Overlap
		{
			get { return overlap; }
			set { overlap = value; OnPropertyChanged("Overlap"); }
		}
		public int AnimationType
		{
			get { return animationType; }
			set { animationType = value; OnPropertyChanged("AnimationType"); }
		}
		public int MoveSpeed
		{
			get { return moveSpeed; }
			set { moveSpeed = value; OnPropertyChanged("MoveSpeed"); }
		}
		public MoveRoute MoveRoute
		{
			get { return moveRoute; }
			set { moveRoute = value; OnPropertyChanged("MoveRoute"); }
		}
		public List<EventCommand> EventCommands
		{
			get { return eventCommands; }
			set { eventCommands = value; OnPropertyChanged("EventCommands"); }
		}
		#endregion

		#region Constructor
		public EventPage()
		{
			id = 0;
			condition = new EventPageCondition();
			characterName = "";
			characterIndex = 0;
			characterDirection = 2;
			characterPattern = 1;
			translucent = false;
			moveType = 1;
			moveFrequency = 3;
			trigger = 0;
			priorityType = 0;
			overlap = false;
			animationType = 0;
			moveSpeed = 3;
			moveRoute = new MoveRoute();
			eventCommands = new List<EventCommand>();
		}
		#endregion
	}
}
