using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class CommonEvent : NotifyPropertyChanged
	{
		public enum TriggerType
		{
			Automatic = 3,
			Parallel = 4,
			Call = 5
		}

		#region PrivateMembers
		private int id;
		private string name;
		private TriggerType trigger;
		private bool switchFlag;
		private int switchId;
		private ExtendedObservableCollection<EventCommand> eventCommands;
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
		public TriggerType Trigger
		{
			get { return trigger; }
			set { trigger = value; OnPropertyChanged("Trigger"); }
		}
		public bool SwitchFlag
		{
			get { return switchFlag; }
			set { switchFlag = value; OnPropertyChanged("SwitchFlag"); }
		}
		public int SwitchId
		{
			get { return switchId; }
			set { switchId = value; OnPropertyChanged("SwitchId"); }
		}
		public ExtendedObservableCollection<EventCommand> EventCommands
		{
			get { return eventCommands; }
			set { eventCommands = value; OnPropertyChanged("EventCommands"); }
		}
		#endregion

		#region Constructor
		public CommonEvent()
		{
			id = 0;
			name = "";
			trigger = TriggerType.Call;
			switchFlag = false;
			switchId = 1;
			eventCommands = new ExtendedObservableCollection<EventCommand>();
		}
		#endregion
	}
}
