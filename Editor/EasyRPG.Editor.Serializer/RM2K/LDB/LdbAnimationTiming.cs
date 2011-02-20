using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private AnimationTiming ReadAnimationTiming()
		{
			var timing = new AnimationTiming();
			stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkAnimationTiming)stream.ReadCompressedInt();
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
					case ChunkAnimationTiming.Frame:
						timing.Frame = stream.ReadCompressedInt();
						break;
					case ChunkAnimationTiming.Se:
						timing.Se = ReadSound();
						break;
					case ChunkAnimationTiming.FlashScope:
						timing.FlashScope = (AnimationTiming.FlashScopeType)stream.ReadCompressedInt();
						break;
					case ChunkAnimationTiming.FlashRed:
						timing.FlashRed = stream.ReadCompressedInt();
						break;
					case ChunkAnimationTiming.FlashGreen:
						timing.FlashGreen = stream.ReadCompressedInt();
						break;
					case ChunkAnimationTiming.FlashBlue:
						timing.FlashBlue = stream.ReadCompressedInt();
						break;
					case ChunkAnimationTiming.FlashPower:
						timing.FlashPower = stream.ReadCompressedInt();
						break;
					case ChunkAnimationTiming.ScreenShake:
						timing.ScreenShake = (AnimationTiming.ScreenShakeType)stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return timing;
		}
		#endregion
	}
}