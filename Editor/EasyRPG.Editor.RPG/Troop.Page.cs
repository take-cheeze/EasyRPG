using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class TroopPage : NotifyPropertyChanged
	{
		#region PrivateMembers
		private TroopPageCondition condition;
		private ExtendedObservableCollection<EventCommand> eventCommands;
		#endregion

		#region PublicMembers
		public TroopPageCondition Condition
		{
			get { return condition; }
			set { condition = value; OnPropertyChanged("Condition"); }
		}
		public ExtendedObservableCollection<EventCommand> EventCommands
		{
			get { return eventCommands; }
			set { eventCommands = value; OnPropertyChanged("EventCommands"); }
		}
		#endregion

		#region Constructor
		public TroopPage()
		{
			condition = new TroopPageCondition();
			eventCommands = new ExtendedObservableCollection<EventCommand>();
		}
		#endregion
	}
}
