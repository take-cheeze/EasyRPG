using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class EventPageCondition : NotifyPropertyChanged
	{
		#region PrivateMembers
		private bool switchA;
		private bool switchB;
		private bool variable;
		private bool item;
		private bool actor;
		private bool timer;
		private bool timer2;
		private int switchAId;
		private int switchBId;
		private int variableId;
		private int variableValue;
		private int itemId;
		private int actorId;
		private int timerSec;
		private int timer2Sec;
		private int compareOperator;
		#endregion

		#region PublicMembers
		public bool SwitchA
		{
			get { return switchA; }
			set { switchA = value; OnPropertyChanged("SwitchA"); }
		}
		public bool SwitchB
		{
			get { return switchB; }
			set { switchB = value; OnPropertyChanged("SwitchB"); }
		}
		public bool Variable
		{
			get { return variable; }
			set { variable = value; OnPropertyChanged("Variable"); }
		}
		public bool Item
		{
			get { return item; }
			set { item = value; OnPropertyChanged("Item"); }
		}
		public bool Actor
		{
			get { return actor; }
			set { actor = value; OnPropertyChanged("Actor"); }
		}
		public bool Timer
		{
			get { return timer; }
			set { timer = value; OnPropertyChanged("Timer"); }
		}
		public bool Timer2
		{
			get { return timer2; }
			set { timer2 = value; OnPropertyChanged("Timer2"); }
		}
		public int SwitchAId
		{
			get { return switchAId; }
			set { switchAId = value; OnPropertyChanged("SwitchAId"); }
		}
		public int SwitchBId
		{
			get { return switchBId; }
			set { switchBId = value; OnPropertyChanged("SwitchBId"); }
		}
		public int VariableId
		{
			get { return variableId; }
			set { variableId = value; OnPropertyChanged("VariableId"); }
		}
		public int VariableValue
		{
			get { return variableValue; }
			set { variableValue = value; OnPropertyChanged("VariableValue"); }
		}
		public int ItemId
		{
			get { return itemId; }
			set { itemId = value; OnPropertyChanged("ItemId"); }
		}
		public int ActorId
		{
			get { return actorId; }
			set { actorId = value; OnPropertyChanged("ActorId"); }
		}
		public int TimerSec
		{
			get { return timerSec; }
			set { timerSec = value; OnPropertyChanged("TimerSec"); }
		}
		public int Timer2Sec
		{
			get { return timer2Sec; }
			set { timer2Sec = value; OnPropertyChanged("Timer2Sec"); }
		}
		public int CompareOperator
		{
			get { return compareOperator; }
			set { compareOperator = value; OnPropertyChanged("CompareOperator"); }
		}
		#endregion

		#region Constructor
		public EventPageCondition()
		{
			switchA = false;
			switchB = false;
			variable = false;
			item = false;
			actor = false;
			timer = false;
			timer2 = false;
			switchAId = 1;
			switchBId = 1;
			variableId = 1;
			variableValue = 0;
			itemId = 1;
			actorId = 1;
			timerSec = 0;
			timer2Sec = 0;
			compareOperator = 1;
		}
		#endregion
	}
}
