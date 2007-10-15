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

#include "ifc2x3/IfcStructuralLoadLinearForce.h"

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

IfcStructuralLoadLinearForce::IfcStructuralLoadLinearForce(Step::Id id, Step::SPFData *args) : IfcStructuralLoadStatic(id, args) {
    m_linearForceX = Step::getUnset(m_linearForceX);
    m_linearForceY = Step::getUnset(m_linearForceY);
    m_linearForceZ = Step::getUnset(m_linearForceZ);
    m_linearMomentX = Step::getUnset(m_linearMomentX);
    m_linearMomentY = Step::getUnset(m_linearMomentY);
    m_linearMomentZ = Step::getUnset(m_linearMomentZ);
}

IfcStructuralLoadLinearForce::~IfcStructuralLoadLinearForce() {
}

bool IfcStructuralLoadLinearForce::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLoadLinearForce(this);
}

const std::string &IfcStructuralLoadLinearForce::type() {
    return IfcStructuralLoadLinearForce::s_type.getName();
}

Step::ClassType IfcStructuralLoadLinearForce::getClassType() {
    return IfcStructuralLoadLinearForce::s_type;
}

Step::ClassType IfcStructuralLoadLinearForce::getType() const {
    return IfcStructuralLoadLinearForce::s_type;
}

bool IfcStructuralLoadLinearForce::isOfType(Step::ClassType t) {
    return IfcStructuralLoadLinearForce::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceX() {
    if (Step::BaseObject::inited()) {
        return m_linearForceX;
    }
    else {
        return Step::getUnset(m_linearForceX);
    }
}

void IfcStructuralLoadLinearForce::setLinearForceX(IfcLinearForceMeasure value) {
    m_linearForceX = value;
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceY() {
    if (Step::BaseObject::inited()) {
        return m_linearForceY;
    }
    else {
        return Step::getUnset(m_linearForceY);
    }
}

void IfcStructuralLoadLinearForce::setLinearForceY(IfcLinearForceMeasure value) {
    m_linearForceY = value;
}

IfcLinearForceMeasure IfcStructuralLoadLinearForce::getLinearForceZ() {
    if (Step::BaseObject::inited()) {
        return m_linearForceZ;
    }
    else {
        return Step::getUnset(m_linearForceZ);
    }
}

void IfcStructuralLoadLinearForce::setLinearForceZ(IfcLinearForceMeasure value) {
    m_linearForceZ = value;
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentX() {
    if (Step::BaseObject::inited()) {
        return m_linearMomentX;
    }
    else {
        return Step::getUnset(m_linearMomentX);
    }
}

void IfcStructuralLoadLinearForce::setLinearMomentX(IfcLinearMomentMeasure value) {
    m_linearMomentX = value;
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentY() {
    if (Step::BaseObject::inited()) {
        return m_linearMomentY;
    }
    else {
        return Step::getUnset(m_linearMomentY);
    }
}

void IfcStructuralLoadLinearForce::setLinearMomentY(IfcLinearMomentMeasure value) {
    m_linearMomentY = value;
}

IfcLinearMomentMeasure IfcStructuralLoadLinearForce::getLinearMomentZ() {
    if (Step::BaseObject::inited()) {
        return m_linearMomentZ;
    }
    else {
        return Step::getUnset(m_linearMomentZ);
    }
}

void IfcStructuralLoadLinearForce::setLinearMomentZ(IfcLinearMomentMeasure value) {
    m_linearMomentZ = value;
}

void IfcStructuralLoadLinearForce::release() {
    IfcStructuralLoadStatic::release();
}

bool IfcStructuralLoadLinearForce::init() {
    bool status = IfcStructuralLoadStatic::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearForceX = Step::getUnset(m_linearForceX);
    }
    else {
        m_linearForceX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearForceY = Step::getUnset(m_linearForceY);
    }
    else {
        m_linearForceY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearForceZ = Step::getUnset(m_linearForceZ);
    }
    else {
        m_linearForceZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearMomentX = Step::getUnset(m_linearMomentX);
    }
    else {
        m_linearMomentX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearMomentY = Step::getUnset(m_linearMomentY);
    }
    else {
        m_linearMomentY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearMomentZ = Step::getUnset(m_linearMomentZ);
    }
    else {
        m_linearMomentZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadLinearForce::copy(const IfcStructuralLoadLinearForce &obj, const CopyOp &copyop) {
    IfcStructuralLoadStatic::copy(obj, copyop);
    setLinearForceX(obj.m_linearForceX);
    setLinearForceY(obj.m_linearForceY);
    setLinearForceZ(obj.m_linearForceZ);
    setLinearMomentX(obj.m_linearMomentX);
    setLinearMomentY(obj.m_linearMomentY);
    setLinearMomentZ(obj.m_linearMomentZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadLinearForce::s_type("IfcStructuralLoadLinearForce");
