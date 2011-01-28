/////////////////////////////////////////////////////////////////////////////
// inih -- simple .INI file parser
// 
// Go to the project home page for more info:
// http://code.google.com/p/inih/
// 
// inih and INIReader are released under the New BSD license:
// 
// Copyright (c) 2009, Brush Technology
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 	* Redistributions of source code must retain the above copyright
// 		notice, this list of conditions and the following disclaimer.
// 	* Redistributions in binary form must reproduce the above copyright
// 		notice, this list of conditions and the following disclaimer in the
// 		documentation and/or other materials provided with the distribution.
// 	* Neither the name of Brush Technology nor the names of its contributors
// 		may be used to endorse or promote products derived from this software
// 		without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY BRUSH TECHNOLOGY ''AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL BRUSH TECHNOLOGY BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
/////////////////////////////////////////////////////////////////////////////

#include <cstdio>
#include <cctype>
#include <cstring>

#include "ini.h"

#define MAX_LINE 200
#define MAX_SECTION 50
#define MAX_NAME 50

/// Strip whitespace chars off end of given string, in place.
/// @returns s.
static unsigned char* rstrip(unsigned char* s)
{
	unsigned char* p = s + strlen((char*)s);
	while (p > s && isspace(*--p))
		*p = '\0';
	return s;
}

/// @returns pointer to first non-whitespace char in given string.
static char* lskip(const unsigned char* s)
{
	while (*s && isspace(*s))
		s++;
	return (char*)s;
}

/// @returns pointer to first char c or ';' comment in given string, or pointer to
///	null at end of string if neither found. ';' must be prefixed by a whitespace
///	character to register as a comment.
static char* find_char_or_comment(const unsigned char* s, char c)
{
	int was_whitespace = 0;
	while (*s && *s != c && !(was_whitespace && *s == ';')) {
		was_whitespace = isspace(*s);
		s++;
	}
	return (char*)s;
}

/// Version of strncpy that ensures dest (size bytes) is null-terminated.
static char* strncpy0(char* dest, const char* src, size_t size)
{
	strncpy(dest, src, size);
	dest[size - 1] = '\0';
	return dest;
}

// See documentation in header file.
int ini_parse(const char* filename,
			int (*handler)(void*, const char*, const char*, const char*),
			void* user)
{
	// Uses a fair bit of stack (use heap instead if you need to)
	char line[MAX_LINE];
	char section[MAX_SECTION] = "";
	char prev_name[MAX_NAME] = "";

	FILE* file;
	char* start;
	char* end;
	char* name;
	char* value;
	int lineno = 0;
	int error = 0;

	file = fopen(filename, "r");
	if (!file)
		return -1;

	// Scan through file line by line
	while (fgets(line, sizeof(line), file) != NULL) {
		lineno++;
		start = lskip(rstrip((unsigned char*)line));

#if INI_ALLOW_MULTILINE
		if (*prev_name && *start && start > line) {
			// Non-black line with leading whitespace, treat as continuation
			// of previous name's value (as per Python ConfigParser).
			if (!handler(user, section, prev_name, start) && !error)
				error = lineno;
		}
		else
#endif
		if (*start == ';' || *start == '#') {
			// Per Python ConfigParser, allow '#' comments at start of line
		}
		else if (*start == '[') {
			// A "[section]" line
			end = find_char_or_comment((unsigned char*)start + 1, ']');
			if (*end == ']') {
				*end = '\0';
				strncpy0(section, start + 1, sizeof(section));
				*prev_name = '\0';
			}
			else if (!error) {
				// No ']' found on section line
				error = lineno;
			}
		}
		else if (*start && *start != ';') {
			// Not a comment, must be a name=value pair
			end = find_char_or_comment((unsigned char*)start, '=');
			if (*end == '=') {
				*end = '\0';
				name = (char*)rstrip((unsigned char*)start);
				value = lskip((unsigned char*)end + 1);
				end = find_char_or_comment((unsigned char*)value, '\0');
				if (*end == ';')
					*end = '\0';
				rstrip((unsigned char*)value);

				// Valid name=value pair found, call handler
				strncpy0(prev_name, name, sizeof(prev_name));
				if (!handler(user, section, name, value) && !error)
					error = lineno;
			}
			else if (!error) {
				// No '=' found on name=value line
				error = lineno;
			}
		}
	}

	fclose(file);

	return error;
}
