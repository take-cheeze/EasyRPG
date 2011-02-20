using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private ItemAnimation ReadItemAnimation()
		{
			var itemAnimation = new ItemAnimation
								{
									Id = stream.ReadCompressedInt()
								};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkItemAnimation)stream.ReadCompressedInt();
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
					case ChunkItemAnimation.Type:
						itemAnimation.Type = stream.ReadCompressedInt();
						break;
					case ChunkItemAnimation.WeaponAnim:
						itemAnimation.WeaponAnim = stream.ReadCompressedInt();
						break;
					case ChunkItemAnimation.Movement:
						itemAnimation.Movement = stream.ReadCompressedInt();
						break;
					case ChunkItemAnimation.AfterImage:
						itemAnimation.AfterImage = stream.ReadCompressedInt();
						break;
					case ChunkItemAnimation.Attacks:
						itemAnimation.Attacks = stream.ReadCompressedInt();
						break;
					case ChunkItemAnimation.Ranged:
						itemAnimation.Ranged = stream.ReadCompressedBool();
						break;
					case ChunkItemAnimation.RangedAnim:
						itemAnimation.RangedAnim = stream.ReadCompressedInt();
						break;
					case ChunkItemAnimation.RangedSpeed:
						itemAnimation.RangedSpeed = stream.ReadCompressedInt();
						break;
					case ChunkItemAnimation.BattleAnim:
						itemAnimation.BattleAnim = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return itemAnimation;
		}
		#endregion
	}
}
