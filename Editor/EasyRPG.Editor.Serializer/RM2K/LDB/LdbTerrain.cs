using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Terrain ReadTerrain()
		{
			var terrain = new Terrain
						{
							Id = stream.ReadCompressedInt()
						};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkTerrain)stream.ReadCompressedInt();
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
					case ChunkTerrain.Name:
						terrain.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkTerrain.Damage:
						terrain.Damage = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.EncounterRate:
						terrain.EncounterRate = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.BackgroundName:
						terrain.BackgroundName = stream.ReadString(chunkLenght);
						break;
					case ChunkTerrain.BoatPass:
						terrain.BoatPass = stream.ReadCompressedBool();
						break;
					case ChunkTerrain.ShipPass:
						terrain.ShipPass = stream.ReadCompressedBool();
						break;
					case ChunkTerrain.AirshipPass:
						terrain.AirshipPass = stream.ReadCompressedBool();
						break;
					case ChunkTerrain.AirshipLand:
						terrain.AirshipLand = stream.ReadCompressedBool();
						break;
					case ChunkTerrain.BushDepth:
						terrain.BushDepth = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.Footstep:
						terrain.Footstep = ReadSound();
						break;
					case ChunkTerrain.OnDamageSe:
						terrain.OnDamageSe = stream.ReadCompressedBool();
						break;
					case ChunkTerrain.BackgroundType:
						terrain.BackgroundType = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.BackgroundAName:
						terrain.BackgroundAName = stream.ReadString(chunkLenght);
						break;
					case ChunkTerrain.BackgroundAScrollH:
						terrain.BackgroundAScrollH = stream.ReadCompressedBool();
						break;
					case ChunkTerrain.BackgroundAScrollV:
						terrain.BackgroundAScrollV = stream.ReadCompressedBool();
						break;
					case ChunkTerrain.BackgroundAScrollHSpeed:
						terrain.BackgroundAScrollHSpeed = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.BackgroundAScrollVSpeed:
						terrain.BackgroundAScrollVSpeed = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.BackgroundB:
						terrain.BackgroundB = stream.ReadCompressedBool();
						break;
					case ChunkTerrain.BackgroundBName:
						terrain.BackgroundBName = stream.ReadString(chunkLenght);
						break;
					case ChunkTerrain.BackgroundBScrollH:
						terrain.BackgroundBScrollH = stream.ReadCompressedBool();
						break;
					case ChunkTerrain.BackgroundBScrollV:
						terrain.BackgroundBScrollV = stream.ReadCompressedBool();
						break;
					case ChunkTerrain.BackgroundBScrollHSpeed:
						terrain.BackgroundBScrollHSpeed = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.BackgroundBScrollVSpeed:
						terrain.BackgroundBScrollVSpeed = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.SpecialFlags:
						var bitflag = stream.ReadByte();
						terrain.SpecialBackPartyFlag = (bitflag & 0x01) > 0;
						terrain.SpecialBackEnemiesFlag = (bitflag & 0x02) > 0;
						terrain.SpecialLateralPartyFlag = (bitflag & 0x04) > 0;
						terrain.SpecialLateralEnemiesFlag = (bitflag & 0x08) > 0;
						break;
					case ChunkTerrain.SpecialBackParty:
						terrain.SpecialBackParty = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.SpecialBackEnemies:
						terrain.SpecialBackEnemies = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.SpecialLateralParty:
						terrain.SpecialLateralParty = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.SpecialLateralEnemies:
						terrain.SpecialLateralEnemies = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.GridLocation:
						terrain.GridLocation = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.GridA:
						terrain.GridA = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.GridB:
						terrain.GridB = stream.ReadCompressedInt();
						break;
					case ChunkTerrain.GridC:
						terrain.GridC = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return terrain;
		}
		#endregion
	}
}
