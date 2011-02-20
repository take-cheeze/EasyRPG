namespace EasyRPG.Editor.Serializer.RM2K.LMT
{
	enum ChunkData
	{
		End = 0x00 // End of chunk
	}

	enum ChunkTreeMap
	{
		StartMapId		= 0x01, // Integer
		StartX			= 0x02, // Integer
		StartY			= 0x03, // Integer
		BoatMapId		= 0x0B, // Integer
		BoatX			= 0x0C, // Integer
		BoatY			= 0x0D, // Integer
		ShipMapId		= 0x15, // Integer
		ShipX			= 0x16, // Integer
		ShipY			= 0x17, // Integer
		AirshipMapId	= 0x1F, // Integer
		AirshipX		= 0x20, // Integer
		AirshipY		= 0x21	// Integer
	}

	enum ChunkMapInfo
	{
		Name			= 0x01, // String
		ParentMap		= 0x02, // Integer
		Indentation		= 0x03, // Integer
		Type			= 0x04, // Integer
		ScrollbarX		= 0x05, // Integer
		ScrollbarY		= 0x06, // Integer
		ExpandedNode	= 0x07, // Flag	- Editor only
		MusicType		= 0x0B, // Integer
		MusicName		= 0x0C, // Array - RPG.Music
		BackgroundType	= 0x15, // Integer
		BackgroundName	= 0x16, // String
		Teleport		= 0x1F, // Integer
		Escape			= 0x20, // Integer
		Save			= 0x21, // Integer
		Encounters		= 0x29, // Array - RPG.Encounter
		EncounterSteps	= 0x2C, // Integer
		AreaRect		= 0x33	// Uint32 x 4
	}
	enum ChunkEncounter
	{
		Id = 0x01 // Integer
	}
}
