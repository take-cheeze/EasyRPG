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

#ifndef _INTERPRETER_H_
#define _INTERPRETER_H_

#include <map>
#include <string>
#include <vector>
#include "game_character.h"
#include "system.h"

class Game_Event;
class Game_CommonEvent;

////////////////////////////////////////////////////////////
/// Game_Interpreter class
////////////////////////////////////////////////////////////
class Game_Interpreter
{
public:
	Game_Interpreter(int _depth = 0, bool _main_flag = false);
	~Game_Interpreter();

	void Clear();
	void Setup(rpg2k::structure::Event const& _list, int _event_id, int dbg_x = -1, int dbg_y = -1);
	bool IsRunning() const;
	void Update();

	void SetupStartingEvent(Game_Event* ev);
	void SetupStartingEvent(Game_CommonEvent* ev);
	bool ExecuteCommand();
	void InputButton();
	void SetupChoices(const std::vector<std::string>& choices);
	void EndMoveRoute(RPG::MoveRoute const& route);

private:
	int depth;
	bool main_flag;

	int loop_count;

	bool move_route_waiting;

	int button_input_variable_id;
	unsigned int index;
	int map_id;
	unsigned int event_id;
	int wait_count;

	boost::scoped_ptr<Game_Interpreter> child_interpreter;
	bool (Game_Interpreter::*continuation)();

	rpg2k::structure::Event list;

	int button_timer;
	bool active;

	// Helper function
	void GetStrings(std::vector<std::string>& ret_val);

	int OperateValue(int operation, int operand_type, int operand);
	Game_Character* GetCharacter(int character_id);

	bool SkipTo(int code, int code2 = -1, int min_indent = -1, int max_indent = -1);
	void SetContinuation(bool (Game_Interpreter::*func)());

	void CancelMenuCall();

	////////////////////////////////////////////////////////
	/// Closes the Message Window
	////////////////////////////////////////////////////////
	void CloseMessageWindow();

	bool CommandShowMessage();
	bool CommandShowChoices();
	bool CommandChangeFaceGraphic();
	bool CommandInputNumber();
	bool CommandMessageOptions();
	bool CommandControlSwitches();
	bool CommandControlVariables();
	bool CommandChangeGold();
	bool CommandChangeItems();
	bool CommandChangePartyMember();
	bool CommandConditionalBranch();
	bool CommandElseBranch();
	bool CommandChangeExp();
	bool CommandChangeLevel();
	bool CommandChangeParameters();
	bool CommandChangeSkills();
	bool CommandChangeEquipment();
	bool CommandChangeHP();
	bool CommandChangeSP();
	bool CommandChangeCondition();
	bool CommandFullHeal();
	bool CommandChangeHeroName();
	bool CommandChangeHeroTitle();
	bool CommandChangeSpriteAssociation();
	bool CommandMemorizeLocation();
	bool CommandRecallToLocation();
	bool CommandStoreTerrainID();
	bool CommandStoreEventID();
	bool CommandPlayBGM();
	bool CommandFadeOutBGM();
	bool CommandMemorizeBGM();
	bool CommandPlayMemorizedBGM();
	bool CommandPlaySound();
	bool CommandChangeSystemBGM();
	bool CommandChangeSystemSFX();
	bool CommandChangeSaveAccess();
	bool CommandChangeTeleportAccess();
	bool CommandChangeEscapeAccess();
	bool CommandChangeMainMenuAccess();
	bool CommandChangeActorFace();
	bool CommandWait();
	bool CommandTeleport();
	bool CommandEraseScreen();
	bool CommandShowScreen();
	bool CommandShowPicture();
	bool CommandMovePicture();
	bool CommandErasePicture();
	bool CommandTintScreen();
	bool CommandFlashScreen();
	bool CommandShakeScreen();
	bool CommandWeatherEffects();
	bool CommandChangeSystemGraphics();
	bool CommandChangeScreenTransitions();
	bool CommandChangeEventLocation();
	bool CommandTradeEventLocations();
	bool CommandTimerOperation();
	bool CommandChangePBG();
	bool CommandJumpToLabel();
	bool CommandBreakLoop();
	bool CommandEndLoop();
	bool CommandEndEventProcessing();
	bool CommandOpenShop();
	bool CommandShowInn();
	bool CommandEnterHeroName();
	bool CommandGameOver();
	bool CommandReturnToTitleScreen();
	bool CommandOpenSaveMenu();
	bool CommandOpenMainMenu();
	bool CommandEnemyEncounter();
	bool CommandTeleportTargets();
	bool CommandEscapeTarget();
	bool CommandMoveEvent();
	bool CommandFlashSprite();
	bool CommandSpriteTransparency();
	bool CommandEraseEvent();
	bool CommandChangeMapTileset();
	bool CommandCallEvent();
	bool CommandChangeEncounterRate();
	bool CommandProceedWithMovement();
	bool CommandPlayMovie();
	bool CommandChangeBattleCommands();
	bool CommandKeyInputProc();
	bool CommandChangeVehicleGraphic();
	bool CommandEnterExitVehicle();
	bool CommandSetVehicleLocation();
	bool CommandTileSubstitution();
	bool CommandPanScreen();

	void CommandEnd();

	bool DefaultContinuation();
	bool ContinuationChoices();
	bool ContinuationOpenShop();
	bool ContinuationShowInn();
	bool ContinuationEnemyEncounter();
	bool ContinuationPanScreen();

private:
	/*
	int DecodeInt(std::vector<int>::const_iterator& it);
	const std::string DecodeString(std::vector<int>::const_iterator& it);
	RPG::MoveCommand DecodeMove(std::vector<int>::const_iterator& it);
	*/

	int debug_x;
	int debug_y;

	bool teleport_pending;

	typedef std::pair<RPG::MoveRoute*,Game_Character*> pending_move_route;

	std::vector<pending_move_route> pending;
};

#endif
