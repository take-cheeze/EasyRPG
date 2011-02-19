using System.Collections.Generic;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class System : NotifyPropertyChanged
	{
		#region PrivateMembers
		private int ldbId;
		private string boatName;
		private string shipName;
		private string airshipName;
		private int boatIndex;
		private int shipIndex;
		private int airshipIndex;
		private string titleName;
		private string gameoverName;
		private string systemName;
		private string system2Name;
		private List<short> party;
		private List<short> menuCommands;
		private Music titleMusic;
		private Music battleMusic;
		private Music battleEndMusic;
		private Music innMusic;
		private Music boatMusic;
		private Music shipMusic;
		private Music airshipMusic;
		private Music gameoverMusic;
		private Sound cursorSe;
		private Sound decisionSe;
		private Sound cancelSe;
		private Sound buzzerSe;
		private Sound battleSe;
		private Sound escapeSe;
		private Sound enemyAttackSe;
		private Sound enemyDamagedSe;
		private Sound actorDamagedSe;
		private Sound dodgeSe;
		private Sound enemyDeathSe;
		private Sound itemSe;
		private int transitionOut;
		private int transitionIn;
		private int battleStartFadeout;
		private int battleStartFadein;
		private int battleEndFadeout;
		private int battleEndFadein;
		private int messageStretch;
		private int fontId;
		private int selectedCondition;
		private int selectedHero;
		private string battletestBackground;
		private List<TestBattler> battletestData;
		private int savedTimes;
		private bool showFrame;
		private string frameName;
		private bool invertAnimations;
		#endregion

		#region PublicMembers
		public int LdbId
		{
			get { return ldbId; }
			set { ldbId = value; OnPropertyChanged("LdbId"); }
		}
		public string BoatName
		{
			get { return boatName; }
			set { boatName = value; OnPropertyChanged("BoatName"); }
		}
		public string ShipName
		{
			get { return shipName; }
			set { shipName = value; OnPropertyChanged("ShipName"); }
		}
		public string AirshipName
		{
			get { return airshipName; }
			set { airshipName = value; OnPropertyChanged("AirshipName"); }
		}
		public int BoatIndex
		{
			get { return boatIndex; }
			set { boatIndex = value; OnPropertyChanged("BoatIndex"); }
		}
		public int ShipIndex
		{
			get { return shipIndex; }
			set { shipIndex = value; OnPropertyChanged("ShipIndex"); }
		}
		public int AirshipIndex
		{
			get { return airshipIndex; }
			set { airshipIndex = value; OnPropertyChanged("AirshipIndex"); }
		}
		public string TitleName
		{
			get { return titleName; }
			set { titleName = value; OnPropertyChanged("TitleName"); }
		}
		public string GameoverName
		{
			get { return gameoverName; }
			set { gameoverName = value; OnPropertyChanged("GameoverName"); }
		}
		public string SystemName
		{
			get { return systemName; }
			set { systemName = value; OnPropertyChanged("SystemName"); }
		}
		public string System2Name
		{
			get { return system2Name; }
			set { system2Name = value; OnPropertyChanged("System2Name"); }
		}
		public List<short> Party
		{
			get { return party; }
			set { party = value; OnPropertyChanged("Party"); }
		}
		public List<short> MenuCommands
		{
			get { return menuCommands; }
			set { menuCommands = value; OnPropertyChanged("MenuCommands"); }
		}
		public Music TitleMusic
		{
			get { return titleMusic; }
			set { titleMusic = value; OnPropertyChanged("TitleMusic"); }
		}
		public Music BattleMusic
		{
			get { return battleMusic; }
			set { battleMusic = value; OnPropertyChanged("BattleMusic"); }
		}
		public Music BattleEndMusic
		{
			get { return battleEndMusic; }
			set { battleEndMusic = value; OnPropertyChanged("BattleEndMusic"); }
		}
		public Music InnMusic
		{
			get { return innMusic; }
			set { innMusic = value; OnPropertyChanged("InnMusic"); }
		}
		public Music BoatMusic
		{
			get { return boatMusic; }
			set { boatMusic = value; OnPropertyChanged("BoatMusic"); }
		}
		public Music ShipMusic
		{
			get { return shipMusic; }
			set { shipMusic = value; OnPropertyChanged("ShipMusic"); }
		}
		public Music AirshipMusic
		{
			get { return airshipMusic; }
			set { airshipMusic = value; OnPropertyChanged("AirshipMusic"); }
		}
		public Music GameoverMusic
		{
			get { return gameoverMusic; }
			set { gameoverMusic = value; OnPropertyChanged("GameoverMusic"); }
		}
		public Sound CursorSe
		{
			get { return cursorSe; }
			set { cursorSe = value; OnPropertyChanged("CursorSe"); }
		}
		public Sound DecisionSe
		{
			get { return decisionSe; }
			set { decisionSe = value; OnPropertyChanged("DecisionSe"); }
		}
		public Sound CancelSe
		{
			get { return cancelSe; }
			set { cancelSe = value; OnPropertyChanged("CancelSe"); }
		}
		public Sound BuzzerSe
		{
			get { return buzzerSe; }
			set { buzzerSe = value; OnPropertyChanged("BuzzerSe"); }
		}
		public Sound BattleSe
		{
			get { return battleSe; }
			set { battleSe = value; OnPropertyChanged("BattleSe"); }
		}
		public Sound EscapeSe
		{
			get { return escapeSe; }
			set { escapeSe = value; OnPropertyChanged("EscapeSe"); }
		}
		public Sound EnemyAttackSe
		{
			get { return enemyAttackSe; }
			set { enemyAttackSe = value; OnPropertyChanged("EnemyAttackSe"); }
		}
		public Sound EnemyDamagedSe
		{
			get { return enemyDamagedSe; }
			set { enemyDamagedSe = value; OnPropertyChanged("EnemyDamagedSe"); }
		}
		public Sound ActorDamagedSe
		{
			get { return actorDamagedSe; }
			set { actorDamagedSe = value; OnPropertyChanged("ActorDamagedSe"); }
		}
		public Sound DodgeSe
		{
			get { return dodgeSe; }
			set { dodgeSe = value; OnPropertyChanged("DodgeSe"); }
		}
		public Sound EnemyDeathSe
		{
			get { return enemyDeathSe; }
			set { enemyDeathSe = value; OnPropertyChanged("EnemyDeathSe"); }
		}
		public Sound ItemSe
		{
			get { return itemSe; }
			set { itemSe = value; OnPropertyChanged("ItemSe"); }
		}
		public int TransitionOut
		{
			get { return transitionOut; }
			set { transitionOut = value; OnPropertyChanged("TransitionOut"); }
		}
		public int TransitionIn
		{
			get { return transitionIn; }
			set { transitionIn = value; OnPropertyChanged("TransitionIn"); }
		}
		public int BattleStartFadeout
		{
			get { return battleStartFadeout; }
			set { battleStartFadeout = value; OnPropertyChanged("BattleStartFadeout"); }
		}
		public int BattleStartFadein
		{
			get { return battleStartFadein; }
			set { battleStartFadein = value; OnPropertyChanged("BattleStartFadein"); }
		}
		public int BattleEndFadeout
		{
			get { return battleEndFadeout; }
			set { battleEndFadeout = value; OnPropertyChanged("BattleEndFadeout"); }
		}
		public int BattleEndFadein
		{
			get { return battleEndFadein; }
			set { battleEndFadein = value; OnPropertyChanged("BattleEndFadein"); }
		}
		public int MessageStretch
		{
			get { return messageStretch; }
			set { messageStretch = value; OnPropertyChanged("MessageStretch"); }
		}
		public int FontId
		{
			get { return fontId; }
			set { fontId = value; OnPropertyChanged("FontId"); }
		}
		public int SelectedCondition
		{
			get { return selectedCondition; }
			set { selectedCondition = value; OnPropertyChanged("SelectedCondition"); }
		}
		public int SelectedHero
		{
			get { return selectedHero; }
			set { selectedHero = value; OnPropertyChanged("SelectedHero"); }
		}
		public string BattletestBackground
		{
			get { return battletestBackground; }
			set { battletestBackground = value; OnPropertyChanged("BattletestBackground"); }
		}
		public List<TestBattler> BattletestData
		{
			get { return battletestData; }
			set { battletestData = value; OnPropertyChanged("BattletestData"); }
		}
		public int SavedTimes
		{
			get { return savedTimes; }
			set { savedTimes = value; OnPropertyChanged("SavedTimes"); }
		}
		public bool ShowFrame
		{
			get { return showFrame; }
			set { showFrame = value; OnPropertyChanged("ShowFrame"); }
		}
		public string FrameName
		{
			get { return frameName; }
			set { frameName = value; OnPropertyChanged("FrameName"); }
		}
		public bool InvertAnimations
		{
			get { return invertAnimations; }
			set { invertAnimations = value; OnPropertyChanged("InvertAnimations"); }
		}
		#endregion

		#region Constructor
		public System()
		{
			ldbId = 0;
			boatName = "";
			shipName = "";
			airshipName = "";
			boatIndex = 0;
			shipIndex = 0;
			airshipIndex = 0;
			titleName = "";
			gameoverName = "";
			systemName = "";
			system2Name = "";
			party = new List<short>();
			menuCommands = new List<short>();
			titleMusic = new Music();
			battleMusic = new Music();
			battleEndMusic = new Music();
			innMusic = new Music();
			boatMusic = new Music();
			shipMusic = new Music();
			airshipMusic = new Music();
			gameoverMusic = new Music();
			cursorSe = new Sound();
			decisionSe = new Sound();
			cancelSe = new Sound();
			buzzerSe = new Sound();
			battleSe = new Sound();
			escapeSe = new Sound();
			enemyAttackSe = new Sound();
			enemyDamagedSe = new Sound();
			actorDamagedSe = new Sound();
			dodgeSe = new Sound();
			enemyDeathSe = new Sound();
			itemSe = new Sound();
			transitionOut = 0;
			transitionIn = 0;
			battleStartFadeout = 0;
			battleStartFadein = 0;
			battleEndFadeout = 0;
			battleEndFadein = 0;
			messageStretch = 0;
			fontId = 0;
			selectedCondition = 0;
			selectedHero = 0;
			battletestBackground = "";
			battletestData = new List<TestBattler>();
			savedTimes = 0;
			showFrame = false;
			frameName = "";
			invertAnimations = false;
		}
		#endregion
	}
}
