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

#include "ifc2x3/IfcBoundaryFaceCondition.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundaryCondition.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBoundaryFaceCondition::IfcBoundaryFaceCondition(Step::Id id, Step::SPFData *args) : IfcBoundaryCondition(id, args) {
    m_linearStiffnessByAreaX = Step::getUnset(m_linearStiffnessByAreaX);
    m_linearStiffnessByAreaY = Step::getUnset(m_linearStiffnessByAreaY);
    m_linearStiffnessByAreaZ = Step::getUnset(m_linearStiffnessByAreaZ);
}

IfcBoundaryFaceCondition::~IfcBoundaryFaceCondition() {
}

bool IfcBoundaryFaceCondition::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBoundaryFaceCondition(this);
}

const std::string &IfcBoundaryFaceCondition::type() {
    return IfcBoundaryFaceCondition::s_type.getName();
}

Step::ClassType IfcBoundaryFaceCondition::getClassType() {
    return IfcBoundaryFaceCondition::s_type;
}

Step::ClassType IfcBoundaryFaceCondition::getType() const {
    return IfcBoundaryFaceCondition::s_type;
}

bool IfcBoundaryFaceCondition::isOfType(Step::ClassType t) {
    return IfcBoundaryFaceCondition::s_type == t ? true : IfcBoundaryCondition::isOfType(t);
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaX() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByAreaX;
    }
    else {
        return Step::getUnset(m_linearStiffnessByAreaX);
    }
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaX(IfcModulusOfSubgradeReactionMeasure value) {
    m_linearStiffnessByAreaX = value;
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaY() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByAreaY;
    }
    else {
        return Step::getUnset(m_linearStiffnessByAreaY);
    }
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaY(IfcModulusOfSubgradeReactionMeasure value) {
    m_linearStiffnessByAreaY = value;
}

IfcModulusOfSubgradeReactionMeasure IfcBoundaryFaceCondition::getLinearStiffnessByAreaZ() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessByAreaZ;
    }
    else {
        return Step::getUnset(m_linearStiffnessByAreaZ);
    }
}

void IfcBoundaryFaceCondition::setLinearStiffnessByAreaZ(IfcModulusOfSubgradeReactionMeasure value) {
    m_linearStiffnessByAreaZ = value;
}

void IfcBoundaryFaceCondition::release() {
    IfcBoundaryCondition::release();
}

bool IfcBoundaryFaceCondition::init() {
    bool status = IfcBoundaryCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByAreaX = Step::getUnset(m_linearStiffnessByAreaX);
    }
    else {
        m_linearStiffnessByAreaX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByAreaY = Step::getUnset(m_linearStiffnessByAreaY);
    }
    else {
        m_linearStiffnessByAreaY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessByAreaZ = Step::getUnset(m_linearStiffnessByAreaZ);
    }
    else {
        m_linearStiffnessByAreaZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcBoundaryFaceCondition::copy(const IfcBoundaryFaceCondition &obj, const CopyOp &copyop) {
    IfcBoundaryCondition::copy(obj, copyop);
    setLinearStiffnessByAreaX(obj.m_linearStiffnessByAreaX);
    setLinearStiffnessByAreaY(obj.m_linearStiffnessByAreaY);
    setLinearStiffnessByAreaZ(obj.m_linearStiffnessByAreaZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundaryFaceCondition::s_type("IfcBoundaryFaceCondition");
