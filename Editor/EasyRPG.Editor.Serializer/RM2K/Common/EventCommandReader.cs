using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.Common
{
	public static class EventCommandReader
	{
		#region BehaviorMethods
		public static EventCommand ReadEventCommand(Rm2KReader stream)
		{
			var eventCommand = new EventCommand
								{
									Code = stream.ReadCompressedInt()
								};
			if (eventCommand.Code != 0)
			{
				eventCommand.Indent = stream.ReadCompressedInt();
				eventCommand.Text = stream.ReadString(stream.ReadCompressedInt());
				for (var i = stream.ReadCompressedInt(); i > 0; i--)
				{
					eventCommand.Parameters.Add(stream.ReadCompressedInt());
				}
			}
			return eventCommand;
		} 
		#endregion
	}
}
