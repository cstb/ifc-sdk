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

#include "ifc2x3/IfcStructuralLoadSingleDisplacement.h"

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

IfcStructuralLoadSingleDisplacement::IfcStructuralLoadSingleDisplacement(Step::Id id, Step::SPFData *args) : IfcStructuralLoadStatic(id, args) {
    m_displacementX = Step::getUnset(m_displacementX);
    m_displacementY = Step::getUnset(m_displacementY);
    m_displacementZ = Step::getUnset(m_displacementZ);
    m_rotationalDisplacementRX = Step::getUnset(m_rotationalDisplacementRX);
    m_rotationalDisplacementRY = Step::getUnset(m_rotationalDisplacementRY);
    m_rotationalDisplacementRZ = Step::getUnset(m_rotationalDisplacementRZ);
}

IfcStructuralLoadSingleDisplacement::~IfcStructuralLoadSingleDisplacement() {
}

bool IfcStructuralLoadSingleDisplacement::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcStructuralLoadSingleDisplacement(this);
}

const std::string &IfcStructuralLoadSingleDisplacement::type() {
    return IfcStructuralLoadSingleDisplacement::s_type.getName();
}

Step::ClassType IfcStructuralLoadSingleDisplacement::getClassType() {
    return IfcStructuralLoadSingleDisplacement::s_type;
}

Step::ClassType IfcStructuralLoadSingleDisplacement::getType() const {
    return IfcStructuralLoadSingleDisplacement::s_type;
}

bool IfcStructuralLoadSingleDisplacement::isOfType(Step::ClassType t) {
    return IfcStructuralLoadSingleDisplacement::s_type == t ? true : IfcStructuralLoadStatic::isOfType(t);
}

IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementX() {
    if (Step::BaseObject::inited()) {
        return m_displacementX;
    }
    else {
        return Step::getUnset(m_displacementX);
    }
}

void IfcStructuralLoadSingleDisplacement::setDisplacementX(IfcLengthMeasure value) {
    m_displacementX = value;
}

IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementY() {
    if (Step::BaseObject::inited()) {
        return m_displacementY;
    }
    else {
        return Step::getUnset(m_displacementY);
    }
}

void IfcStructuralLoadSingleDisplacement::setDisplacementY(IfcLengthMeasure value) {
    m_displacementY = value;
}

IfcLengthMeasure IfcStructuralLoadSingleDisplacement::getDisplacementZ() {
    if (Step::BaseObject::inited()) {
        return m_displacementZ;
    }
    else {
        return Step::getUnset(m_displacementZ);
    }
}

void IfcStructuralLoadSingleDisplacement::setDisplacementZ(IfcLengthMeasure value) {
    m_displacementZ = value;
}

IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRX() {
    if (Step::BaseObject::inited()) {
        return m_rotationalDisplacementRX;
    }
    else {
        return Step::getUnset(m_rotationalDisplacementRX);
    }
}

void IfcStructuralLoadSingleDisplacement::setRotationalDisplacementRX(IfcPlaneAngleMeasure value) {
    m_rotationalDisplacementRX = value;
}

IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRY() {
    if (Step::BaseObject::inited()) {
        return m_rotationalDisplacementRY;
    }
    else {
        return Step::getUnset(m_rotationalDisplacementRY);
    }
}

void IfcStructuralLoadSingleDisplacement::setRotationalDisplacementRY(IfcPlaneAngleMeasure value) {
    m_rotationalDisplacementRY = value;
}

IfcPlaneAngleMeasure IfcStructuralLoadSingleDisplacement::getRotationalDisplacementRZ() {
    if (Step::BaseObject::inited()) {
        return m_rotationalDisplacementRZ;
    }
    else {
        return Step::getUnset(m_rotationalDisplacementRZ);
    }
}

void IfcStructuralLoadSingleDisplacement::setRotationalDisplacementRZ(IfcPlaneAngleMeasure value) {
    m_rotationalDisplacementRZ = value;
}

void IfcStructuralLoadSingleDisplacement::release() {
    IfcStructuralLoadStatic::release();
}

bool IfcStructuralLoadSingleDisplacement::init() {
    bool status = IfcStructuralLoadStatic::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_displacementX = Step::getUnset(m_displacementX);
    }
    else {
        m_displacementX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_displacementY = Step::getUnset(m_displacementY);
    }
    else {
        m_displacementY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_displacementZ = Step::getUnset(m_displacementZ);
    }
    else {
        m_displacementZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalDisplacementRX = Step::getUnset(m_rotationalDisplacementRX);
    }
    else {
        m_rotationalDisplacementRX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalDisplacementRY = Step::getUnset(m_rotationalDisplacementRY);
    }
    else {
        m_rotationalDisplacementRY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_rotationalDisplacementRZ = Step::getUnset(m_rotationalDisplacementRZ);
    }
    else {
        m_rotationalDisplacementRZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcStructuralLoadSingleDisplacement::copy(const IfcStructuralLoadSingleDisplacement &obj, const CopyOp &copyop) {
    IfcStructuralLoadStatic::copy(obj, copyop);
    setDisplacementX(obj.m_displacementX);
    setDisplacementY(obj.m_displacementY);
    setDisplacementZ(obj.m_displacementZ);
    setRotationalDisplacementRX(obj.m_rotationalDisplacementRX);
    setRotationalDisplacementRY(obj.m_rotationalDisplacementRY);
    setRotationalDisplacementRZ(obj.m_rotationalDisplacementRZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcStructuralLoadSingleDisplacement::s_type("IfcStructuralLoadSingleDisplacement");
