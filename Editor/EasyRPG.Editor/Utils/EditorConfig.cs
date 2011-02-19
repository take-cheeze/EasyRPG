using System;
using System.IO;
using System.Xml.Serialization;

namespace Editor.Utils
{
	[Serializable]
	public class EditorConfig
	{
		#region StaticProperties
		public static EditorConfig Instance
		{
			get;
			set;
		} 
		#endregion

		#region PublicProperties
		public string Language
		{
			get;
			set;
		}

		public int MainWidth
		{
			get;
			set;
		}

		public int MainHeight
		{
			get;
			set;
		}

		public bool MainMaximized
		{
			get;
			set;
		}

		public bool AutoLoadLastProject
		{
			get;
			set;
		}

		public string LastProjectOpen
		{
			get;
			set;
		}

		public string LastProjectFolder
		{
			get;
			set;
		}

		public ProjectType? LastProjectType
		{
			get;
			set;
		}
		#endregion

		#region StaticConstructor
		static EditorConfig()
		{
			Load();
		} 
		#endregion

		#region Constructor
		public EditorConfig()
		{
			Language = "en";
			MainWidth = 800;
			MainHeight = 600;
			MainMaximized = false;
			AutoLoadLastProject = true;
			LastProjectOpen = null;
			LastProjectFolder = null;
			LastProjectType = null;
		} 
		#endregion

		#region BehaviorMethods
		public static void Load()
		{
			if (File.Exists("Editor.config"))
			{
				var stream = File.Open("Editor.config", FileMode.Open);
				var xmlSerializer = new XmlSerializer(typeof(EditorConfig));
				Instance = (EditorConfig)xmlSerializer.Deserialize(stream);
				stream.Close();
			}
			else
			{
				Instance = new EditorConfig();
			}
		}

		public static void Save()
		{
			var stream = File.Open("Editor.config", FileMode.Create);
			var xmlSerializer = new XmlSerializer(typeof(EditorConfig));
			xmlSerializer.Serialize(stream, Instance);
			stream.Close();
		}
		#endregion
	}
}
