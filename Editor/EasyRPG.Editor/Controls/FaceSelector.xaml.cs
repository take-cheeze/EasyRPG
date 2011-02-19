using System.Windows;
using System.Windows.Media.Imaging;
using EasyRPG.Editor.RPG;
using Editor.Dialogs;
using Editor.Utils;

namespace Editor.Controls
{
	/// <summary>
	/// Interaction logic for FaceSelector.xaml
	/// </summary>
	public partial class FaceSelector
	{
		private Actor actor;

		public FaceSelector()
		{
			InitializeComponent();
		}

		private void LoadFace()
		{
			if (actor != null)
			{
				var faceset = (BitmapSource)ImageLoader.TryLoadImage(string.Format("FaceSet/{0}", actor.FaceName)).Source;
			

				var column = actor.FaceIndex % 4;
				var row = actor.FaceIndex / 4;

				faceImage.Source = new CroppedBitmap(faceset, new Int32Rect(column * 48, row * 48, 48, 48));
			}
		}

		private void FaceSelectorDataContextChanged(object sender, DependencyPropertyChangedEventArgs e)
		{
			if (actor != null)
			{
				actor.PropertyChanged -= ActorPropertyChanged;
			}

			actor = DataContext as Actor;

			if (actor != null)
			{
				actor.PropertyChanged += ActorPropertyChanged;

				LoadFace();
			}
			else
			{
				faceImage.Source = null;
			}
		}

		private void ActorPropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
		{
			LoadFace();
		}

		private void BrowseButtonClick(object sender, RoutedEventArgs e)
		{
			var faceSelectorDialog = new FaceSelectorDialog
			                         	{
											FileName = actor.FaceName,
											Index = actor.FaceIndex,
			                         		Owner = (Window)Utilities.GetTopLevelControl(this)
			                         	};
			faceSelectorDialog.ShowDialog();

			if (faceSelectorDialog.DialogResult == true)
			{
				actor.FaceName = faceSelectorDialog.FileName;
				actor.FaceIndex = faceSelectorDialog.Index;
			}
		}
	}
}
