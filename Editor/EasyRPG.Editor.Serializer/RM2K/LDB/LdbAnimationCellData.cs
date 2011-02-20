using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private AnimationCellData ReadAnimationCellData()
		{
			var celldata = new AnimationCellData();
			stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkAnimationCellData)stream.ReadCompressedInt();
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
					case ChunkAnimationCellData.Priority:
						celldata.Priority = stream.ReadCompressedInt();
						break;
					case ChunkAnimationCellData.Id:
						celldata.Id = stream.ReadCompressedInt();
						break;
					case ChunkAnimationCellData.X:
						celldata.X = stream.ReadCompressedInt();
						break;
					case ChunkAnimationCellData.Y:
						celldata.Y = stream.ReadCompressedInt();
						break;
					case ChunkAnimationCellData.Zoom:
						celldata.Zoom = stream.ReadCompressedInt();
						break;
					case ChunkAnimationCellData.ToneRed:
						celldata.ToneRed = stream.ReadCompressedInt();
						break;
					case ChunkAnimationCellData.ToneGreen:
						celldata.ToneGreen = stream.ReadCompressedInt();
						break;
					case ChunkAnimationCellData.ToneBlue:
						celldata.ToneBlue = stream.ReadCompressedInt();
						break;
					case ChunkAnimationCellData.ToneGray:
						celldata.ToneGray = stream.ReadCompressedInt();
						break;
					case ChunkAnimationCellData.Opacity:
						celldata.Opacity = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return celldata;
		}
		#endregion
	}
}
