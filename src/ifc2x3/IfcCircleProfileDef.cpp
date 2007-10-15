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

#include "ifc2x3/IfcCircleProfileDef.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcParameterizedProfileDef.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcCircleProfileDef::IfcCircleProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_radius = Step::getUnset(m_radius);
}

IfcCircleProfileDef::~IfcCircleProfileDef() {
}

bool IfcCircleProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcCircleProfileDef(this);
}

const std::string &IfcCircleProfileDef::type() {
    return IfcCircleProfileDef::s_type.getName();
}

Step::ClassType IfcCircleProfileDef::getClassType() {
    return IfcCircleProfileDef::s_type;
}

Step::ClassType IfcCircleProfileDef::getType() const {
    return IfcCircleProfileDef::s_type;
}

bool IfcCircleProfileDef::isOfType(Step::ClassType t) {
    return IfcCircleProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCircleProfileDef::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

void IfcCircleProfileDef::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcCircleProfileDef::release() {
    IfcParameterizedProfileDef::release();
}

bool IfcCircleProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
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

void IfcCircleProfileDef::copy(const IfcCircleProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setRadius(obj.m_radius);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcCircleProfileDef::s_type("IfcCircleProfileDef");
