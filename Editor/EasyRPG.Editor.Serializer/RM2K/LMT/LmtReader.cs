using System;
using System.IO;
using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LMT
{
	public partial class LmtReader
	{
		#region PrivateMembers
		private Rm2KReader stream;
		#endregion

		#region PublicMembers
		public TreeMap TreeMap
		{
			get;
			private set;
		}
		#endregion

		#region Constructor
		public LmtReader()
		{
			TreeMap = new TreeMap();
		}
		#endregion

		#region BehaviorMethods
		public void Load(string filename)
		{
			stream = new Rm2KReader(File.Open(filename, FileMode.Open));
			var header = stream.ReadString(stream.ReadCompressedInt());
			if (header != "LcfMapTree")
			{
				throw new Exception("Invalid map tree file format.");
			}
			LoadChunks();
		}

		private void LoadChunks()
		{

			TreeMap.Maps.Add(null);
			for (var i = 1; i < stream.ReadCompressedInt(); i++)
			{
				TreeMap.Maps.Add(ReadMapInfo());
			}

			for (var i = stream.ReadCompressedInt(); i > 0; i--)
			{
				TreeMap.TreeOrder.Add(stream.ReadCompressedInt());
			}

			TreeMap.ActiveNode = stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkTreeMap)stream.ReadCompressedInt();
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
					case ChunkTreeMap.StartMapId:
						TreeMap.StartMapId = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.StartX:
						TreeMap.StartX = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.StartY:
						TreeMap.StartY = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.BoatMapId:
						TreeMap.BoatMapId = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.BoatX:
						TreeMap.BoatX = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.BoatY:
						TreeMap.BoatY = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.ShipMapId:
						TreeMap.ShipMapId = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.ShipX:
						TreeMap.ShipX = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.ShipY:
						TreeMap.ShipY = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.AirshipMapId:
						TreeMap.AirshipMapId = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.AirshipX:
						TreeMap.AirshipX = stream.ReadCompressedInt();
						break;
					case ChunkTreeMap.AirshipY:
						TreeMap.AirshipY = stream.ReadCompressedInt();
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
