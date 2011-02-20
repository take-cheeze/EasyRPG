using EasyRPG.Editor.RPG;
using EasyRPG.Editor.Serializer.RM2K.Common;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private TroopPage ReadTroopPage()
		{
			var page = new TroopPage();
			stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkTroopPage)stream.ReadCompressedInt();
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
					case ChunkTroopPage.Condition:
						page.Condition = ReadTroopPageCondition();
						break;
					case ChunkTroopPage.EventCommandsSize:
						stream.ReadCompressedInt();
						break;
					case ChunkTroopPage.EventCommands:
						for (;;)
						{
							if (stream.PeekChar() == 0)
							{
								stream.Skip(4);
								break;
							}
							page.EventCommands.Add(EventCommandReader.ReadEventCommand(stream));
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return page;
		}
		#endregion
	}
}
