using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private BattleCommand ReadBattleCommand()
		{
			var battleCommand = new BattleCommand
									{
										Id = stream.ReadCompressedInt()
									};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkBattleCommand)stream.ReadCompressedInt();
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
					case ChunkBattleCommand.Name:
						battleCommand.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkBattleCommand.Type:
						battleCommand.Type = (BattleCommand.CommandType)stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return battleCommand;
		}
		#endregion
	}
}
