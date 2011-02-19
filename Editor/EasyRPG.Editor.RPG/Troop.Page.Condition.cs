using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.RPG
{
	public class TroopPageCondition : NotifyPropertyChanged
	{
		#region PublicMembers
		private bool switchA;
		private bool switchB;
		private bool variable;
		private bool turn;
		private bool fatigue;
		private bool enemyHp;
		private bool actorHp;
		private int switchAId;
		private int switchBId;
		private int variableId;
		private int variableValue;
		private int turnA;
		private int turnB;
		private int fatigueMin;
		private int fatigueMax;
		private int enemyId;
		private int enemyHpMin;
		private int enemyHpMax;
		private int actorId;
		private int actorHpMin;
		private int actorHpMax;
		private bool turnEnemy;
		private bool turnActor;
		private bool commandActor;
		private int turnEnemyId;
		private int turnEnemyA;
		private int turnEnemyB;
		private int turnActorId;
		private int turnActorA;
		private int turnActorB;
		private int commandActorId;
		private int commandId;
		#endregion

		#region PublicMembers
		public bool SwitchA
		{
			get { return switchA; }
			set { switchA = value; OnPropertyChanged("SwitchA"); }
		}
		public bool SwitchB
		{
			get { return switchB; }
			set { switchB = value; OnPropertyChanged("SwitchB"); }
		}
		public bool Variable
		{
			get { return variable; }
			set { variable = value; OnPropertyChanged("Variable"); }
		}
		public bool Turn
		{
			get { return turn; }
			set { turn = value; OnPropertyChanged("Turn"); }
		}
		public bool Fatigue
		{
			get { return fatigue; }
			set { fatigue = value; OnPropertyChanged("Fatigue"); }
		}
		public bool EnemyHp
		{
			get { return enemyHp; }
			set { enemyHp = value; OnPropertyChanged("EnemyHp"); }
		}
		public bool ActorHp
		{
			get { return actorHp; }
			set { actorHp = value; OnPropertyChanged("ActorHp"); }
		}
		public int SwitchAId
		{
			get { return switchAId; }
			set { switchAId = value; OnPropertyChanged("SwitchAId"); }
		}
		public int SwitchBId
		{
			get { return switchBId; }
			set { switchBId = value; OnPropertyChanged("SwitchBId"); }
		}
		public int VariableId
		{
			get { return variableId; }
			set { variableId = value; OnPropertyChanged("VariableId"); }
		}
		public int VariableValue
		{
			get { return variableValue; }
			set { variableValue = value; OnPropertyChanged("VariableValue"); }
		}
		public int TurnA
		{
			get { return turnA; }
			set { turnA = value; OnPropertyChanged("TurnA"); }
		}
		public int TurnB
		{
			get { return turnB; }
			set { turnB = value; OnPropertyChanged("TurnB"); }
		}
		public int FatigueMin
		{
			get { return fatigueMin; }
			set { fatigueMin = value; OnPropertyChanged("FatigueMin"); }
		}
		public int FatigueMax
		{
			get { return fatigueMax; }
			set { fatigueMax = value; OnPropertyChanged("FatigueMax"); }
		}
		public int EnemyId
		{
			get { return enemyId; }
			set { enemyId = value; OnPropertyChanged("EnemyId"); }
		}
		public int EnemyHpMin
		{
			get { return enemyHpMin; }
			set { enemyHpMin = value; OnPropertyChanged("EnemyHpMin"); }
		}
		public int EnemyHpMax
		{
			get { return enemyHpMax; }
			set { enemyHpMax = value; OnPropertyChanged("EnemyHpMax"); }
		}
		public int ActorId
		{
			get { return actorId; }
			set { actorId = value; OnPropertyChanged("ActorId"); }
		}
		public int ActorHpMin
		{
			get { return actorHpMin; }
			set { actorHpMin = value; OnPropertyChanged("ActorHpMin"); }
		}
		public int ActorHpMax
		{
			get { return actorHpMax; }
			set { actorHpMax = value; OnPropertyChanged("ActorHpMax"); }
		}

		// RPG2003
		public bool TurnEnemy
		{
			get { return turnEnemy; }
			set { turnEnemy = value; OnPropertyChanged("TurnEnemy"); }
		}
		public bool TurnActor
		{
			get { return turnActor; }
			set { turnActor = value; OnPropertyChanged("TurnActor"); }
		}
		public bool CommandActor
		{
			get { return commandActor; }
			set { commandActor = value; OnPropertyChanged("CommandActor"); }
		}
		public int TurnEnemyId
		{
			get { return turnEnemyId; }
			set { turnEnemyId = value; OnPropertyChanged("TurnEnemyId"); }
		}
		public int TurnEnemyA
		{
			get { return turnEnemyA; }
			set { turnEnemyA = value; OnPropertyChanged("TurnEnemyA"); }
		}
		public int TurnEnemyB
		{
			get { return turnEnemyB; }
			set { turnEnemyB = value; OnPropertyChanged("TurnEnemyB"); }
		}
		public int TurnActorId
		{
			get { return turnActorId; }
			set { turnActorId = value; OnPropertyChanged("TurnActorId"); }
		}
		public int TurnActorA
		{
			get { return turnActorA; }
			set { turnActorA = value; OnPropertyChanged("TurnActorA"); }
		}
		public int TurnActorB
		{
			get { return turnActorB; }
			set { turnActorB = value; OnPropertyChanged("TurnActorB"); }
		}
		public int CommandActorId
		{
			get { return commandActorId; }
			set { commandActorId = value; OnPropertyChanged("CommandActorId"); }
		}
		public int CommandId
		{
			get { return commandId; }
			set { commandId = value; OnPropertyChanged("CommandId"); }
		}
		#endregion

		#region Constructor
		public TroopPageCondition()
		{
			switchA = false;
			switchB = false;
			variable = false;
			turn = false;
			fatigue = false;
			enemyHp = false;
			actorHp = false;
			switchAId = 1;
			switchBId = 1;
			variableId = 1;
			variableValue = 0;
			turnA = 0;
			turnB = 0;
			fatigueMin = 0;
			fatigueMax = 100;
			enemyId = 1;
			enemyHpMin = 0;
			enemyHpMax = 100;
			actorId = 1;
			actorHpMin = 0;
			actorHpMax = 100;

			turnEnemy = false;
			turnActor = false;
			commandActor = false;
			turnEnemyId = 1;
			turnEnemyA = 0;
			turnEnemyB = 0;
			turnActorId = 1;
			turnActorA = 0;
			turnActorB = 0;
			commandActorId = 1;
			commandId = 1;
		}
		#endregion
	}
}
