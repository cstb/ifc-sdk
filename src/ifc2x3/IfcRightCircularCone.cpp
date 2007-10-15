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

#include "ifc2x3/IfcRightCircularCone.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCsgPrimitive3D.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcRightCircularCone::IfcRightCircularCone(Step::Id id, Step::SPFData *args) : IfcCsgPrimitive3D(id, args) {
    m_height = Step::getUnset(m_height);
    m_bottomRadius = Step::getUnset(m_bottomRadius);
}

IfcRightCircularCone::~IfcRightCircularCone() {
}

bool IfcRightCircularCone::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcRightCircularCone(this);
}

const std::string &IfcRightCircularCone::type() {
    return IfcRightCircularCone::s_type.getName();
}

Step::ClassType IfcRightCircularCone::getClassType() {
    return IfcRightCircularCone::s_type;
}

Step::ClassType IfcRightCircularCone::getType() const {
    return IfcRightCircularCone::s_type;
}

bool IfcRightCircularCone::isOfType(Step::ClassType t) {
    return IfcRightCircularCone::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcRightCircularCone::getHeight() {
    if (Step::BaseObject::inited()) {
        return m_height;
    }
    else {
        return Step::getUnset(m_height);
    }
}

void IfcRightCircularCone::setHeight(IfcPositiveLengthMeasure value) {
    m_height = value;
}

IfcPositiveLengthMeasure IfcRightCircularCone::getBottomRadius() {
    if (Step::BaseObject::inited()) {
        return m_bottomRadius;
    }
    else {
        return Step::getUnset(m_bottomRadius);
    }
}

void IfcRightCircularCone::setBottomRadius(IfcPositiveLengthMeasure value) {
    m_bottomRadius = value;
}

void IfcRightCircularCone::release() {
    IfcCsgPrimitive3D::release();
}

bool IfcRightCircularCone::init() {
    bool status = IfcCsgPrimitive3D::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_height = Step::getUnset(m_height);
    }
    else {
        m_height = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_bottomRadius = Step::getUnset(m_bottomRadius);
    }
    else {
        m_bottomRadius = Step::spfToReal(arg);
    }
    return true;
}

void IfcRightCircularCone::copy(const IfcRightCircularCone &obj, const CopyOp &copyop) {
    IfcCsgPrimitive3D::copy(obj, copyop);
    setHeight(obj.m_height);
    setBottomRadius(obj.m_bottomRadius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRightCircularCone::s_type("IfcRightCircularCone");
