using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class BattleCommands : NotifyPropertyChanged
	{
		#region PrivateMembers
		private List<BattleCommand> commands;
		private int placement;
		private int row;
		private int battleType;
		private int deathHandler1;
		private int unknown1;
		private int deathHandler2;
		private int deathEvent;
		private int windowSize;
		private int transparency;
		private bool teleport;
		private int teleportId;
		private int teleportX;
		private int teleportY;
		private int teleportFace;
		#endregion

		#region privateMembers
		public List<BattleCommand> Commands
		{
			get { return commands; }
			set { commands = value; OnPropertyChanged("Commands"); }
		}
		public int Placement
		{
			get { return placement; }
			set { placement = value; OnPropertyChanged("Placement"); }
		}
		public int Row
		{
			get { return row; }
			set { row = value; OnPropertyChanged("Row"); }
		}
		public int BattleType
		{
			get { return battleType; }
			set { battleType = value; OnPropertyChanged("BattleType"); }
		}
		public int DeathHandler1
		{
			get { return deathHandler1; }
			set { deathHandler1 = value; OnPropertyChanged("DeathHandler1"); }
		}
		public int Unknown1
		{
			get { return unknown1; }
			set { unknown1 = value; OnPropertyChanged("Unknown1"); }
		}
		public int DeathHandler2
		{
			get { return deathHandler2; }
			set { deathHandler2 = value; OnPropertyChanged("DeathHandler2"); }
		}
		public int DeathEvent
		{
			get { return deathEvent; }
			set { deathEvent = value; OnPropertyChanged("DeathEvent"); }
		}
		public int WindowSize
		{
			get { return windowSize; }
			set { windowSize = value; OnPropertyChanged("WindowSize"); }
		}
		public int Transparency
		{
			get { return transparency; }
			set { transparency = value; OnPropertyChanged("Transparency"); }
		}
		public bool Teleport
		{
			get { return teleport; }
			set { teleport = value; OnPropertyChanged("Teleport"); }
		}
		public int TeleportId
		{
			get { return teleportId; }
			set { teleportId = value; OnPropertyChanged("TeleportId"); }
		}
		public int TeleportX
		{
			get { return teleportX; }
			set { teleportX = value; OnPropertyChanged("TeleportX"); }
		}
		public int TeleportY
		{
			get { return teleportY; }
			set { teleportY = value; OnPropertyChanged("TeleportY"); }
		}
		public int TeleportFace
		{
			get { return teleportFace; }
			set { teleportFace = value; OnPropertyChanged("TeleportFace"); }
		}
		#endregion

		#region Constructor
		public BattleCommands()
		{
			commands = new List<BattleCommand>();
			placement = 0;
			row = 0;
			battleType = 0;
			deathHandler1 = 0;
			unknown1 = 0;
			deathHandler2 = 0;
			deathEvent = 0;
			windowSize = 0;
			transparency = 0;
			teleport = false;
			teleportId = 0;
			teleportX = 0;
			teleportY = 0;
			teleportFace = 0;
		}
		#endregion
	}
}
