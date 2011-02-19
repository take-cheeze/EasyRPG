using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class EventCommand : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int code;
		private int indent;
		private string text;
		private List<int> parameters;
		#endregion

		#region PublicMembers
		public int Code
		{
			get { return code; }
			set { code = value; OnPropertyChanged("Code"); }
		}
		public int Indent
		{
			get { return indent; }
			set { indent = value; OnPropertyChanged("Indent"); }
		}
		public string Text
		{
			get { return text; }
			set { text = value; OnPropertyChanged("Text"); }
		}
		public List<int> Parameters
		{
			get { return parameters; }
			set { parameters = value; OnPropertyChanged("Parameters"); }
		}
		#endregion

		#region Constructor
		public EventCommand()
		{
			code = 0;
			indent = 0;
			text = "";
			parameters = new List<int>();
		}
		#endregion
	}
}
