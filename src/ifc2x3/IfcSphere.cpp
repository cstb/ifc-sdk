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

#include "ifc2x3/IfcSphere.h"

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

IfcSphere::IfcSphere(Step::Id id, Step::SPFData *args) : IfcCsgPrimitive3D(id, args) {
    m_radius = Step::getUnset(m_radius);
}

IfcSphere::~IfcSphere() {
}

bool IfcSphere::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcSphere(this);
}

const std::string &IfcSphere::type() {
    return IfcSphere::s_type.getName();
}

Step::ClassType IfcSphere::getClassType() {
    return IfcSphere::s_type;
}

Step::ClassType IfcSphere::getType() const {
    return IfcSphere::s_type;
}

bool IfcSphere::isOfType(Step::ClassType t) {
    return IfcSphere::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcSphere::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

void IfcSphere::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcSphere::release() {
    IfcCsgPrimitive3D::release();
}

bool IfcSphere::init() {
    bool status = IfcCsgPrimitive3D::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_radius = Step::getUnset(m_radius);
    }
    else {
        m_radius = Step::spfToReal(arg);
    }
    return true;
}

void IfcSphere::copy(const IfcSphere &obj, const CopyOp &copyop) {
    IfcCsgPrimitive3D::copy(obj, copyop);
    setRadius(obj.m_radius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcSphere::s_type("IfcSphere");
