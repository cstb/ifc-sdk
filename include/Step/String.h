/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/
#ifndef Step_String_h
#define Step_String_h

#include "StepDLL.h"

#include <string>
#include <ostream>

namespace Step {
    /**
     * This is the Step String implementation. It is sub classing the STL wide string
     * It stores the Alphabet used to create it in order to comply with the SPF encoding of strings
     */
    class STEP_DLL_DEF String : public std::wstring
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
STEP_DLL_DEF std::ostream& operator<<(std::ostream &out, const Step::String &s);

#endif
