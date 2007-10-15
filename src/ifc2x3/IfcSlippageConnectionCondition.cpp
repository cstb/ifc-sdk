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

#include "ifc2x3/IfcSlippageConnectionCondition.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralConnectionCondition.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcSlippageConnectionCondition::IfcSlippageConnectionCondition(Step::Id id, Step::SPFData *args) : IfcStructuralConnectionCondition(id, args) {
    m_slippageX = Step::getUnset(m_slippageX);
    m_slippageY = Step::getUnset(m_slippageY);
    m_slippageZ = Step::getUnset(m_slippageZ);
}

IfcSlippageConnectionCondition::~IfcSlippageConnectionCondition() {
}

bool IfcSlippageConnectionCondition::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSlippageConnectionCondition(this);
}

const std::string &IfcSlippageConnectionCondition::type() {
    return IfcSlippageConnectionCondition::s_type.getName();
}

Step::ClassType IfcSlippageConnectionCondition::getClassType() {
    return IfcSlippageConnectionCondition::s_type;
}

Step::ClassType IfcSlippageConnectionCondition::getType() const {
    return IfcSlippageConnectionCondition::s_type;
}

bool IfcSlippageConnectionCondition::isOfType(Step::ClassType t) {
    return IfcSlippageConnectionCondition::s_type == t ? true : IfcStructuralConnectionCondition::isOfType(t);
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageX() {
    if (Step::BaseObject::inited()) {
        return m_slippageX;
    }
    else {
        return Step::getUnset(m_slippageX);
    }
}

void IfcSlippageConnectionCondition::setSlippageX(IfcLengthMeasure value) {
    m_slippageX = value;
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageY() {
    if (Step::BaseObject::inited()) {
        return m_slippageY;
    }
    else {
        return Step::getUnset(m_slippageY);
    }
}

void IfcSlippageConnectionCondition::setSlippageY(IfcLengthMeasure value) {
    m_slippageY = value;
}

IfcLengthMeasure IfcSlippageConnectionCondition::getSlippageZ() {
    if (Step::BaseObject::inited()) {
        return m_slippageZ;
    }
    else {
        return Step::getUnset(m_slippageZ);
    }
}

void IfcSlippageConnectionCondition::setSlippageZ(IfcLengthMeasure value) {
    m_slippageZ = value;
}

void IfcSlippageConnectionCondition::release() {
    IfcStructuralConnectionCondition::release();
}

bool IfcSlippageConnectionCondition::init() {
    bool status = IfcStructuralConnectionCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_slippageX = Step::getUnset(m_slippageX);
    }
    else {
        m_slippageX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_slippageY = Step::getUnset(m_slippageY);
    }
    else {
        m_slippageY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_slippageZ = Step::getUnset(m_slippageZ);
    }
    else {
        m_slippageZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcSlippageConnectionCondition::copy(const IfcSlippageConnectionCondition &obj, const CopyOp &copyop) {
    IfcStructuralConnectionCondition::copy(obj, copyop);
    setSlippageX(obj.m_slippageX);
    setSlippageY(obj.m_slippageY);
    setSlippageZ(obj.m_slippageZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSlippageConnectionCondition::s_type("IfcSlippageConnectionCondition");
