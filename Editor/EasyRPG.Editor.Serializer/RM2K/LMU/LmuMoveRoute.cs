using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LMU
{
	public partial class LmuReader
	{
		#region BehaviorMethods
		private MoveRoute ReadMoveRoute()
		{
			var moveRoute = new MoveRoute();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkMoveRoute)stream.ReadCompressedInt();
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

					case ChunkMoveRoute.MoveCommandsSize:
						stream.ReadCompressedInt();
						break;
					case ChunkMoveRoute.MoveCommands:
						var startpos = stream.BaseStream.Position;
						do
						{
							moveRoute.MoveCommands.Add(ReadMoveCommand());
						} while ((stream.BaseStream.Position - startpos) < chunkLenght);
						break;
					case ChunkMoveRoute.Skippable:
						moveRoute.Skippable = stream.ReadCompressedBool();
						break;
					case ChunkMoveRoute.Repeat:
						moveRoute.Repeat = stream.ReadCompressedBool();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return moveRoute;
		}
		#endregion
	}
}
