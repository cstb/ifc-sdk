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

#include "ifc2x3/IfcCircle.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcConic.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCircle::IfcCircle(Step::Id id, Step::SPFData *args) : IfcConic(id, args) {
    m_radius = Step::getUnset(m_radius);
}

IfcCircle::~IfcCircle() {
}

bool IfcCircle::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCircle(this);
}

const std::string &IfcCircle::type() {
    return IfcCircle::s_type.getName();
}

Step::ClassType IfcCircle::getClassType() {
    return IfcCircle::s_type;
}

Step::ClassType IfcCircle::getType() const {
    return IfcCircle::s_type;
}

bool IfcCircle::isOfType(Step::ClassType t) {
    return IfcCircle::s_type == t ? true : IfcConic::isOfType(t);
}

IfcPositiveLengthMeasure IfcCircle::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

void IfcCircle::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcCircle::release() {
    IfcConic::release();
}

bool IfcCircle::init() {
    bool status = IfcConic::init();
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

void IfcCircle::copy(const IfcCircle &obj, const CopyOp &copyop) {
    IfcConic::copy(obj, copyop);
    setRadius(obj.m_radius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCircle::s_type("IfcCircle");
