using System.Windows.Controls;
using System.Windows.Media;

namespace Editor.Controls
{
	public class NearestNeighborImage : Image
	{
		protected override void OnRender(DrawingContext dc)
		{
			VisualBitmapScalingMode = BitmapScalingMode.NearestNeighbor;
			base.OnRender(dc);
		}
	}
}
