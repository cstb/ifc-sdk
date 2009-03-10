/*
//////////////////////////////////
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

#include "ifc2x3/IfcStructuralConnectionCondition.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralConnectionCondition::IfcStructuralConnectionCondition(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcStructuralConnectionCondition::~IfcStructuralConnectionCondition() {
}

bool IfcStructuralConnectionCondition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStructuralConnectionCondition(this);
}

const std::string &IfcStructuralConnectionCondition::type() const {
    return IfcStructuralConnectionCondition::s_type.getName();
}

const Step::ClassType &IfcStructuralConnectionCondition::getClassType() {
    return IfcStructuralConnectionCondition::s_type;
}

const Step::ClassType &IfcStructuralConnectionCondition::getType() const {
    return IfcStructuralConnectionCondition::s_type;
}

bool IfcStructuralConnectionCondition::isOfType(const Step::ClassType &t) const {
    return IfcStructuralConnectionCondition::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcStructuralConnectionCondition::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcStructuralConnectionCondition::getName() const {
    IfcStructuralConnectionCondition * deConstObject = const_cast< IfcStructuralConnectionCondition * > (this);
    return deConstObject->getName();
}

void IfcStructuralConnectionCondition::setName(const IfcLabel &value) {
    m_name = value;
}

bool IfcStructuralConnectionCondition::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcStructuralConnectionCondition::copy(const IfcStructuralConnectionCondition &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralConnectionCondition::s_type("IfcStructuralConnectionCondition");
