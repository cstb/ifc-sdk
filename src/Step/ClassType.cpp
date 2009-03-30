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
#include "Step/ClassType.h"

using namespace Step;

static long s_id = 0;

ClassType ClassType::sUndefined("Undefined");

ClassType::ClassType(const std::string &name)
{
    m_name = name;
    m_id = s_id++;
}

ClassType::ClassType(const ClassType &ref)
{
    m_name = ref.m_name;
    m_id = ref.m_id;
}

ClassType &ClassType::operator =(const ClassType &ref)
{
    m_name = ref.m_name;
    m_id = ref.m_id;

    return *this;
}

ClassType::~ClassType()
{
}

const std::string & ClassType::getName() const
{
    return m_name;
}

bool ClassType::operator ==(const ClassType & ref) const
{
    return m_id == ref.m_id;
}

bool ClassType::operator <(const ClassType & ref) const
{
    return m_id < ref.m_id;
}

bool ClassType::operator !=(const ClassType & ref) const
{
    return m_id != ref.m_id;
}

const ClassType &ClassType::Undefined()
{
    return sUndefined;
}
