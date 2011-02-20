using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Enemy ReadEnemy()
		{
			var enemy = new Enemy
							{
								Id = stream.ReadCompressedInt()
							};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkEnemy)stream.ReadCompressedInt();
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
					case ChunkEnemy.Name:
						enemy.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkEnemy.BattlerName:
						enemy.BattlerName = stream.ReadString(chunkLenght);
						break;
					case ChunkEnemy.BattlerHue:
						enemy.BattlerHue = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.MaxHp:
						enemy.MaxHp = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.MaxSp:
						enemy.MaxSp = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.Attack:
						enemy.Attack = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.Defense:
						enemy.Defense = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.Spirit:
						enemy.Spirit = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.Agility:
						enemy.Agility = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.Transparent:
						enemy.Transparent = stream.ReadCompressedBool();
						break;
					case ChunkEnemy.Exp:
						enemy.Exp = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.Gold:
						enemy.Gold = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.DropId:
						enemy.DropId = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.DropProb:
						enemy.DropProb = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.CriticalHit:
						enemy.CriticalHit = stream.ReadCompressedBool();
						break;
					case ChunkEnemy.CriticalHitChance:
						enemy.CriticalHitChance = stream.ReadCompressedInt();
						break;
					case ChunkEnemy.Miss:
						enemy.Miss = stream.ReadCompressedBool();
						break;
					case ChunkEnemy.Levitate:
						enemy.Levitate = stream.ReadCompressedBool();
						break;
					case ChunkEnemy.StateRanksSize:
						stream.ReadCompressedInt();
						break;
					case ChunkEnemy.StateRanks:
						enemy.StateRanks = stream.ReadByteArray(chunkLenght);
						break;
					case ChunkEnemy.AttributeRanksSize:
						stream.ReadCompressedInt();
						break;
					case ChunkEnemy.AttributeRanks:
						enemy.AttributeRanks = stream.ReadByteArray(chunkLenght);
						break;
					case ChunkEnemy.Actions:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							enemy.Actions.Add(ReadEnemyAction());
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return enemy;
		}
		#endregion
	}
}
