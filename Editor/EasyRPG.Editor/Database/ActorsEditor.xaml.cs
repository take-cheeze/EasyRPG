using System.Windows;
using System.Windows.Controls;

namespace Editor.Database
{
	/// <summary>
	/// Interaction logic for ActorsEditor.xaml
	/// </summary>
	public partial class ActorsEditor
	{
		public ActorsEditor()
		{
			InitializeComponent();
		}

		private void ActorsEditorLoaded(object sender, RoutedEventArgs e)
		{
			itemsListBox.DataContext = Data.Database.Actors;

			if (Data.Database.Actors.Count > 0)
			{
				itemsListBox.SelectedIndex = 0;
			}
		}

		private void GridSizeChanged(object sender, SizeChangedEventArgs e)
		{
			((Grid)sender).ColumnDefinitions[0].MaxWidth = ActualWidth / 2.0;
		}
	}
}
