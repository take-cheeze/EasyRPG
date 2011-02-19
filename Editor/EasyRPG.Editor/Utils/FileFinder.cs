using System.Collections.Generic;
using System.IO;
using System.Linq;
using Microsoft.Win32;

namespace Editor.Utils
{
	public static class FileFinder
	{
		public static readonly string[] ImageExtensions = new[] { ".png" };
		public static readonly string[] ImageExtensionsAndEmpty = new[] { "", ".png" };

		private static string _projectPath;

		public static string RtpPath
		{
			get;
			set;
		}

		public static string ProjectPath
		{
			get
			{
				return _projectPath;
			}
			set
			{
				_projectPath = FormatPath(value);
			}
		}

		static FileFinder()
		{
			RtpPath = GetRtpPath();
		}

		public static string FindFile(string name, string path, string[] exts)
		{
			var foundExt = exts.FirstOrDefault(e => File.Exists(path + name + e));
			return foundExt == null ? null : path + name + foundExt;
		}

		public static string FindImage(string name)
		{
			name = FormatPath(name, false);

			if (ProjectPath != null)
			{
				var file = FindFile(name, ProjectPath, ImageExtensions);
				if (file != null)
				{
					return file;
				}
			}

			return RtpPath != null ? FindFile(name, RtpPath, ImageExtensionsAndEmpty) : null;
		}

		public static List<string> GetAllImages(string path, DirectorySource source)
		{
			path = FormatPath(path);

			var files = new List<string>();

			var searchPath = source == DirectorySource.Rtp ? RtpPath : ProjectPath;

			var directoryInfo = new DirectoryInfo(searchPath + path);
			if (directoryInfo.Exists)
			{
				var dirFiles = directoryInfo.GetFiles();
				files.AddRange(dirFiles.Where(f => ImageExtensions.Contains(f.Extension)).Select(f => f.FullName));
			}

			return files;
		}

		public static string FormatPath(string path, bool trailingSlash = true)
		{
			path = path.Replace('/', '\\');
			if (trailingSlash)
			{
				return path.EndsWith("\\") ? path : path + "\\";
			}
			return path.EndsWith("\\") ? path.TrimEnd('\\') : path;
		}

		private static string GetRtpPath()
		{
			var key = Registry.CurrentUser.OpenSubKey("SOFTWARE\\ASCII\\RPG2000");
			if (key == null)
			{
				key = Registry.LocalMachine.OpenSubKey("SOFTWARE\\ASCII\\RPG2000");
				if (key != null)
				{
					var value = (string)key.GetValue("RuntimePackagePath");
					key.Close();
					return FormatPath(value);
				}
			}
			else
			{
				var value = (string)key.GetValue("RuntimePackagePath");
				key.Close();
				return FormatPath(value);
			}
			return null;
		}
	}
}
