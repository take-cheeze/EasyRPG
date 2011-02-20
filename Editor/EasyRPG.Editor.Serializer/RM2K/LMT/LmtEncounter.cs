using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LMT
{
	public partial class LmtReader
	{
		#region BehaviorMethods
		private Encounter ReadEncounter()
		{
			var encounter = new Encounter();
			stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkEncounter)stream.ReadCompressedInt();
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
					case ChunkEncounter.Id:
						encounter.Id = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return encounter;
		}
		#endregion
	}
}
