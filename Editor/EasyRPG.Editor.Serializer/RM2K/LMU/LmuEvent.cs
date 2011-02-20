using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LMU
{
	public partial class LmuReader
	{
		#region BehaviorMethods
		private Event ReadEvent()
		{
			var evnt = new Event
						{
							Id = stream.ReadCompressedInt()
						};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkEvent)stream.ReadCompressedInt();
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
					case ChunkEvent.Name:
						evnt.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkEvent.X:
						evnt.X = stream.ReadCompressedInt();
						break;
					case ChunkEvent.Y:
						evnt.Y = stream.ReadCompressedInt();
						break;
					case ChunkEvent.Pages:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							evnt.Pages.Add(ReadEventPage());
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return evnt;
		}
		#endregion
	}
}
