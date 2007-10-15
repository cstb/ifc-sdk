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

#include "ifc2x3/IfcFailureConnectionCondition.h"

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

IfcFailureConnectionCondition::IfcFailureConnectionCondition(Step::Id id, Step::SPFData *args) : IfcStructuralConnectionCondition(id, args) {
    m_tensionFailureX = Step::getUnset(m_tensionFailureX);
    m_tensionFailureY = Step::getUnset(m_tensionFailureY);
    m_tensionFailureZ = Step::getUnset(m_tensionFailureZ);
    m_compressionFailureX = Step::getUnset(m_compressionFailureX);
    m_compressionFailureY = Step::getUnset(m_compressionFailureY);
    m_compressionFailureZ = Step::getUnset(m_compressionFailureZ);
}

IfcFailureConnectionCondition::~IfcFailureConnectionCondition() {
}

bool IfcFailureConnectionCondition::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcFailureConnectionCondition(this);
}

const std::string &IfcFailureConnectionCondition::type() {
    return IfcFailureConnectionCondition::s_type.getName();
}

Step::ClassType IfcFailureConnectionCondition::getClassType() {
    return IfcFailureConnectionCondition::s_type;
}

Step::ClassType IfcFailureConnectionCondition::getType() const {
    return IfcFailureConnectionCondition::s_type;
}

bool IfcFailureConnectionCondition::isOfType(Step::ClassType t) {
    return IfcFailureConnectionCondition::s_type == t ? true : IfcStructuralConnectionCondition::isOfType(t);
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureX() {
    if (Step::BaseObject::inited()) {
        return m_tensionFailureX;
    }
    else {
        return Step::getUnset(m_tensionFailureX);
    }
}

void IfcFailureConnectionCondition::setTensionFailureX(IfcForceMeasure value) {
    m_tensionFailureX = value;
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureY() {
    if (Step::BaseObject::inited()) {
        return m_tensionFailureY;
    }
    else {
        return Step::getUnset(m_tensionFailureY);
    }
}

void IfcFailureConnectionCondition::setTensionFailureY(IfcForceMeasure value) {
    m_tensionFailureY = value;
}

IfcForceMeasure IfcFailureConnectionCondition::getTensionFailureZ() {
    if (Step::BaseObject::inited()) {
        return m_tensionFailureZ;
    }
    else {
        return Step::getUnset(m_tensionFailureZ);
    }
}

void IfcFailureConnectionCondition::setTensionFailureZ(IfcForceMeasure value) {
    m_tensionFailureZ = value;
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureX() {
    if (Step::BaseObject::inited()) {
        return m_compressionFailureX;
    }
    else {
        return Step::getUnset(m_compressionFailureX);
    }
}

void IfcFailureConnectionCondition::setCompressionFailureX(IfcForceMeasure value) {
    m_compressionFailureX = value;
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureY() {
    if (Step::BaseObject::inited()) {
        return m_compressionFailureY;
    }
    else {
        return Step::getUnset(m_compressionFailureY);
    }
}

void IfcFailureConnectionCondition::setCompressionFailureY(IfcForceMeasure value) {
    m_compressionFailureY = value;
}

IfcForceMeasure IfcFailureConnectionCondition::getCompressionFailureZ() {
    if (Step::BaseObject::inited()) {
        return m_compressionFailureZ;
    }
    else {
        return Step::getUnset(m_compressionFailureZ);
    }
}

void IfcFailureConnectionCondition::setCompressionFailureZ(IfcForceMeasure value) {
    m_compressionFailureZ = value;
}

void IfcFailureConnectionCondition::release() {
    IfcStructuralConnectionCondition::release();
}

bool IfcFailureConnectionCondition::init() {
    bool status = IfcStructuralConnectionCondition::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tensionFailureX = Step::getUnset(m_tensionFailureX);
    }
    else {
        m_tensionFailureX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tensionFailureY = Step::getUnset(m_tensionFailureY);
    }
    else {
        m_tensionFailureY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tensionFailureZ = Step::getUnset(m_tensionFailureZ);
    }
    else {
        m_tensionFailureZ = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_compressionFailureX = Step::getUnset(m_compressionFailureX);
    }
    else {
        m_compressionFailureX = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_compressionFailureY = Step::getUnset(m_compressionFailureY);
    }
    else {
        m_compressionFailureY = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_compressionFailureZ = Step::getUnset(m_compressionFailureZ);
    }
    else {
        m_compressionFailureZ = Step::spfToReal(arg);
    }
    return true;
}

void IfcFailureConnectionCondition::copy(const IfcFailureConnectionCondition &obj, const CopyOp &copyop) {
    IfcStructuralConnectionCondition::copy(obj, copyop);
    setTensionFailureX(obj.m_tensionFailureX);
    setTensionFailureY(obj.m_tensionFailureY);
    setTensionFailureZ(obj.m_tensionFailureZ);
    setCompressionFailureX(obj.m_compressionFailureX);
    setCompressionFailureY(obj.m_compressionFailureY);
    setCompressionFailureZ(obj.m_compressionFailureZ);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcFailureConnectionCondition::s_type("IfcFailureConnectionCondition");
