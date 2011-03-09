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

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Database
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Database, NoID)

EASYRPG_STRUCT_NAME(Database)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Database

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Database)
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Actor>, actors, ('acto')('rs'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Skill>, skills, ('skil')('ls'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Item>, items, ('item')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Enemy>, enemies, ('enem')('ies'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Troop>, troops, ('troo')('ps'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Terrain>, terrains, ('terr')('ains'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Attribute>, attributes, ('attr')('ibut')('es'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::State>, states, ('stat')('es'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Animation>, animations, ('anim')('atio')('ns'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Chipset>, chipsets, ('chip')('sets'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::Terms, terms, ('term')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::System, system, ('syst')('em'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Switch>, switches, ('swit')('ches'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Variable>, variables, ('vari')('able')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::CommonEvent>, commonevents, ('comm')('onev')('ents'))
	, EASYRPG_TYPED_FIELD_PAIR(RPG::BattleCommands, battlecommands, ('batt')('leco')('mman')('ds'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::Class>, classes, ('clas')('ses'))
	, EASYRPG_TYPED_FIELD_PAIR(std::vector<RPG::BattlerAnimation>, battleranimations, ('batt')('lera')('nima')('tion')('s'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
