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
#ifndef _STEP_ClassType_INCLUDED
#define _STEP_ClassType_INCLUDED

#include "StepDLL.h"

#include <string>

namespace Step {

    /*!
     * \short Class to define an optimized type identifier
     */
    class STEP_DLL_DEF ClassType
    {
    public:
        ClassType(const std::string& name);
        ClassType(const ClassType & ref = ClassType::Undefined());
        ~ClassType();
        const std::string & getName() const {
            return m_name;
        }
        ClassType & operator = (const ClassType & ref);
        bool operator == (const ClassType & ref) const  {
            return m_id == ref.m_id;
        }
        bool operator < (const ClassType & ref) const  {
            return m_id < ref.m_id;
        }
        bool operator != (const ClassType & ref) const {
            return m_id != ref.m_id;
        }
        //       ClassType & operator = (const ClassType & ref) { m_id = ref.m_id; m_name = ref.m_name; }
        static const ClassType &Undefined() {
            return sUndefined;
        }
    private:
        static ClassType sUndefined;
        std::string m_name;
        long m_id;
    };

}

#endif // ClassType_INCLUDED

