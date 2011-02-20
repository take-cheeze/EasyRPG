using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private BattlerAnimation ReadBattlerAnimation()
		{
			var battlerAnimation = new BattlerAnimation
									{
										Id = stream.ReadCompressedInt()
									};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkBattlerAnimation)stream.ReadCompressedInt();
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
					case ChunkBattlerAnimation.Name:
						battlerAnimation.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkBattlerAnimation.Speed:
						battlerAnimation.Speed = (BattlerAnimation.SpeedType)stream.ReadCompressedInt();
						break;
					case ChunkBattlerAnimation.BaseData:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							battlerAnimation.BaseData.Add(ReadBattlerAnimationExtension());
						}
						break;
					case ChunkBattlerAnimation.WeaponData:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							battlerAnimation.WeaponData.Add(ReadBattlerAnimationExtension());
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return battlerAnimation;
		}
		#endregion
	}
}
