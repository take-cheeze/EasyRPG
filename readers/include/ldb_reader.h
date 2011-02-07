/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _LDB_READER_H_
#define _LDB_READER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <boost/ptr_container/ptr_vector.hpp>
#include "reader.h"
#include "rpg_actor.h"
#include "rpg_skill.h"
#include "rpg_item.h"
#include "rpg_enemy.h"
#include "rpg_troop.h"
#include "rpg_attribute.h"
#include "rpg_state.h"
#include "rpg_terrain.h"
#include "rpg_chipset.h"
#include "rpg_animation.h"
#include "rpg_terms.h"
#include "rpg_system.h"
#include "rpg_commonevent.h"
#include "rpg_music.h"
#include "rpg_sound.h"
#include "rpg_class.h"
#include "rpg_battlecommand.h"
#include "rpg_battleranimation.h"
#include "rpg_battleranimationdata.h"
#include "rpg_itemanimation.h"

////////////////////////////////////////////////////////////
/// LDB Reader namespace
////////////////////////////////////////////////////////////
namespace LDB_Reader {
	bool Load(const std::string &filename);
	void LoadChunks(Reader& stream);

	std::auto_ptr<RPG::Actor> ReadActor(Reader& stream);
	std::auto_ptr<RPG::Learning> ReadLearning(Reader& stream);
	std::auto_ptr<RPG::Skill> ReadSkill(Reader& stream);
	std::auto_ptr<RPG::Item> ReadItem(Reader& stream);
	std::auto_ptr<RPG::Enemy> ReadEnemy(Reader& stream);
	std::auto_ptr<RPG::EnemyAction> ReadEnemyAction(Reader& stream);
	std::auto_ptr<RPG::Troop> ReadTroop(Reader& stream);
	std::auto_ptr<RPG::TroopMember> ReadTroopMember(Reader& stream);
	std::auto_ptr<RPG::TroopPage> ReadTroopPage(Reader& stream);
	std::auto_ptr<RPG::TroopPageCondition> ReadTroopPageCondition(Reader& stream);
	std::auto_ptr<RPG::Attribute> ReadAttribute(Reader& stream);
	std::auto_ptr<RPG::State> ReadState(Reader& stream);
	std::auto_ptr<RPG::Terrain> ReadTerrain(Reader& stream);
	std::auto_ptr<RPG::Chipset> ReadChipset(Reader& stream);
	std::auto_ptr<RPG::Animation> ReadAnimation(Reader& stream);
	std::auto_ptr<RPG::AnimationTiming> ReadAnimationTiming(Reader& stream);
	std::auto_ptr<RPG::AnimationFrame> ReadAnimationFrame(Reader& stream);
	std::auto_ptr<RPG::AnimationCellData> ReadAnimationCellData(Reader& stream);
	std::auto_ptr<RPG::Terms> ReadTerms(Reader& stream);
	std::auto_ptr<RPG::System> ReadSystem(Reader& stream);
	std::auto_ptr<RPG::CommonEvent> ReadCommonEvent(Reader& stream);
	RPG::Sound ReadSound(Reader& stream);
	RPG::Music ReadMusic(Reader& stream);
	std::vector<std::string> ReadVariables(Reader& stream);
	std::vector<std::string> ReadSwitches(Reader& stream);
	std::auto_ptr<RPG::TestBattler> ReadTestBattler(Reader& stream);

	// 2003
	std::auto_ptr<RPG::BattleCommands> ReadBattleCommands(Reader& stream);
	std::auto_ptr<RPG::BattleCommand> ReadBattleCommand(Reader& stream);
	std::auto_ptr<RPG::Class> ReadClass(Reader& stream);
	std::auto_ptr<RPG::BattlerAnimation> ReadBattlerAnimation(Reader& stream);
	std::auto_ptr<RPG::BattlerAnimationExtension> ReadBattlerAnimationExtension(Reader& stream);
	std::auto_ptr<RPG::BattlerAnimationData> ReadBattlerAnimationData(Reader& stream);
	std::auto_ptr<RPG::ItemAnimation> ReadItemAnimation(Reader& stream);
}

#endif
