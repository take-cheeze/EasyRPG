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
#include "audio.h"
#include "system.h"

#ifndef SUPPORT_AUDIO
///////////////////////////////////////////////////////////
// This file implements a No-Audio-Backend.
///////////////////////////////////////////////////////////
void Audio::Init() {}

///////////////////////////////////////////////////////////
void Audio::Quit() {}

///////////////////////////////////////////////////////////
void Audio::BGM_Play(std::string, int, int) {}

///////////////////////////////////////////////////////////
void Audio::BGM_Pause() {}

///////////////////////////////////////////////////////////
void Audio::BGM_Resume() {}

///////////////////////////////////////////////////////////
void Audio::BGM_Stop() {}

///////////////////////////////////////////////////////////
void Audio::BGM_Fade(int) {}

///////////////////////////////////////////////////////////
void Audio::BGS_Play(std::string, int, int) {}

////////////////////////////////////////////////////////////
void Audio::BGS_Stop() {}

////////////////////////////////////////////////////////////
void Audio::BGS_Fade(int) {}

///////////////////////////////////////////////////////////
void Audio::ME_Play(std::string, int, int) {}

////////////////////////////////////////////////////////////
void Audio::ME_Stop() {}

////////////////////////////////////////////////////////////
void Audio::ME_Fade(int fade) {}

////////////////////////////////////////////////////////////
void Audio::SE_Play(std::string, int, int) {}

////////////////////////////////////////////////////////////
void Audio::SE_Stop() {}

#endif
