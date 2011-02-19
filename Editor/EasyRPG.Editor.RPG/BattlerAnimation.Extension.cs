using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class BattlerAnimationExtension : NotifyPropertyChanged
	{
		#region PrivateMembers
		private string name;
		private string battlerName;
		private int battlerIndex;
		private int animationType;
		private int animationId;
		#endregion

		#region PublicMembers
		public string Name
		{
			get { return name; }
			set { name = value; OnPropertyChanged("Name"); }
		}
		public string BattlerName
		{
			get { return battlerName; }
			set { battlerName = value; OnPropertyChanged("BattlerName"); }
		}
		public int BattlerIndex
		{
			get { return battlerIndex; }
			set { battlerIndex = value; OnPropertyChanged("BattlerIndex"); }
		}
		public int AnimationType
		{
			get { return animationType; }
			set { animationType = value; OnPropertyChanged("AnimationType"); }
		}
		public int AnimationId
		{
			get { return animationId; }
			set { animationId = value; OnPropertyChanged("AnimationId"); }
		}
		#endregion

		#region Constructor
		public BattlerAnimationExtension()
		{
			name = "";
			battlerName = "";
			battlerIndex = 0;
			animationType = 0;
			animationId = 0;
		}
		#endregion
	}
}
