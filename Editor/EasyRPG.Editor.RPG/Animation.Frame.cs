using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class AnimationFrame : NotifyPropertyChanged
	{
		#region PrivateMembers
		private ExtendedObservableCollection<AnimationCellData> cells;
		#endregion

		#region PublicMembers
		public ExtendedObservableCollection<AnimationCellData> Cells
		{
			get { return cells; }
			set { cells = value; OnPropertyChanged("Cells"); }
		}
		#endregion

		#region Constructor
		public AnimationFrame()
		{
			cells = new ExtendedObservableCollection<AnimationCellData>();
		}
		#endregion
	}
}
