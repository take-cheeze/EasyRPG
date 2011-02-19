using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class AnimationFrame : NotifyPropertyChanged
	{
		#region PrivateMembers
		private List<AnimationCellData> cells;
		#endregion

		#region PublicMembers
		public List<AnimationCellData> Cells
		{
			get { return cells; }
			set { cells = value; OnPropertyChanged("Cells"); }
		}
		#endregion

		#region Constructor
		public AnimationFrame()
		{
			cells = new List<AnimationCellData>();
		}
		#endregion
	}
}
