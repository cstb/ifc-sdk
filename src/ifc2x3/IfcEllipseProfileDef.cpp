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

#include "ifc2x3/IfcEllipseProfileDef.h"

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

IfcEllipseProfileDef::IfcEllipseProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_semiAxis1 = Step::getUnset(m_semiAxis1);
    m_semiAxis2 = Step::getUnset(m_semiAxis2);
}

IfcEllipseProfileDef::~IfcEllipseProfileDef() {
}

bool IfcEllipseProfileDef::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEllipseProfileDef(this);
}

const std::string &IfcEllipseProfileDef::type() {
    return IfcEllipseProfileDef::s_type.getName();
}

Step::ClassType IfcEllipseProfileDef::getClassType() {
    return IfcEllipseProfileDef::s_type;
}

Step::ClassType IfcEllipseProfileDef::getType() const {
    return IfcEllipseProfileDef::s_type;
}

bool IfcEllipseProfileDef::isOfType(Step::ClassType t) {
    return IfcEllipseProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis1() {
    if (Step::BaseObject::inited()) {
        return m_semiAxis1;
    }
    else {
        return Step::getUnset(m_semiAxis1);
    }
}

void IfcEllipseProfileDef::setSemiAxis1(IfcPositiveLengthMeasure value) {
    m_semiAxis1 = value;
}

IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis2() {
    if (Step::BaseObject::inited()) {
        return m_semiAxis2;
    }
    else {
        return Step::getUnset(m_semiAxis2);
    }
}

void IfcEllipseProfileDef::setSemiAxis2(IfcPositiveLengthMeasure value) {
    m_semiAxis2 = value;
}

void IfcEllipseProfileDef::release() {
    IfcParameterizedProfileDef::release();
}

bool IfcEllipseProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_semiAxis1 = Step::getUnset(m_semiAxis1);
    }
    else {
        m_semiAxis1 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_semiAxis2 = Step::getUnset(m_semiAxis2);
    }
    else {
        m_semiAxis2 = Step::spfToReal(arg);
    }
    return true;
}

void IfcEllipseProfileDef::copy(const IfcEllipseProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setSemiAxis1(obj.m_semiAxis1);
    setSemiAxis2(obj.m_semiAxis2);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEllipseProfileDef::s_type("IfcEllipseProfileDef");
