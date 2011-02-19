using System;
using System.Globalization;
using System.Windows.Data;
using Editor.Utils;

namespace Editor.Converters
{
	public class ImageConverter : IValueConverter
	{
		public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
		{
			var name = (string)value;

			if (parameter != null)
			{
				name = string.Format("{0}\\{1}", parameter, name);
			}

			return string.IsNullOrWhiteSpace(name) ? null : ImageLoader.TryLoadImage(name).Source;
		}

		public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			throw new NotImplementedException();
		}
	}
}
