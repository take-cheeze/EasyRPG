using System.IO;
using System.Windows;
using System.Windows.Media;
using Editor.Utils;

namespace Editor.Controls
{
	public class FileSourceDisplay
	{
		public DirectorySource Source
		{
			get;
			set;
		}

		public string FileName
		{
			get;
			set;
		}

		public ImageSource DisplayBitmap
		{
			get
			{
				return (ImageSource)Application.Current.FindResource(Source == DirectorySource.Project ? "ProjectResouceIcon" : "RtpResouceIcon");
			}
		}

		public string DisplayName
		{
			get
			{
				return Path.GetFileNameWithoutExtension(FileName);
			}
		}
	}
}
