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

#ifndef Step_SimpleTypes_h
#define Step_SimpleTypes_h

#include "Types.h"
#include "Binary.h"
#include "String.h"

#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <limits>
#include <locale>
#include <stdexcept>
#include <cmath>

#ifdef _MSC_VER
#ifndef isnan
#define isnan _isnan
#endif
#endif

namespace Step {

    //! Integer type
    typedef int Integer;

    //! Real type
    typedef double Real;

    //! Number type
    typedef Real Number;

    //! Boolean type
    enum Boolean
    {
        BUnset, BFalse, BTrue
    };

    //! Logical type
    enum Logical
    {
        LUnset, LFalse, LTrue, LUnknown
    };

    class Unset;

    bool isUnset(const Unset& u);

    class BaseObject;

    /*!
     \short Base Class for Aggregations which need a flag 'unset'
     This flag is used to distinguish a parameter with an empty list from an unset parameter
     */
    class Aggregate: public Referenced
    {

    public:

        /*!
         \short Constructor from a flag
         @param b the 'unset' flag
         */
        Aggregate(bool b = false) :
            m_unset(b)
        {
        }

        /*!
         \short Gets the 'unset' flag
         @return the 'unset' flag
         */
        bool isUnset() const
        {
            return m_unset;
        }

        /*!
         \short Sets the 'unset' flag
         @param b the 'unset' flag
         */
        void setUnset(bool b)
        {
            m_unset = b;
        }

        /*!
         \short Toggle the 'unset' flag
         @return The new state of the 'unset' flag
         */
        bool toggleUnset()
        {
            m_unset = !m_unset;
            return m_unset;
        }

    protected:
        //! store if the unset status
        bool m_unset;
    };

    //! getUnset values the String type
    inline const String& getUnset(const String&)
    {
        // Unicode ZERO WIDTH SPACE character
        static const wchar_t UnsetStr[] = { 0x200B, 0x0000 };
        static const String Unset(UnsetStr);

        return Unset;
    }

    //! getUnset values the const BaseObject type
    inline const BaseObject* getUnset(const BaseObject*)
    {
        return NULL;
    }

    inline BaseObject* getUnset(BaseObject*)
    {
        return NULL;
    }

    //! getUnset values the RefPtr type
    template<typename T>
    inline const RefPtr<T>& getUnset(RefPtr<T>&)
    {
        static const RefPtr<T> Unset(NULL);
        return Unset;
    }

    //! getUnset values the Integer type
    inline Integer getUnset(Integer)
    {
        return std::numeric_limits<Integer>::min();
    }

    //! getUnset values the Real type
    inline Real getUnset(Real)
    {
        return std::numeric_limits<Real>::quiet_NaN();
    }

    //! getUnset values the Boolean type
    inline Boolean getUnset(Boolean)
    {
        return BUnset;
    }

    //! getUnset values the Logical type
    inline Logical getUnset(Logical)
    {
        return LUnset;
    }

    //! getUnset values the Binary type
    template<int N>
    inline const Binary<N>& getUnset(Binary<N> )
    {
        static const Binary<N> Unset;
        return Unset;
    }

    //! isUnset method for the String type
    inline bool isUnset(const String& v)
    {
        return v == getUnset(v);
    }

    //! isUnset method for the const BaseObject type
    inline bool isUnset(const BaseObject* v)
    {
        return v == getUnset(v);
    }

    //! isUnset method for the BaseObject type
    inline bool isUnset(BaseObject* v)
    {
        return v == getUnset(v);
    }

    //! isUnset method for the Integer type
    inline bool isUnset(Integer v)
    {
        return v == getUnset(v);
    }

    //! isUnset method for the Real type
    inline bool isUnset(Real v)
    {
        return (isnan(v) != 0);
    }

    //! isUnset method for the Enumerated type
    inline bool isUnsetEnum(int i)
    {
        return i == 0;
    }

    //! isUnset method for the Boolean type
    inline bool isUnset(Boolean v)
    {
        return v == getUnset(v);
    }

    //! isUnset method for the Logical type
    inline bool isUnset(Logical v)
    {
        return v == getUnset(v);
    }

    //! isUnset method for the Binary type
    template<int N>
    inline bool isUnset(const Binary<N>& v)
    {
        return v.is_unset();
    }

    //! isUnset method for the Aggregate type
    inline bool isUnset(const Step::Aggregate& u)
    {
        return u.isUnset();
    }

    //! isUnset method for the RefPtr type
    template<typename T>
    inline bool isUnset(RefPtr<T>&t)
    {
        return !t.valid();
    }

    template<class T>
    T fromString(const std::string& s)
    {
         std::istringstream stream (s);
         // Make sure not to be side tracked by user's locale
         stream.imbue(std::locale::classic());
         T t;
         stream >> t;
         return t;
    }

    //! spf parsing for Integer type
    inline Integer spfToInteger(const std::string& s)
    {
        if (s != "$")
            return fromString<Integer>(s);
        else
            return getUnset(Integer(0));
    }

    //! spf parsing for Real type
    inline Real spfToReal(const std::string& s)
    {
        if (s != "$")
            return fromString<Real>(s);
        else
            return getUnset(Real(0));
    }

    //! spf parsing for Boolean type
    inline Boolean spfToBoolean(const std::string& s)
    {
        if (s == ".T.")
            return BTrue;
        else if (s == ".F.")
            return BFalse;
        else
            return BUnset;
    }

    //! spf parsing for Logical type
    inline Logical spfToLogical(const std::string& s)
    {
        if (s == ".T.")
            return LTrue;
        else if (s == ".F.")
            return LFalse;
        else if (s == ".U.")
            return LUnknown;
        else
            return LUnset;
    }

    //! spf parsing for Bianry type
    template<int N>
    inline Binary<N> spfToBinary(const std::string& s)
    {
        Binary<N> b;
        b.from_spfstring(s);
        return b;
    }
}

#endif
