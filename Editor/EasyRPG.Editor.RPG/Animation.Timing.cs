using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class AnimationTiming : NotifyPropertyChanged
	{
		public enum FlashScopeType
		{
			Nothing = 0,
			Target = 1,
			Screen = 2
		}
		public enum ScreenShakeType
		{
			Nothing = 0,
			Target = 1,
			Screen = 2
		}

		#region PrivateMembers
		private int frame;
		private Sound se;
		private FlashScopeType flashScope;
		private int flashRed;
		private int flashGreen;
		private int flashBlue;
		private int flashPower;
		private ScreenShakeType screenShake;
		#endregion

		#region PublicMembers
		public int Frame
		{
			get { return frame; }
			set { frame = value; OnPropertyChanged("Frame"); }
		}
		public Sound Se
		{
			get { return se; }
			set { se = value; OnPropertyChanged("Se"); }
		}
		public FlashScopeType FlashScope
		{
			get { return flashScope; }
			set { flashScope = value; OnPropertyChanged("FlashScope"); }
		}
		public int FlashRed
		{
			get { return flashRed; }
			set { flashRed = value; OnPropertyChanged("FlashRed"); }
		}
		public int FlashGreen
		{
			get { return flashGreen; }
			set { flashGreen = value; OnPropertyChanged("FlashGreen"); }
		}
		public int FlashBlue
		{
			get { return flashBlue; }
			set { flashBlue = value; OnPropertyChanged("FlashBlue"); }
		}
		public int FlashPower
		{
			get { return flashPower; }
			set { flashPower = value; OnPropertyChanged("FlashPower"); }
		}
		public ScreenShakeType ScreenShake
		{
			get { return screenShake; }
			set { screenShake = value; OnPropertyChanged("ScreenShake"); }
		}
		#endregion

		#region Constructor
		public AnimationTiming()
		{
			frame = 0;
			se = new Sound();
			flashScope = FlashScopeType.Nothing;
			flashRed = 31;
			flashGreen = 31;
			flashBlue = 31;
			flashPower = 31;
			screenShake = ScreenShakeType.Nothing;
		}
		#endregion
	}
}
