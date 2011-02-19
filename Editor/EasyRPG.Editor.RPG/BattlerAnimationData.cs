using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class BattlerAnimationData : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private int move;
		private int afterImage;
		private int pose;
		#endregion

		#region PublicMembers
		public int Id
		{
			get { return id; }
			set { id = value; OnPropertyChanged("Id"); }
		}
		public int Move
		{
			get { return move; }
			set { move = value; OnPropertyChanged("Move"); }
		}
		public int AfterImage
		{
			get { return afterImage; }
			set { afterImage = value; OnPropertyChanged("AfterImage"); }
		}
		public int Pose
		{
			get { return pose; }
			set { pose = value; OnPropertyChanged("Pose"); }
		}
		#endregion

		#region Constructor
		public BattlerAnimationData()
		{
			id = 0;
			move = 0;
			afterImage = 0;
			pose = 0;
		}
		#endregion
	}
}
