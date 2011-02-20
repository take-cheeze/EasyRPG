using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Animation : NotifyPropertyChanged
	{
		public enum ScopeType
		{
			Target = 0,
			Screen = 1
		}
		public enum PositionType
		{
			Up = 0,
			Middle = 1,
			Down = 2
		}

		#region PrivateMembers
		private int id;
		private string name;
		private string animationName;
		private ExtendedObservableCollection<AnimationTiming> timings;
		private ScopeType scope;
		private PositionType position;
		private ExtendedObservableCollection<AnimationFrame> frames;
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
		public string AnimationName
		{
			get { return animationName; }
			set { animationName = value; OnPropertyChanged("AnimationName"); }
		}
		public ExtendedObservableCollection<AnimationTiming> Timings
		{
			get { return timings; }
			set { timings = value; OnPropertyChanged("Timings"); }
		}
		public ScopeType Scope
		{
			get { return scope; }
			set { scope = value; OnPropertyChanged("Scope"); }
		}
		public PositionType Position
		{
			get { return position; }
			set { position = value; OnPropertyChanged("Position"); }
		}
		public ExtendedObservableCollection<AnimationFrame> Frames
		{
			get { return frames; }
			set { frames = value; OnPropertyChanged("Frames"); }
		}
		#endregion

		#region Constructor
		public Animation()
		{
			id = 0;
			name = "";
			animationName = "";
			timings = new ExtendedObservableCollection<AnimationTiming>();
			scope = ScopeType.Target;
			position = PositionType.Down;
			frames = new ExtendedObservableCollection<AnimationFrame>();
		}
		#endregion
	}
}
