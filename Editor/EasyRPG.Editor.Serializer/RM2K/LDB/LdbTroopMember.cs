using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private TroopMember ReadTroopMember()
		{
			var member = new TroopMember();
			stream.ReadCompressedInt();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkTroopMember)stream.ReadCompressedInt();
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
					case ChunkTroopMember.Id:
						member.Id = stream.ReadCompressedInt();
						break;
					case ChunkTroopMember.X:
						member.X = stream.ReadCompressedInt();
						break;
					case ChunkTroopMember.Y:
						member.Y = stream.ReadCompressedInt();
						break;
					case ChunkTroopMember.Middle:
						member.Middle = stream.ReadCompressedBool();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return member;
		}
		#endregion
	}
}
