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

#include "ifc2x3/IfcStructuralLoadSingleForceWarping.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralLoadSingleForce.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralLoadSingleForceWarping::IfcStructuralLoadSingleForceWarping(Step::Id id, Step::SPFData *args) : IfcStructuralLoadSingleForce(id, args) {
    m_warpingMoment = Step::getUnset(m_warpingMoment);
}

IfcStructuralLoadSingleForceWarping::~IfcStructuralLoadSingleForceWarping() {
}

bool IfcStructuralLoadSingleForceWarping::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLoadSingleForceWarping(this);
}

const std::string &IfcStructuralLoadSingleForceWarping::type() {
    return IfcStructuralLoadSingleForceWarping::s_type.getName();
}

Step::ClassType IfcStructuralLoadSingleForceWarping::getClassType() {
    return IfcStructuralLoadSingleForceWarping::s_type;
}

Step::ClassType IfcStructuralLoadSingleForceWarping::getType() const {
    return IfcStructuralLoadSingleForceWarping::s_type;
}

bool IfcStructuralLoadSingleForceWarping::isOfType(Step::ClassType t) {
    return IfcStructuralLoadSingleForceWarping::s_type == t ? true : IfcStructuralLoadSingleForce::isOfType(t);
}

IfcWarpingMomentMeasure IfcStructuralLoadSingleForceWarping::getWarpingMoment() {
    if (Step::BaseObject::inited()) {
        return m_warpingMoment;
    }
    else {
        return Step::getUnset(m_warpingMoment);
    }
}

void IfcStructuralLoadSingleForceWarping::setWarpingMoment(IfcWarpingMomentMeasure value) {
    m_warpingMoment = value;
}

void IfcStructuralLoadSingleForceWarping::release() {
    IfcStructuralLoadSingleForce::release();
}

bool IfcStructuralLoadSingleForceWarping::init() {
    bool status = IfcStructuralLoadSingleForce::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_warpingMoment = Step::getUnset(m_warpingMoment);
    }
    else {
        m_warpingMoment = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadSingleForceWarping::copy(const IfcStructuralLoadSingleForceWarping &obj, const CopyOp &copyop) {
    IfcStructuralLoadSingleForce::copy(obj, copyop);
    setWarpingMoment(obj.m_warpingMoment);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadSingleForceWarping::s_type("IfcStructuralLoadSingleForceWarping");
