using System;
using System.IO;
using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LMU
{
	public partial class LmuReader
	{
		#region PrivateMembers
		private Rm2KReader stream;
		#endregion

		#region PublicMembers
		public Map Map
		{
			get;
			private set;
		}
		#endregion

		#region Constructor
		public LmuReader()
		{
			Map = new Map();
		}
		#endregion

		#region BehaviorMethods
		public void Load(string filename)
		{
			stream = new Rm2KReader(File.Open(filename, FileMode.Open));
			var header = stream.ReadString(stream.ReadCompressedInt());
			if (header != "LcfMapUnit")
			{
				throw new Exception("Invalid map file format.");
			}
			LoadChunks();
		}

		private void LoadChunks()
		{
			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkMap)stream.ReadCompressedInt();
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
					case ChunkMap.ChipsetId:
						Map.ChipsetId = stream.ReadCompressedInt();
						break;
					case ChunkMap.Width:
						Map.Width = stream.ReadCompressedInt();
						break;
					case ChunkMap.Height:
						Map.Height = stream.ReadCompressedInt();
						break;
					case ChunkMap.ScrollType:
						Map.ScrollType = stream.ReadCompressedInt();
						break;
					case ChunkMap.ParallaxFlag:
						Map.ParallaxFlag = stream.ReadCompressedBool();
						break;
					case ChunkMap.ParallaxName:
						Map.ParallaxName = stream.ReadString(chunkLenght);
						break;
					case ChunkMap.ParallaxLoopX:
						Map.ParallaxLoopX = stream.ReadCompressedBool();
						break;
					case ChunkMap.ParallaxLoopY:
						Map.ParallaxLoopY = stream.ReadCompressedBool();
						break;
					case ChunkMap.ParallaxAutoLoopX:
						Map.ParallaxAutoLoopX = stream.ReadCompressedBool();
						break;
					case ChunkMap.ParallaxSx:
						Map.ParallaxSx = stream.ReadCompressedInt();
						break;
					case ChunkMap.ParallaxAutoLoopY:
						Map.ParallaxAutoLoopY = stream.ReadCompressedBool();
						break;
					case ChunkMap.ParallaxSy:
						Map.ParallaxSy = stream.ReadCompressedInt();
						break;
					case ChunkMap.LowerLayer:
						Map.LowerLayer = stream.ReadInt16Array(chunkLenght);
						break;
					case ChunkMap.UpperLayer:
						Map.UpperLayer = stream.ReadInt16Array(chunkLenght);
						break;
					case ChunkMap.Events:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							Map.Events.Add(ReadEvent());
						}
						break;
					case ChunkMap.SaveTimes:
						Map.SaveTimes = stream.ReadCompressedInt();
						break;
					case ChunkMap.GeneratorFlag:
						Map.GeneratorFlag = stream.ReadCompressedBool();
						break;
					case ChunkMap.GeneratorMode:
						Map.GeneratorMode = stream.ReadCompressedInt();
						break;
					case ChunkMap.TopLevel:
						Map.TopLevel = stream.ReadCompressedBool();
						break;
					case ChunkMap.GeneratorTiles:
						Map.GeneratorTiles = stream.ReadCompressedInt();
						break;
					case ChunkMap.GeneratorWidth:
						Map.GeneratorWidth = stream.ReadCompressedInt();
						break;
					case ChunkMap.GeneratorHeight:
						Map.GeneratorHeight = stream.ReadCompressedInt();
						break;
					case ChunkMap.GeneratorSurround:
						Map.GeneratorSurround = stream.ReadCompressedBool();
						break;
					case ChunkMap.GeneratorUpperWall:
						Map.GeneratorUpperWall = stream.ReadCompressedBool();
						break;
					case ChunkMap.GeneratorFloorB:
						Map.GeneratorFloorB = stream.ReadCompressedBool();
						break;
					case ChunkMap.GeneratorFloorC:
						Map.GeneratorFloorC = stream.ReadCompressedBool();
						break;
					case ChunkMap.GeneratorExtraB:
						Map.GeneratorExtraB = stream.ReadCompressedBool();
						break;
					case ChunkMap.GeneratorExtraC:
						Map.GeneratorExtraC = stream.ReadCompressedBool();
						break;
					case ChunkMap.GeneratorX:
						Map.GeneratorX = stream.ReadUInt32Array(chunkLenght);
						break;
					case ChunkMap.GeneratorY:
						Map.GeneratorY = stream.ReadUInt32Array(chunkLenght);
						break;
					case ChunkMap.GeneratorTileIds:
						Map.GeneratorTileIds = stream.ReadInt16Array(chunkLenght);
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
		}
		#endregion
	}
}
