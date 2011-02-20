using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private BattlerAnimationData ReadBattlerAnimationData()
		{
			var battlerAnimationData = new BattlerAnimationData
											{
												Id = stream.ReadCompressedInt()
											};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkBattlerAnimationData)stream.ReadCompressedInt();
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
					case ChunkBattlerAnimationData.Move:
						battlerAnimationData.Move = stream.ReadCompressedInt();
						break;
					case ChunkBattlerAnimationData.AfterImage:
						battlerAnimationData.AfterImage = stream.ReadCompressedInt();
						break;
					case ChunkBattlerAnimationData.Pose:
						battlerAnimationData.Pose = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return battlerAnimationData;
		}
		#endregion
	}
}
