/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
//
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _GAME_SYSTEM_H_
#define _GAME_SYSTEM_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <map>
#include "main_data.hpp"

////////////////////////////////////////////////////////////
/// Game System namespace
////////////////////////////////////////////////////////////
namespace Game_System {
	enum sys_bgm {
		BGM_Battle,
		BGM_Victory,
		BGM_Inn,
		BGM_Skiff,
		BGM_Ship,
		BGM_Airship,
		BGM_GameOver,

		BGM_Count
	};

	enum sys_sfx {
		SFX_Cursor,
		SFX_Decision,
		SFX_Cancel,
		SFX_Buzzer,
		SFX_BeginBattle,
		SFX_Escape,
		SFX_EnemyAttacks,
		SFX_EnemyDamage,
		SFX_AllyDamage,
		SFX_Evasion,
		SFX_EnemyKill,
		SFX_UseItem,

		SFX_Count
	};

	enum sys_transition {
		Transition_TeleportErase,
		Transition_TeleportShow,
		Transition_BeginBattleErase,
		Transition_BeginBattleShow,
		Transition_EndBattleErase,
		Transition_EndBattleShow,
		Transition_Count
	};

	enum sys_timer {
		Timer1,
		Timer2
	};

	class Timer {
	public:
		int value;
		bool running;
		bool visible;
		bool battle;

		Timer() :
			value(0),
			running(false),
			visible(false),
			battle(false) {}

		void Update();
	};


	class Target {
	public:
		int map_id;
		int x;
		int y;
		int switch_id;
		Target()
			: map_id(0),
			  switch_id(0)
		{}
		Target(int map_id, int x, int y, int switch_id)
			: map_id(map_id),
			  x(x),
			  y(y),
			  switch_id(switch_id)
		{}
	};

	////////////////////////////////////////////////////////
	/// Initialize Game System.
	////////////////////////////////////////////////////////
	void Init();

	////////////////////////////////////////////////////////
	/// Play a Music.
	/// @param bgm : music data.
	////////////////////////////////////////////////////////
	void BgmPlay(RPG::Music const& bmg);

	////////////////////////////////////////////////////////
	/// Play a Sound.
	/// @param se : sound data.
	////////////////////////////////////////////////////////
	void SePlay(RPG::Sound const& se);

	////////////////////////////////////////////////////////
	/// Get system graphic name.
	/// @return system graphic filename
	////////////////////////////////////////////////////////
	std::string GetSystemName();

	////////////////////////////////////////////////////////
	/// Set the system graphic.
	/// @param system_name : new system name
	////////////////////////////////////////////////////////
	void SetSystemName(std::string const& system_name);

	////////////////////////////////////////////////////////
	/// Set the system music
	/// @param which : which "context" to set the music for
	/// @param bgm   : the music
	////////////////////////////////////////////////////////
	void SetSystemBGM(int which, RPG::Music const& bgm);

	////////////////////////////////////////////////////////
	/// Set a system sound effect
	/// @param which : which "context" to set the effect for
	/// @param bgm   : the sound
	////////////////////////////////////////////////////////
	void SetSystemSE(int which, RPG::Sound const& sfx);

	////////////////////////////////////////////////////////
	/// Set a timer
	/// @param which   : which timer to set
	/// @param seconds : the time in seconds
	////////////////////////////////////////////////////////
	void SetTimer(int which, int seconds);

	////////////////////////////////////////////////////////
	/// Start a timer
	/// @param which   : which timer to start
	/// @param visible : whether the timer is visible
	/// @param visible : whether the timer runs during battle
	////////////////////////////////////////////////////////
	void StartTimer(int which, bool visible, bool battle);

	////////////////////////////////////////////////////////
	/// Stop a timer
	/// @param which   : which timer to stop
	////////////////////////////////////////////////////////
	void StopTimer(int which);

	////////////////////////////////////////////////////////
	/// Update all timers
	////////////////////////////////////////////////////////
	void UpdateTimers();

	////////////////////////////////////////////////////////
	/// Read a timer
	/// @param which   : which timer to read
	/// @return number of frames remaining
	////////////////////////////////////////////////////////
	int ReadTimer(int which);

	////////////////////////////////////////////////////////
	/// Set the system transitions
	/// @param which : which "context" to set the transition for
	/// @param trans : the transition
	////////////////////////////////////////////////////////
	void SetTransition(int which, int transition);

	////////////////////////////////////////////////////////
	/// Set a teleport target
	/// @param from_map : the map for which the target is used
	/// @param map_id   : the destination map
	/// @param x        : the destination X coordinate
	/// @param y        : the destination Y coordinate
	////////////////////////////////////////////////////////
	void AddTeleportTarget(int map_id, int x, int y, int switch_id);

	////////////////////////////////////////////////////////
	/// Remove a teleport target
	/// @param map_id : the map for which the target was used
	////////////////////////////////////////////////////////
	void RemoveTeleportTarget(int map_id);

	////////////////////////////////////////////////////////
	/// Find a teleport target
	/// @param map_id : the map for which to obtain the target
	/// @return: pointer to a Target structure, or NULL
	////////////////////////////////////////////////////////
	Target* GetTeleportTarget(int map_id);

	////////////////////////////////////////////////////////
	/// Set an escape  target
	/// @param from_map : the map for which the target is used
	/// @param map_id   : the destination map
	/// @param x        : the destination X coordinate
	/// @param y        : the destination Y coordinate
	////////////////////////////////////////////////////////
	void SetEscapeTarget(int map_id, int x, int y, int switch_id);

	////////////////////////////////////////////////////////
	/// Find an escape target
	/// @param map_id : the map for which to obtain the target
	/// @return: pointer to a Target structure, or NULL
	////////////////////////////////////////////////////////
	Target* GetEscapeTarget();

	/// Menu saving option disabled flag.
	extern bool save_disabled;
	extern bool teleport_disabled;
	extern bool escape_disabled;
	extern bool main_menu_disabled;
	extern RPG::Music const* current_bgm;
	extern RPG::Music const* memorized_bgm;
	extern RPG::Music const* system_bgm[BGM_Count];
	extern RPG::Sound const* system_sfx[SFX_Count];
	extern Timer timers[2];
	extern int transitions[Transition_Count];
	extern std::map<int, Target> teleport_targets;
	extern Target escape_target;

	/// Numbers of saves.
	extern unsigned int save_count;
}

#endif
