using System.IO;
using System.Windows;
using AvalonDock;
using Editor.Database;
using Editor.Utils;
using Microsoft.Win32;

namespace Editor
{
	/// <summary>
	/// Interaction logic for MainWindow.xaml
	/// </summary>
	public partial class MainWindow
	{
		public MainWindow()
		{
			InitializeComponent();

			Width = EditorConfig.Instance.MainWidth;
			Height = EditorConfig.Instance.MainHeight;
			if (EditorConfig.Instance.MainMaximized)
			{
				WindowState = WindowState.Maximized;
			}
		}

		private void WindowLoaded(object sender, RoutedEventArgs e)
		{
			if (!string.IsNullOrEmpty(EditorConfig.Instance.LastProjectFolder))
			{
				try
				{
					LoadProject(EditorConfig.Instance.LastProjectFolder);
				}
				catch
				{
					;
				}
			}
		}

		private void WindowClosing(object sender, System.ComponentModel.CancelEventArgs e)
		{
			EditorConfig.Instance.MainWidth = (int)Width;
			EditorConfig.Instance.MainHeight = (int)Height;
			EditorConfig.Instance.MainMaximized = WindowState == WindowState.Maximized;
			EditorConfig.Save();
		}

		private void LoadProject(string path)
		{
			var reader = new EasyRPG.Editor.Serializer.RM2K.LDB.LdbReader();
			reader.Load(FileFinder.FormatPath(path) + "RPG_RT.ldb");

			Data.Database = reader.Database;

			/*dockablePane.Items.Add(new DockableContent
			{
				Name = "projectExplorerPane",
				Title = "Project Explorer"
			});*/

			documentPane.Items.Add(new DocumentContent
			{
				Title = "Actors",
				Content = new ActorsEditor()
			});

			FileFinder.ProjectPath = path;

			EditorConfig.Instance.LastProjectFolder = path;
		}

		private void OpenFileMenuItemClick(object sender, RoutedEventArgs e)
		{
			var openFileDialog = new OpenFileDialog
			{
				Multiselect = false,
				Filter = "Ldb files (*.ldb)|*.ldb|All files (*.*)|*.*"
			};

			if (openFileDialog.ShowDialog() == true)
			{
				LoadProject(Path.GetDirectoryName(openFileDialog.FileName));
			}
		}

		private void ExitFileMenuItemClick(object sender, RoutedEventArgs e)
		{
			Close();
		}
	}
}
