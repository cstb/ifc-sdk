/*//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
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
#ifndef STEP_STRING_H_INCLUDED
#define STEP_STRING_H_INCLUDED

#include "StepDLL.h"

#include <string>
#include <ostream> 

namespace Step {
    class STEP_DLL_DEF String : public std::wstring
    {
    public:
        String();
        String(const String& str);
        String(const wchar_t *str);
        String(const std::wstring& str);

        /// expects latin-1 encoding
        String(const char *str);
        /// expects latin-1 encoding
        String(const std::string &str);

        /// compares to a latin-1 (ISO 8859-1) encoded representation
        virtual bool operator==(const std::string &str) const;

        /// returns a latin-1 (ISO 8859-1) encoded representation
        virtual std::string toLatin1() const;

        /// builds from a latin-1 (ISO 8859-1) encoded representation
        static String fromLatin1(const std::string &str);

        /// returns a UTF8 (multi character) encoded representation
        virtual std::string toUTF8() const;

        /// builds from a UTF8 (multi character) encoded representation
        static String fromUTF8(const std::string &str);

        /// returns a ISO 10303-21 SPF encoded string representation
        virtual std::string toSPF() const;

        /// builds from a ISO 10303-21 SPF encoded string representation
        static String fromSPF(const std::string &str);

        typedef enum {
            Unknown=-1,
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

        virtual void setAlphabet(Alphabet a);
        virtual Alphabet getAlphabet() const;

    protected:
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
STEP_DLL_DEF std::ostream &  operator<< (std::ostream &out, const Step::String &s);

#endif // STEP_STRING_H_INCLUDED
