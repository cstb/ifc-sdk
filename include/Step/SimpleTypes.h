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

#include <Step/Config.h>
#include <Step/Types.h>
#include <Step/Binary.h>
#include <Step/String.h>

#include <cstdio>
#include <cstdlib>
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
#ifndef STEP_ISNAN
#define STEP_ISNAN _isnan
#endif
#else
#define STEP_ISNAN std::isnan
#endif

#ifdef min
#undef min
#endif

#ifdef max
#undef max
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
    template<unsigned N>
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
        return (STEP_ISNAN(v) != 0);
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
    template<unsigned N>
    inline bool isUnset(const Binary<N>& v)
    {
        return v.is_unset();
    }

    //! isUnset method for the RefPtr type
    template<typename T>
    inline bool isUnset(RefPtr<T>&t)
    {
        return !t.valid();
    }

    //
    // Simple and fast atof (ascii to float) function.
    //
    // - Executes about 5x faster than standard MSCRT library atof().
    // - An attractive alternative if the number of calls is in the millions.
    // - Assumes input is a proper integer, fraction, or scientific format.
    // - Matches library atof() to 15 digits (except at extreme exponents).
    // - Follows atof() precedent of essentially no error checking.
    //
    // 09-May-2009 Tom Van Baak (tvb) www.LeapSecond.com
    //

    #define white_space(c) ((c) == ' ' || (c) == '\t')
    #define valid_digit(c) ((c) >= '0' && (c) <= '9')

    inline double fast_atof (const char *p)
    {
        int frac;
        double sign, value, scale;

        // Skip leading white space, if any.

        while (white_space(*p) ) {
            p += 1;
        }

        // Get sign, if any.

        sign = 1.0;
        if (*p == '-') {
            sign = -1.0;
            p += 1;

        } else if (*p == '+') {
            p += 1;
        }

        // Get digits before decimal point or exponent, if any.

        for (value = 0.0; valid_digit(*p); p += 1) {
            value = value * 10.0 + (*p - '0');
        }

        // Get digits after decimal point, if any.

        if (*p == '.') {
            double pow10 = 10.0;
            p += 1;
            while (valid_digit(*p)) {
                value += (*p - '0') / pow10;
                pow10 *= 10.0;
                p += 1;
            }
        }

        // Handle exponent, if any.

        frac = 0;
        scale = 1.0;
        if ((*p == 'e') || (*p == 'E')) {
            unsigned int expon;

            // Get sign of exponent, if any.

            p += 1;
            if (*p == '-') {
                frac = 1;
                p += 1;

            } else if (*p == '+') {
                p += 1;
            }

            // Get digits of exponent, if any.

            for (expon = 0; valid_digit(*p); p += 1) {
                expon = expon * 10 + (unsigned int)(*p - '0');
            }
            if (expon > 308) expon = 308;

            // Calculate scaling factor.

            while (expon >= 50) { scale *= 1E50; expon -= 50; }
            while (expon >=  8) { scale *= 1E8;  expon -=  8; }
            while (expon >   0) { scale *= 10.0; expon -=  1; }
        }

        // Return signed and scaled floating point result.

        return sign * (frac ? (value / scale) : (value * scale));
    }

    //! spf parsing for Real type
    inline Real spfToReal(const std::string& s)
    {
        if (s != "$")
            return fast_atof(s.c_str());
        else
            return getUnset(Real(0));
    }

    inline int fast_atoi (const char *p)
    {
        int sign, value;

        // Skip leading white space, if any.

        while (white_space(*p) ) {
            p += 1;
        }

        // Get sign, if any.

        sign = 1;
        if (*p == '-') {
            sign = -1;
            p += 1;

        } else if (*p == '+') {
            p += 1;
        }

        // Get digits before decimal point or exponent, if any.

        for (value = 0; valid_digit(*p); p += 1) {
            value = value * 10 + (*p - '0');
        }

        return sign * value;
    }

    //! spf parsing for Integer type
    inline Integer spfToInteger(const std::string& s)
    {
        if (s != "$")
            //return fromString<Integer>(s);
            return fast_atoi(s.c_str());
        else
            return getUnset(Integer(0));
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
