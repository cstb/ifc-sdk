// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef Step_ASCII_codes_h
#define Step_ASCII_codes_h

namespace Step {

    const unsigned char Apostrophe=39;  // '
    const unsigned char Ampersand=38;  // &
    const unsigned char Comma=44;   // ,
    const unsigned char Colon=58;   // :
    const unsigned char Semicolon=59;  // ;
    const unsigned char Slash=47;   // / (the comment slash)
    const unsigned char BackSlash=92;  // (the other slash, which indicates C line continuation)
    const unsigned char Space=32;   // blank space
    const unsigned char LeftParenthesis=40;
    const unsigned char RightParenthesis=41;
    const unsigned char Asterix=42;
    const unsigned char DollarSign=36;
    const unsigned char CrossHatch=35;  // #
    const unsigned char Underscore=95;
    const unsigned char Period=46;
    const unsigned char EqualSign=61;
    const unsigned char LessSign=60;  // <
    const unsigned char GreaterSign=62;  // >
    const unsigned char QuestionMark=63; //?
    const unsigned char QuoteMark=34;  //"

    const unsigned char PlusSign=43;
    const unsigned char MinusSign=45;

    const unsigned char LeftSquareBracket=91; // [
    const unsigned char RightSquareBracket=93; // ]
    const unsigned char LeftBracket=123;  // {
    const unsigned char RightBracket=125;  // }

    const unsigned char VerticalSlash=124;  // |

    const unsigned char Hyphen=45;   // same as MinusSign

    const unsigned char Newline = 10;
    const unsigned char Return = 13;
}      // close namespace

#endif
