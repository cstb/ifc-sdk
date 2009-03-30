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
#ifndef Step_SimpleTypes_h
#define Step_SimpleTypes_h

#include "Binary.h"
#include "Referenced.h"
#include "String.h"

#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <limits>

#if defined (linux)
#   include <stdexcept>
#endif

namespace Step {

    //! Integer type
    typedef long Integer;

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
    inline String getUnset(const String&)
    {
        return "Unset";
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
    inline RefPtr<T> getUnset(RefPtr<T>&)
    {
        return NULL;
    }

#ifdef max
#undef max
#endif

    //! getUnset values the Integer type
    inline Integer getUnset(Integer)
    {
        return std::numeric_limits<Integer>::max() - 13;
    }

    //! getUnset values the Real type
    inline Real getUnset(Real)
    {
        return std::numeric_limits<Real>::max() - 13.0;
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
    inline Binary<N> getUnset(Binary<N> )
    {
        return Binary<N> ();
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
        return v == getUnset(v);
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
    inline bool isUnset(Binary<N> v)
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

    //! spf parsing for Integer type
    inline Integer spfToInteger(const std::string& s)
    {
        if (s != "$")
            return atoi(s.c_str());
        else
            return getUnset(Integer(0));
    }

    //! spf parsing for Real type
    inline Real spfToReal(const std::string& s)
    {
        if (s != "$")
            return atof(s.c_str());
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
