/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
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

#include "ifc2x3/IfcBoundaryCondition.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBoundaryCondition::IfcBoundaryCondition(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcBoundaryCondition::~IfcBoundaryCondition() {
}

bool IfcBoundaryCondition::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBoundaryCondition(this);
}

const std::string &IfcBoundaryCondition::type() {
    return IfcBoundaryCondition::s_type.getName();
}

Step::ClassType IfcBoundaryCondition::getClassType() {
    return IfcBoundaryCondition::s_type;
}

Step::ClassType IfcBoundaryCondition::getType() const {
    return IfcBoundaryCondition::s_type;
}

bool IfcBoundaryCondition::isOfType(Step::ClassType t) {
    return IfcBoundaryCondition::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcBoundaryCondition::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

void IfcBoundaryCondition::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcBoundaryCondition::release() {
}

bool IfcBoundaryCondition::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::spfToString(arg);
    }
    return true;
}

void IfcBoundaryCondition::copy(const IfcBoundaryCondition &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundaryCondition::s_type("IfcBoundaryCondition");
