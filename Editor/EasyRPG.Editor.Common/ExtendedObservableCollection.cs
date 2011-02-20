using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.Linq;

namespace EasyRPG.Editor.Common
{
	public class ExtendedObservableCollection<T> : ObservableCollection<T>
	{
		#region PrivateMembers
		private bool surpressEvents; 
		#endregion

		#region BehaviorMethods
		public void AddRange(IEnumerable<T> items)
		{
			surpressEvents = true;
			foreach (var item in items)
			{
				Add(item);
			}
			surpressEvents = false;
			OnCollectionChanged(new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Add, items.ToList()));
		}

		public void RemoveRange(IEnumerable<T> items)
		{
			surpressEvents = true;
			foreach (var item in items)
			{
				Remove(item);
			}
			surpressEvents = false;
			OnCollectionChanged(new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Remove, items.ToList()));
		}
		#endregion

		#region ObservableCollection
		protected override void OnCollectionChanged(NotifyCollectionChangedEventArgs e)
		{
			if (!surpressEvents)
			{
				base.OnCollectionChanged(e);
			}
		}
		#endregion
	}
}
