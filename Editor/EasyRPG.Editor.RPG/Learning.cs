using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Learning : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int level;
		private int skillId;
		#endregion

		#region PublicMembers
		public int Level
		{
			get { return level; }
			set { level = value; OnPropertyChanged("Level"); }
		}
		public int SkillId
		{
			get { return skillId; }
			set { skillId = value; OnPropertyChanged("SkillId"); }
		}
		#endregion

		#region Constructor
		public Learning()
		{
			level = 1;
			skillId = 1;
		}
		#endregion
	}
}
