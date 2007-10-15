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

#include "ifc2x3/IfcStructuralLoadSingleForce.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcStructuralLoadStatic.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcStructuralLoadSingleForce::IfcStructuralLoadSingleForce(Step::Id id, Step::SPFData *args) : IfcStructuralLoadStatic(id, args) {
    m_forceX = Step::getUnset(m_forceX);
    m_forceY = Step::getUnset(m_forceY);
    m_forceZ = Step::getUnset(m_forceZ);
    m_momentX = Step::getUnset(m_momentX);
    m_momentY = Step::getUnset(m_momentY);
    m_momentZ = Step::getUnset(m_momentZ);
}

IfcStructuralLoadSingleForce::~IfcStructuralLoadSingleForce() {
}

bool IfcStructuralLoadSingleForce::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLoadSingleForce(this);
}

const std::string &IfcStructuralLoadSingleForce::type() {
    return IfcStructuralLoadSingleForce::s_type.getName();
}

Step::ClassType IfcStructuralLoadSingleForce::getClassType() {
    return IfcStructuralLoadSingleForce::s_type;
}

Step::ClassType IfcStructuralLoadSingleForce::getType() const {
    return IfcStructuralLoadSingleForce::s_type;
}

bool IfcStructuralLoadSingleForce::isOfType(Step::ClassType t) {
    return IfcStructuralLoadSingleForce::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceX() {
    if (Step::BaseObject::inited()) {
        return m_forceX;
    }
    else {
        return Step::getUnset(m_forceX);
    }
}

void IfcStructuralLoadSingleForce::setForceX(IfcForceMeasure value) {
    m_forceX = value;
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceY() {
    if (Step::BaseObject::inited()) {
        return m_forceY;
    }
    else {
        return Step::getUnset(m_forceY);
    }
}

void IfcStructuralLoadSingleForce::setForceY(IfcForceMeasure value) {
    m_forceY = value;
}

IfcForceMeasure IfcStructuralLoadSingleForce::getForceZ() {
    if (Step::BaseObject::inited()) {
        return m_forceZ;
    }
    else {
        return Step::getUnset(m_forceZ);
    }
}

void IfcStructuralLoadSingleForce::setForceZ(IfcForceMeasure value) {
    m_forceZ = value;
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentX() {
    if (Step::BaseObject::inited()) {
        return m_momentX;
    }
    else {
        return Step::getUnset(m_momentX);
    }
}

void IfcStructuralLoadSingleForce::setMomentX(IfcTorqueMeasure value) {
    m_momentX = value;
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentY() {
    if (Step::BaseObject::inited()) {
        return m_momentY;
    }
    else {
        return Step::getUnset(m_momentY);
    }
}

void IfcStructuralLoadSingleForce::setMomentY(IfcTorqueMeasure value) {
    m_momentY = value;
}

IfcTorqueMeasure IfcStructuralLoadSingleForce::getMomentZ() {
    if (Step::BaseObject::inited()) {
        return m_momentZ;
    }
    else {
        return Step::getUnset(m_momentZ);
    }
}

void IfcStructuralLoadSingleForce::setMomentZ(IfcTorqueMeasure value) {
    m_momentZ = value;
}

void IfcStructuralLoadSingleForce::release() {
    IfcStructuralLoadStatic::release();
}

bool IfcStructuralLoadSingleForce::init() {
    bool status = IfcStructuralLoadStatic::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_forceX = Step::getUnset(m_forceX);
    }
    else {
        m_forceX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_forceY = Step::getUnset(m_forceY);
    }
    else {
        m_forceY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_forceZ = Step::getUnset(m_forceZ);
    }
    else {
        m_forceZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_momentX = Step::getUnset(m_momentX);
    }
    else {
        m_momentX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_momentY = Step::getUnset(m_momentY);
    }
    else {
        m_momentY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_momentZ = Step::getUnset(m_momentZ);
    }
    else {
        m_momentZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadSingleForce::copy(const IfcStructuralLoadSingleForce &obj, const CopyOp &copyop) {
    IfcStructuralLoadStatic::copy(obj, copyop);
    setForceX(obj.m_forceX);
    setForceY(obj.m_forceY);
    setForceZ(obj.m_forceZ);
    setMomentX(obj.m_momentX);
    setMomentY(obj.m_momentY);
    setMomentZ(obj.m_momentZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadSingleForce::s_type("IfcStructuralLoadSingleForce");
