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

#include "Step/String.h"
#include "Step/ASCII_codes.h"
#include "Step/SPFFunctions.h"
#include "Step/SimpleTypes.h"

using namespace Step;

String::String()
{
}

String::String(const String& str) :
    std::wstring(str)
{
}

String::String(const wchar_t *str) :
    std::wstring(str)
{
}

String::String(const std::wstring& str) :
    std::wstring(str)
{
}

String::String(const char *str)
{
    *this = fromUTF8(std::string(str));
}

String::String(const std::string &str)
{
    *this = fromUTF8(str);
}

String::~String()
{
}

bool String::operator==(const std::string &str) const
{
    return (*this == String::fromUTF8(str));
}

std::string String::toUTF8() const
{
    std::string result;

    if (!empty())
    {
        for (const_iterator it = begin(); it != end(); ++it)
        {
            unsigned int u = *it;
            if (u < 0x80)
            {
                result += (unsigned char) (*it);
            }
            else
            {
                if (u < 0x0800)
                {
                    result += (unsigned char) (0xc0 | ((unsigned char) (u >> 6)));
                }
                else
                {
                    if (u > 0xffff)
                    {
                        result += 0xf0 | ((unsigned char) (u >> 18));
                        result += 0x80 | (((unsigned char) (u >> 12)) & 0x3f);
                    }
                    else
                    {
                        result += 0xe0 | ((unsigned char) (u >> 12));
                    }
                    result += 0x80 | (((unsigned char) (u >> 6)) & 0x3f);
                }
                result += 0x80 | ((unsigned char) (u & 0x3f));
            }
        }
    }

    return result;
}

/*
 **  binary UTF-8 representation and Signification
 **    0xxxxxxx                             1 byte  coding  1 to  7 bits
 **    110xxxxx 10xxxxxx                    2 bytes coding  8 to 11 bits
 **    1110xxxx 10xxxxxx 10xxxxxx           3 bytes coding 12 to 16 bits
 **    11110xxx 10xxxxxx 10xxxxxx 10xxxxxx  4 bytes coding 17 to 21 bits
 */
String String::fromUTF8(const std::string &str)
{
    String result;
    unsigned int i = 0;

    for (; i < str.size(); ++i)
    {

        if (((unsigned char) str[i]) < 128)
        { // 0xxxxxxx
            result += str[i];
        }
        else if ((str[i] & 0xe0) == 0xc0)
        { // 110xxxxx 10xxxxxx
            unsigned int value = str[i] & 0x1f;
            value *= 1 << 6;
            value += str[i + 1] & 0x3f;
            result += value;
            ++i;
        }
        else if ((str[i] & 0xf0) == 0xe0)
        { // 1110xxxx 10xxxxxx 10xxxxxx
            unsigned int value = str[i] & 0x0f;
            value *= 1 << 12;
            unsigned int value2 = str[i + 1] & 0x3f;
            value2 *= 1 << 6;
            value += value2 + (str[i + 2] & 0x3f);
            result += value;
            i += 2;
        }
        else if ((str[i] & 0xf8) == 0xf0)
        { // 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
            unsigned int value = str[i] & 0x0f;
            value *= 1 << 18;
            unsigned int value2 = str[i + 1] & 0x3f;
            value2 *= 1 << 12;
            unsigned int value3 = str[i + 2] & 0x3f;
            value2 *= 1 << 6;
            value += value2 + value3 + (str[i + 3] & 0x3f);
            result += value;
            i += 3;
        }
        else
        {
            result += '?';
        }

    }

    return result;
}

std::map<wchar_t, char> buildUnicodeTable(const wchar_t table[96])
{
    std::map<wchar_t, char> result;

    for (size_t i = 0; i < 96; ++i)
    {
        const wchar_t entry = table[i];

        if(entry)
            result[entry] = char(i) + 0x20;
    }

    return result;
}

/*
 table iso8859_2 (latin2) central european
 */
static const wchar_t iso8859_2[96] =
{
    0x00A0, 0x0104, 0x02D8, 0x0141, 0x00A4, 0x013D, 0x015A, 0x00A7, 0x00A8, 0x0160, 0x015E, 0x0164, 0x0179, 0x00AD, 0x017D, 0x017B,
    0x00B0, 0x0105, 0x02DB, 0x0142, 0x00B4, 0x013E, 0x015B, 0x02C7, 0x00B8, 0x0161, 0x015F, 0x0165, 0x017A, 0x02DD, 0x017E, 0x017C,
    0x0154, 0x00C1, 0x00C2, 0x0102, 0x00C4, 0x0139, 0x0106, 0x00C7, 0x010C, 0x00C9, 0x0118, 0x00CB, 0x011A, 0x00CD, 0x00CE, 0x010E,
    0x0110, 0x0143, 0x0147, 0x00D3, 0x00D4, 0x0150, 0x00D6, 0x00D7, 0x0158, 0x016E, 0x00DA, 0x0170, 0x00DC, 0x00DD, 0x0162, 0x00DF,
    0x0155, 0x00E1, 0x00E2, 0x0103, 0x00E4, 0x013A, 0x0107, 0x00E7, 0x010D, 0x00E9, 0x0119, 0x00EB, 0x011B, 0x00ED, 0x00EE, 0x010F,
    0x0111, 0x0144, 0x0148, 0x00F3, 0x00F4, 0x0151, 0x00F6, 0x00F7, 0x0159, 0x016F, 0x00FA, 0x0171, 0x00FC, 0x00FD, 0x0163, 0x02D9
};
std::map<wchar_t, char> UnicodeToIso8859_2 = buildUnicodeTable(iso8859_2);

/*
 table iso8859_3 (latin3) south european
 */

static const wchar_t iso8859_3[96] =
{
    0x00A0, 0x0126, 0x02D8, 0x00A3, 0x00A4, 0x0000, 0x0124, 0x00A7, 0x00A8, 0x0130, 0x015E, 0x011E, 0x0134, 0x00AD, 0x0000, 0x017B,
    0x00B0, 0x0127, 0x00B2, 0x00B3, 0x00B4, 0x00B5, 0x0125, 0x00B7, 0x00B8, 0x0131, 0x015F, 0x011F, 0x0135, 0x00BD, 0x0000, 0x017C,
    0x00C0, 0x00C1, 0x00C2, 0x0000, 0x00C4, 0x010A, 0x0108, 0x00C7, 0x00C8, 0x00C9, 0x00CA, 0x00CB, 0x00CC, 0x00CD, 0x00CE, 0x00CF,
    0x0000, 0x00D1, 0x00D2, 0x00D3, 0x00D4, 0x0120, 0x00D6, 0x00D7, 0x011C, 0x00D9, 0x00DA, 0x00DB, 0x00DC, 0x016C, 0x015C, 0x00DF,
    0x00E0, 0x00E1, 0x00E2, 0x0000, 0x00E4, 0x010B, 0x0109, 0x00E7, 0x00E8, 0x00E9, 0x00EA, 0x00EB, 0x00EC, 0x00ED, 0x00EE, 0x00EF,
    0x0000, 0x00F1, 0x00F2, 0x00F3, 0x00F4, 0x0121, 0x00F6, 0x00F7, 0x011D, 0x00F9, 0x00FA, 0x00FB, 0x00FC, 0x016D, 0x015D, 0x02D9
};
std::map<wchar_t, char> UnicodeToIso8859_3 = buildUnicodeTable(iso8859_3);

/*
 ** table iso8859_4 (latin4) north european
 */
static const wchar_t iso8859_4[96] =
{
    0x00A0, 0x0104, 0x0138, 0x0156, 0x00A4, 0x0128, 0x013B, 0x00A7, 0x00A8, 0x0160, 0x0112, 0x0122, 0x0166, 0x00AD, 0x017D, 0x00AF,
    0x00B0, 0x0105, 0x02DB, 0x0157, 0x00B4, 0x0129, 0x013C, 0x02C7, 0x00B8, 0x0161, 0x0113, 0x0123, 0x0167, 0x014A, 0x017E, 0x014B,
    0x0100, 0x00C1, 0x00C2, 0x00C3, 0x00C4, 0x00C5, 0x00C6, 0x012E, 0x010C, 0x00C9, 0x0118, 0x00CB, 0x0116, 0x00CD, 0x00CE, 0x012A,
    0x0110, 0x0145, 0x014C, 0x0136, 0x00D4, 0x00D5, 0x00D6, 0x00D7, 0x00D8, 0x0172, 0x00DA, 0x00DB, 0x00DC, 0x0168, 0x016A, 0x00DF,
    0x0101, 0x00E1, 0x00E2, 0x00E3, 0x00E4, 0x00E5, 0x00E6, 0x012F, 0x010D, 0x00E9, 0x0119, 0x00EB, 0x0117, 0x00ED, 0x00EE, 0x012B,
    0x0111, 0x0146, 0x014D, 0x0137, 0x00F4, 0x00F5, 0x00F6, 0x00F7, 0x00F8, 0x0173, 0x00FA, 0x00FB, 0x00FC, 0x0169, 0x016B, 0x02D9
};
std::map<wchar_t, char> UnicodeToIso8859_4 = buildUnicodeTable(iso8859_4);

/*
 ** table iso8859_5 cyrillic
 */
static const wchar_t iso8859_5[96] =
{
    0x00A0, 0x0401, 0x0402, 0x0403, 0x0404, 0x0405, 0x0406, 0x0407, 0x0408, 0x0409, 0x040A, 0x040B, 0x040C, 0x00AD, 0x040E, 0x040F,
    0x0410, 0x0411, 0x0412, 0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 0x0418, 0x0419, 0x041A, 0x041B, 0x041C, 0x041D, 0x041E, 0x041F,
    0x0420, 0x0421, 0x0422, 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 0x0428, 0x0429, 0x042A, 0x042B, 0x042C, 0x042D, 0x042E, 0x042F,
    0x0430, 0x0431, 0x0432, 0x0433, 0x0434, 0x0435, 0x0436, 0x0437, 0x0438, 0x0439, 0x043A, 0x043B, 0x043C, 0x043D, 0x043E, 0x043F,
    0x0440, 0x0441, 0x0442, 0x0443, 0x0444, 0x0445, 0x0446, 0x0447, 0x0448, 0x0449, 0x044A, 0x044B, 0x044C, 0x044D, 0x044E, 0x044F,
    0x2116, 0x0451, 0x0452, 0x0453, 0x0454, 0x0455, 0x0456, 0x0457, 0x0458, 0x0459, 0x045A, 0x045B, 0x045C, 0x00A7, 0x045E, 0x045F
};

std::map<wchar_t, char> UnicodeToIso8859_5 = buildUnicodeTable(iso8859_5);

/*
 ** table iso8859_6 arabic
 */
static const wchar_t iso8859_6[96] =
{
    0x00A0, 0x0000, 0x0000, 0x0000, 0x00A4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x060C, 0x00AD, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x061B, 0x0000, 0x0000, 0x0000, 0x061F,
    0x00C0, 0x0621, 0x0622, 0x0623, 0x0624, 0x0625, 0x0626, 0x0627, 0x0628, 0x0629, 0x062A, 0x062B, 0x062C, 0x062D, 0x062E, 0x062F,
    0x0630, 0x0631, 0x0632, 0x0633, 0x0634, 0x0635, 0x0636, 0x0637, 0x0638, 0x0639, 0x063A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0640, 0x0641, 0x0642, 0x0643, 0x0644, 0x0645, 0x0646, 0x0647, 0x0648, 0x0649, 0x064A, 0x064B, 0x064C, 0x064D, 0x064E, 0x064F,
    0x0650, 0x0651, 0x0652, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
std::map<wchar_t, char> UnicodeToIso8859_6 = buildUnicodeTable(iso8859_6);

/*
 ** table iso8859_7 greek
 */
static const wchar_t iso8859_7[96] =
{
    0x00A0, 0x2018, 0x2019, 0x00A3, 0x20AC, 0x20AF, 0x00A6, 0x00A7, 0x00A8, 0x00A9, 0x037A, 0x00AB, 0x00AC, 0x00AD, 0x0000, 0x2015,
    0x00B0, 0x00B1, 0x00B2, 0x00B3, 0x0384, 0x0385, 0x0386, 0x00B7, 0x0388, 0x0389, 0x038A, 0x00BB, 0x038C, 0x00BD, 0x038E, 0x038F,
    0x0390, 0x0391, 0x0392, 0x0393, 0x0394, 0x0395, 0x0396, 0x0397, 0x0398, 0x0399, 0x039A, 0x039B, 0x039C, 0x039D, 0x039E, 0x039F,
    0x03A0, 0x03A1, 0x0000, 0x03A3, 0x03A4, 0x03A5, 0x03A6, 0x03A7, 0x03A8, 0x03A9, 0x03AA, 0x03AB, 0x03AC, 0x03AD, 0x03AE, 0x03AF,
    0x03B0, 0x03B1, 0x03B2, 0x03B3, 0x03B4, 0x03B5, 0x03B6, 0x03B7, 0x03B8, 0x03B9, 0x03BA, 0x03BB, 0x03BC, 0x03BD, 0x03BE, 0x03BF,
    0x03C0, 0x03C1, 0x03C2, 0x03C3, 0x03C4, 0x03C5, 0x03C6, 0x03C7, 0x03C8, 0x03C9, 0x03CA, 0x03CB, 0x03CC, 0x03CD, 0x03CE, 0x0000
};
std::map<wchar_t, char> UnicodeToIso8859_7 = buildUnicodeTable(iso8859_7);

/*
 ** table iso8859_8 hebrew
 */
static const wchar_t iso8859_8[96] =
{
    0x00A0, 0x0000, 0x00A2, 0x00A3, 0x00A4, 0x00A5, 0x00A6, 0x00A7, 0x00A8, 0x00A9, 0x00D7, 0x00AB, 0x00AC, 0x00AD, 0x00AE, 0x00AF,
    0x00B0, 0x00B1, 0x00B2, 0x00B3, 0x00B4, 0x00B5, 0x00B6, 0x00B7, 0x00B8, 0x00B9, 0x00F7, 0x00BB, 0x00BC, 0x00BD, 0x00BE, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2017,
    0x05D0, 0x05D1, 0x05D2, 0x05D3, 0x05D4, 0x05D5, 0x05D6, 0x05D7, 0x05D8, 0x05D9, 0x05DA, 0x05DB, 0x05DC, 0x05DD, 0x05DE, 0x05DF,
    0x05E0, 0x05E1, 0x05E2, 0x05E3, 0x05E4, 0x05E5, 0x05E6, 0x05E7, 0x05E8, 0x05E9, 0x05EA, 0x0000, 0x0000, 0x200E, 0x200F, 0x0000
};

std::map<wchar_t, char> UnicodeToIso8859_8 = buildUnicodeTable(iso8859_8);

/*
 ** table iso8859_9 (latin5) turkish
 */
static const wchar_t iso8859_9[96] =
{
    0x00A0, 0x00A1, 0x00A2, 0x00A3, 0x00A4, 0x00A5, 0x00A6, 0x00A7, 0x00A8, 0x00A9, 0x00AA, 0x00AB, 0x00AC, 0x00AD, 0x00AE, 0x00AF,
    0x00B0, 0x00B1, 0x00B2, 0x00B3, 0x00B4, 0x00B5, 0x00B6, 0x00B7, 0x00B8, 0x00B9, 0x00BA, 0x00BB, 0x00BC, 0x00BD, 0x00BE, 0x00BF,
    0x00C0, 0x00C1, 0x00C2, 0x00C3, 0x00C4, 0x00C5, 0x00C6, 0x00C7, 0x00C8, 0x00C9, 0x00CA, 0x00CB, 0x00CC, 0x00CD, 0x00CE, 0x00CF,
    0x011E, 0x00D1, 0x00D2, 0x00D3, 0x00D4, 0x00D5, 0x00D6, 0x00D7, 0x00D8, 0x00D9, 0x00DA, 0x00DB, 0x00DC, 0x0130, 0x015E, 0x00DF,
    0x00E0, 0x00E1, 0x00E2, 0x00E3, 0x00E4, 0x00E5, 0x00E6, 0x00E7, 0x00E8, 0x00E9, 0x00EA, 0x00EB, 0x00EC, 0x00ED, 0x00EE, 0x00EF,
    0x011F, 0x00F1, 0x00F2, 0x00F3, 0x00F4, 0x00F5, 0x00F6, 0x00F7, 0x00F8, 0x00F9, 0x00FA, 0x00FB, 0x00FC, 0x0131, 0x015F, 0x00FF
};
std::map<wchar_t, char> UnicodeToIso8859_9 = buildUnicodeTable(iso8859_9);

static wchar_t fromISO_8859(String::Alphabet alphabet, char code)
{
    if(code >= 0x20 && code <= 0x7F)
    {
        if(alphabet == String::Western_European)
        {
            return wchar_t(code) + 0x80;
        }
        else if(alphabet > String::Western_European && alphabet <= String::Turkish)
        {
            static const wchar_t* iso8859_[] =
            {
                NULL,
                iso8859_2,
                iso8859_3,
                iso8859_4,
                iso8859_5,
                iso8859_6,
                iso8859_7,
                iso8859_8,
                iso8859_9
            };

            return iso8859_[alphabet][code - 0x20];
        }
    }

    return L'\0';
}

static char toISO_8859(String::Alphabet alphabet, wchar_t code)
{
    if(alphabet == String::Western_European)
    {
        if(code >= 0xA0 && code <= 0xFF)
            return char(code) - 0x80;
    }
    else if(alphabet > String::Western_European && alphabet <= String::Turkish)
    {
        static const std::map<wchar_t, char>* UnicodeToIso8859_[] =
        {
            NULL,
            &UnicodeToIso8859_2,
            &UnicodeToIso8859_3,
            &UnicodeToIso8859_4,
            &UnicodeToIso8859_5,
            &UnicodeToIso8859_6,
            &UnicodeToIso8859_7,
            &UnicodeToIso8859_8,
            &UnicodeToIso8859_9,
        };

        std::map<wchar_t, char>::const_iterator i = UnicodeToIso8859_[alphabet]->find(code);
        if(i != UnicodeToIso8859_[alphabet]->end())
            return (*i).second;
    }

    return '\0';
}

std::string String::toISO_8859(Alphabet alphabet) const
{
    std::string result;

    if (!empty())
    {
        for (const_iterator it = begin(); it != end(); ++it)
        {
            const wchar_t code = *it;

            if(code <= 0x7F)
            {
                result += (char) code;
            }
            else if(char c = ::toISO_8859(alphabet, code))
            {
                result += c + 0x80;
            }
            else
            {
                result += '?';
            }
        }
    }

    return result;
}

String String::fromISO_8859(const std::string &str, Alphabet alphabet)
{
    String result;

    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        const char code = *it;

        if(code <= 0x7F)
        {
            result += (char) code;
        }
        else if(wchar_t c = ::fromISO_8859(alphabet, code - 0x80))
        {
            result += c;
        }
        else
        {
            result += '?';
        }
    }

    return result;
}

static unsigned int fromHex(char c)
{
    // ASCII to Hex Table
    static const unsigned char ASCIIToHex[] =
    {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  0,  0,  0,  0,  0,  0, // 0 - 9
        0, 10, 11, 12, 13, 14, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0, // A - F
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0, 10, 11, 12, 13, 14, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0, // a - f
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    };

    return ASCIIToHex[(unsigned char)c];
}

static char toHex(unsigned int i)
{
    static const char HexToASCII[] = "0123456789ABCDEF";
    return i < 16 ? HexToASCII[i] : '0';
}

static String parseHex2(std::string::size_type &i, std::string s)
{
    String result;

    for (; i < s.size(); i += 4)
    {
        if (s[i] == BackSlash && s[i + 1] == 'X' && s[i + 2] == '0' && s[i + 3] == BackSlash)
        {
            i += 4;
            return result;
        }
        else
        {
            uint16_t code = (uint16_t) (fromHex(s[i    ]) * (1 << 12) + fromHex(s[i + 1]) * (1 << 8) +
                                        fromHex(s[i + 2]) * (1 <<  4) + fromHex(s[i + 3]));
            result += (wchar_t) code;
        }
    }

    return result;
}

static String parseHex4(std::string::size_type &i, std::string s)
{
    String result;

    for (; i < s.size(); i += 8)
    {
        if (s[i] == BackSlash && s[i + 1] == 'X' && s[i + 2] == '0' && s[i + 3] == BackSlash)
        {
            i += 4;
            return result;
        }
        else
        {
            uint32_t code = (uint32_t) (fromHex(s[i    ]) * (1 << 12) + fromHex(s[i + 1]) * (1 << 8) + fromHex(s[i + 2]) * (1 << 4) + fromHex(s[i + 3])) * (1 << 16)
                                      + fromHex(s[i + 4]) * (1 << 12) + fromHex(s[i + 5]) * (1 << 8) + fromHex(s[i + 6]) * (1 << 4) + fromHex(s[i + 7]);

            if (sizeof(wchar_t) == 2 && code < 0x110000)
            {
                if (code < 0x10000)
                {
                    result += (wchar_t) code;
                }
                else
                {
                    // UTF-16 encoding
                    result += (wchar_t) (0xd800 | (( code & 0xFFC00 ) >> 11));
                    result += (wchar_t) (0xdc00 | (code & 0x3ff));
                }
            }
            else
            {
                result += (wchar_t) code;
            }
        }
    }

    return result;
}

static String parseString(const std::string& s)
{
    String result;
    String::Alphabet alphabet = String::Western_European;

    std::string::size_type i = 0;
    while (i < s.size())
    {
        if (s[i] == Apostrophe)
        {
            if (s[i + 1] == Apostrophe)
            {
                result += Apostrophe;
                i += 2;
            }
            else
            {
                // Ignore Apostrophe to avoid endless loop
                i++;
            }
        }
        else if (s[i] == BackSlash)
        {
            if (s[i + 1] == BackSlash)
            {
                // handles BackSlash BackSlash
                result += BackSlash;
                i += 2;
            }
            else if (s[i + 1] == 'S' && s[i + 2] == BackSlash)
            {
                // handle extended character
                // BackSlash S BackSlash Character
                result += fromISO_8859(alphabet, s[i + 3]);
                i += 4;
            }
            else if (s[i + 1] == 'P' && s[i + 3] == BackSlash)
            {
                // handle change of page
                // BackSlash P Upper BackSlash
                alphabet = (String::Alphabet) (s[i + 2] - 'A');
                i += 4;
            }
            else if (s[i + 1] == 'X' && s[i + 2] == BackSlash)
            {
                i += 3;
                // handle Arbitrary hex character
                unsigned char code = (unsigned char) (fromHex(s[i]) * (1 << 4) + fromHex(s[i + 1]));
                result += (wchar_t) code;
                i += 2;
            }
            else if (s[i + 1] == 'X' && s[i + 2] == '2' && s[i + 3] == BackSlash)
            {
                // handle hex_two string
                i += 4;
                result += parseHex2(i, s);
            }
            else if (s[i + 1] == 'X' && s[i + 2] == '4' && s[i + 3] == BackSlash)
            {
                // handle hex_two string
                i += 4;
                result += parseHex4(i, s);
            }
            else
            {
                // Ignore BackSlash to avoid endless loop
                i++;
            }
        }
        else
        {
            result += s[i];
            ++i;
        }
    }

    return result;
}

String String::fromSPF(const std::string& s)
{
    if (s != "$")
    {
        std::string result(s);
        Step::removeQuotes(result);
        return parseString(result);
    }
    else
        return getUnset(String());
}

static int setSizeOfChar(std::string& result, int curSize, int newSize)
{
    if(curSize != newSize)
    {
        if(curSize != 1)
            result += "\\X0\\";

        if(newSize == 2)
            result += "\\X2\\";
        else if(newSize == 4)
            result += "\\X4\\";
    }

    return newSize;
}

std::string String::toSPF() const
{
    std::string result("'");

    String::Alphabet str_alphabet = String::Western_European;
    int sizeOfChar = 1;

    for(const_iterator i = begin(); i != end(); i++)
    {
        wchar_t c = *i;
        if(c < 0x7F)
        {
            // ASCII characters
            sizeOfChar = setSizeOfChar(result, sizeOfChar, 1);

            if (c == BackSlash || c == Apostrophe)
            {
                result += (char) c;
                result += (char) c;
            }
            else if (c < 0x20 || c == 0x7F)
            {
                // C0 control codes
                result += "\\X\\";
                result += toHex((c & 0x00f0) >> 4);
                result += toHex(c & 0x000f);
            }
            else
            {
                result += (char) c;
            }
        }
        else
        {
            char ISO_8859_char = ::toISO_8859(str_alphabet, c);
            if(ISO_8859_char)
            {
                sizeOfChar = setSizeOfChar(result, sizeOfChar, 1);
            }
            else
            {
                for(int a = (str_alphabet == Western_European ? Central_European : Western_European); a <= Turkish; a++)
                {
                    ISO_8859_char = ::toISO_8859((Alphabet)a, c);
                    if(ISO_8859_char)
                    {
                        sizeOfChar = setSizeOfChar(result, sizeOfChar, 1);
                        result += "\\P";
                        result += 'A' + (char) a;
                        result += "\\";
                        str_alphabet = (Alphabet)a;
                        break;
                    }
                }
            }

            if(ISO_8859_char)
            {
                // ISO_8859_XX characters
                result += "\\S\\";
                result += ISO_8859_char;
            }
            else if(c <= 0xFF)
            {
                // C1 control codes
                sizeOfChar = setSizeOfChar(result, sizeOfChar, 1);

                result += "\\X\\";
                result += toHex((c & 0x00f0) >> 4);
                result += toHex( c & 0x000f      );
            }
            else if(c <= 0xFFFF)
            {
                sizeOfChar = setSizeOfChar(result, sizeOfChar, 2);

                result += toHex((c & 0xf000) >> 12);
                result += toHex((c & 0x0f00) >>  8);
                result += toHex((c & 0x00f0) >>  4);
                result += toHex( c & 0x000f       );

            }
            else if(c <= 0xFFFFFFFF)
            {
                sizeOfChar = setSizeOfChar(result, sizeOfChar, 4);
                result += toHex((c & 0xf0000000) >> 28);
                result += toHex((c & 0x0f000000) >> 24);
                result += toHex((c & 0x00f00000) >> 20);
                result += toHex((c & 0x000f0000) >> 16);
                result += toHex((c & 0x0000f000) >> 12);
                result += toHex((c & 0x00000f00) >>  8);
                result += toHex((c & 0x000000f0) >>  4);
                result += toHex( c & 0x0000000f       );
            }
        }
    }

    sizeOfChar = setSizeOfChar(result, sizeOfChar, 1);

    result += "'";
    return result;
}

std::ostream & operator <<(std::ostream &out, const String& s)
{
    return out << s.toUTF8();
}

std::istream & operator >>(std::istream &in, String& s)
{
    std::string str;
    in >> str;
    s = String::fromUTF8(str);

    return in;
}
