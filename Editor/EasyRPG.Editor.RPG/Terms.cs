using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class Terms : NotifyPropertyChanged
	{
		#region PrivateMembers
		private string encounter;
		private string specialCombat;
		private string escapeSuccess;
		private string escapeFailure;
		private string victory;
		private string defeat;
		private string expReceived;
		private string goldRecievedA;
		private string goldRecievedB;
		private string itemRecieved;
		private string attacking;
		private string actorCritical;
		private string enemyCritical;
		private string defending;
		private string observing;
		private string focus;
		private string autodestruction;
		private string enemyEscape;
		private string enemyTransform;
		private string enemyDamaged;
		private string enemyUndamaged;
		private string actorDamaged;
		private string actorUndamaged;
		private string skillFailureA;
		private string skillFailureB;
		private string skillFailureC;
		private string dodge;
		private string useItem;
		private string hpRecovery;
		private string parameterIncrease;
		private string parameterDecrease;
		private string actorHpAbsorbed;
		private string enemyHpAbsorbed;
		private string resistanceIncrease;
		private string resistanceDecrease;
		private string levelUp;
		private string skillLearned;
		private string battleStart;
		private string miss;
		private string shopGreeting1;
		private string shopRegreeting1;
		private string shopBuy1;
		private string shopSell1;
		private string shopLeave1;
		private string shopBuySelect1;
		private string shopBuyNumber1;
		private string shopPurchased1;
		private string shopSellSelect1;
		private string shopSellNumber1;
		private string shopSold1;
		private string shopGreeting2;
		private string shopRegreeting2;
		private string shopBuy2;
		private string shopSell2;
		private string shopLeave2;
		private string shopBuySelect2;
		private string shopBuyNumber2;
		private string shopPurchased2;
		private string shopSellSelect2;
		private string shopSellNumber2;
		private string shopSold2;
		private string shopGreeting3;
		private string shopRegreeting3;
		private string shopBuy3;
		private string shopSell3;
		private string shopLeave3;
		private string shopBuySelect3;
		private string shopBuyNumber3;
		private string shopPurchased3;
		private string shopSellSelect3;
		private string shopSellNumber3;
		private string shopSold3;
		private string innAGreeting1;
		private string innAGreeting2;
		private string innAGreeting3;
		private string innAAccept;
		private string innACancel;
		private string innBGreeting1;
		private string innBGreeting2;
		private string innBGreeting3;
		private string innBAccept;
		private string innBCancel;
		private string possessedItems;
		private string equippedItems;
		private string gold;
		private string battleFight;
		private string battleAuto;
		private string battleEscape;
		private string commandAttack;
		private string commandDefend;
		private string commandItem;
		private string commandSkill;
		private string menuEquipment;
		private string menuSave;
		private string menuQuit;
		private string newGame;
		private string loadGame;
		private string exitGame;
		private string status;
		private string row;
		private string order;
		private string waitOn;
		private string waitOff;
		private string level;
		private string healthPoints;
		private string spiritPoints;
		private string normalStatus;
		private string expShort;
		private string lvlShort;
		private string hpShort;
		private string spShort;
		private string spCost;
		private string attack;
		private string defense;
		private string spirit;
		private string agility;
		private string weapon;
		private string shield;
		private string armor;
		private string helmet;
		private string accessory;
		private string saveGameMessage;
		private string loadGameMessage;
		private string exitGameMessage;
		private string file;
		private string yes;
		private string no;
		#endregion

		#region PublicMembers
		public string Encounter
		{
			get { return encounter; }
			set { encounter = value; OnPropertyChanged("Encounter"); }
		}
		public string SpecialCombat
		{
			get { return specialCombat; }
			set { specialCombat = value; OnPropertyChanged("SpecialCombat"); }
		}
		public string EscapeSuccess
		{
			get { return escapeSuccess; }
			set { escapeSuccess = value; OnPropertyChanged("EscapeSuccess"); }
		}
		public string EscapeFailure
		{
			get { return escapeFailure; }
			set { escapeFailure = value; OnPropertyChanged("EscapeFailure"); }
		}
		public string Victory
		{
			get { return victory; }
			set { victory = value; OnPropertyChanged("Victory"); }
		}
		public string Defeat
		{
			get { return defeat; }
			set { defeat = value; OnPropertyChanged("Defeat"); }
		}
		public string ExpReceived
		{
			get { return expReceived; }
			set { expReceived = value; OnPropertyChanged("ExpReceived"); }
		}
		public string GoldRecievedA
		{
			get { return goldRecievedA; }
			set { goldRecievedA = value; OnPropertyChanged("GoldRecievedA"); }
		}
		public string GoldRecievedB
		{
			get { return goldRecievedB; }
			set { goldRecievedB = value; OnPropertyChanged("GoldRecievedB"); }
		}
		public string ItemRecieved
		{
			get { return itemRecieved; }
			set { itemRecieved = value; OnPropertyChanged("ItemRecieved"); }
		}
		public string Attacking
		{
			get { return attacking; }
			set { attacking = value; OnPropertyChanged("Attacking"); }
		}
		public string ActorCritical
		{
			get { return actorCritical; }
			set { actorCritical = value; OnPropertyChanged("ActorCritical"); }
		}
		public string EnemyCritical
		{
			get { return enemyCritical; }
			set { enemyCritical = value; OnPropertyChanged("EnemyCritical"); }
		}
		public string Defending
		{
			get { return defending; }
			set { defending = value; OnPropertyChanged("Defending"); }
		}
		public string Observing
		{
			get { return observing; }
			set { observing = value; OnPropertyChanged("Observing"); }
		}
		public string Focus
		{
			get { return focus; }
			set { focus = value; OnPropertyChanged("Focus"); }
		}
		public string Autodestruction
		{
			get { return autodestruction; }
			set { autodestruction = value; OnPropertyChanged("Autodestruction"); }
		}
		public string EnemyEscape
		{
			get { return enemyEscape; }
			set { enemyEscape = value; OnPropertyChanged("EnemyEscape"); }
		}
		public string EnemyTransform
		{
			get { return enemyTransform; }
			set { enemyTransform = value; OnPropertyChanged("EnemyTransform"); }
		}
		public string EnemyDamaged
		{
			get { return enemyDamaged; }
			set { enemyDamaged = value; OnPropertyChanged("EnemyDamaged"); }
		}
		public string EnemyUndamaged
		{
			get { return enemyUndamaged; }
			set { enemyUndamaged = value; OnPropertyChanged("EnemyUndamaged"); }
		}
		public string ActorDamaged
		{
			get { return actorDamaged; }
			set { actorDamaged = value; OnPropertyChanged("ActorDamaged"); }
		}
		public string ActorUndamaged
		{
			get { return actorUndamaged; }
			set { actorUndamaged = value; OnPropertyChanged("ActorUndamaged"); }
		}
		public string SkillFailureA
		{
			get { return skillFailureA; }
			set { skillFailureA = value; OnPropertyChanged("SkillFailureA"); }
		}
		public string SkillFailureB
		{
			get { return skillFailureB; }
			set { skillFailureB = value; OnPropertyChanged("SkillFailureB"); }
		}
		public string SkillFailureC
		{
			get { return skillFailureC; }
			set { skillFailureC = value; OnPropertyChanged("SkillFailureC"); }
		}
		public string Dodge
		{
			get { return dodge; }
			set { dodge = value; OnPropertyChanged("Dodge"); }
		}
		public string UseItem
		{
			get { return useItem; }
			set { useItem = value; OnPropertyChanged("UseItem"); }
		}
		public string HpRecovery
		{
			get { return hpRecovery; }
			set { hpRecovery = value; OnPropertyChanged("HpRecovery"); }
		}
		public string ParameterIncrease
		{
			get { return parameterIncrease; }
			set { parameterIncrease = value; OnPropertyChanged("ParameterIncrease"); }
		}
		public string ParameterDecrease
		{
			get { return parameterDecrease; }
			set { parameterDecrease = value; OnPropertyChanged("ParameterDecrease"); }
		}
		public string ActorHpAbsorbed
		{
			get { return actorHpAbsorbed; }
			set { actorHpAbsorbed = value; OnPropertyChanged("ActorHpAbsorbed"); }
		}
		public string EnemyHpAbsorbed
		{
			get { return enemyHpAbsorbed; }
			set { enemyHpAbsorbed = value; OnPropertyChanged("EnemyHpAbsorbed"); }
		}
		public string ResistanceIncrease
		{
			get { return resistanceIncrease; }
			set { resistanceIncrease = value; OnPropertyChanged("ResistanceIncrease"); }
		}
		public string ResistanceDecrease
		{
			get { return resistanceDecrease; }
			set { resistanceDecrease = value; OnPropertyChanged("ResistanceDecrease"); }
		}
		public string LevelUp
		{
			get { return levelUp; }
			set { levelUp = value; OnPropertyChanged("LevelUp"); }
		}
		public string SkillLearned
		{
			get { return skillLearned; }
			set { skillLearned = value; OnPropertyChanged("SkillLearned"); }
		}
		public string BattleStart
		{
			get { return battleStart; }
			set { battleStart = value; OnPropertyChanged("BattleStart"); }
		}
		public string Miss
		{
			get { return miss; }
			set { miss = value; OnPropertyChanged("Miss"); }
		}
		public string ShopGreeting1
		{
			get { return shopGreeting1; }
			set { shopGreeting1 = value; OnPropertyChanged("ShopGreeting1"); }
		}
		public string ShopRegreeting1
		{
			get { return shopRegreeting1; }
			set { shopRegreeting1 = value; OnPropertyChanged("ShopRegreeting1"); }
		}
		public string ShopBuy1
		{
			get { return shopBuy1; }
			set { shopBuy1 = value; OnPropertyChanged("ShopBuy1"); }
		}
		public string ShopSell1
		{
			get { return shopSell1; }
			set { shopSell1 = value; OnPropertyChanged("ShopSell1"); }
		}
		public string ShopLeave1
		{
			get { return shopLeave1; }
			set { shopLeave1 = value; OnPropertyChanged("ShopLeave1"); }
		}
		public string ShopBuySelect1
		{
			get { return shopBuySelect1; }
			set { shopBuySelect1 = value; OnPropertyChanged("ShopBuySelect1"); }
		}
		public string ShopBuyNumber1
		{
			get { return shopBuyNumber1; }
			set { shopBuyNumber1 = value; OnPropertyChanged("ShopBuyNumber1"); }
		}
		public string ShopPurchased1
		{
			get { return shopPurchased1; }
			set { shopPurchased1 = value; OnPropertyChanged("ShopPurchased1"); }
		}
		public string ShopSellSelect1
		{
			get { return shopSellSelect1; }
			set { shopSellSelect1 = value; OnPropertyChanged("ShopSellSelect1"); }
		}
		public string ShopSellNumber1
		{
			get { return shopSellNumber1; }
			set { shopSellNumber1 = value; OnPropertyChanged("ShopSellNumber1"); }
		}
		public string ShopSold1
		{
			get { return shopSold1; }
			set { shopSold1 = value; OnPropertyChanged("ShopSold1"); }
		}
		public string ShopGreeting2
		{
			get { return shopGreeting2; }
			set { shopGreeting2 = value; OnPropertyChanged("ShopGreeting2"); }
		}
		public string ShopRegreeting2
		{
			get { return shopRegreeting2; }
			set { shopRegreeting2 = value; OnPropertyChanged("ShopRegreeting2"); }
		}
		public string ShopBuy2
		{
			get { return shopBuy2; }
			set { shopBuy2 = value; OnPropertyChanged("ShopBuy2"); }
		}
		public string ShopSell2
		{
			get { return shopSell2; }
			set { shopSell2 = value; OnPropertyChanged("ShopSell2"); }
		}
		public string ShopLeave2
		{
			get { return shopLeave2; }
			set { shopLeave2 = value; OnPropertyChanged("ShopLeave2"); }
		}
		public string ShopBuySelect2
		{
			get { return shopBuySelect2; }
			set { shopBuySelect2 = value; OnPropertyChanged("ShopBuySelect2"); }
		}
		public string ShopBuyNumber2
		{
			get { return shopBuyNumber2; }
			set { shopBuyNumber2 = value; OnPropertyChanged("ShopBuyNumber2"); }
		}
		public string ShopPurchased2
		{
			get { return shopPurchased2; }
			set { shopPurchased2 = value; OnPropertyChanged("ShopPurchased2"); }
		}
		public string ShopSellSelect2
		{
			get { return shopSellSelect2; }
			set { shopSellSelect2 = value; OnPropertyChanged("ShopSellSelect2"); }
		}
		public string ShopSellNumber2
		{
			get { return shopSellNumber2; }
			set { shopSellNumber2 = value; OnPropertyChanged("ShopSellNumber2"); }
		}
		public string ShopSold2
		{
			get { return shopSold2; }
			set { shopSold2 = value; OnPropertyChanged("ShopSold2"); }
		}
		public string ShopGreeting3
		{
			get { return shopGreeting3; }
			set { shopGreeting3 = value; OnPropertyChanged("ShopGreeting3"); }
		}
		public string ShopRegreeting3
		{
			get { return shopRegreeting3; }
			set { shopRegreeting3 = value; OnPropertyChanged("ShopRegreeting3"); }
		}
		public string ShopBuy3
		{
			get { return shopBuy3; }
			set { shopBuy3 = value; OnPropertyChanged("ShopBuy3"); }
		}
		public string ShopSell3
		{
			get { return shopSell3; }
			set { shopSell3 = value; OnPropertyChanged("ShopSell3"); }
		}
		public string ShopLeave3
		{
			get { return shopLeave3; }
			set { shopLeave3 = value; OnPropertyChanged("ShopLeave3"); }
		}
		public string ShopBuySelect3
		{
			get { return shopBuySelect3; }
			set { shopBuySelect3 = value; OnPropertyChanged("ShopBuySelect3"); }
		}
		public string ShopBuyNumber3
		{
			get { return shopBuyNumber3; }
			set { shopBuyNumber3 = value; OnPropertyChanged("ShopBuyNumber3"); }
		}
		public string ShopPurchased3
		{
			get { return shopPurchased3; }
			set { shopPurchased3 = value; OnPropertyChanged("ShopPurchased3"); }
		}
		public string ShopSellSelect3
		{
			get { return shopSellSelect3; }
			set { shopSellSelect3 = value; OnPropertyChanged("ShopSellSelect3"); }
		}
		public string ShopSellNumber3
		{
			get { return shopSellNumber3; }
			set { shopSellNumber3 = value; OnPropertyChanged("ShopSellNumber3"); }
		}
		public string ShopSold3
		{
			get { return shopSold3; }
			set { shopSold3 = value; OnPropertyChanged("ShopSold3"); }
		}
		public string InnAGreeting1
		{
			get { return innAGreeting1; }
			set { innAGreeting1 = value; OnPropertyChanged("InnAGreeting1"); }
		}
		public string InnAGreeting2
		{
			get { return innAGreeting2; }
			set { innAGreeting2 = value; OnPropertyChanged("InnAGreeting2"); }
		}
		public string InnAGreeting3
		{
			get { return innAGreeting3; }
			set { innAGreeting3 = value; OnPropertyChanged("InnAGreeting3"); }
		}
		public string InnAAccept
		{
			get { return innAAccept; }
			set { innAAccept = value; OnPropertyChanged("InnAAccept"); }
		}
		public string InnACancel
		{
			get { return innACancel; }
			set { innACancel = value; OnPropertyChanged("InnACancel"); }
		}
		public string InnBGreeting1
		{
			get { return innBGreeting1; }
			set { innBGreeting1 = value; OnPropertyChanged("InnBGreeting1"); }
		}
		public string InnBGreeting2
		{
			get { return innBGreeting2; }
			set { innBGreeting2 = value; OnPropertyChanged("InnBGreeting2"); }
		}
		public string InnBGreeting3
		{
			get { return innBGreeting3; }
			set { innBGreeting3 = value; OnPropertyChanged("InnBGreeting3"); }
		}
		public string InnBAccept
		{
			get { return innBAccept; }
			set { innBAccept = value; OnPropertyChanged("InnBAccept"); }
		}
		public string InnBCancel
		{
			get { return innBCancel; }
			set { innBCancel = value; OnPropertyChanged("InnBCancel"); }
		}
		public string PossessedItems
		{
			get { return possessedItems; }
			set { possessedItems = value; OnPropertyChanged("PossessedItems"); }
		}
		public string EquippedItems
		{
			get { return equippedItems; }
			set { equippedItems = value; OnPropertyChanged("EquippedItems"); }
		}
		public string Gold
		{
			get { return gold; }
			set { gold = value; OnPropertyChanged("Gold"); }
		}
		public string BattleFight
		{
			get { return battleFight; }
			set { battleFight = value; OnPropertyChanged("BattleFight"); }
		}
		public string BattleAuto
		{
			get { return battleAuto; }
			set { battleAuto = value; OnPropertyChanged("BattleAuto"); }
		}
		public string BattleEscape
		{
			get { return battleEscape; }
			set { battleEscape = value; OnPropertyChanged("BattleEscape"); }
		}
		public string CommandAttack
		{
			get { return commandAttack; }
			set { commandAttack = value; OnPropertyChanged("CommandAttack"); }
		}
		public string CommandDefend
		{
			get { return commandDefend; }
			set { commandDefend = value; OnPropertyChanged("CommandDefend"); }
		}
		public string CommandItem
		{
			get { return commandItem; }
			set { commandItem = value; OnPropertyChanged("CommandItem"); }
		}
		public string CommandSkill
		{
			get { return commandSkill; }
			set { commandSkill = value; OnPropertyChanged("CommandSkill"); }
		}
		public string MenuEquipment
		{
			get { return menuEquipment; }
			set { menuEquipment = value; OnPropertyChanged("MenuEquipment"); }
		}
		public string MenuSave
		{
			get { return menuSave; }
			set { menuSave = value; OnPropertyChanged("MenuSave"); }
		}
		public string MenuQuit
		{
			get { return menuQuit; }
			set { menuQuit = value; OnPropertyChanged("MenuQuit"); }
		}
		public string NewGame
		{
			get { return newGame; }
			set { newGame = value; OnPropertyChanged("NewGame"); }
		}
		public string LoadGame
		{
			get { return loadGame; }
			set { loadGame = value; OnPropertyChanged("LoadGame"); }
		}
		public string ExitGame
		{
			get { return exitGame; }
			set { exitGame = value; OnPropertyChanged("ExitGame"); }
		}
		public string Status
		{
			get { return status; }
			set { status = value; OnPropertyChanged("Status"); }
		}
		public string Row
		{
			get { return row; }
			set { row = value; OnPropertyChanged("Row"); }
		}
		public string Order
		{
			get { return order; }
			set { order = value; OnPropertyChanged("Order"); }
		}
		public string WaitOn
		{
			get { return waitOn; }
			set { waitOn = value; OnPropertyChanged("WaitOn"); }
		}
		public string WaitOff
		{
			get { return waitOff; }
			set { waitOff = value; OnPropertyChanged("WaitOff"); }
		}
		public string Level
		{
			get { return level; }
			set { level = value; OnPropertyChanged("Level"); }
		}
		public string HealthPoints
		{
			get { return healthPoints; }
			set { healthPoints = value; OnPropertyChanged("HealthPoints"); }
		}
		public string SpiritPoints
		{
			get { return spiritPoints; }
			set { spiritPoints = value; OnPropertyChanged("SpiritPoints"); }
		}
		public string NormalStatus
		{
			get { return normalStatus; }
			set { normalStatus = value; OnPropertyChanged("NormalStatus"); }
		}
		public string ExpShort
		{
			get { return expShort; }
			set { expShort = value; OnPropertyChanged("ExpShort"); }
		}
		public string LvlShort
		{
			get { return lvlShort; }
			set { lvlShort = value; OnPropertyChanged("LvlShort"); }
		}
		public string HpShort
		{
			get { return hpShort; }
			set { hpShort = value; OnPropertyChanged("HpShort"); }
		}
		public string SpShort
		{
			get { return spShort; }
			set { spShort = value; OnPropertyChanged("SpShort"); }
		}
		public string SpCost
		{
			get { return spCost; }
			set { spCost = value; OnPropertyChanged("SpCost"); }
		}
		public string Attack
		{
			get { return attack; }
			set { attack = value; OnPropertyChanged("Attack"); }
		}
		public string Defense
		{
			get { return defense; }
			set { defense = value; OnPropertyChanged("Defense"); }
		}
		public string Spirit
		{
			get { return spirit; }
			set { spirit = value; OnPropertyChanged("Spirit"); }
		}
		public string Agility
		{
			get { return agility; }
			set { agility = value; OnPropertyChanged("Agility"); }
		}
		public string Weapon
		{
			get { return weapon; }
			set { weapon = value; OnPropertyChanged("Weapon"); }
		}
		public string Shield
		{
			get { return shield; }
			set { shield = value; OnPropertyChanged("Shield"); }
		}
		public string Armor
		{
			get { return armor; }
			set { armor = value; OnPropertyChanged("Armor"); }
		}
		public string Helmet
		{
			get { return helmet; }
			set { helmet = value; OnPropertyChanged("Helmet"); }
		}
		public string Accessory
		{
			get { return accessory; }
			set { accessory = value; OnPropertyChanged("Accessory"); }
		}
		public string SaveGameMessage
		{
			get { return saveGameMessage; }
			set { saveGameMessage = value; OnPropertyChanged("SaveGameMessage"); }
		}
		public string LoadGameMessage
		{
			get { return loadGameMessage; }
			set { loadGameMessage = value; OnPropertyChanged("LoadGameMessage"); }
		}
		public string ExitGameMessage
		{
			get { return exitGameMessage; }
			set { exitGameMessage = value; OnPropertyChanged("ExitGameMessage"); }
		}
		public string File
		{
			get { return file; }
			set { file = value; OnPropertyChanged("File"); }
		}
		public string Yes
		{
			get { return yes; }
			set { yes = value; OnPropertyChanged("Yes"); }
		}
		public string No
		{
			get { return no; }
			set { no = value; OnPropertyChanged("No"); }
		}
		#endregion

		#region Constructor
		public Terms()
		{
			encounter = "";
			specialCombat = "";
			escapeSuccess = "";
			escapeFailure = "";
			victory = "";
			defeat = "";
			expReceived = "";
			goldRecievedA = "";
			goldRecievedB = "";
			itemRecieved = "";
			attacking = "";
			actorCritical = "";
			enemyCritical = "";
			defending = "";
			observing = "";
			focus = "";
			autodestruction = "";
			enemyEscape = "";
			enemyTransform = "";
			enemyDamaged = "";
			enemyUndamaged = "";
			actorDamaged = "";
			actorUndamaged = "";
			skillFailureA = "";
			skillFailureB = "";
			skillFailureC = "";
			dodge = "";
			useItem = "";
			hpRecovery = "";
			parameterIncrease = "";
			parameterDecrease = "";
			actorHpAbsorbed = "";
			enemyHpAbsorbed = "";
			resistanceIncrease = "";
			resistanceDecrease = "";
			levelUp = "";
			skillLearned = "";
			battleStart = "";
			miss = "";
			shopGreeting1 = "";
			shopRegreeting1 = "";
			shopBuy1 = "";
			shopSell1 = "";
			shopLeave1 = "";
			shopBuySelect1 = "";
			shopBuyNumber1 = "";
			shopPurchased1 = "";
			shopSellSelect1 = "";
			shopSellNumber1 = "";
			shopSold1 = "";
			shopGreeting2 = "";
			shopRegreeting2 = "";
			shopBuy2 = "";
			shopSell2 = "";
			shopLeave2 = "";
			shopBuySelect2 = "";
			shopBuyNumber2 = "";
			shopPurchased2 = "";
			shopSellSelect2 = "";
			shopSellNumber2 = "";
			shopSold2 = "";
			shopGreeting3 = "";
			shopRegreeting3 = "";
			shopBuy3 = "";
			shopSell3 = "";
			shopLeave3 = "";
			shopBuySelect3 = "";
			shopBuyNumber3 = "";
			shopPurchased3 = "";
			shopSellSelect3 = "";
			shopSellNumber3 = "";
			shopSold3 = "";
			innAGreeting1 = "";
			innAGreeting2 = "";
			innAGreeting3 = "";
			innAAccept = "";
			innACancel = "";
			innBGreeting1 = "";
			innBGreeting2 = "";
			innBGreeting3 = "";
			innBAccept = "";
			innBCancel = "";
			possessedItems = "";
			equippedItems = "";
			gold = "";
			battleFight = "";
			battleAuto = "";
			battleEscape = "";
			commandAttack = "";
			commandDefend = "";
			commandItem = "";
			commandSkill = "";
			menuEquipment = "";
			menuSave = "";
			menuQuit = "";
			newGame = "";
			loadGame = "";
			exitGame = "";
			status = "";
			row = "";
			order = "";
			waitOn = "";
			waitOff = "";
			level = "";
			healthPoints = "";
			spiritPoints = "";
			normalStatus = "";
			expShort = "";
			lvlShort = "";
			hpShort = "";
			spShort = "";
			spCost = "";
			attack = "";
			defense = "";
			spirit = "";
			agility = "";
			weapon = "";
			shield = "";
			armor = "";
			helmet = "";
			accessory = "";
			saveGameMessage = "";
			loadGameMessage = "";
			exitGameMessage = "";
			file = "";
			yes = "";
			no = "";
		}
		#endregion
	}
}
