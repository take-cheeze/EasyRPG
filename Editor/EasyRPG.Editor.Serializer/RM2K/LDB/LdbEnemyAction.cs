using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private EnemyAction ReadEnemyAction()
		{
			var enemyAction = new EnemyAction();
			stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkEnemyAction)stream.ReadCompressedInt();
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
					case ChunkEnemyAction.Kind:
						enemyAction.Kind = (EnemyAction.KindType)stream.ReadCompressedInt();
						break;
					case ChunkEnemyAction.Basic:
						enemyAction.Basic = (EnemyAction.BasicType)stream.ReadCompressedInt();
						break;
					case ChunkEnemyAction.SkillId:
						enemyAction.SkillId = stream.ReadCompressedInt();
						break;
					case ChunkEnemyAction.EnemyId:
						enemyAction.EnemyId = stream.ReadCompressedInt();
						break;
					case ChunkEnemyAction.ConditionType:
						enemyAction.ConditionType = (EnemyAction.ConditionTypeEnum)stream.ReadCompressedInt();
						break;
					case ChunkEnemyAction.ConditionParam1:
						enemyAction.ConditionParam1 = stream.ReadCompressedInt();
						break;
					case ChunkEnemyAction.ConditionParam2:
						enemyAction.ConditionParam2 = stream.ReadCompressedInt();
						break;
					case ChunkEnemyAction.SwitchId:
						enemyAction.SwitchId = stream.ReadCompressedInt();
						break;
					case ChunkEnemyAction.SwitchOn:
						enemyAction.SwitchOn = stream.ReadCompressedBool();
						break;
					case ChunkEnemyAction.SwitchOnId:
						enemyAction.SwitchOnId = stream.ReadCompressedInt();
						break;
					case ChunkEnemyAction.SwitchOff:
						enemyAction.SwitchOff = stream.ReadCompressedBool();
						break;
					case ChunkEnemyAction.SwitchOffId:
						enemyAction.SwitchOffId = stream.ReadCompressedInt();
						break;
					case ChunkEnemyAction.Rating:
						enemyAction.Rating = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return enemyAction;
		}
		#endregion
	}
}
