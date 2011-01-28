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

#ifndef _READER_H_
#define _READER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include <iostream>
#include <string.h>
#include <stdio.h>
#ifndef NDEBUG
#include <assert.h>
#endif
#ifndef _MSC_VER
	#include <stdint.h>
#else
	typedef	unsigned char	uint8_t;
	typedef	signed short	int16_t;
	typedef unsigned short	uint16_t;
	typedef	signed int		int32_t;
	typedef unsigned int	uint32_t;
#endif
#include "reader_options.h"
#include "reader_util.h"

////////////////////////////////////////////////////////////
// Defines
////////////////////////////////////////////////////////////
#ifdef _DEBUG
	#define Skip(x) SkipDebug(x, __FILE__)
#endif

////////////////////////////////////////////////////////////
/// Reader class.
////////////////////////////////////////////////////////////
class Reader {
public:
	////////////////////////////////////////////////////////
	/// Constructs a new File Reader.
	/// @param filename : File to open.
	////////////////////////////////////////////////////////
	Reader(char* filename, std::string encoding = "");

	////////////////////////////////////////////////////////
	/// Constructs a new File Reader.
	/// @param filename : File to open.
	////////////////////////////////////////////////////////
	Reader(const std::string& filename, std::string encoding = "");

	////////////////////////////////////////////////////////
	/// Destructor. Closes the opened file.
	////////////////////////////////////////////////////////
	~Reader();

	////////////////////////////////////////////////////////
	/// Returns the last set error.
	/// @return Error Message
	////////////////////////////////////////////////////////
	static const std::string& GetError();

	////////////////////////////////////////////////////////
	/// Sets the error message of the Reader. This is not
	/// used by the Reader directly but by the classes that
	/// are using the Reader.
	/// @param fmt : Error message
	////////////////////////////////////////////////////////
	static void SetError(const char* fmt, ...);

	////////////////////////////////////////////////////////
	/// The chunk defines the basic layout of the binary
	/// blocks used by the RPG Maker files.
	////////////////////////////////////////////////////////
	struct Chunk {
		Chunk() {
			ID = 0;
			length = 0;
		}
		uint32_t ID;
		uint32_t length;
	};

	////////////////////////////////////////////////////////
	/// Defines the two different types of integers used
	/// by the RPG Maker.
	/// Compressed Integer: BER-compressed integer
	/// Normal Integer: Normal 4byte-Integer
	////////////////////////////////////////////////////////
	enum IntegerType {
		CompressedInteger,
		NormalInteger
	};

	////////////////////////////////////////////////////////
	/// Defines the Seek start position for the Seek function
	////////////////////////////////////////////////////////
	enum SeekMode {
		FromStart,
		FromEnd,
		FromCurrent
	};

	////////////////////////////////////////////////////////
	/// Reads a compressed integer and checks if it's value
	/// is > 0
	/// @return If the integer is > 0
	////////////////////////////////////////////////////////
	bool ReadBool();

	////////////////////////////////////////////////////////
	/// Read one byte from the stream.
	/// @return The read byte
	////////////////////////////////////////////////////////
	uint8_t Read8();

	////////////////////////////////////////////////////////
	/// Reads two bytes from the stream.
	/// @return The two read bytes
	////////////////////////////////////////////////////////
	int16_t Read16();

	////////////////////////////////////////////////////////
	/// Reads up to four bytes from the stream. Depending
	/// on the IntegerType.
	/// If it's a normal Integer four bytes are read.
	/// For compressed Integers up to four bytes are read.
	/// @return (uncompressed) integer
	////////////////////////////////////////////////////////
	int32_t Read32(IntegerType type);

	////////////////////////////////////////////////////////
	/// Reads a "double" from the stream
	/// @return The double
	////////////////////////////////////////////////////////
	double ReadDouble();

	////////////////////////////////////////////////////////
	/// Reads bytes and converts them to bool (value > 0).
	/// @param buffer : Vector to fill
	/// @param size : How many bytes to read
	////////////////////////////////////////////////////////
	void ReadBool(std::vector<bool> &buffer, size_t size);

	////////////////////////////////////////////////////////
	/// Reads single bytes.
	/// @param buffer : Vector to fill
	/// @param size : How many bytes to read
	////////////////////////////////////////////////////////
	void Read8(std::vector<uint8_t> &buffer, size_t size);

	////////////////////////////////////////////////////////
	/// Writes 16bit-values into a vector.
	/// @param buffer : Vector to fill
	/// @param size : How many 16bit-values to read
	////////////////////////////////////////////////////////
	void Read16(std::vector<int16_t> &buffer, size_t size);

	////////////////////////////////////////////////////////
	/// Writes Normal 32bit-integers into a vector.
	/// @param buffer : Vector to fill
	/// @param size : How many 32bit-values to read
	////////////////////////////////////////////////////////
	void Read32(std::vector<uint32_t> &buffer, size_t size);
	void Read32(std::vector<unsigned int> &buffer, size_t size);

	////////////////////////////////////////////////////////
	/// Reads a string.
	/// @param size : String length
	/// @todo The returned string should be converted to unicode.
	/// @return The read string
	////////////////////////////////////////////////////////
	std::string ReadString(size_t size);

	////////////////////////////////////////////////////////
	/// Checks if the file is readable and if no error
	/// occured.
	/// @return If the stream is okay
	////////////////////////////////////////////////////////
	bool IsOk() const;

	////////////////////////////////////////////////////////
	/// Checks if the end of the file has beenreached.
	/// @return If the end of file is reached
	////////////////////////////////////////////////////////
	bool Eof() const;

	////////////////////////////////////////////////////////
	/// Moves the read pointer to a different position in
	/// the stream.
	/// @param pos : New position
	/// @param mode : Seek Mode
	////////////////////////////////////////////////////////
	void Seek(size_t pos, SeekMode mode = FromStart);

	////////////////////////////////////////////////////////
	/// Returns the current position of the read pointer in
	/// the stream.
	/// @return Current location in the stream
	////////////////////////////////////////////////////////
	uint32_t Tell();

	////////////////////////////////////////////////////////
	/// Puts a character (ch) back into the stream. This
	/// should usually be the last read one.
	/// @param ch : Char that will be readded to the stream
	/// @return If the operation was successful
	////////////////////////////////////////////////////////
	bool Ungetch(uint8_t ch);

#ifdef _DEBUG
	////////////////////////////////////////////////////////
	/// The Skip-Function for debug builds.
	/// Same as Skip but also dumps the content of the
	/// skipped chunk to stderr.
	/// @param chunk_info : Chunk that will be skipped
	/// @param srclife : Name of the calling cpp-file
	////////////////////////////////////////////////////////
	void SkipDebug(const struct Reader::Chunk& chunk_info, const char* srcfile);
#else
	////////////////////////////////////////////////////////
	/// Skips a Chunk (Seeks chunk_info.length bytes from
	/// the current stream position).
	/// @param chunk_info : Chunk that will be skipped
	////////////////////////////////////////////////////////
	void Skip(const struct Reader::Chunk& chunk_info);
#endif

private:
	/// File-stream managed by this Reader
	FILE* stream;
	/// Name of the file that is associated with the stream
	std::string filename;
	/// Name of the encoding
	std::string encoding;

	/// Contains the last set error
	static std::string error_str;

	////////////////////////////////////////////////////////
	/// Encodes a string to Utf8 using the set encoding
	/// in the reader constructor.
	/// @param str_to_encode : String to encode
	/// @return Utf8 version of string
	////////////////////////////////////////////////////////
	std::string Encode(const std::string& str_to_encode);

#ifdef READER_BIG_ENDIAN
	////////////////////////////////////////////////////////
	/// Utiility function for Big Endian Systems.
	/// Convert a 16bit integer from little to big endian.
	/// @param us : Integer to convert
	////////////////////////////////////////////////////////
	void SwapByteOrder(uint16_t &us);

	////////////////////////////////////////////////////////
	/// Utiility function for Big Endian Systems.
	/// Convert a 32bit integer from little to big endian.
	/// @param us : Integer to convert
	////////////////////////////////////////////////////////
	void SwapByteOrder(uint32_t &ui);
#endif
};

#endif
