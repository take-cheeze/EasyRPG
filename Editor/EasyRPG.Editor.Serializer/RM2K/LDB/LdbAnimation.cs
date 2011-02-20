using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Animation ReadAnimation()
		{
			var animation = new Animation
								{
									Id = stream.ReadCompressedInt()
								};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkAnimation)stream.ReadCompressedInt();
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
					case ChunkAnimation.Name:
						animation.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkAnimation.AnimationName:
						animation.AnimationName = stream.ReadString(chunkLenght);
						break;
					case ChunkAnimation.Timings:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							animation.Timings.Add(ReadAnimationTiming());
						}
						break;
					case ChunkAnimation.Scope:
						animation.Scope = (Animation.ScopeType)stream.ReadCompressedInt();
						break;
					case ChunkAnimation.Position:
						animation.Position = (Animation.PositionType)stream.ReadCompressedInt();
						break;
					case ChunkAnimation.Frames:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							animation.Frames.Add(ReadAnimationFrame());
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return animation;
		}
		#endregion
	}
}
