using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private TestBattler ReadTestBattler()
		{
			var testBattler = new TestBattler();
			stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkTestBattler)stream.ReadCompressedInt();
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
					case ChunkTestBattler.Id:
						testBattler.Id = stream.ReadCompressedInt();
						break;
					case ChunkTestBattler.Level:
						testBattler.Level = stream.ReadCompressedInt();
						break;
					case ChunkTestBattler.WeaponId:
						testBattler.WeaponId = stream.ReadCompressedInt();
						break;
					case ChunkTestBattler.ShieldId:
						testBattler.ShieldId = stream.ReadCompressedInt();
						break;
					case ChunkTestBattler.ArmorId:
						testBattler.ArmorId = stream.ReadCompressedInt();
						break;
					case ChunkTestBattler.HelmetId:
						testBattler.HelmetId = stream.ReadCompressedInt();
						break;
					case ChunkTestBattler.AccessoryId:
						testBattler.AccessoryId = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return testBattler;
		}
		#endregion
	}
}
