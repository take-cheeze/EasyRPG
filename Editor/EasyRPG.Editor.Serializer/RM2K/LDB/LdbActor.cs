using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region HelperMethods
		private Actor ReadActor()
		{
			var actor = new Actor
							{
								Id = stream.ReadCompressedInt()
							};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkActor)stream.ReadCompressedInt();
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
					case ChunkActor.Name:
						actor.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkActor.Title:
						actor.Title = stream.ReadString(chunkLenght);
						break;
					case ChunkActor.CharacterName:
						actor.CharacterName = stream.ReadString(chunkLenght);
						break;
					case ChunkActor.CharacterIndex:
						actor.CharacterIndex = stream.ReadCompressedInt();
						break;
					case ChunkActor.Transparent:
						actor.Transparent = stream.ReadCompressedBool();
						break;
					case ChunkActor.InitialLevel:
						actor.InitialLevel = stream.ReadCompressedInt();
						break;
					case ChunkActor.FinalLevel:
						actor.FinalLevel = stream.ReadCompressedInt();
						break;
					case ChunkActor.CriticalHit:
						actor.CriticalHit = stream.ReadCompressedBool();
						break;
					case ChunkActor.CriticalHitChance:
						actor.CriticalHitChance = stream.ReadCompressedInt();
						break;
					case ChunkActor.FaceName:
						actor.FaceName = stream.ReadString(chunkLenght);
						break;
					case ChunkActor.FaceIndex:
						actor.FaceIndex = stream.ReadCompressedInt();
						break;
					case ChunkActor.TwoSwordsStyle:
						actor.TwoSwordsStyle = stream.ReadCompressedBool();
						break;
					case ChunkActor.FixEquipment:
						actor.FixEquipment = stream.ReadCompressedBool();
						break;
					case ChunkActor.AutoBattle:
						actor.AutoBattle = stream.ReadCompressedBool();
						break;
					case ChunkActor.SuperGuard:
						actor.SuperGuard = stream.ReadCompressedBool();
						break;
					case ChunkActor.Parameters:
						actor.ParameterMaxhp = stream.ReadInt16Array(chunkLenght / 6);
						actor.ParameterMaxsp = stream.ReadInt16Array(chunkLenght / 6);
						actor.ParameterAttack = stream.ReadInt16Array(chunkLenght / 6);
						actor.ParameterDefense = stream.ReadInt16Array(chunkLenght / 6);
						actor.ParameterSpirit = stream.ReadInt16Array(chunkLenght / 6);
						actor.ParameterAgility = stream.ReadInt16Array(chunkLenght / 6);
						break;
					case ChunkActor.ExpBase:
						actor.ExpBase = stream.ReadCompressedInt();
						break;
					case ChunkActor.ExpInflation:
						actor.ExpInflation = stream.ReadCompressedInt();
						break;
					case ChunkActor.ExpCorrection:
						actor.ExpCorrection = stream.ReadCompressedInt();
						break;
					case ChunkActor.InitialEquipment:
						actor.WeaponId = stream.ReadInt16();
						actor.ShieldId = stream.ReadInt16();
						actor.ArmorId = stream.ReadInt16();
						actor.HelmetId = stream.ReadInt16();
						actor.AccessoryId = stream.ReadInt16();
						break;
					case ChunkActor.UnarmedAnimation:
						actor.UnarmedAnimation = stream.ReadCompressedInt();
						break;
					case ChunkActor.ClassId:
						actor.ClassId = stream.ReadCompressedInt();
						break;
					case ChunkActor.BattlerAnimation:
						actor.BattlerAnimation = stream.ReadCompressedInt();
						break;
					case ChunkActor.Skills:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							actor.Skills.Add(ReadLearning());
						}
						break;
					case ChunkActor.RenameSkill:
						actor.RenameSkill = stream.ReadCompressedBool();
						break;
					case ChunkActor.SkillName:
						actor.SkillName = stream.ReadString(chunkLenght);
						break;
					case ChunkActor.StateRanksSize:
						stream.ReadCompressedInt();
						break;
					case ChunkActor.StateRanks:
						actor.StateRanks = stream.ReadByteArray(chunkLenght);
						break;
					case ChunkActor.AttributeRanksSize:
						stream.ReadCompressedInt();
						break;
					case ChunkActor.AttributeRanks:
						actor.AttributeRanks = stream.ReadByteArray(chunkLenght);
						break;
					case ChunkActor.BattleCommands:
						actor.BattleCommands = stream.ReadInt32Array(chunkLenght);
						break;
					case ChunkActor.BattleX:
						actor.BattleX = stream.ReadCompressedInt();
						break;
					case ChunkActor.BattleY:
						actor.BattleX = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return actor;
		}
		#endregion
	}
}
