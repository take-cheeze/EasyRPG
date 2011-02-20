using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LMU
{
	public partial class LmuReader
	{
		#region BehaviorMethods
		private EventPageCondition ReadEventPageCondition()
		{
			var eventPageCondition = new EventPageCondition();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkEventPageCondition)stream.ReadCompressedInt();
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
					case ChunkEventPageCondition.ConditionFlags:
						var bitflag = stream.ReadByte();
						eventPageCondition.SwitchA = (bitflag & 0x01) > 0;
						eventPageCondition.SwitchB = (bitflag & 0x02) > 0;
						eventPageCondition.Variable = (bitflag & 0x04) > 0;
						eventPageCondition.Item = (bitflag & 0x08) > 0;
						eventPageCondition.Actor = (bitflag & 0x10) > 0;
						eventPageCondition.Timer = (bitflag & 0x20) > 0;
						eventPageCondition.Timer2 = (bitflag & 0x40) > 0;
						break;
					case ChunkEventPageCondition.SwitchAId:
						eventPageCondition.SwitchAId = stream.ReadCompressedInt();
						break;
					case ChunkEventPageCondition.SwitchBId:
						eventPageCondition.SwitchBId = stream.ReadCompressedInt();
						break;
					case ChunkEventPageCondition.VariableId:
						eventPageCondition.VariableId = stream.ReadCompressedInt();
						break;
					case ChunkEventPageCondition.VariableValue:
						eventPageCondition.VariableValue = stream.ReadCompressedInt();
						break;
					case ChunkEventPageCondition.ItemId:
						eventPageCondition.ItemId = stream.ReadCompressedInt();
						break;
					case ChunkEventPageCondition.ActorId:
						eventPageCondition.ActorId = stream.ReadCompressedInt();
						break;
					case ChunkEventPageCondition.TimerSec:
						eventPageCondition.TimerSec = stream.ReadCompressedInt();
						break;
					case ChunkEventPageCondition.Timer2Sec:
						eventPageCondition.Timer2Sec = stream.ReadCompressedInt();
						break;
					case ChunkEventPageCondition.CompareOperator:
						eventPageCondition.CompareOperator = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return eventPageCondition;
		}
		#endregion
	}
}
