using System;
using System.IO;
using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region PrivateMembers
		private Rm2KReader stream;
		#endregion

		#region PublicMembers
		public Database Database
		{
			get;
			private set;
		} 
		#endregion

		#region Constructor
		public LdbReader()
		{
			Database = new Database();
		} 
		#endregion

		#region BehaviorMethods
		public void Load(string filename)
		{
			stream = new Rm2KReader(File.Open(filename, FileMode.Open));
			var header = stream.ReadString(stream.ReadCompressedInt());
			if (header != "LcfDataBase")
			{
				throw new Exception("InvalId Database file format.");
			}
			LoadChunks();
		}

		private void LoadChunks()
		{
			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkData)stream.ReadCompressedInt();
				if (chunkId == ChunkData.End)
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
					case ChunkData.Actor:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							Database.Actors.Add(ReadActor());
						}
						break;
					case ChunkData.Skill:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							Database.Skills.Add(ReadSkill());
						}
						break;
					case ChunkData.Item:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.Items.Add(ReadItem());
						}
						break;
					case ChunkData.Enemy:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.Enemies.Add(ReadEnemy());
						}
						break;
					case ChunkData.Troop:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.Troops.Add(ReadTroop());
						}
						break;
					case ChunkData.Terrain:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.Terrains.Add(ReadTerrain());
						}
						break;
					case ChunkData.Attribute:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.Attributes.Add(ReadAttribute());
						}
						break;
					case ChunkData.State:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.States.Add(ReadState());
						}
						break;
					case ChunkData.Animation:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.Animations.Add(ReadAnimation());
						}
						break;
					case ChunkData.Chipset:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.Chipsets.Add(ReadChipset());
						}
						break;
					case ChunkData.Terms:
						Database.Terms = ReadTerms();
						break;
					case ChunkData.System:
						Database.System = ReadSystem();
						break;
					case ChunkData.Switches:
						Database.Switches = ReadSwitches();
						break;
					case ChunkData.Variables:
						Database.Variables = ReadVariables();
						break;
					case ChunkData.CommonEvent:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.Commonevents.Add(ReadCommonEvent());
						}
						break;
					case ChunkData.BattleCommand:
						Database.BattleCommands = ReadBattleCommands();
						break;
					case ChunkData.Class:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.Classes.Add(ReadClass());
						}
						break;
					case ChunkData.BattlerAnimation:
						for (var i = stream.ReadCompressedInt(); i > 0; i--) {
							Database.BattlerAnimations.Add(ReadBattlerAnimation());
						}
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
		}
		#endregion
	}
}
