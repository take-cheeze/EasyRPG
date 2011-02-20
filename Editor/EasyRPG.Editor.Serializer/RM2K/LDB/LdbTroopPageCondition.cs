using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private TroopPageCondition ReadTroopPageCondition()
		{
			var condition = new TroopPageCondition();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkTroopPageCondition)stream.ReadCompressedInt();
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
					case ChunkTroopPageCondition.ConditionFlags:
						var bitflag = stream.ReadByte();
						condition.SwitchA = (bitflag & 0x01) > 0;
						condition.SwitchB = (bitflag & 0x02) > 0;
						condition.Variable = (bitflag & 0x04) > 0;
						condition.Turn = (bitflag & 0x08) > 0;
						condition.Fatigue = (bitflag & 0x10) > 0;
						condition.EnemyHp = (bitflag & 0x20) > 0;
						condition.ActorHp = (bitflag & 0x40) > 0;
						condition.TurnEnemy = (bitflag & 0x80) > 0;
						if (chunkLenght == 2)
						{
							bitflag = stream.ReadByte();
							condition.TurnActor = (bitflag & 0x01) > 0;
							condition.CommandActor = (bitflag & 0x02) > 0;
						}
						break;
					case ChunkTroopPageCondition.SwitchAId:
						condition.SwitchAId = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.SwitchBId:
						condition.SwitchBId = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.VariableId:
						condition.VariableId = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.VariableValue:
						condition.VariableValue = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.TurnA:
						condition.TurnA = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.TurnB:
						condition.TurnB = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.FatigueMin:
						condition.FatigueMin = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.FatigueMax:
						condition.FatigueMax = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.EnemyId:
						condition.EnemyId = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.EnemyHpMin:
						condition.EnemyHpMin = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.EnemyHpMax:
						condition.EnemyHpMax = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.ActorId:
						condition.ActorId = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.ActorHpMin:
						condition.ActorHpMin = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.ActorHpMax:
						condition.ActorHpMax = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.TurnEnemyId:
						condition.TurnEnemyId = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.TurnEnemyA:
						condition.TurnEnemyA = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.TurnEnemyB:
						condition.TurnEnemyB = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.TurnActorId:
						condition.TurnActorId = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.TurnActorA:
						condition.TurnActorA = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.TurnActorB:
						condition.TurnActorB = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.CommandActorId:
						condition.CommandActorId = stream.ReadCompressedInt();
						break;
					case ChunkTroopPageCondition.CommandId:
						condition.CommandId = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return condition;
		}
		#endregion
	}
}