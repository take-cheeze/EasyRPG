using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private BattleCommands ReadBattleCommands()
		{
			var battleCommands = new BattleCommands();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkBattleCommands)stream.ReadCompressedInt();
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
					case ChunkBattleCommands.Command:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							battleCommands.Commands.Add(ReadBattleCommand());
						}
						break;
					case ChunkBattleCommands.Placement:
						battleCommands.Placement = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.Row:
						battleCommands.Row = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.BattleType:
						battleCommands.BattleType = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.DeathHandler1:
						battleCommands.DeathHandler1 = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.Unknown1:
						battleCommands.Unknown1 = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.DeathHandler2:
						battleCommands.DeathHandler2 = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.DeathEvent:
						battleCommands.DeathEvent = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.WindowSize:
						battleCommands.WindowSize = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.Transparency:
						battleCommands.Transparency = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.Teleport:
						battleCommands.Teleport = stream.ReadCompressedBool();
						break;
					case ChunkBattleCommands.TeleportId:
						battleCommands.TeleportId = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.TeleportX:
						battleCommands.TeleportX = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.TeleportY:
						battleCommands.TeleportY = stream.ReadCompressedInt();
						break;
					case ChunkBattleCommands.TeleportFace:
						battleCommands.TeleportFace = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return battleCommands;
		}
		#endregion
	}
}