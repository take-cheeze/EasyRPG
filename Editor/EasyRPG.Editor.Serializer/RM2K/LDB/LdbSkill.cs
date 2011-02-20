using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Skill ReadSkill()
		{
			var skill = new Skill { Id = stream.ReadCompressedInt() };

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkSkill)stream.ReadCompressedInt();
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
					case ChunkSkill.Name:
						skill.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkSkill.Description:
						skill.Description = stream.ReadString(chunkLenght);
						break;
					case ChunkSkill.UsingMessage1:
						skill.UsingMessage1 = stream.ReadString(chunkLenght);
						break;
					case ChunkSkill.UsingMessage2:
						skill.UsingMessage2 = stream.ReadString(chunkLenght);
						break;
					case ChunkSkill.FailureMessage:
						skill.FailureMessage = stream.ReadCompressedInt();
						break;
					case ChunkSkill.Type:
						skill.Type = (Skill.SkillType)stream.ReadCompressedInt();
						break;
					case ChunkSkill.SpType:
						skill.SpType = (Skill.SpTypeEnum)stream.ReadCompressedInt();
						break;
					case ChunkSkill.SpPercent:
						skill.SpPercent = stream.ReadCompressedInt();
						break;
					case ChunkSkill.SpCost:
						skill.SpCost = stream.ReadCompressedInt();
						break;
					case ChunkSkill.Scope:
						skill.Scope = (Skill.ScopeType)stream.ReadCompressedInt();
						break;
					case ChunkSkill.SwitchId:
						skill.SwitchId = stream.ReadCompressedInt();
						break;
					case ChunkSkill.AnimationId:
						skill.AnimationId = stream.ReadCompressedInt();
						break;
					case ChunkSkill.SoundEffect:
						skill.SoundEffect = ReadSound();
						break;
					case ChunkSkill.OccasionField:
						skill.OccasionField = stream.ReadCompressedBool();
						break;
					case ChunkSkill.OccasionBattle:
						skill.OccasionBattle = stream.ReadCompressedBool();
						break;
					case ChunkSkill.StateEffect:
						skill.StateEffect = stream.ReadCompressedBool();
						break;
					case ChunkSkill.PdefF:
						skill.PdefF = stream.ReadCompressedInt();
						break;
					case ChunkSkill.MdefF:
						skill.MdefF = stream.ReadCompressedInt();
						break;
					case ChunkSkill.Variance:
						skill.Variance = stream.ReadCompressedInt();
						break;
					case ChunkSkill.Power:
						skill.Power = stream.ReadCompressedInt();
						break;
					case ChunkSkill.Hit:
						skill.Hit = stream.ReadCompressedInt();
						break;
					case ChunkSkill.AffectHp:
						skill.AffectHp = stream.ReadCompressedBool();
						break;
					case ChunkSkill.AffectSp:
						skill.AffectSp = stream.ReadCompressedBool();
						break;
					case ChunkSkill.AffectAttack:
						skill.AffectAttack = stream.ReadCompressedBool();
						break;
					case ChunkSkill.AffectDefense:
						skill.AffectDefense = stream.ReadCompressedBool();
						break;
					case ChunkSkill.AffectSpirit:
						skill.AffectSpirit = stream.ReadCompressedBool();
						break;
					case ChunkSkill.AffectAgility:
						skill.AffectAgility = stream.ReadCompressedBool();
						break;
					case ChunkSkill.AbsorbDamage:
						skill.AbsorbDamage = stream.ReadCompressedBool();
						break;
					case ChunkSkill.IgnoreDefense:
						skill.IgnoreDefense = stream.ReadCompressedBool();
						break;
					case ChunkSkill.StateSize:
						stream.ReadCompressedInt();
						break;
					case ChunkSkill.StateEffects:
						skill.StateEffects = stream.ReadBoolArray(chunkLenght);
						break;
					case ChunkSkill.AttributeSize:
						stream.ReadCompressedInt();
						break;
					case ChunkSkill.AttributeEffects:
						skill.AttributeEffects = stream.ReadBoolArray(chunkLenght);
						break;
					case ChunkSkill.AffectAttrDefence:
						skill.AffectAttrDefence = stream.ReadCompressedBool();
						break;
					case ChunkSkill.BattlerAnimation:
						skill.BattlerAnimation = stream.ReadCompressedInt();
						break;
					case ChunkSkill.BattlerAnimationData:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							skill.BattlerAnimationData.Add(ReadBattlerAnimationData());
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return skill;
		}
		#endregion
	}
}
