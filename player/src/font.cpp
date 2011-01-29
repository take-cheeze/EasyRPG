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
#include <vector>
#include "filefinder.hpp"
#include "output.hpp"
#include "system.hpp"
#include "font.hpp"
#ifdef USE_SDL_TTF
#include "sdl_font.hpp"
#else
#include "ftfont.hpp"
#endif

////////////////////////////////////////////////////////////
/// Static Variables
////////////////////////////////////////////////////////////
const std::string Font::default_name = FileFinder::DefaultFont();
boost::ptr_vector<Font> Font::fonts;

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////
Font::Font(const std::string& name, int size, bool bold, bool italic):
	name(name),
	size(size),
	bold(bold),
	italic(italic) {
}

////////////////////////////////////////////////////////////
/// Destructor
////////////////////////////////////////////////////////////
Font::~Font() {
}

////////////////////////////////////////////////////////////
/// Class Exists
////////////////////////////////////////////////////////////
bool Font::Exists(const std::string& name) {
	return FileFinder::FindFont(name) != "";
}

////////////////////////////////////////////////////////////
/// Factory
////////////////////////////////////////////////////////////
Font* Font::CreateFont(const std::string& _name, int size, bool bold, bool italic) {
	const std::string& name = _name.empty() ? default_name : name;
	if (size == 0)
		size = default_size;

	boost::ptr_vector<Font>::iterator it;
	for (it = fonts.begin(); it != fonts.end(); it++) {
		if (it->name == name && it->size == size &&
			it->bold == bold && it->italic == italic)
			return &(*it);
	}

#ifdef USE_SDL_TTF
	std::auto_ptr<Font> font(new SdlFont(name, size, bold, italic));
#else
	std::auto_ptr<Font> font(new FTFont(name, size, bold, italic));
#endif
	fonts.push_back(font);
	return &fonts.back();
}

////////////////////////////////////////////////////////////
/// Cleanup
////////////////////////////////////////////////////////////
void Font::Dispose() {
	/*
	std::vector<Font*>::const_iterator it;
	for (it = fonts.begin(); it != fonts.end(); it++)
		delete *it;
	fonts.clear();
	*/
}

