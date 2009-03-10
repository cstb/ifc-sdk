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
#include <Step/BaseSPFObject.h>
#include <Step/SPFData.h>
#include <Step/BaseVisitor.h>

#include <Step/logger.h>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif

Step::BaseSPFObject::BaseSPFObject(Id id, SPFData* data)
        : BaseEntity(id, data), m_allocFuncType(0)
{
}


const Step::ClassType& Step::BaseSPFObject::getClassType() {
    return Step::BaseSPFObject::s_type;
}

const Step::ClassType& Step::BaseSPFObject::getType() const {
    return Step::BaseSPFObject::s_type;
}

bool Step::BaseSPFObject::isOfType(const Step::ClassType& t) const {
    return Step::BaseSPFObject::s_type == t ? true : Step::BaseEntity::isOfType(t);
}

const std::string &Step::BaseSPFObject::type() const {
    return Step::BaseSPFObject::s_type.getName();
}

bool Step::BaseSPFObject::init()
{
    LOG_WARNING("Tried to init a BaseSPFObject instance");
    return false;
}


STEP_DLL_DEF Step::ClassType Step::BaseSPFObject::s_type("BaseSPFObject");
