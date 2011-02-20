using EasyRPG.Editor.RPG;
using EasyRPG.Editor.Serializer.RM2K.LDB;

namespace EasyRPG.Editor.Serializer.RM2K.Common
{
	public static class MusicReader
	{
		#region BehaviorMethods
		public static Music ReadMusic(Rm2KReader stream)
		{
			var music = new Music();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkMusic)stream.ReadCompressedInt();
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
					case ChunkMusic.Name:
						music.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkMusic.Fadein:
						music.Fadein = stream.ReadCompressedInt();
						break;
					case ChunkMusic.Volume:
						music.Volume = stream.ReadCompressedInt();
						break;
					case ChunkMusic.Tempo:
						music.Tempo = stream.ReadCompressedInt();
						break;
					case ChunkMusic.Balance:
						music.Balance = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return music;
		}
		#endregion
	}
}
