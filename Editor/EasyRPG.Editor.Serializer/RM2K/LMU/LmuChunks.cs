namespace EasyRPG.Editor.Serializer.RM2K.LMU
{
	enum ChunkData
	{
		End = 0x00 // End of chunk
	}

	enum ChunkMap
	{
		ChipsetId			= 0x01, // Integer
		Width				= 0x02, // Integer
		Height				= 0x03, // Integer
		ScrollType			= 0x0B, // Integer
		ParallaxFlag		= 0x1F, // Flag
		ParallaxName		= 0x20, // String
		ParallaxLoopX		= 0x21, // Flag
		ParallaxLoopY		= 0x22, // Flag
		ParallaxAutoLoopX	= 0x23, // Flag
		ParallaxSx			= 0x24, // Integer
		ParallaxAutoLoopY	= 0x25, // Flag
		ParallaxSy			= 0x26, // Integer
		TopLevel			= 0x2A, // Bool
		LowerLayer			= 0x47, // Array - Short
		UpperLayer			= 0x48, // Array - Short
		Events				= 0x51, // Array - RPG.Event
		SaveTimes			= 0x5B, // Integer
		GeneratorFlag		= 0x28, // Flag
		GeneratorMode		= 0x29, // Integer
		GeneratorTiles		= 0x30, // Integer
		GeneratorWidth		= 0x31, // Integer
		GeneratorHeight		= 0x32, // Integer
		GeneratorSurround	= 0x33, // Flag
		GeneratorUpperWall	= 0x34, // Flag
		GeneratorFloorB		= 0x35, // Flag
		GeneratorFloorC		= 0x36, // Flag
		GeneratorExtraB		= 0x37, // Flag
		GeneratorExtraC		= 0x38, // Flag
		GeneratorX			= 0x3C, // Uint32 x 9
		GeneratorY			= 0x3D, // Uint32 x 9
		GeneratorTileIds	= 0x3E	// Array - Short
	}

	enum ChunkEvent
	{
		Name	= 0x01, // String
		X		= 0x02, // Integer
		Y		= 0x03, // Integer
		//???	= 0x04, // ???
		Pages	= 0x05	// Array - RPG.EventPage
	}

	enum ChunkEventPage
	{
		Condition			= 0x02, // RPG.EventPageCondition
		CharacterName		= 0x15, // String
		CharacterIndex		= 0x16, // Integer
		CharacterDirection	= 0x17, // Integer
		CharacterPattern	= 0x18, // Integer
		Translucent			= 0x19, // Integer
		MoveType			= 0x1F, // Integer
		MoveFrequency		= 0x20, // Integer
		Trigger				= 0x21, // Integer
		PriorityType		= 0x22, // Integer
		Overlap				= 0x23, // Flag
		AnimationType		= 0x24, // Integer
		MoveSpeed			= 0x25, // Integer
		MoveRoute			= 0x29, // RPG.MoveRoute
		EventCommandsSize	= 0x33, // Integer
		EventCommands		= 0x34	// Array - RPG.EventCommand
	}

	enum ChunkEventPageCondition
	{
		ConditionFlags	= 0x01, // Bitflag
		SwitchAId		= 0x02, // Integer
		SwitchBId		= 0x03, // Integer
		VariableId		= 0x04, // Integer
		VariableValue	= 0x05, // Integer
		ItemId			= 0x06, // Integer
		ActorId			= 0x07, // Integer
		TimerSec		= 0x08, // Integer
		Timer2Sec		= 0x09, // Integer - RPG2003
		CompareOperator	= 0x0A	// Integer - RPG2003
	}

	enum ChunkMoveRoute
	{
		MoveCommandsSize	= 0x0B, // Integer
		MoveCommands		= 0x0C, // Array - RPG.MoveCommand
		Repeat				= 0x15, // Flag
		Skippable			= 0x16	// Flag
	}

	enum ChunkMoveCommand
	{
		SwitchOn		= 0x20,
		SwitchOff		= 0x21,
		ChangeGraphic	= 0x22,
		PlaySound		= 0x23
	}

	enum ChunkMoveCommands
	{
		MoveUp	= 0,
		MoveRight,
		MoveDown,
		MoveLeft,
		MoveUpright,
		MoveDownright,
		MoveDownleft,
		MoveUpleft,
		MoveRandom,
		MoveTowardsHero,
		MoveAwayFromHero,
		MoveForward,
		FaceUp,
		FaceRight,
		FaceDown,
		FaceLeft,
		Turn90DegreeRight,
		Turn90DegreeLeft,
		Turn180Degree,
		Turn90DegreeRandom,
		FaceRandomDirection,
		FaceHero,
		FaceAwayFromHero,
		Wait,
		BeginJump,
		EndJump,
		LockFacing,
		UnlockFacing,
		IncreaseMovementSpeed,
		DecreaseMovementSpeed,
		IncreaseMovementFrequence,
		DecreaseMovementFrequence,
		SwitchOn,
		SwitchOff,
		ChangeGraphic,
		PlaySoundEffect,
		WalkEverywhereOn,
		WalkEverywhereOff,
		StopAnimation,
		StartAnimation,
		IncreaseTransp,
		DecreaseTransp
	}
}
