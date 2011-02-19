using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using Editor.Utils;

namespace Editor.Controls
{
	/// <summary>
	/// Interaction logic for TiledSelectableImage.xaml
	/// </summary>
	public partial class TiledSelectableImage
	{
		public int TilesX
		{
			get;
			set;
		}

		public int TilesY
		{
			get;
			set;
		}

		public string FileName
		{
			set
			{
				if (value == null)
				{
					image.Source = null;
					rectangle.Visibility = Visibility.Collapsed;
				}
				else
				{
					image.Source = ImageLoader.LoadImageFromFullPath(value).Source;
					rectangle.Visibility = Visibility.Visible;
				}
			}
		}

		public int Index
		{
			get;
			set;
		}

		public TiledSelectableImage()
		{
			InitializeComponent();
		}

		private void ControlLoaded(object sender, RoutedEventArgs e)
		{
			rectangle.Stroke = SystemColors.HighlightBrush;
			rectangle.Width = Width / TilesX;
			rectangle.Height = Height / TilesY;
			rectangle.Margin = new Thickness(0, 0, 0, 0);
			UpdateRectanglePosition(Index % TilesX, Index / TilesY);
		}

		private void ControlMouseLeftButtonDown(object sender, MouseButtonEventArgs e)
		{
			var pos = e.GetPosition(this);

			UpdateRectanglePosition((int)(pos.X / rectangle.Width), (int)(pos.Y / rectangle.Height));
		}

		private void UpdateRectanglePosition(int row, int column)
		{
			var left = row * rectangle.Width;
			var top = column * rectangle.Height;

			Canvas.SetLeft(rectangle, left);
			Canvas.SetTop(rectangle, top);

			Index = row * TilesX + column;
		}
	}
}
