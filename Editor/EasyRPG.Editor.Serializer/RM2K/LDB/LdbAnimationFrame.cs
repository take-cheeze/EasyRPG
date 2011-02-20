using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private AnimationFrame ReadAnimationFrame()
		{
			var frame = new AnimationFrame();
			stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkAnimationFrame)stream.ReadCompressedInt();
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
					case ChunkAnimationFrame.Cells:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							frame.Cells.Add(ReadAnimationCellData());
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return frame;
		}
		#endregion
	}
}