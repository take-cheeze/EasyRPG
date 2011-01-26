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
#include "font.hpp"
#include "filefinder.hpp"
#include "output.hpp"

////////////////////////////////////////////////////////////
/// Static Variables
////////////////////////////////////////////////////////////
const std::string Font::default_name = FileFinder::DefaultFont();
const int Font::default_size = 9;
const bool Font::default_bold = false;
const bool Font::default_italic = false;
const int Font::default_color = 0;
std::map<std::string, std::map<int, TTF_Font*> > Font::fonts;

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////
Font::Font():
	name(default_name),
	size(default_size),
	bold(default_bold),
	italic(default_italic),
	color(default_color) {
}

Font::Font(int _size):
	name(default_name),
	size(_size),
	bold(default_bold),
	italic(default_italic),
	color(default_color) {

}

Font::Font(std::string _name):
	name(_name),
	size(default_size),
	bold(default_bold),
	italic(default_italic),
	color(default_color) {
}
Font::Font(std::string _name, int _size):
	name(_name),
	size(_size),
	bold(default_bold),
	italic(default_italic),
	color(default_color) {
}

////////////////////////////////////////////////////////////
/// Destructor
////////////////////////////////////////////////////////////
Font::~Font() {
}

////////////////////////////////////////////////////////////
/// Get TTF_Font*
////////////////////////////////////////////////////////////
TTF_Font* Font::GetTTF() const {
	if (fonts.count(name) > 0 && fonts[name].count(size) > 0) {
		return fonts[name][size];
	} else {
		std::string path = FileFinder::FindFont(name);
		TTF_Font* ttf_font = TTF_OpenFont(path.c_str(), size);
		if (!ttf_font) {
			Output::Error("Couldn't open font %s size %d.\n%s\n", name.c_str(), size, TTF_GetError());
		}
		fonts[name][size] = ttf_font;
		return ttf_font;
	}
}

void Font::Dispose() {
	std::map<int, TTF_Font*>::iterator it;
	std::map<std::string, std::map<int, TTF_Font*> >::iterator it2;

	for (it2 = fonts.begin(); it2 != fonts.end(); ++it2) {
		for (it = it2->second.begin(); it != it2->second.end(); ++it) {
			TTF_CloseFont(it->second);
		}
	}
}

////////////////////////////////////////////////////////////
/// Class Exists
////////////////////////////////////////////////////////////
bool Font::Exists(std::string name) {
	return FileFinder::FindFont(name) != "";
}
