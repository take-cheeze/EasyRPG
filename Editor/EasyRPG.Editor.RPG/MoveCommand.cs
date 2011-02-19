using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class MoveCommand : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int commandId;
		private string parameterString;
		private int parameterA;
		private int parameterB;
		private int parameterC;
		#endregion

		#region PublicMembers
		public int CommandId
		{
			get { return commandId; }
			set { commandId = value; OnPropertyChanged("CommandId"); }
		}
		public string ParameterString
		{
			get { return parameterString; }
			set { parameterString = value; OnPropertyChanged("ParameterString"); }
		}
		public int ParameterA
		{
			get { return parameterA; }
			set { parameterA = value; OnPropertyChanged("ParameterA"); }
		}
		public int ParameterB
		{
			get { return parameterB; }
			set { parameterB = value; OnPropertyChanged("ParameterB"); }
		}
		public int ParameterC
		{
			get { return parameterC; }
			set { parameterC = value; OnPropertyChanged("ParameterC"); }
		}
		#endregion

		#region Constructor
		public MoveCommand()
		{
			commandId = 0;
			parameterString = "";
			parameterA = 0;
			parameterB = 0;
			parameterC = 0;
		}
		#endregion
	}
}
