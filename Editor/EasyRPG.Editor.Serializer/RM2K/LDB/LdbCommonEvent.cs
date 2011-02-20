using EasyRPG.Editor.RPG;
using EasyRPG.Editor.Serializer.RM2K.Common;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private CommonEvent ReadCommonEvent()
		{
			var commonevent = new CommonEvent
								{
									Id = stream.ReadCompressedInt()
								};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkCommonEvent)stream.ReadCompressedInt();
				if (chunkId == (int)ChunkData.End)
				{
					break;
				}

				var chunkLenght = stream.ReadCompressedInt();
				if (chunkLenght == 0)
				{
					continue;
				}

				switch (chunkId)
				{
					case ChunkCommonEvent.Name:
						commonevent.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkCommonEvent.Trigger:
						commonevent.Trigger = (CommonEvent.TriggerType)stream.ReadCompressedInt();
						break;
					case ChunkCommonEvent.SwitchFlag:
						commonevent.SwitchFlag = stream.ReadCompressedBool();
						break;
					case ChunkCommonEvent.SwitchId:
						commonevent.SwitchId = stream.ReadCompressedInt();
						break;
					case ChunkCommonEvent.EventCommandsSize:
						stream.ReadCompressedInt();
						break;
					case ChunkCommonEvent.EventCommands:
						for (;;)
						{
							if (stream.PeekChar() == 0)
							{
								stream.Skip(4);
								break;
							}
							commonevent.EventCommands.Add(EventCommandReader.ReadEventCommand(stream));
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return commonevent;
		}
		#endregion
	}
}
