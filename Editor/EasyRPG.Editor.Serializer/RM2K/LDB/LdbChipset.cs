using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Chipset ReadChipset()
		{
			var chipset = new Chipset
							{
								Id = stream.ReadCompressedInt()
							};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkChipset)stream.ReadCompressedInt();
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
					case ChunkChipset.Name:
						chipset.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkChipset.ChipsetName:
						chipset.ChipsetName = stream.ReadString(chunkLenght);
						break;
					case ChunkChipset.TerrainData:
						chipset.TerrainData = stream.ReadInt16Array(chunkLenght);
						break;
					case ChunkChipset.PassableDataLower:
						chipset.PassableDataLower = stream.ReadByteArray(chunkLenght);
						break;
					case ChunkChipset.PassableDataUpper:
						chipset.PassableDataUpper = stream.ReadByteArray(chunkLenght);
						break;
					case ChunkChipset.AnimationType:
						chipset.AnimationType = stream.ReadCompressedInt();
						break;
					case ChunkChipset.AnimationSpeed:
						chipset.AnimationSpeed = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return chipset;
		}
		#endregion
	}
}
