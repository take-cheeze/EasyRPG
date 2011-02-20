using EasyRPG.Editor.RPG;
using EasyRPG.Editor.Serializer.RM2K.Common;

namespace EasyRPG.Editor.Serializer.RM2K.LMU
{
	public partial class LmuReader
	{
		#region BehaviorMethods
		private EventPage ReadEventPage()
		{
			var eventpage = new EventPage
								{
									Id = stream.ReadCompressedInt()
								};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkEventPage)stream.ReadCompressedInt();
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
					case ChunkEventPage.Condition:
						eventpage.Condition = ReadEventPageCondition();
						break;
					case ChunkEventPage.CharacterName:
						eventpage.CharacterName = stream.ReadString(chunkLenght);
						break;
					case ChunkEventPage.CharacterIndex:
						eventpage.CharacterIndex = stream.ReadCompressedInt();
						break;
					case ChunkEventPage.CharacterDirection:
						eventpage.CharacterDirection = stream.ReadCompressedInt();
						break;
					case ChunkEventPage.CharacterPattern:
						eventpage.CharacterPattern = stream.ReadCompressedInt();
						break;
					case ChunkEventPage.Translucent:
						eventpage.Translucent = stream.ReadCompressedBool();
						break;
					case ChunkEventPage.MoveType:
						eventpage.MoveType = stream.ReadCompressedInt();
						break;
					case ChunkEventPage.MoveFrequency:
						eventpage.MoveFrequency = stream.ReadCompressedInt();
						break;
					case ChunkEventPage.Trigger:
						eventpage.Trigger = stream.ReadCompressedInt();
						break;
					case ChunkEventPage.PriorityType:
						eventpage.PriorityType = stream.ReadCompressedInt();
						break;
					case ChunkEventPage.Overlap:
						eventpage.Overlap = stream.ReadCompressedBool();
						break;
					case ChunkEventPage.AnimationType:
						eventpage.AnimationType = stream.ReadCompressedInt();
						break;
					case ChunkEventPage.MoveSpeed:
						eventpage.MoveSpeed = stream.ReadCompressedInt();
						break;
					case ChunkEventPage.MoveRoute:
						eventpage.MoveRoute = ReadMoveRoute();
						break;
					case ChunkEventPage.EventCommandsSize:
						stream.ReadCompressedInt();
						break;
					case ChunkEventPage.EventCommands:
						for (;;)
						{
							if (stream.PeekChar() == 0)
							{
								stream.Skip(4);
								break;
							}
							eventpage.EventCommands.Add(EventCommandReader.ReadEventCommand(stream));
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return eventpage;
		}
		#endregion
	}
}
