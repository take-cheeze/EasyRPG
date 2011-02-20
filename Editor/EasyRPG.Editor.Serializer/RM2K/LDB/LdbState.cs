using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private State ReadState()
		{
			var state = new State { Id = stream.ReadCompressedInt() };

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkState)stream.ReadCompressedInt();
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
					case ChunkState.Name:
						state.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkState.Type:
						state.Type = (State.StateType)stream.ReadCompressedInt();
						break;
					case ChunkState.Color:
						state.Color = stream.ReadCompressedInt();
						break;
					case ChunkState.Priority:
						state.Priority = stream.ReadCompressedInt();
						break;
					case ChunkState.Restriction:
						state.Restriction = (State.RestrictionType)stream.ReadCompressedInt();
						break;
					case ChunkState.ARate:
						state.ARate = stream.ReadCompressedInt();
						break;
					case ChunkState.BRate:
						state.BRate = stream.ReadCompressedInt();
						break;
					case ChunkState.CRate:
						state.CRate = stream.ReadCompressedInt();
						break;
					case ChunkState.DRate:
						state.DRate = stream.ReadCompressedInt();
						break;
					case ChunkState.ERate:
						state.ERate = stream.ReadCompressedInt();
						break;
					case ChunkState.HoldTurn:
						state.HoldTurn = stream.ReadCompressedInt();
						break;
					case ChunkState.AutoReleaseProb:
						state.AutoReleaseProb = stream.ReadCompressedInt();
						break;
					case ChunkState.ReleaseByDamage:
						state.ReleaseByDamage = stream.ReadCompressedInt();
						break;
					case ChunkState.AffectType:
						state.AffectType = (State.AffectTypeEnum)stream.ReadCompressedInt();
						break;
					case ChunkState.AffectAttack:
						state.AffectAttack = stream.ReadCompressedBool();
						break;
					case ChunkState.AffectDefense:
						state.AffectDefense = stream.ReadCompressedBool();
						break;
					case ChunkState.AffectSpirit:
						state.AffectSpirit = stream.ReadCompressedBool();
						break;
					case ChunkState.AffectAgility:
						state.AffectAgility = stream.ReadCompressedBool();
						break;
					case ChunkState.ReduceHitRatio:
						state.ReduceHitRatio = stream.ReadCompressedInt();
						break;
					case ChunkState.AvoidAttacks:
						state.AvoidAttacks = stream.ReadCompressedBool();
						break;
					case ChunkState.ReflectMagic:
						state.ReflectMagic = stream.ReadCompressedBool();
						break;
					case ChunkState.Cursed:
						state.Cursed = stream.ReadCompressedBool();
						break;
					case ChunkState.BattlerAnimationId:
						state.BattlerAnimationId = stream.ReadCompressedInt();
						break;
					case ChunkState.RestrictSkill:
						state.RestrictSkill = stream.ReadCompressedBool();
						break;
					case ChunkState.RestrictSkillLevel:
						state.RestrictSkillLevel = stream.ReadCompressedInt();
						break;
					case ChunkState.RestrictMagic:
						state.RestrictMagic = stream.ReadCompressedBool();
						break;
					case ChunkState.RestrictMagicLevel:
						state.RestrictMagicLevel = stream.ReadCompressedInt();
						break;
					case ChunkState.HpChangeType:
						state.HpChangeType = (State.ChangeType)stream.ReadCompressedInt();
						break;
					case ChunkState.SpChangeType:
						state.SpChangeType = (State.ChangeType)stream.ReadCompressedInt();
						break;
					case ChunkState.MessageActor:
						state.MessageActor = stream.ReadString(chunkLenght);
						break;
					case ChunkState.MessageEnemy:
						state.MessageEnemy = stream.ReadString(chunkLenght);
						break;
					case ChunkState.MessageAlready:
						state.MessageAlready = stream.ReadString(chunkLenght);
						break;
					case ChunkState.MessageAffected:
						state.MessageAffected = stream.ReadString(chunkLenght);
						break;
					case ChunkState.MessageRecovery:
						state.MessageRecovery = stream.ReadString(chunkLenght);
						break;
					case ChunkState.HpChangeMax:
						state.HpChangeMax = stream.ReadCompressedInt();
						break;
					case ChunkState.HpChangeVal:
						state.HpChangeVal = stream.ReadCompressedInt();
						break;
					case ChunkState.HpChangeMapVal:
						state.HpChangeMapVal = stream.ReadCompressedInt();
						break;
					case ChunkState.HpChangeMapSteps:
						state.HpChangeMapSteps = stream.ReadCompressedInt();
						break;
					case ChunkState.SpChangeMax:
						state.SpChangeMax = stream.ReadCompressedInt();
						break;
					case ChunkState.SpChangeVal:
						state.SpChangeVal = stream.ReadCompressedInt();
						break;
					case ChunkState.SpChangeMapVal:
						state.SpChangeMapVal = stream.ReadCompressedInt();
						break;
					case ChunkState.SpChangeMapSteps:
						state.SpChangeMapSteps = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return state;
		}
		#endregion
	}
}
