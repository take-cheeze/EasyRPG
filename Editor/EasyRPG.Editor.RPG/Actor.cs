using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Actor : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int id;
		private string name;
		private string title;
		private string characterName;
		private int characterIndex;
		private bool transparent;
		private int initialLevel;
		private int finalLevel;
		private bool criticalHit;
		private int criticalHitChance;
		private string faceName;
		private int faceIndex;
		private bool twoSwordsStyle;
		private bool fixEquipment;
		private bool autoBattle;
		private bool superGuard;
		private ExtendedObservableCollection<short> parameterMaxhp;
		private ExtendedObservableCollection<short> parameterMaxsp;
		private ExtendedObservableCollection<short> parameterAttack;
		private ExtendedObservableCollection<short> parameterDefense;
		private ExtendedObservableCollection<short> parameterSpirit;
		private ExtendedObservableCollection<short> parameterAgility;
		private int expBase;
		private int expInflation;
		private int expCorrection;
		private int weaponId;
		private int shieldId;
		private int armorId;
		private int helmetId;
		private int accessoryId;
		private int unarmedAnimation;
		private ExtendedObservableCollection<Learning> skills;
		private ExtendedObservableCollection<byte> stateRanks;
		private ExtendedObservableCollection<byte> attributeRanks;
		private bool renameSkill;
		private string skillName;
		private int classId;
		private int battlerAnimation;
		private ExtendedObservableCollection<int> battleCommands;
		private int battleX;
		private int battleY;
		#endregion

		#region PublicMembers
		public int Id
		{
			get { return id; }
			set { id = value; OnPropertyChanged("Id"); }
		}
		public string Name
		{
			get { return name; }
			set { name = value; OnPropertyChanged("Name"); }
		}
		public string Title
		{
			get { return title; }
			set { title = value; OnPropertyChanged("Title"); }
		}
		public string CharacterName
		{
			get { return characterName; }
			set { characterName = value; OnPropertyChanged("CharacterName"); }
		}
		public int CharacterIndex
		{
			get { return characterIndex; }
			set { characterIndex = value; OnPropertyChanged("CharacterIndex"); }
		}
		public bool Transparent
		{
			get { return transparent; }
			set { transparent = value; OnPropertyChanged("Transparent"); }
		}
		public int InitialLevel
		{
			get { return initialLevel; }
			set { initialLevel = value; OnPropertyChanged("InitialLevel"); }
		}
		public int FinalLevel
		{
			get { return finalLevel; }
			set { finalLevel = value; OnPropertyChanged("FinalLevel"); }
		}
		public bool CriticalHit
		{
			get { return criticalHit; }
			set { criticalHit = value; OnPropertyChanged("CriticalHit"); }
		}
		public int CriticalHitChance
		{
			get { return criticalHitChance; }
			set { criticalHitChance = value; OnPropertyChanged("CriticalHitChance"); }
		}
		public string FaceName
		{
			get { return faceName; }
			set { faceName = value; OnPropertyChanged("FaceName"); }
		}
		public int FaceIndex
		{
			get { return faceIndex; }
			set { faceIndex = value; OnPropertyChanged("FaceIndex"); }
		}
		public bool TwoSwordsStyle
		{
			get { return twoSwordsStyle; }
			set { twoSwordsStyle = value; OnPropertyChanged("TwoSwordsStyle"); }
		}
		public bool FixEquipment
		{
			get { return fixEquipment; }
			set { fixEquipment = value; OnPropertyChanged("FixEquipment"); }
		}
		public bool AutoBattle
		{
			get { return autoBattle; }
			set { autoBattle = value; OnPropertyChanged("AutoBattle"); }
		}
		public bool SuperGuard
		{
			get { return superGuard; }
			set { superGuard = value; OnPropertyChanged("SuperGuard"); }
		}
		public ExtendedObservableCollection<short> ParameterMaxhp
		{
			get { return parameterMaxhp; }
			set { parameterMaxhp = value; OnPropertyChanged("ParameterMaxhp"); }
		}
		public ExtendedObservableCollection<short> ParameterMaxsp
		{
			get { return parameterMaxsp; }
			set { parameterMaxsp = value; OnPropertyChanged("ParameterMaxsp"); }
		}
		public ExtendedObservableCollection<short> ParameterAttack
		{
			get { return parameterAttack; }
			set { parameterAttack = value; OnPropertyChanged("ParameterAttack"); }
		}
		public ExtendedObservableCollection<short> ParameterDefense
		{
			get { return parameterDefense; }
			set { parameterDefense = value; OnPropertyChanged("ParameterDefense"); }
		}
		public ExtendedObservableCollection<short> ParameterSpirit
		{
			get { return parameterSpirit; }
			set { parameterSpirit = value; OnPropertyChanged("ParameterSpirit"); }
		}
		public ExtendedObservableCollection<short> ParameterAgility
		{
			get { return parameterAgility; }
			set { parameterAgility = value; OnPropertyChanged("ParameterAgility"); }
		}
		public int ExpBase
		{
			get { return expBase; }
			set { expBase = value; OnPropertyChanged("ExpBase"); }
		}
		public int ExpInflation
		{
			get { return expInflation; }
			set { expInflation = value; OnPropertyChanged("ExpInflation"); }
		}
		public int ExpCorrection
		{
			get { return expCorrection; }
			set { expCorrection = value; OnPropertyChanged("ExpCorrection"); }
		}
		public int WeaponId
		{
			get { return weaponId; }
			set { weaponId = value; OnPropertyChanged("WeaponId"); }
		}
		public int ShieldId
		{
			get { return shieldId; }
			set { shieldId = value; OnPropertyChanged("ShieldId"); }
		}
		public int ArmorId
		{
			get { return armorId; }
			set { armorId = value; OnPropertyChanged("ArmorId"); }
		}
		public int HelmetId
		{
			get { return helmetId; }
			set { helmetId = value; OnPropertyChanged("HelmetId"); }
		}
		public int AccessoryId
		{
			get { return accessoryId; }
			set { accessoryId = value; OnPropertyChanged("AccessoryId"); }
		}
		public int UnarmedAnimation
		{
			get { return unarmedAnimation; }
			set { unarmedAnimation = value; OnPropertyChanged("UnarmedAnimation"); }
		}
		public ExtendedObservableCollection<Learning> Skills
		{
			get { return skills; }
			set { skills = value; OnPropertyChanged("Skills"); }
		}
		public ExtendedObservableCollection<byte> StateRanks
		{
			get { return stateRanks; }
			set { stateRanks = value; OnPropertyChanged("StateRanks"); }
		}
		public ExtendedObservableCollection<byte> AttributeRanks
		{
			get { return attributeRanks; }
			set { attributeRanks = value; OnPropertyChanged("AttributeRanks"); }
		}

		// RPG2000
		public bool RenameSkill
		{
			get { return renameSkill; }
			set { renameSkill = value; OnPropertyChanged("RenameSkill"); }
		}
		public string SkillName
		{
			get { return skillName; }
			set { skillName = value; OnPropertyChanged("SkillName"); }
		}

		// RPG2003
		public int ClassId
		{
			get { return classId; }
			set { classId = value; OnPropertyChanged("ClassId"); }
		}
		public int BattlerAnimation
		{
			get { return battlerAnimation; }
			set { battlerAnimation = value; OnPropertyChanged("BattlerAnimation"); }
		}
		public ExtendedObservableCollection<int> BattleCommands
		{
			get { return battleCommands; }
			set { battleCommands = value; OnPropertyChanged("BattleCommands"); }
		}
		public int BattleX
		{
			get { return battleX; }
			set { battleX = value; OnPropertyChanged("BattleX"); }
		}
		public int BattleY
		{
			get { return battleY; }
			set { battleY = value; OnPropertyChanged("BattleY"); }
		}
		#endregion

		#region Constructor
		public Actor()
		{
			id = 0;
			name = "";
			title = "";
			characterName = "";
			characterIndex = 0;
			transparent = false;
			initialLevel = 1;
			finalLevel = 50;
			//final_level = 99; // #if RPGMAKER == RPG2K3
			criticalHit = true;
			criticalHitChance = 30;
			faceIndex = 0;
			twoSwordsStyle = false;
			fixEquipment = false;
			autoBattle = false;
			superGuard = false;
			parameterMaxhp = new ExtendedObservableCollection<short>();
			parameterMaxsp = new ExtendedObservableCollection<short>();
			parameterAttack = new ExtendedObservableCollection<short>();
			parameterDefense = new ExtendedObservableCollection<short>();
			parameterSpirit = new ExtendedObservableCollection<short>();
			parameterAgility = new ExtendedObservableCollection<short>();
			for (var i = 0; i <= FinalLevel; i++)
			{
				parameterMaxhp.Add(1);
				parameterMaxsp.Add(0);
				parameterAttack.Add(1);
				parameterDefense.Add(1);
				parameterSpirit.Add(1);
				parameterAgility.Add(1);
			}
			expBase = 30;
			expInflation = 30;
			//exp_base = 300; // #if RPGMAKER == RPG2K3
			//exp_inflation = 300; // #if RPGMAKER == RPG2K3
			expCorrection = 0;
			unarmedAnimation = 0;
			weaponId = 0;
			shieldId = 0;
			armorId = 0;
			helmetId = 0;
			accessoryId = 0;
			skills = new ExtendedObservableCollection<Learning>();
			stateRanks = new ExtendedObservableCollection<byte>();
			attributeRanks = new ExtendedObservableCollection<byte>();

			// RPG Maker 2000
			renameSkill = false;
			skillName = "";

			// RPG Maker 2003
			classId = 0;
			battlerAnimation = 1;
			battleCommands = new ExtendedObservableCollection<int>();
			battleX = 0;
			battleY = 0;
		}
		#endregion
	}
}
