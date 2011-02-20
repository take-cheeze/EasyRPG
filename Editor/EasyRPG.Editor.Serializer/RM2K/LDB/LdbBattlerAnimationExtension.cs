using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private BattlerAnimationExtension ReadBattlerAnimationExtension()
		{
			var extension = new BattlerAnimationExtension();
			stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkBattlerAnimationExtension)stream.ReadCompressedInt();
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
					case ChunkBattlerAnimationExtension.Name:
						extension.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkBattlerAnimationExtension.BattlerName:
						extension.BattlerName = stream.ReadString(chunkLenght);
						break;
					case ChunkBattlerAnimationExtension.BattlerIndex:
						extension.BattlerIndex = stream.ReadCompressedInt();
						break;
					case ChunkBattlerAnimationExtension.AnimationType:
						extension.AnimationType = stream.ReadCompressedInt();
						break;
					case ChunkBattlerAnimationExtension.AnimationId:
						extension.AnimationId = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return extension;
		}
		#endregion
	}
}
