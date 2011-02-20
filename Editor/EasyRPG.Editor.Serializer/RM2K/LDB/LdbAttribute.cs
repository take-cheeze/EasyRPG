using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Attribute ReadAttribute()
		{
			var attribute = new Attribute
								{
									Id = stream.ReadCompressedInt()
								};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkAttribute)stream.ReadCompressedInt();
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
					case ChunkAttribute.Name:
						attribute.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkAttribute.Type:
						attribute.Type = (Attribute.AttributeType)stream.ReadCompressedInt();
						break;
					case ChunkAttribute.ARate:
						attribute.ARate = stream.ReadCompressedInt();
						break;
					case ChunkAttribute.BRate:
						attribute.BRate = stream.ReadCompressedInt();
						break;
					case ChunkAttribute.CRate:
						attribute.CRate = stream.ReadCompressedInt();
						break;
					case ChunkAttribute.DRate:
						attribute.DRate = stream.ReadCompressedInt();
						break;
					case ChunkAttribute.ERate:
						attribute.ERate = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return attribute;
		}
		#endregion
	}
}