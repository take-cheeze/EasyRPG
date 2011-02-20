using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Class ReadClass()
		{
			var classObj = new Class
							{
								Id = stream.ReadCompressedInt()
							};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkClass)stream.ReadCompressedInt();
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
					case ChunkClass.Name:
						classObj.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkClass.TwoSwordsStyle:
						classObj.TwoSwordsStyle = stream.ReadCompressedBool();
						break;
					case ChunkClass.FixEquipment:
						classObj.FixEquipment = stream.ReadCompressedBool();
						break;
					case ChunkClass.AutoBattle:
						classObj.AutoBattle = stream.ReadCompressedBool();
						break;
					case ChunkClass.SuperGuard:
						classObj.SuperGuard = stream.ReadCompressedBool();
						break;
					case ChunkClass.Parameters:
						classObj.ParameterMaxhp = stream.ReadInt16Array(chunkLenght / 6);
						classObj.ParameterMaxsp = stream.ReadInt16Array(chunkLenght / 6);
						classObj.ParameterAttack = stream.ReadInt16Array(chunkLenght / 6);
						classObj.ParameterDefense = stream.ReadInt16Array(chunkLenght / 6);
						classObj.ParameterSpirit = stream.ReadInt16Array(chunkLenght / 6);
						classObj.ParameterAgility = stream.ReadInt16Array(chunkLenght / 6);
						break;
					case ChunkClass.ExpBase:
						classObj.ExpBase = stream.ReadCompressedInt();
						break;
					case ChunkClass.ExpInflation:
						classObj.ExpInflation = stream.ReadCompressedInt();
						break;
					case ChunkClass.ExpCorrection:
						classObj.ExpCorrection = stream.ReadCompressedInt();
						break;
					case ChunkClass.UnarmedAnimation:
						classObj.UnarmedAnimation = stream.ReadCompressedInt();
						break;
					case ChunkClass.Skills:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							classObj.Skills.Add(ReadLearning());
						}
						break;
					case ChunkClass.StateRanksSize:
						stream.ReadCompressedInt();
						break;
					case ChunkClass.StateRanks:
						classObj.StateRanks = stream.ReadByteArray(chunkLenght);
						break;
					case ChunkClass.AttributeRanksSize:
						stream.ReadCompressedInt();
						break;
					case ChunkClass.AttributeRanks:
						classObj.AttributeRanks = stream.ReadByteArray(chunkLenght);
						break;
					case ChunkClass.BattleCommands:
						classObj.BattleCommands = stream.ReadUInt32Array(chunkLenght);
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return classObj;
		}
		#endregion
	}
}
