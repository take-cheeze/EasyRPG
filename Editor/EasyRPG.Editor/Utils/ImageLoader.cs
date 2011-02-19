using System.IO;
using System.Windows.Controls;
using System.Windows.Media.Imaging;

namespace Editor.Utils
{
	public static class ImageLoader
	{
		public static Image LoadImageFromFullPath(string path)
		{
			return LoadImage(path);
		}

		public static Image TryLoadImage(string filename)
		{
			var path = FileFinder.FindImage(filename);

			if (string.IsNullOrEmpty(path))
			{
				return null;
			}

			return LoadImage(path);
		}

		private static Image LoadImage(string path)
		{
			var memoryStream = new MemoryStream();
			var stream = new FileStream(path, FileMode.Open, FileAccess.Read);
			memoryStream.SetLength(stream.Length);
			stream.Read(memoryStream.GetBuffer(), 0, (int)stream.Length);
			memoryStream.Flush();
			stream.Close();

			var image = new Image();
			var src = new BitmapImage();
			src.BeginInit();
			src.StreamSource = memoryStream;
			src.EndInit();
			image.Source = src;

			return image;
		}
	}
}
