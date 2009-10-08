/* tools.cpp, miscellaneous shared routines.
   Copyright (C) 2007 EasyRPG Project <http://easyrpg.sourceforge.net/>.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

    // =========================================================================
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <dirent.h>
    #include <ctype.h>
    #include <iostream>
    #include "tools.h"
    using namespace std;
    // =========================================================================

    unsigned long ReadCompressedInteger(FILE * FileStream)
    {
        unsigned long Value = 0;
        unsigned char Temporal = 0;

        // int i = 0;
        do
        {
            Value <<= 7;

            // Get byte's value
            bool return_value;
            return_value = fread(&Temporal, sizeof(char), 1, FileStream);

            // Check if it's a BER integer
            Value |= Temporal&0x7F;

        } while (Temporal&0x80);

        return Value;
    }

      int CountRead(int data)//por esto tools deveria ser una clase
       {static int count;
       if(data != -1)
       count=data;
       return (count);
       }

         unsigned long ReadCompressedIntegerCount(FILE * FileStream)
        {
            unsigned long Value = 0;
            unsigned char Temporal = 0;
            int sizeread=0;
            // int i = 0;
            do
            {
                Value <<= 7;

                // Get byte's value
                bool return_value;
                return_value = fread(&Temporal, sizeof(char), 1, FileStream);
                sizeread++;
                // Check if it's a BER integer
                Value |= Temporal&0x7F;

            } while (Temporal&0x80);
            CountRead (sizeread);
            return Value;
        }


    string ReadString(FILE * FileStream)
    {
        unsigned char Length;
        char        * Characters;
        string        String;

        // Read string lenght's
        bool return_value;
        return_value = fread(&Length, sizeof(char), 1, FileStream);
        if (Length == 0) return string("");

        // Allocate string buffer
        Characters = new char[Length+1];
        memset(Characters, 0, Length+1);
        return_value = fread(Characters, sizeof(char), Length, FileStream);

        // Get string and free characters buffer
        String = string(Characters);
        delete Characters;

        return String;
    }

    string ReadString(FILE * FileStream, unsigned char Length)
    {
        char        * Characters;
        string        String;

        // Allocate string buffer
        Characters = new char[Length+1];
        memset(Characters, 0, Length+1);
        bool return_value;
        return_value = fread(Characters, sizeof(char), Length, FileStream);

        // Get string and free characters buffer
        String = string(Characters);
        delete Characters;

        return String;
    }

