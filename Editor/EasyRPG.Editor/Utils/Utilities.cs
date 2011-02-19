using System.Windows;
using System.Windows.Media;

namespace Editor.Utils
{
	public static class Utilities
	{
		public static DependencyObject GetTopLevelControl(DependencyObject control)
		{
			DependencyObject tmp = control;
			DependencyObject parent = null;
			while ((tmp = VisualTreeHelper.GetParent(tmp)) != null)
			{
				parent = tmp;
			}
			return parent;
		}
	}
}
