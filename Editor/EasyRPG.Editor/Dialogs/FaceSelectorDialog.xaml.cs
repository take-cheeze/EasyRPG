using System.Collections.Generic;
using System.Linq;
using System.Windows.Controls;
using Editor.Controls;
using Editor.Utils;

namespace Editor.Dialogs
{
	/// <summary>
	/// Interaction logic for FaceSelectorDialog.xaml
	/// </summary>
	public partial class FaceSelectorDialog
	{
		private readonly List<FileSourceDisplay> filesDisplayList;
		private string fileName;

		public string FileName
		{
			get
			{
				var file = filesListBox.SelectedItem as FileSourceDisplay;
				return file != null ? file.DisplayName : null;
			}
			set
			{
				if (filesDisplayList.Count > 0)
				{
					for (var i = 0; i < filesDisplayList.Count - 1; i++)
					{
						if (filesDisplayList[i].DisplayName == value)
						{
							filesListBox.SelectedIndex = i;
							return;
						}
					}
					filesListBox.SelectedIndex = 0;
				}
			}
		}

		public int Index
		{
			get
			{
				return tiledSelectableImage.Index;
			}
			set
			{
				tiledSelectableImage.Index = value;
			}
		}

		public FaceSelectorDialog()
		{
			InitializeComponent();

			var projectFiles = FileFinder.GetAllImages("FaceSet", DirectorySource.Project);
			var rtpFiles = FileFinder.GetAllImages("FaceSet", DirectorySource.Rtp);

			var projectFilesDisplay = projectFiles.Select(f => new FileSourceDisplay
			                                               	{
			                                               		FileName = f,
			                                               		Source = DirectorySource.Project
			                                               	}).ToList();

			var rtpFilesDisplay = rtpFiles.Select(f => new FileSourceDisplay
			                                               	{
			                                               		FileName = f,
			                                               		Source = DirectorySource.Rtp
															}).ToList();

			filesDisplayList = projectFilesDisplay;
			filesDisplayList.AddRange(rtpFilesDisplay.Where(r => !projectFilesDisplay.Any(p => p.DisplayName == r.DisplayName)));

			filesListBox.DataContext = filesDisplayList;
		}

		private void FilesListBoxSelectionChanged(object sender, SelectionChangedEventArgs e)
		{
			fileName = ((FileSourceDisplay)filesListBox.SelectedItem).FileName;
			tiledSelectableImage.FileName = fileName;
		}

		private void AcceptButtonClick(object sender, System.Windows.RoutedEventArgs e)
		{
			DialogResult = true;
		}

		private void CancelButtonClick(object sender, System.Windows.RoutedEventArgs e)
		{
			DialogResult = false;
		}
	}
}
