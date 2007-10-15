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

#include "ifc2x3/IfcEllipse.h"

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

IfcEllipse::IfcEllipse(Step::Id id, Step::SPFData *args) : IfcConic(id, args) {
    m_semiAxis1 = Step::getUnset(m_semiAxis1);
    m_semiAxis2 = Step::getUnset(m_semiAxis2);
}

IfcEllipse::~IfcEllipse() {
}

bool IfcEllipse::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcEllipse(this);
}

const std::string &IfcEllipse::type() {
    return IfcEllipse::s_type.getName();
}

Step::ClassType IfcEllipse::getClassType() {
    return IfcEllipse::s_type;
}

Step::ClassType IfcEllipse::getType() const {
    return IfcEllipse::s_type;
}

bool IfcEllipse::isOfType(Step::ClassType t) {
    return IfcEllipse::s_type == t ? true : IfcConic::isOfType(t);
}

IfcPositiveLengthMeasure IfcEllipse::getSemiAxis1() {
    if (Step::BaseObject::inited()) {
        return m_semiAxis1;
    }
    else {
        return Step::getUnset(m_semiAxis1);
    }
}

void IfcEllipse::setSemiAxis1(IfcPositiveLengthMeasure value) {
    m_semiAxis1 = value;
}

IfcPositiveLengthMeasure IfcEllipse::getSemiAxis2() {
    if (Step::BaseObject::inited()) {
        return m_semiAxis2;
    }
    else {
        return Step::getUnset(m_semiAxis2);
    }
}

void IfcEllipse::setSemiAxis2(IfcPositiveLengthMeasure value) {
    m_semiAxis2 = value;
}

void IfcEllipse::release() {
    IfcConic::release();
}

bool IfcEllipse::init() {
    bool status = IfcConic::init();
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

void IfcEllipse::copy(const IfcEllipse &obj, const CopyOp &copyop) {
    IfcConic::copy(obj, copyop);
    setSemiAxis1(obj.m_semiAxis1);
    setSemiAxis2(obj.m_semiAxis2);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcEllipse::s_type("IfcEllipse");
