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

#include "ifc2x3/IfcBoundaryNodeCondition.h"

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

IfcBoundaryNodeCondition::IfcBoundaryNodeCondition(Step::Id id, Step::SPFData *args) : IfcBoundaryCondition(id, args) {
    m_linearStiffnessX = Step::getUnset(m_linearStiffnessX);
    m_linearStiffnessY = Step::getUnset(m_linearStiffnessY);
    m_linearStiffnessZ = Step::getUnset(m_linearStiffnessZ);
    m_rotationalStiffnessX = Step::getUnset(m_rotationalStiffnessX);
    m_rotationalStiffnessY = Step::getUnset(m_rotationalStiffnessY);
    m_rotationalStiffnessZ = Step::getUnset(m_rotationalStiffnessZ);
}

IfcBoundaryNodeCondition::~IfcBoundaryNodeCondition() {
}

bool IfcBoundaryNodeCondition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBoundaryNodeCondition(this);
}

const std::string &IfcBoundaryNodeCondition::type() const {
    return IfcBoundaryNodeCondition::s_type.getName();
}

const Step::ClassType &IfcBoundaryNodeCondition::getClassType() {
    return IfcBoundaryNodeCondition::s_type;
}

const Step::ClassType &IfcBoundaryNodeCondition::getType() const {
    return IfcBoundaryNodeCondition::s_type;
}

bool IfcBoundaryNodeCondition::isOfType(const Step::ClassType &t) const {
    return IfcBoundaryNodeCondition::s_type == t ? true : IfcBoundaryCondition::isOfType(t);
}

IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessX() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessX;
    }
    else {
        return Step::getUnset(m_linearStiffnessX);
    }
}

const IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessX() const {
    IfcBoundaryNodeCondition * deConstObject = const_cast< IfcBoundaryNodeCondition * > (this);
    return deConstObject->getLinearStiffnessX();
}

void IfcBoundaryNodeCondition::setLinearStiffnessX(IfcLinearStiffnessMeasure value) {
    m_linearStiffnessX = value;
}

IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessY() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessY;
    }
    else {
        return Step::getUnset(m_linearStiffnessY);
    }
}

const IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessY() const {
    IfcBoundaryNodeCondition * deConstObject = const_cast< IfcBoundaryNodeCondition * > (this);
    return deConstObject->getLinearStiffnessY();
}

void IfcBoundaryNodeCondition::setLinearStiffnessY(IfcLinearStiffnessMeasure value) {
    m_linearStiffnessY = value;
}

IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessZ() {
    if (Step::BaseObject::inited()) {
        return m_linearStiffnessZ;
    }
    else {
        return Step::getUnset(m_linearStiffnessZ);
    }
}

const IfcLinearStiffnessMeasure IfcBoundaryNodeCondition::getLinearStiffnessZ() const {
    IfcBoundaryNodeCondition * deConstObject = const_cast< IfcBoundaryNodeCondition * > (this);
    return deConstObject->getLinearStiffnessZ();
}

void IfcBoundaryNodeCondition::setLinearStiffnessZ(IfcLinearStiffnessMeasure value) {
    m_linearStiffnessZ = value;
}

IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessX() {
    if (Step::BaseObject::inited()) {
        return m_rotationalStiffnessX;
    }
    else {
        return Step::getUnset(m_rotationalStiffnessX);
    }
}

const IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessX() const {
    IfcBoundaryNodeCondition * deConstObject = const_cast< IfcBoundaryNodeCondition * > (this);
    return deConstObject->getRotationalStiffnessX();
}

void IfcBoundaryNodeCondition::setRotationalStiffnessX(IfcRotationalStiffnessMeasure value) {
    m_rotationalStiffnessX = value;
}

IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessY() {
    if (Step::BaseObject::inited()) {
        return m_rotationalStiffnessY;
    }
    else {
        return Step::getUnset(m_rotationalStiffnessY);
    }
}

const IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessY() const {
    IfcBoundaryNodeCondition * deConstObject = const_cast< IfcBoundaryNodeCondition * > (this);
    return deConstObject->getRotationalStiffnessY();
}

void IfcBoundaryNodeCondition::setRotationalStiffnessY(IfcRotationalStiffnessMeasure value) {
    m_rotationalStiffnessY = value;
}

IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessZ() {
    if (Step::BaseObject::inited()) {
        return m_rotationalStiffnessZ;
    }
    else {
        return Step::getUnset(m_rotationalStiffnessZ);
    }
}

const IfcRotationalStiffnessMeasure IfcBoundaryNodeCondition::getRotationalStiffnessZ() const {
    IfcBoundaryNodeCondition * deConstObject = const_cast< IfcBoundaryNodeCondition * > (this);
    return deConstObject->getRotationalStiffnessZ();
}

void IfcBoundaryNodeCondition::setRotationalStiffnessZ(IfcRotationalStiffnessMeasure value) {
    m_rotationalStiffnessZ = value;
}

bool IfcBoundaryNodeCondition::init() {
    bool status = IfcBoundaryCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessX = Step::getUnset(m_linearStiffnessX);
    }
    else {
        m_linearStiffnessX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessY = Step::getUnset(m_linearStiffnessY);
    }
    else {
        m_linearStiffnessY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_linearStiffnessZ = Step::getUnset(m_linearStiffnessZ);
    }
    else {
        m_linearStiffnessZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalStiffnessX = Step::getUnset(m_rotationalStiffnessX);
    }
    else {
        m_rotationalStiffnessX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalStiffnessY = Step::getUnset(m_rotationalStiffnessY);
    }
    else {
        m_rotationalStiffnessY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalStiffnessZ = Step::getUnset(m_rotationalStiffnessZ);
    }
    else {
        m_rotationalStiffnessZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcBoundaryNodeCondition::copy(const IfcBoundaryNodeCondition &obj, const CopyOp &copyop) {
    IfcBoundaryCondition::copy(obj, copyop);
    setLinearStiffnessX(obj.m_linearStiffnessX);
    setLinearStiffnessY(obj.m_linearStiffnessY);
    setLinearStiffnessZ(obj.m_linearStiffnessZ);
    setRotationalStiffnessX(obj.m_rotationalStiffnessX);
    setRotationalStiffnessY(obj.m_rotationalStiffnessY);
    setRotationalStiffnessZ(obj.m_rotationalStiffnessZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcBoundaryNodeCondition::s_type("IfcBoundaryNodeCondition");
