using System;
using System.Windows;

namespace Editor
{
	/// <summary>
	/// Interaction logic for App.xaml
	/// </summary>
	public partial class App
	{
		private void ApplicationStartup(object sender, StartupEventArgs e)
		{
			var packUri = String.Format("Styles/{0}.xaml", "DefaultStyle");
			var dictionary = LoadComponent(new Uri(packUri, UriKind.Relative)) as ResourceDictionary;

			if (dictionary != null)
			{
				 Current.Resources.MergedDictionaries.Clear();
				 Current.Resources.MergedDictionaries.Add(dictionary);
			}
		}
	}
}
