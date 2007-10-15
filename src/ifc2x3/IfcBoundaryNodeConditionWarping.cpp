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

#include "ifc2x3/IfcBoundaryNodeConditionWarping.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcBoundaryNodeCondition.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcBoundaryNodeConditionWarping::IfcBoundaryNodeConditionWarping(Step::Id id, Step::SPFData *args) : IfcBoundaryNodeCondition(id, args) {
    m_warpingStiffness = Step::getUnset(m_warpingStiffness);
}

IfcBoundaryNodeConditionWarping::~IfcBoundaryNodeConditionWarping() {
}

bool IfcBoundaryNodeConditionWarping::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcBoundaryNodeConditionWarping(this);
}

const std::string &IfcBoundaryNodeConditionWarping::type() {
    return IfcBoundaryNodeConditionWarping::s_type.getName();
}

Step::ClassType IfcBoundaryNodeConditionWarping::getClassType() {
    return IfcBoundaryNodeConditionWarping::s_type;
}

Step::ClassType IfcBoundaryNodeConditionWarping::getType() const {
    return IfcBoundaryNodeConditionWarping::s_type;
}

bool IfcBoundaryNodeConditionWarping::isOfType(Step::ClassType t) {
    return IfcBoundaryNodeConditionWarping::s_type == t ? true : IfcBoundaryNodeCondition::isOfType(t);
}

IfcWarpingMomentMeasure IfcBoundaryNodeConditionWarping::getWarpingStiffness() {
    if (Step::BaseObject::inited()) {
        return m_warpingStiffness;
    }
    else {
        return Step::getUnset(m_warpingStiffness);
    }
}

void IfcBoundaryNodeConditionWarping::setWarpingStiffness(IfcWarpingMomentMeasure value) {
    m_warpingStiffness = value;
}

void IfcBoundaryNodeConditionWarping::release() {
    IfcBoundaryNodeCondition::release();
}

bool IfcBoundaryNodeConditionWarping::init() {
    bool status = IfcBoundaryNodeCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_warpingStiffness = Step::getUnset(m_warpingStiffness);
    }
    else {
        m_warpingStiffness = Step::spfToReal(arg);
    }
    return true;
}

void IfcBoundaryNodeConditionWarping::copy(const IfcBoundaryNodeConditionWarping &obj, const CopyOp &copyop) {
    IfcBoundaryNodeCondition::copy(obj, copyop);
    setWarpingStiffness(obj.m_warpingStiffness);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundaryNodeConditionWarping::s_type("IfcBoundaryNodeConditionWarping");
