namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	enum ChunkData
	{
		Actor				= 0x0B, // RPG.Actor
		Skill				= 0x0C, // RPG.Skill
		Item				= 0x0D, // RPG.Item
		Enemy				= 0x0E, // RPG.Enemy
		Troop				= 0x0F, // RPG.Troop
		Terrain				= 0x10, // RPG.Terrain
		Attribute			= 0x11, // RPG.Attribute
		State				= 0x12, // RPG.State
		Animation			= 0x13, // RPG.Animation
		Chipset				= 0x14, // RPG.Chipset
		Terms				= 0x15, // RPG.Terms
		System				= 0x16, // RPG.System
		Switches			= 0x17, // RPG.Switchs
		Variables			= 0x18, // RPG.Variables
		CommonEvent			= 0x19, // RPG.CommonEvent
		BattleCommand		= 0x1D, // RPG.BattleCommand - RPG2003
		Class				= 0x1E, // RPG.Class - RPG2003
		BattlerAnimation	= 0x20, // RPG.BattlerAnimation - RPG2003

		CommonEventD1		= 0x1A, // Duplicated? - Not used - RPG2003
		CommonEventD2		= 0x1B, // Duplicated? - Not used - RPG2003
		CommonEventD3		= 0x1C, // Duplicated? - Not used - RPG2003
		ClassD1				= 0x1F, // Duplicated? - Not used - RPG2003
			
		End					= 0x00	// End of chunk
	}

	enum ChunkActor
	{
		Name				= 0x01, // String
		Title				= 0x02, // String
		CharacterName		= 0x03, // String
		CharacterIndex		= 0x04, // Integer
		Transparent			= 0x05, // Flag
		InitialLevel		= 0x07, // Integer
		FinalLevel			= 0x08, // Integer
		CriticalHit			= 0x09, // Flag
		CriticalHitChance	= 0x0A, // Integer
		FaceName			= 0x0F, // String
		FaceIndex			= 0x10, // Integer
		TwoSwordsStyle		= 0x15, // Flag
		FixEquipment		= 0x16, // Flag
		AutoBattle			= 0x17, // Flag
		SuperGuard			= 0x18, // Flag
		Parameters			= 0x1F, // Array x 6 - Short
		ExpBase				= 0x29, // Integer
		ExpInflation		= 0x2A, // Integer
		ExpCorrection		= 0x2B, // Integer
		InitialEquipment	= 0x33, // Integer x 5
		UnarmedAnimation	= 0x38, // Integer
		ClassId				= 0x39, // Integer - RPG2003
		BattleX				= 0x3B, // Integer - RPG2003
		BattleY				= 0x3C, // Integer - RPG2003
		BattlerAnimation	= 0x3E, // Integer - RPG2003
		Skills				= 0x3F, // Array - RPG.Learning
		RenameSkill			= 0x42, // Flag
		SkillName			= 0x43, // String
		StateRanksSize		= 0x47, // Integer
		StateRanks			= 0x48, // Array - Short
		AttributeRanksSize	= 0x49, // Integer
		AttributeRanks		= 0x4A, // Array - Short
		BattleCommands		= 0x50	// Array - RPG.BattleCommand - RPG2003
	}

	enum ChunkLearning
	{
		Level	= 0x01, // Integer
		SkillId	= 0x02	// Integer
	}

	enum ChunkSkill
	{
		Name					= 0x01, // String
		Description				= 0x02, // String
		UsingMessage1			= 0x03, // String - RPG2000
		UsingMessage2			= 0x04, // String - RPG2000
		FailureMessage			= 0x07, // Integer - RPG2000
		Type					= 0x08, // Integer
		SpType					= 0x09, // Integer - RPG2003
		SpPercent				= 0x0A, // Integer - RPG2003
		SpCost					= 0x0B, // Integer
		Scope					= 0x0C, // Integer
		SwitchId				= 0x0D, // Integer
		AnimationId				= 0x0E, // Integer
		SoundEffect				= 0x10, // RPG.Sound
		OccasionField			= 0x12, // Flag
		OccasionBattle			= 0x13, // Flag
		StateEffect				= 0x14, // Flag - RPG2003
		PdefF					= 0x15, // Integer
		MdefF					= 0x16, // Integer
		Variance				= 0x17, // Integer
		Power					= 0x18, // Integer
		Hit						= 0x19, // Integer
		AffectHp				= 0x1F, // Flag
		AffectSp				= 0x20, // Flag
		AffectAttack			= 0x21, // Flag
		AffectDefense			= 0x22, // Flag
		AffectSpirit			= 0x23, // Flag
		AffectAgility			= 0x24, // Flag
		AbsorbDamage			= 0x25, // Flag
		IgnoreDefense			= 0x26, // Flag
		StateSize				= 0x29, // Integer
		StateEffects			= 0x2A, // Array - Flag
		AttributeSize			= 0x2B, // Integer
		AttributeEffects		= 0x2C, // Array - Flag
		AffectAttrDefence		= 0x2D, // Flag
		BattlerAnimation		= 0x31, // Integer - RPG2003
		BattlerAnimationData	= 0x32	// ? - RPG2003
	}

	enum ChunkItem
	{
		Name				= 0x01, // String
		Description			= 0x02, // String
		Type				= 0x03, // Integer
		Price				= 0x05, // Integer
		Uses				= 0x06, // Integer
		AtkPoints1			= 0x0B, // Integer
		DefPoints1			= 0x0C, // Integer
		SpiPoints1			= 0x0D, // Integer
		AgiPoints1			= 0x0E, // Integer
		TwoHanded			= 0x0F, // Flag
		SpCost				= 0x10, // Integer
		Hit					= 0x11, // Integer
		CriticalHit			= 0x12, // Integer
		AnimationId			= 0x14, // Integer
		Preemptive			= 0x15, // Flag
		DualAttack			= 0x16, // Flag
		AttackAll			= 0x17, // Flag
		IgnoreEvasion		= 0x18, // Flag
		PreventCritical		= 0x19, // Flag
		RaiseEvasion		= 0x1A, // Flag
		HalfSpCost			= 0x1B, // Flag
		NoTerrainDamage		= 0x1C, // Flag
		Cursed				= 0x1D, // Flag - RPG2003
		EntireParty			= 0x1F, // Flag
		RecoverHp			= 0x20, // Integer
		RecoverHpRate		= 0x21, // Integer
		RecoverSp			= 0x22, // Integer
		RecoverSpRate		= 0x23, // Integer
		OcassionField1		= 0x25, // Flag
		KoOnly				= 0x26, // Flag
		MaxHpPoints			= 0x29, // Integer
		MaxSpPoints			= 0x2A, // Integer
		AtkPoints2			= 0x2B, // Integer
		DefPoints2			= 0x2C, // Integer
		SpiPoints2			= 0x2D, // Integer
		AgiPoints2			= 0x2E, // Integer
		UsingMessage		= 0x33, // Integer
		SkillId				= 0x35, // Integer - RPG2003
		SwitchId			= 0x37, // Integer
		OcassionField2		= 0x39, // Flag
		OcassionBattle		= 0x3A, // Flag
		ActorSetSize		= 0x3D, // Integer
		ActorSet			= 0x3E, // Array - Flag
		StateSetSize		= 0x3F, // Integer
		StateSet			= 0x40, // Array - Flag
		AttributeSetSize	= 0x41, // Integer
		AttributeSet		= 0x42, // Array - Flag
		StateChance			= 0x43, // Integer
		StateEffect			= 0x44, // Flag
		WeaponAnimation		= 0x45, // Integer - RPG2003
		AnimationData		= 0x46, // Array - RPG2003
		UseSkill			= 0x47, // Flag - RPG2003
		ClassSetSize		= 0x48, // Integer - RPG2003
		ClassSet			= 0x49, // Array - Flag - RPG2003
		RangedTrajectory	= 0x4B, // Integer
		RangedTarget		= 0x4C	// Integer
	}

	enum ChunkItemAnimation
	{
		Type			= 0x03,
		WeaponAnim		= 0x04,
		Movement		= 0x05,
		AfterImage		= 0x06,
		Attacks			= 0x07,
		Ranged			= 0x08,
		RangedAnim		= 0x09,
		RangedSpeed		= 0x0c,
		BattleAnim		= 0x0d
	};

	enum ChunkEnemy
	{
		Name				= 0x01, // String
		BattlerName			= 0x02, // String
		BattlerHue			= 0x03, // Integer
		MaxHp				= 0x04, // Integer
		MaxSp				= 0x05, // Integer
		Attack				= 0x06, // Integer
		Defense				= 0x07, // Integer
		Spirit				= 0x08, // Integer
		Agility				= 0x09, // Integer
		Transparent			= 0x0A, // Flag
		Exp					= 0x0B, // Integer
		Gold				= 0x0C, // Integer
		DropId				= 0x0D, // Integer
		DropProb			= 0x0E, // Integer
		CriticalHit			= 0x15, // Flag
		CriticalHitChance	= 0x16, // Integer
		Miss				= 0x1A, // Flag
		Levitate			= 0x1C, // Flag
		StateRanksSize		= 0x1F, // Integer
		StateRanks			= 0x20, // Array - Short
		AttributeRanksSize	= 0x21, // Integer
		AttributeRanks		= 0x22, // Array - Short
		Actions				= 0x2A	// Array - RPG.EnemyAction
	}

	enum ChunkEnemyAction
	{
		Kind			= 0x01, // Integer
		Basic			= 0x02, // Integer
		SkillId			= 0x03, // Integer
		EnemyId			= 0x04, // Integer
		ConditionType	= 0x05, // Integer
		ConditionParam1	= 0x06, // Integer
		ConditionParam2	= 0x07, // Integer
		SwitchId		= 0x08, // Integer
		SwitchOn		= 0x09, // Flag
		SwitchOnId		= 0x0A, // Integer
		SwitchOff		= 0x0B, // Flag
		SwitchOffId		= 0x0C, // Integer
		Rating			= 0x0D	// Integer
	}

	enum ChunkTroop
	{
		Name			= 0x01, // String
		Members			= 0x02, // Array - RPG.TroopMember
		TerrainSetSize	= 0x04, // Integer
		TerrainSet		= 0x05, // Array - Flag
		Pages			= 0x0B	// Array - RPG.TroopPage
	}

	enum ChunkTroopMember
	{
		Id		= 0x01, // Integer
		X		= 0x02, // Integer
		Y		= 0x03, // Integer
		Middle	= 0x04	// Flag
	}

	enum ChunkTroopPage
	{
		Condition			= 0x02, // RPG.TroopPageCondition
		EventCommandsSize	= 0x0B, // Integer
		EventCommands		= 0x0C	// Array - RPG.EventCommand
	}

	enum ChunkTroopPageCondition
	{
		ConditionFlags	= 0x01, // Bitflag - x 2 if RPG2003
		SwitchAId		= 0x02, // Integer
		SwitchBId		= 0x03, // Integer
		VariableId		= 0x04, // Integer
		VariableValue	= 0x05, // Integer
		TurnA			= 0x06, // Integer
		TurnB			= 0x07, // Integer
		FatigueMin		= 0x08, // Integer
		FatigueMax		= 0x09, // Integer
		EnemyId			= 0x0A, // Integer
		EnemyHpMin		= 0x0B, // Integer
		EnemyHpMax		= 0x0C, // Integer
		ActorId			= 0x0D, // Integer
		ActorHpMin		= 0x0E, // Integer
		ActorHpMax		= 0x0F,	// Integer
		TurnEnemyId		= 0x10, // Integer - RPG2003
		TurnEnemyA		= 0x11, // Integer - RPG2003
		TurnEnemyB		= 0x12, // Integer - RPG2003
		TurnActorId		= 0x13, // Integer - RPG2003
		TurnActorA		= 0x14, // Integer - RPG2003
		TurnActorB		= 0x15, // Integer - RPG2003
		CommandActorId	= 0x16, // Integer - RPG2003
		CommandId		= 0x17	// Integer - RPG2003
	}

	enum ChunkTerrain
	{
		Name					= 0x01, // String
		Damage					= 0x02, // Integer
		EncounterRate			= 0x03, // Integer
		BackgroundName			= 0x04, // String
		BoatPass				= 0x05, // Flag
		ShipPass				= 0x06, // Flag
		AirshipPass				= 0x07, // Flag
		AirshipLand				= 0x09, // Flag
		BushDepth				= 0x0B, // Integer
		Footstep				= 0x0F, // RPG.Sound - RPG2003
		OnDamageSe				= 0x10, // Flag - RPG2003
		BackgroundType			= 0x11, // Integer - RPG2003
		BackgroundAName			= 0x15, // String - RPG2003
		BackgroundAScrollH		= 0x16, // Flag - RPG2003
		BackgroundAScrollV		= 0x17, // Flag - RPG2003
		BackgroundAScrollHSpeed	= 0x18, // Integer - RPG2003
		BackgroundAScrollVSpeed	= 0x19, // Integer - RPG2003
		BackgroundB				= 0x1E, // Flag - RPG2003
		BackgroundBName			= 0x1F, // String - RPG2003
		BackgroundBScrollH		= 0x20, // Flag - RPG2003
		BackgroundBScrollV		= 0x21, // Flag - RPG2003
		BackgroundBScrollHSpeed	= 0x22, // Integer - RPG2003
		BackgroundBScrollVSpeed	= 0x23, // Integer - RPG2003
		SpecialFlags			= 0x28, // Bitflag - RPG2003
		SpecialBackParty		= 0x29, // Integer - RPG2003
		SpecialBackEnemies		= 0x2A, // Integer - RPG2003
		SpecialLateralParty		= 0x2B, // Integer - RPG2003
		SpecialLateralEnemies	= 0x2C, // Integer - RPG2003
		GridLocation			= 0x2D, // Integer - RPG2003
		GridA					= 0x2E, // Integer - RPG2003
		GridB					= 0x2F, // Integer - RPG2003
		GridC					= 0x30	// Integer - RPG2003
	}

	enum ChunkAttribute
	{
		Name	= 0x01, // String
		Type	= 0x02, // Integer
		ARate	= 0x0B, // Integer
		BRate	= 0x0C, // Integer
		CRate	= 0x0D, // Integer
		DRate	= 0x0E, // Integer
		ERate	= 0x0F	// Integer
	}

	enum ChunkState
	{
		Name				= 0x01, // String
		Type				= 0x02, // Integer
		Color				= 0x03, // Integer
		Priority			= 0x04, // Integer
		Restriction			= 0x05, // Integer
		ARate				= 0x0B, // Integer
		BRate				= 0x0C, // Integer
		CRate				= 0x0D, // Integer
		DRate				= 0x0E, // Integer
		ERate				= 0x0F, // Integer
		HoldTurn			= 0x15, // Integer
		AutoReleaseProb		= 0x16, // Integer
		ReleaseByDamage		= 0x17, // Integer
		AffectType			= 0x1E, // Integer - RPG2003
		AffectAttack		= 0x1F, // Flag
		AffectDefense		= 0x20, // Flag
		AffectSpirit		= 0x21, // Flag
		AffectAgility		= 0x22, // Flag
		ReduceHitRatio		= 0x23, // Integer
		AvoidAttacks		= 0x24, // Flag - RPG2003
		ReflectMagic		= 0x25, // Flag - RPG2003
		Cursed				= 0x26, // Flag - RPG2003
		BattlerAnimationId	= 0x27, // Integer - RPG2003
		RestrictSkill		= 0x29, // Flag
		RestrictSkillLevel	= 0x2A, // Integer
		RestrictMagic		= 0x2B, // Flag
		RestrictMagicLevel	= 0x2C, // Integer
		HpChangeType		= 0x2D, // Integer
		SpChangeType		= 0x2E, // Integer
		MessageActor		= 0x33, // String
		MessageEnemy		= 0x34, // String
		MessageAlready		= 0x35, // String
		MessageAffected		= 0x36, // String
		MessageRecovery		= 0x37, // String
		HpChangeMax			= 0x3D, // Integer
		HpChangeVal			= 0x3E, // Integer
		HpChangeMapVal		= 0x3F, // Integer
		HpChangeMapSteps	= 0x40, // Integer
		SpChangeMax			= 0x41, // Integer
		SpChangeVal			= 0x42, // Integer
		SpChangeMapVal		= 0x43, // Integer
		SpChangeMapSteps	= 0x44	// Integer
	}

	enum ChunkAnimation
	{
		Name			= 0x01, // String
		AnimationName	= 0x02, // String
		Timings			= 0x06, // Array - RPG.AnimationTiming
		Scope			= 0x09, // Integer
		Position		= 0x0A, // Integer
		Frames			= 0x0C	// Array - RPG.AnimationFrames
	}

	enum ChunkAnimationTiming
	{
		Frame		= 0x01, // Integer
		Se			= 0x02, // RPG.Sound
		FlashScope	= 0x03, // Integer
		FlashRed	= 0x04, // Integer
		FlashGreen	= 0x05, // Integer
		FlashBlue	= 0x06, // Integer
		FlashPower	= 0x07,	// Integer
		ScreenShake	= 0x08	// Integer - RPG2003
	}

	enum ChunkAnimationFrame
	{
		Cells	= 0x01 // Array - RPG.AnimationCellData
	}

	enum ChunkAnimationCellData
	{
		Priority	= 0x01, // Integer
		Id			= 0x02, // Integer
		X			= 0x03, // Integer
		Y			= 0x04, // Integer
		Zoom		= 0x05, // Integer
		ToneRed		= 0x06, // Integer
		ToneGreen	= 0x07, // Integer
		ToneBlue	= 0x08, // Integer
		ToneGray	= 0x09, // Integer
		Opacity		= 0x0A	// Integer
	}

	enum ChunkChipset
	{
		Name				= 0x01, // String
		ChipsetName			= 0x02, // String
		TerrainData			= 0x03, // Array - Short x 162
		PassableDataLower	= 0x04, // Array - Bitflag x 162
		PassableDataUpper	= 0x05, // Array - Bitflag x 144
		AnimationType		= 0x0B, // Integer
		AnimationSpeed		= 0x0C	// Integer
	}

	enum ChunkTerms
	{
		Encounter			= 0x01, // String
		SpecialCombat		= 0x02, // String
		EscapeSuccess		= 0x03, // String
		EscapeFailure		= 0x04, // String
		Victory				= 0x05, // String
		Defeat				= 0x06, // String
		ExpReceived			= 0x07, // String
		GoldRecievedA		= 0x08, // String
		GoldRecievedB		= 0x09, // String
		ItemRecieved		= 0x0A, // String
		Attacking			= 0x0B, // String
		ActorCritical		= 0x0C, // String
		EnemyCritical		= 0x0D, // String
		Defending			= 0x0E, // String
		Observing			= 0x0F, // String
		Focus				= 0x10, // String
		Autodestruction		= 0x11, // String
		EnemyEscape			= 0x12, // String
		EnemyTransform		= 0x13, // String
		EnemyDamaged		= 0x14, // String
		EnemyUndamaged		= 0x15, // String
		ActorDamaged		= 0x16, // String
		ActorUndamaged		= 0x17, // String
		SkillFailureA		= 0x18, // String
		SkillFailureB		= 0x19, // String
		SkillFailureC		= 0x1A, // String
		Dodge				= 0x1B, // String
		UseItem				= 0x1C, // String
		HpRecovery			= 0x1D, // String
		ParameterIncrease	= 0x1E, // String
		ParameterDecrease	= 0x1F, // String
		ActorHpAbsorbed		= 0x20, // String
		EnemyHpAbsorbed		= 0x21, // String
		ResistanceIncrease	= 0x22, // String
		ResistanceDecrease	= 0x23, // String
		LevelUp				= 0x24, // String
		SkillLearned		= 0x25, // String
		BattleStart			= 0x26, // String
		Miss				= 0x27, // String
		ShopGreeting1		= 0x29, // String
		ShopRegreeting1		= 0x2A, // String
		ShopBuy1			= 0x2B, // String
		ShopSell1			= 0x2C, // String
		ShopLeave1			= 0x2D, // String
		ShopBuySelect1		= 0x2E, // String
		ShopBuyNumber1		= 0x2F, // String
		ShopPurchased1		= 0x30, // String
		ShopSellSelect1		= 0x31, // String
		ShopSellNumber1		= 0x32, // String
		ShopSold1			= 0x33, // String
		ShopGreeting2		= 0x36, // String
		ShopRegreeting2		= 0x37, // String
		ShopBuy2			= 0x38, // String
		ShopSell2			= 0x39, // String
		ShopLeave2			= 0x3A, // String
		ShopBuySelect2		= 0x3B, // String
		ShopBuyNumber2		= 0x3C, // String
		ShopPurchased2		= 0x3D, // String
		ShopSellSelect2		= 0x3E, // String
		ShopSellNumber2		= 0x3F, // String
		ShopSold2			= 0x40, // String
		ShopGreeting3		= 0x43, // String
		ShopRegreeting3		= 0x44, // String
		ShopBuy3			= 0x45, // String
		ShopSell3			= 0x46, // String
		ShopLeave3			= 0x47, // String
		ShopBuySelect3		= 0x48, // String
		ShopBuyNumber3		= 0x49, // String
		ShopPurchased3		= 0x4A, // String
		ShopSellSelect3		= 0x4B, // String
		ShopSellNumber3		= 0x4C, // String
		ShopSold3			= 0x4D, // String
		InnAGreeting1		= 0x50, // String
		InnAGreeting2		= 0x51, // String
		InnAGreeting3		= 0x52, // String
		InnAAccept			= 0x53, // String
		InnACancel			= 0x54, // String
		InnBGreeting1		= 0x55, // String
		InnBGreeting2		= 0x56, // String
		InnBGreeting3		= 0x57, // String
		InnBAccept			= 0x58, // String
		InnBCancel			= 0x59, // String
		PossessedItems		= 0x5C, // String
		EquippedItems		= 0x5D, // String
		Gold				= 0x5F, // String
		BattleFight			= 0x65, // String
		BattleAuto			= 0x66, // String
		BattleEscape		= 0x67, // String
		CommandAttack		= 0x68, // String
		CommandDefend		= 0x69, // String
		CommandItem			= 0x6A, // String
		CommandSkill		= 0x6B, // String
		MenuEquipment		= 0x6C, // String
		MenuSave			= 0x6E, // String
		MenuQuit			= 0x70, // String
		NewGame				= 0x72, // String
		LoadGame			= 0x73, // String
		ExitGame			= 0x75, // String
		Status				= 0x76, // String
		Row					= 0x77, // String
		Order				= 0x78, // String
		WaitOn				= 0x79, // String
		WaitOff				= 0x7A, // String
		Level				= 0x7B, // String
		HealthPoints		= 0x7C, // String
		SpiritPoints		= 0x7D, // String
		NormalStatus		= 0x7E, // String
		ExpShort			= 0x7F, // String - char x 2?
		LvlShort			= 0x80, // String - char x 2?
		HpShort				= 0x81, // String - char x 2?
		SpShort				= 0x82, // String - char x 2?
		SpCost				= 0x83, // String
		Attack				= 0x84, // String
		Defense				= 0x85, // String
		Spirit				= 0x86, // String
		Agility				= 0x87, // String
		Weapon				= 0x88, // String
		Shield				= 0x89, // String
		Armor				= 0x8A, // String
		Helmet				= 0x8B, // String
		Accessory			= 0x8C, // String
		SaveGameMessage		= 0x92, // String
		LoadGameMessage		= 0x93, // String
		File				= 0x94, // String
		ExitGameMessage		= 0x97, // String
		Yes					= 0x98, // String
		No					= 0x99	// String
	}

	enum ChunkCommonEvent
	{
		Name				= 0x01, // String
		Trigger				= 0x0B, // Integer
		SwitchFlag			= 0x0C, // Flag
		SwitchId			= 0x0D, // Integer
		EventCommandsSize	= 0x15, // Integer
		EventCommands		= 0x16	// Array - RPG.EventCommand
	}

	enum ChunkSystem
	{
		LdbId					= 0x0A, // Integer - RPG2003
		BoatName				= 0x0B, // String
		ShipName				= 0x0C, // String
		AirshipName			= 0x0D, // String
		BoatIndex			= 0x0E, // Integer
		ShipIndex			= 0x0F, // Integer
		AirshipIndex		= 0x10, // Integer
		TitleName			= 0x11, // String
		GameoverName		= 0x12, // String
		SystemName			= 0x13, // String
		System2Name			= 0x14, // String - RPG2003
		PartySize			= 0x15, // Integer
		Party				= 0x16, // Array - Short
		MenuCommandsSize	= 0x1A, // Integer - RPG2003
		MenuCommands		= 0x1B, // Array - Short - RPG2003
		TitleMusic			= 0x1F, // RPG.Music
		BattleMusic			= 0x20, // RPG.Music
		BattleEndMusic		= 0x21, // RPG.Music
		InnMusic			= 0x22, // RPG.Music
		BoatMusic			= 0x23, // RPG.Music
		ShipMusic			= 0x24, // RPG.Music
		AirshipMusic		= 0x25, // RPG.Music
		GameoverMusic		= 0x26, // RPG.Music
		CursorSe			= 0x29, // RPG.Sound
		DecisionSe			= 0x2A, // RPG.Sound
		CancelSe			= 0x2B, // RPG.Sound
		BuzzerSe			= 0x2C, // RPG.Sound
		BattleSe			= 0x2D, // RPG.Sound
		EscapeSe			= 0x2E, // RPG.Sound
		EnemyAttackSe		= 0x2F, // RPG.Sound
		EnemyDamagedSe		= 0x30, // RPG.Sound
		ActorDamagedSe		= 0x31, // RPG.Sound
		DodgeSe				= 0x32, // RPG.Sound
		EnemyDeathSe		= 0x33, // RPG.Sound
		ItemSe				= 0x34, // RPG.Sound
		TransitionOut		= 0x3D, // Integer
		TransitionIn		= 0x3E, // Integer
		BattleStartFadeout	= 0x3F, // Integer
		BattleStartFadein	= 0x40, // Integer
		BattleEndFadeout	= 0x41, // Integer
		BattleEndFadein		= 0x42, // Integer
		MessageStretch		= 0x47, // Integer
		FontId				= 0x48, // Integer
		SelectedCondition	= 0x51, // Integer
		SelectedHero		= 0x52, // Integer
		BattletestBackground= 0x54, // String
		BattletestData		= 0x55, // Array - RPG.TestBattler
		SavedTimes			= 0x5B, // Integer
		BattleTestTerrain	= 0x5E, // Integer
		BattleTestFormation	= 0x5F, // Integer
		BattleTestCondition	= 0x60, // Integer
		//???				= 0x61, // ???
		ShowFrame			= 0x63, // Flag - RPG2003
		FrameName			= 0x64, // String - RPG2003
		InvertAnimations	= 0x65	// Flag - RPG2003
	}

	enum ChunkTestBattler
	{
		Id			= 0x01, // Integer
		Level		= 0x02, // Integer
		WeaponId	= 0x0B, // Integer
		ShieldId	= 0x0C, // Integer
		ArmorId		= 0x0D, // Integer
		HelmetId	= 0x0E, // Integer
		AccessoryId	= 0x0F	// Integer
	}

	enum ChunkBattleCommand
	{
		Name	= 0x01, // String
		Type	= 0x02	// Integer
	}

	enum ChunkBattleCommands
	{
		Placement		= 0x02,	// Integer
		DeathHandler1	= 0x04,	// Integer
		Row				= 0x06,	// Integer
		BattleType		= 0x07,	// Integer
		Unknown1		= 0x09,	// Integer
		Command 		= 0x0A, // Array - RPG.BattleCommand
		DeathHandler2	= 0x0F,	// Integer
		DeathEvent		= 0x10,	// Integer
		WindowSize		= 0x14, // Integer
		Transparency	= 0x18,	// Integer
		Teleport		= 0x19,	// Integer
		TeleportId		= 0x1A,	// Integer
		TeleportX		= 0x1B,	// Integer
		TeleportY		= 0x1C,	// Integer
		TeleportFace	= 0x1D	// Integer
	};

	enum ChunkBattlerAnimation
	{
		Name		= 0x01, // String
		Speed		= 0x02, // Integer
		BaseData	= 0x0A, // Array - RPG.BattlerAnimationExtension
		WeaponData	= 0x0B	// Array - RPG.BattlerAnimationExtension
	}

	enum ChunkBattlerAnimationData // RPG2k3
	{ 
		Move		= 0x05,	// Integer
		AfterImage	= 0x06,	// Integer
		Pose		= 0x0E	// Integer
	};

	enum ChunkBattlerAnimationExtension
	{
		Name			= 0x01, // String
		BattlerName		= 0x02, // String
		BattlerIndex	= 0x03, // Integer
		AnimationType	= 0x04, // Integer
		AnimationId		= 0x05	// Integer
	}

	enum ChunkClass
	{
		Name				= 0x01, // String
		TwoSwordsStyle		= 0x15, // Flag
		FixEquipment		= 0x16, // Flag
		AutoBattle			= 0x17, // Flag
		SuperGuard			= 0x18, // Flag
		Parameters			= 0x1F, // Array x 6 - Short
		ExpBase				= 0x29, // Integer
		ExpInflation		= 0x2A, // Integer
		ExpCorrection		= 0x2B, // Integer
		UnarmedAnimation	= 0x3E, // Integer
		Skills				= 0x3F, // Array - RPG.Learning
		StateRanksSize		= 0x47, // Integer
		StateRanks			= 0x48, // Array - Short
		AttributeRanksSize	= 0x49, // Integer
		AttributeRanks		= 0x4A, // Array - Short
		BattleCommands		= 0x50	// Array - Uint32
	}

	enum ChunkMusic
	{
		Name	= 0x01, // String
		Fadein	= 0x02, // Integer
		Volume	= 0x03, // Integer
		Tempo	= 0x04, // Integer
		Balance	= 0x05	// Integer
	}

	enum ChunkSound
	{
		Name	= 0x01, // String
		Volume	= 0x03, // Integer
		Tempo	= 0x04, // Integer
		Balance	= 0x05	// Integer
	}

	enum ChunkSwitch
	{
		Name	= 0x01 // String
	}

	enum ChunkVariable
	{
		Name	= 0x01 // String
	}
}
