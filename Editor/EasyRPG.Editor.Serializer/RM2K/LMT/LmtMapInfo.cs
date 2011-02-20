using EasyRPG.Editor.RPG;
using EasyRPG.Editor.Serializer.RM2K.Common;

namespace EasyRPG.Editor.Serializer.RM2K.LMT
{
	public partial class LmtReader
	{
		#region BehaviorMethods
		private MapInfo ReadMapInfo()
		{
			var mapInfo = new MapInfo
								{
									Id = stream.ReadCompressedInt()
								};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkMapInfo)stream.ReadCompressedInt();
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
					case ChunkMapInfo.Name:
						mapInfo.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkMapInfo.ParentMap:
						mapInfo.ParentMap = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.Indentation:
						mapInfo.Indentation = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.Type:
						mapInfo.Type = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.ScrollbarX:
						mapInfo.ScrollbarX = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.ScrollbarY:
						mapInfo.ScrollbarY = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.ExpandedNode:
						mapInfo.ExpandedNode = stream.ReadCompressedBool();
						break;
					case ChunkMapInfo.MusicType:
						mapInfo.MusicType = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.MusicName:
						mapInfo.Music = MusicReader.ReadMusic(stream);
						break;
					case ChunkMapInfo.BackgroundType:
						mapInfo.BackgroundType = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.BackgroundName:
						mapInfo.BackgroundName = stream.ReadString(chunkLenght);
						break;
					case ChunkMapInfo.Teleport:
						mapInfo.Teleport = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.Escape:
						mapInfo.Escape = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.Save:
						mapInfo.Save = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.Encounters:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							mapInfo.Encounters.Add(ReadEncounter());
						}
						break;
					case ChunkMapInfo.EncounterSteps:
						mapInfo.EncounterSteps = stream.ReadCompressedInt();
						break;
					case ChunkMapInfo.AreaRect:
						mapInfo.AreaX = stream.ReadInt32();
						mapInfo.AreaY = stream.ReadInt32();
						mapInfo.AreaW = stream.ReadInt32() - mapInfo.AreaX;
						mapInfo.AreaH = stream.ReadInt32() - mapInfo.AreaY;
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return mapInfo;
		}
		#endregion
	}
}
