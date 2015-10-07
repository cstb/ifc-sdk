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

#ifndef Step_String_h
#define Step_String_h

#include <Step/Export.h>

#ifdef _MSC_VER
# pragma warning(disable: 4251)
#endif

#include <string>
#include <ostream>

namespace Step {
    /**
     * This is the Step String implementation. It is sub classing the STL wide string
     * It stores the Alphabet used to create it in order to comply with the SPF encoding of strings
     * characters are stored as unicode characters
     */
    class STEP_EXPORT String : public std::wstring
    {
    public:

        /**
         * The list of Alphabet supported
         */
        typedef enum
        {
            Unknown = -1,
            Western_European,
            Central_European,
            South_European,
            North_European,
            Cyrillic,
            Arabic,
            Greek,
            Hebrew,
            Turkish
        } Alphabet;


        /**
         * The list of supported code pages
         */
        typedef enum
        {
            UTF8 = -1,
            Windows1250,
            Windows1251,
            Windows1252,
            Windows1253,
            Windows1254,
            Windows1255,
            Windows1256,
            Windows1257,
            Windows1258,
            MacRoman
        } CodePage;

        /**
         * @brief setDefaultCodePage
         *
         * Default Code Page set to Windows1256 on windows platforms and UTF8 on others
         * @param codepage the codepage to build char * and std::string encoded characters
         * @sa String(const char *str), String(const std::string &str)
         */
        static void setDefaultCodePage(CodePage codepage);

        /**
         * Default constructor
         */
        String();

        /**
         * Copy constructor
         * \param str the String to copy
         */
        String(const String& str);

        /**
         * Copy constructor, expects UTF16 encoding
         * \param str the wchar_t array to copy
         */
        String(const wchar_t *str);

        /**
         * Copy constructor, expects UTF16 encoding
         * \param str the std::wstring to copy
         */
        String(const std::wstring& str);

        /**
         * Copy constructor, expects default CodePage encoding
         * default Code Page can be changed via setDefaultCodePage
         *  \param str the char array to copy
         */
        String(const char *str);
        /**
         * Copy constructor, expects default CodePage encoding
         * default Code Page can be changed via setDefaultCodePage
         * \param str the std::string to copy
         */
        String(const std::string &str);

		/**
		 * Virtual destructor
		 */
		virtual ~String();

        /**
         * compares to a UTF8 encoded representation
         * \param str the string to compare too
         * \return success
         */
        virtual bool operator==(const std::string &str) const;

        /**
         * returns a UTF8 (multi character) encoded representation
         * \return a UTF8 (multi character) std::string
         */
        virtual std::string toUTF8() const;

        /**
         * builds from a UTF8 (multi character) encoded representation
         * \param str the string to convert
         * \return the String created
         */
        static String fromUTF8(const std::string &str);


        /**
         * returns a (ISO 8859-X) encoded representation
         * \param alphabet the alphabet used to encode returned string
         * \return a (ISO 8859-X) std::string
         */
        virtual std::string toISO_8859(Alphabet alphabet) const;

        /**
         * builds from a (ISO 8859-X) encoded representation
         * \param str the string to convert
         * \param alphabet the alphabet to convert str from
         * \return the String created
         */
        static String fromISO_8859(const std::string &str, Alphabet alphabet);

        /**
         * builds from a (windows 125X) encoded representation
         * \param str the string to convert
         * \param pagecode the pagecode to convert str from
         * \return the String created
         */
        static String fromWindows(const std::string &str, int pagecode);

        /**
         * builds from a (Mac OS Roman) encoded representation
         * \param str the string to convert
         * \return the String created
         */
        static String fromMacRoman(const std::string &str);

        /**
         * returns a ISO 10303-21 SPF encoded string representation
         * \return a ISO 10303-21 SPF std::string
         */
        virtual std::string toSPF() const;

        /**
         * builds from a ISO 10303-21 SPF  encoded representation
         * \param str the string to convert
         * \return the String created
         */
        static String fromSPF(const std::string &str);

		/**
         * toLatin1() is deprecated
         * use toISO_8859 when alphabet is set to Western_European
         */
        STEP_DEPRECATED std::string toLatin1() const
		{
			return toISO_8859(Western_European);
		}

        /**
         * String fromLatin1(const std::string &str) is deprecated
         * use fromISO_8859 with alphabet set to Western_European
         */
        STEP_DEPRECATED static String fromLatin1(const std::string &str)
		{
			return fromISO_8859(str, Western_European);
		}
    protected:
        static CodePage _codepage;
    };

}

/*!
 **  outputs an UTF8 (multi character) encoded std::string representation
 **  is equivalent to calling out << myStepString.toUTF8()
 **  \sa toUTF8()
 */
STEP_EXPORT std::ostream& operator<<(std::ostream &out, const Step::String &s);

/*!
 **  inputs an UTF8 (multi character) from an encoded std::string representation
 **  is equivalent to calling std:string str; in >> str; String s = String::fromUTF8(str);
 **  \sa fromUTF8()
 */
STEP_EXPORT std::istream& operator>>(std::istream &in, Step::String &s);

#endif
