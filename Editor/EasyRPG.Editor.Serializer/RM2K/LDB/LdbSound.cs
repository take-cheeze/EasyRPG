using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Sound ReadSound()
		{
			var sound = new Sound();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkSound)stream.ReadCompressedInt();
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
					case ChunkSound.Name:
						sound.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkSound.Volume:
						sound.Volume = stream.ReadCompressedInt();
						break;
					case ChunkSound.Tempo:
						sound.Tempo = stream.ReadCompressedInt();
						break;
					case ChunkSound.Balance:
						sound.Balance = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return sound;
		}
		#endregion
	}
}
