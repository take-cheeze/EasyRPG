using EasyRPG.Editor.Serializer.RM2K.Common;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private RPG.System ReadSystem()
		{
			var system = new RPG.System();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkSystem)stream.ReadCompressedInt();
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
					case ChunkSystem.LdbId:
						system.LdbId = stream.ReadCompressedInt();
						break;
					case ChunkSystem.BoatName:
						system.BoatName = stream.ReadString(chunkLenght);
						break;
					case ChunkSystem.ShipName:
						system.ShipName = stream.ReadString(chunkLenght);
						break;
					case ChunkSystem.AirshipName:
						system.AirshipName = stream.ReadString(chunkLenght);
						break;
					case ChunkSystem.BoatIndex:
						system.BoatIndex = stream.ReadCompressedInt();
						break;
					case ChunkSystem.ShipIndex:
						system.ShipIndex = stream.ReadCompressedInt();
						break;
					case ChunkSystem.AirshipIndex:
						system.AirshipIndex = stream.ReadCompressedInt();
						break;
					case ChunkSystem.TitleName:
						system.TitleName = stream.ReadString(chunkLenght);
						break;
					case ChunkSystem.GameoverName:
						system.GameoverName = stream.ReadString(chunkLenght);
						break;
					case ChunkSystem.SystemName:
						system.SystemName = stream.ReadString(chunkLenght);
						break;
					case ChunkSystem.System2Name:
						system.System2Name = stream.ReadString(chunkLenght);
						break;
					case ChunkSystem.PartySize:
						stream.ReadCompressedInt();
						break;
					case ChunkSystem.Party:
						system.Party = stream.ReadInt16Array(chunkLenght);
						break;
					case ChunkSystem.MenuCommandsSize:
						stream.ReadCompressedInt();
						break;
					case ChunkSystem.MenuCommands:
						system.MenuCommands = stream.ReadInt16Array(chunkLenght);
						break;
					case ChunkSystem.TitleMusic:
						system.TitleMusic = MusicReader.ReadMusic(stream);
						break;
					case ChunkSystem.BattleMusic:
						system.BattleMusic = MusicReader.ReadMusic(stream);
						break;
					case ChunkSystem.BattleEndMusic:
						system.BattleEndMusic = MusicReader.ReadMusic(stream);
						break;
					case ChunkSystem.InnMusic:
						system.InnMusic = MusicReader.ReadMusic(stream);
						break;
					case ChunkSystem.BoatMusic:
						system.BoatMusic = MusicReader.ReadMusic(stream);
						break;
					case ChunkSystem.ShipMusic:
						system.ShipMusic = MusicReader.ReadMusic(stream);
						break;
					case ChunkSystem.AirshipMusic:
						system.AirshipMusic = MusicReader.ReadMusic(stream);
						break;
					case ChunkSystem.GameoverMusic:
						system.GameoverMusic = MusicReader.ReadMusic(stream);
						break;
					case ChunkSystem.CursorSe:
						system.CursorSe = ReadSound();
						break;
					case ChunkSystem.DecisionSe:
						system.DecisionSe = ReadSound();
						break;
					case ChunkSystem.CancelSe:
						system.CancelSe = ReadSound();
						break;
					case ChunkSystem.BuzzerSe:
						system.BuzzerSe = ReadSound();
						break;
					case ChunkSystem.BattleSe:
						system.BattleSe = ReadSound();
						break;
					case ChunkSystem.EscapeSe:
						system.EscapeSe = ReadSound();
						break;
					case ChunkSystem.EnemyAttackSe:
						system.EnemyAttackSe = ReadSound();
						break;
					case ChunkSystem.EnemyDamagedSe:
						system.EnemyDamagedSe = ReadSound();
						break;
					case ChunkSystem.ActorDamagedSe:
						system.ActorDamagedSe = ReadSound();
						break;
					case ChunkSystem.DodgeSe:
						system.DodgeSe = ReadSound();
						break;
					case ChunkSystem.EnemyDeathSe:
						system.EnemyDeathSe = ReadSound();
						break;
					case ChunkSystem.ItemSe:
						system.ItemSe = ReadSound();
						break;
					case ChunkSystem.TransitionOut:
						system.TransitionOut = stream.ReadCompressedInt();
						break;
					case ChunkSystem.TransitionIn:
						system.TransitionIn = stream.ReadCompressedInt();
						break;
					case ChunkSystem.BattleStartFadeout:
						system.BattleStartFadeout = stream.ReadCompressedInt();
						break;
					case ChunkSystem.BattleStartFadein:
						system.BattleStartFadein = stream.ReadCompressedInt();
						break;
					case ChunkSystem.BattleEndFadeout:
						system.BattleEndFadeout = stream.ReadCompressedInt();
						break;
					case ChunkSystem.BattleEndFadein:
						system.BattleEndFadein = stream.ReadCompressedInt();
						break;
					case ChunkSystem.MessageStretch:
						system.MessageStretch = stream.ReadCompressedInt();
						break;
					case ChunkSystem.FontId:
						system.FontId = stream.ReadCompressedInt();
						break;
					case ChunkSystem.SelectedCondition:
						system.SelectedCondition = stream.ReadCompressedInt();
						break;
					case ChunkSystem.SelectedHero:
						system.SelectedHero = stream.ReadCompressedInt();
						break;
					case ChunkSystem.BattletestBackground:
						system.BattletestBackground = stream.ReadString(chunkLenght);
						break;
					case ChunkSystem.BattletestData:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							system.BattletestData.Add(ReadTestBattler());
						}
						break;
					case ChunkSystem.SavedTimes:
						system.SavedTimes = stream.ReadCompressedInt();
						break;
					case ChunkSystem.BattleTestTerrain:
						system.BattleTestTerrain = stream.ReadCompressedInt();
						break;
					case ChunkSystem.BattleTestFormation:
						system.BattleTestFormation = stream.ReadCompressedInt();
						break;
					case ChunkSystem.BattleTestCondition:
						system.BattleTestCondition = stream.ReadCompressedInt();
						break;
					case ChunkSystem.ShowFrame:
						system.ShowFrame = stream.ReadCompressedBool();
						break;
					case ChunkSystem.FrameName:
						system.FrameName = stream.ReadString(chunkLenght);
						break;
					case ChunkSystem.InvertAnimations:
						system.InvertAnimations = stream.ReadCompressedBool();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return system;
		}
		#endregion
	}
}
