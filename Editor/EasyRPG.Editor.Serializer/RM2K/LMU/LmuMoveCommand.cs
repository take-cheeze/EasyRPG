using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LMU
{
	public partial class LmuReader
	{
		#region BehaviorMethods
		private MoveCommand ReadMoveCommand()
		{
			var movecommand = new MoveCommand
							{
								CommandId = stream.ReadCompressedInt()
							};

			switch ((ChunkMoveCommand)movecommand.CommandId)
			{
				case ChunkMoveCommand.SwitchOn:
					movecommand.ParameterA = stream.ReadCompressedInt();
					break;
				case ChunkMoveCommand.SwitchOff:
					movecommand.ParameterA = stream.ReadCompressedInt();
					break;
				case ChunkMoveCommand.ChangeGraphic:
					movecommand.ParameterString = stream.ReadString(stream.ReadCompressedInt());
					movecommand.ParameterA = stream.ReadCompressedInt();
					break;
				case ChunkMoveCommand.PlaySound:
					movecommand.ParameterString = stream.ReadString(stream.ReadCompressedInt());
					movecommand.ParameterA = stream.ReadCompressedInt();
					movecommand.ParameterB = stream.ReadCompressedInt();
					movecommand.ParameterC= stream.ReadCompressedInt();
					break;
			}
			return movecommand;
		}
		#endregion
	}
}
