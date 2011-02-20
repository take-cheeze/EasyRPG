using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Troop ReadTroop()
		{
			var troop = new Troop
							{
								Id = stream.ReadCompressedInt()
							};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkTroop)stream.ReadCompressedInt();
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
					case ChunkTroop.Name:
						troop.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkTroop.Members:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							troop.Members.Add(ReadTroopMember());
						}
						break;
					case ChunkTroop.TerrainSetSize:
						stream.ReadCompressedInt();
						break;
					case ChunkTroop.TerrainSet:
						troop.TerrainSet = stream.ReadBoolArray(chunkLenght);
						break;
					case ChunkTroop.Pages:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							troop.Pages.Add(ReadTroopPage());
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return troop;
		}
		#endregion
	}
}
