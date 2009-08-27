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
#ifndef Step_ClassType_h
#define Step_ClassType_h

#include "StepDLL.h"

#include <map>
#include <string>

namespace Step {

    /*!
     * \short Class to define an optimized type identifier
     */
    class STEP_DLL_DEF ClassType
    {
    public:
        /*!
         * constructor with a name
         * \param name the name of the ClassType
         */
        ClassType(const std::string& name);

        /*!
         * copy constructor
         * \param ref the ClassType to copy from of if none given the Undefined One
         */
        ClassType(const ClassType & ref = ClassType::Undefined());

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
        ClassType(const std::string& name, long id);

        static ClassType sUndefined;
        std::string m_name;
        long m_id;
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
