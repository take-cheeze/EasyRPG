using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private ExtendedObservableCollection<string> ReadVariables()
		{
			var variables = new ExtendedObservableCollection<string>();
			for (var i = 0; i < stream.ReadCompressedInt(); i++)
			{
				variables.Add("");
			}

			for (var i = variables.Count - 1; i > 0; i--)
			{
				var pos = stream.ReadCompressedInt();
				var chunkId = (ChunkVariable)stream.ReadCompressedInt();
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
					case ChunkVariable.Name:
						variables[pos] = stream.ReadString(chunkLenght + 1);
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return variables;
		}
		#endregion
	}
}