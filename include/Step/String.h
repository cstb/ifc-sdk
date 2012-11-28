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

#include "StepExport.h"

#include <string>
#include <ostream>

namespace Step {
    /**
     * This is the Step String implementation. It is sub classing the STL wide string
     * It stores the Alphabet used to create it in order to comply with the SPF encoding of strings
     */
    class STEP_EXPORT String : public std::wstring
    {
    public:
        /**
         * Default constructor, set Alphabet used to unknown
         */
        String();

        /**
         * Copy constructor
         * \param str the String to copy
         */
        String(const String& str);

        /**
         * Copy constructor, set Alphabet used to unknown
         * \param str the wchar_t array to copy
         */
        String(const wchar_t *str);

        /**
         * Copy constructor, set Alphabet used to unknown
         * \param str the std::wstring to copy
         */
        String(const std::wstring& str);

        /**
         * Copy constructor, set Alphabet used to Western_European
         * expects latin-1 encoding
         *  \param str the char array to copy
         */
        String(const char *str);
        /**
         * Copy constructor, set Alphabet used to Western_European
         * expects latin-1 encoding
         * \param str the std::string to copy
         */
        String(const std::string &str);

		/**
		 * Virtual destructor
		 */
		virtual ~String();
		
        /**
         * compares to a latin-1 (ISO 8859-1) encoded representation
         * \param str the string to compare too
         * \return success
         */
        virtual bool operator==(const std::string &str) const;

        /**
         * returns a latin-1 (ISO 8859-1) encoded representation
         * \return a latin-1 (ISO 8859-1) std::string
         */
        virtual std::string toLatin1() const;

        /**
         * builds from a latin-1 (ISO 8859-1) encoded representation
         * \param str the string to convert
         * \return the String created
         */
        static String fromLatin1(const std::string &str);

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
         * Set the Alphabet. Used in SPF encodings
         * \param a the Alphabet
         */
        virtual void setAlphabet(Alphabet a);

        /**
         * get Alphabet used by this String
         * \return the Alphabet of this String
         */
        virtual Alphabet getAlphabet() const;

		/**
		 * set default Alphabet for all subsequent new String creation
		 */
		static void setDefaultAlphabet(Alphabet a);

    private:
        Alphabet alphabet;
        /// builds from a latin-1 (ISO 8859-1) encoded representation
        virtual void buildLatin1(const std::string &str);

    };

}

/*!
 **  outputs an UTF8 (multi character) encoded std::string representation
 **  is equivalent to calling out << myStepString.toUTF8()
 **  \sa toUTF8()
 */
STEP_EXPORT std::ostream& operator<<(std::ostream &out, const Step::String &s);

#endif
