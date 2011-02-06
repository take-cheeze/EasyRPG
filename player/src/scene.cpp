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

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <cassert>
#include "scene.h"
#include "graphics.h"
#include "input.h"
#include "player.h"
#include "output.h"

#ifndef NULL
#define NULL 0
#endif

////////////////////////////////////////////////////////////
Scene* Scene::instance;
boost::ptr_vector<Scene> Scene::old_instances;
boost::ptr_vector<Scene> Scene::instances;
boost::array<const char*, Scene::SceneMax> Scene::scene_names =
{ {
	"Null",
	"Title",
	"Map",
	"Menu",
	"Item",
	"Skill",
	"Equip",
	"ActorTarget",
	"Status",
	"File",
	"Save",
	"Load",
	"End",
	"Battle",
	"Shop",
	"Name",
	"Gameover",
	"Debug",
	"Logo"
} };
int Scene::push_pop_operation = 0;

////////////////////////////////////////////////////////////
Scene::Scene() {
	type = Scene::Null;
}

////////////////////////////////////////////////////////////
void Scene::MainFunction() {
	if (push_pop_operation == 1) {
		Start();
	}

	push_pop_operation = 0;

	TransitionIn();
	Resume();

	// Scene loop
	while (Scene::instance == this) {
		Player::Update();
		Graphics::Update();
		Input::Update();
		Update();
	}

#ifdef _DEBUG
	assert(Scene::instance == instances.back() &&
		"Don't set Scene::instance directly, use Push instead!");
#endif

	Graphics::Update();

	Suspend();
	TransitionOut();

	if (push_pop_operation == 1) {
		Graphics::Push();
	} else if (push_pop_operation == 2) {
		Terminate();
	}
}

////////////////////////////////////////////////////////////
void Scene::Start() {
}

////////////////////////////////////////////////////////////
void Scene::Resume() {
}

////////////////////////////////////////////////////////////
void Scene::Suspend() {
}

////////////////////////////////////////////////////////////
void Scene::Terminate() {
}

////////////////////////////////////////////////////////////
void Scene::TransitionIn() {
	Graphics::Transition(Graphics::TransitionFadeIn, 12);
}

////////////////////////////////////////////////////////////
void Scene::TransitionOut() {
	Graphics::Transition(Graphics::TransitionFadeOut, 12, true);
}

////////////////////////////////////////////////////////////
void Scene::Update() {
}

////////////////////////////////////////////////////////////
void Scene::Push(std::auto_ptr<Scene> new_scene, bool pop_stack_top) {
	if (pop_stack_top) {
		old_instances.push_back(instances.pop_back().release());
	}

	instances.push_back(new_scene);
	instance = &instances.back();

	push_pop_operation = 1;

	/*Output::Debug("Scene Stack after Push:");
	for (size_t i = 0; i < instances.size(); ++i) {
		Output::Debug(scene_names[instances[i]->type]);
	}*/
}

////////////////////////////////////////////////////////////
void Scene::Pop() {
	old_instances.push_back(instances.pop_back().release());

	if (instances.empty()) {
		Push(std::auto_ptr<Scene>(new Scene())); // Null-scene
	} else {
		instance = &instances.back();
	}

	push_pop_operation = 2;

	/*Output::Debug("Scene Stack after Pop:");
	for (size_t i = 0; i < instances.size(); ++i) {
		Output::Debug(scene_names[instances[i]->type]);
	}*/
}

////////////////////////////////////////////////////////////
void Scene::PopUntil(SceneType type) {
	int count = 0;

	for (int i = (int)instances.size() - 1 ; i >= 0; --i) {
		if (instances[i].type == type) {
			for (i = 0; i < count; ++i) {
				old_instances.push_back(instances.pop_back().release());
			}
			instance = &instances.back();
			push_pop_operation = 2;
			return;
		}
		++count;
	}

	Output::Warning("The requested scene %s was not on the stack", scene_names[type]);
}

////////////////////////////////////////////////////////////
Scene* Scene::Find(SceneType type) {
	boost::ptr_vector<Scene*>::reverse_iterator it;
	for (it = instances.rbegin() ; it != instances.rend(); it++) {
		if ((*it)->type == type) {
			return *it;
		}
	}

	return NULL;
}
