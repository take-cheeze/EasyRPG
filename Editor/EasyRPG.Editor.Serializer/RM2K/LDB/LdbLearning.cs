using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region HelperMethods
		private Learning ReadLearning()
		{
			var learning = new Learning();
			stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkLearning)stream.ReadCompressedInt();
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
					case ChunkLearning.Level:
						learning.Level = stream.ReadCompressedInt();
						break;
					case ChunkLearning.SkillId:
						learning.SkillId = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return learning;
		}
		#endregion
	}
}
