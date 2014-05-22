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

#ifndef Step_ClassType_h
#define Step_ClassType_h

#ifdef _MSC_VER
# pragma warning(disable: 4251)
#endif

#include <Step/Export.h>

#include <map>
#include <string>

namespace Step {

    /*!
     * \short Class to define an optimized type identifier
     */
    class STEP_EXPORT ClassType
    {
    public:
        /*!
         * constructor with a name
         * \param name the name of the ClassType
         */
        ClassType(const std::string& name);

        /*!
         * \param defaults to the Undefined One
         */
        ClassType();

		~ClassType();

        /*!
         * get name
         * \return the name of the ClassType
         */
        const std::string & getName() const;

        /*!
         * set to the value to another ClassType
         * \param ref the ClassType to get new values from
         * \return a reference to this ClassType
         */
        ClassType & operator =(const ClassType & ref);

        /*!
         * comparison operators
         * \param ref the ClassType to compare to
         * \return is the operator is successful
         * \{
         */
        bool operator ==(const ClassType & ref) const;
        bool operator <(const ClassType & ref) const;
        bool operator !=(const ClassType & ref) const;
        //! \}

        /*!
         * This is the unique Undefined ClassType
         * \return a reference to the unique Undefined ClassType
         */
        static const ClassType &Undefined();

        /*!
         * Find the ClassType of given String name
         * \return Undefined() if not found
         */
        static const ClassType &find(const std::string & name);

    private:
        //! private constructor used to fill the static map
        ClassType(const std::string& name, int id);

        static ClassType sUndefined;
        std::string m_name;
        int m_id;
    };

}

#define ClassType_definitions() \
public:\
virtual const std::string &type() const; \
static const Step::ClassType &getClassType();\
virtual const Step::ClassType &getType() const;\
virtual bool isOfType(const Step::ClassType& t) const;\
private:\
static Step::ClassType s_type;

#define ClassType_root_implementations(E,T) \
E Step::ClassType T::s_type(#T); \
const std::string &T::type() const { return T::s_type.getName(); } \
const Step::ClassType &T::getClassType() { return T::s_type; } \
const Step::ClassType &T::getType() const { return T::s_type; } \
bool T::isOfType(const Step::ClassType &t) const { return T::s_type == t; }

#define ClassType_child_implementations(E,T,P) \
E Step::ClassType T::s_type(#T); \
const std::string &T::type() const { return T::s_type.getName(); } \
const Step::ClassType &T::getClassType() { return T::s_type; } \
const Step::ClassType &T::getType() const { return T::s_type; } \
bool T::isOfType(const Step::ClassType &t) const { return T::s_type == t ? true : P::isOfType(t); }

#endif // ClassType_INCLUDED
