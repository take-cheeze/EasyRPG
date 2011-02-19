using System;
using System.Windows;
using System.Windows.Media.Imaging;
using System.Windows.Threading;
using Editor.Utils;

namespace Editor.Controls
{
	/// <summary>
	/// Interaction logic for CharacterSelector.xaml
	/// </summary>
	public partial class CharacterSelector
	{
		#region PrivateMembers
		private DispatcherTimer animationTimer;
		private BitmapSource charset;
		private int charsetIndex;
		private int direction;
		private int pattern;
		private int patternDir = 1;
		private int animeCount; 
		#endregion

		#region Constructor
		public CharacterSelector()
		{
			InitializeComponent();

			animationTimer = new DispatcherTimer();
			animationTimer.Tick += AnimationTimerTick;
			animationTimer.Interval = new TimeSpan(0, 0, 0, 0, 200);
		} 
		#endregion

		#region EventHandlers
		private void AnimationTimerTick(object sender, EventArgs e)
		{
			var column = pattern % 3 + (charsetIndex % 4) * 3;
			var row = direction + (charsetIndex / 4) * 4;

			characterImage.Source = new CroppedBitmap(charset, new Int32Rect(column * 24, row * 32, 24, 32));

			animeCount += 1;
			if (animeCount >= 8)
			{
				animeCount = 0;
				direction += 1;
				if (direction > 3)
				{
					direction = 0;
				}
			}

			pattern += patternDir;
			if (pattern == 0 || pattern == 2)
			{
				patternDir *= -1;
			}
		}

		private void CharacterSelectorDataContextChanged(object sender, DependencyPropertyChangedEventArgs e)
		{
			var actor = DataContext as EasyRPG.Editor.RPG.Actor;

			if (actor != null)
			{
				charset = (BitmapSource)ImageLoader.TryLoadImage(string.Format("CharSet/{0}", actor.CharacterName)).Source;

				charsetIndex = actor.CharacterIndex;
			}
			else
			{
				charset = null;
			}

			if (charset != null)
			{
				if (animationTimer != null)
				{
					animationTimer.Start();
				}
			}
			else
			{
				characterImage.Source = null;
				if (animationTimer != null)
				{
					animationTimer.Stop();
				}
			}
		}

		private void CharacterSelectorUnloaded(object sender, RoutedEventArgs e)
		{
			if (animationTimer != null)
			{
				animationTimer.Stop();
				animationTimer = null;
			}
		} 
		#endregion
	}
}
