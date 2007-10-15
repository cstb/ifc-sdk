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

#include "ifc2x3/IfcPointOnCurve.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcCurve.h"
#include "ifc2x3/IfcPoint.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcPointOnCurve::IfcPointOnCurve(Step::Id id, Step::SPFData *args) : IfcPoint(id, args) {
    m_basisCurve = NULL;
    m_pointParameter = Step::getUnset(m_pointParameter);
}

IfcPointOnCurve::~IfcPointOnCurve() {
}

bool IfcPointOnCurve::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcPointOnCurve(this);
}

const std::string &IfcPointOnCurve::type() {
    return IfcPointOnCurve::s_type.getName();
}

Step::ClassType IfcPointOnCurve::getClassType() {
    return IfcPointOnCurve::s_type;
}

Step::ClassType IfcPointOnCurve::getType() const {
    return IfcPointOnCurve::s_type;
}

bool IfcPointOnCurve::isOfType(Step::ClassType t) {
    return IfcPointOnCurve::s_type == t ? true : IfcPoint::isOfType(t);
}

IfcCurve *IfcPointOnCurve::getBasisCurve() {
    if (Step::BaseObject::inited()) {
        return m_basisCurve.get();
    }
    else {
        return NULL;
    }
}

void IfcPointOnCurve::setBasisCurve(const Step::RefPtr< IfcCurve > &value) {
    m_basisCurve = value;
}

IfcParameterValue IfcPointOnCurve::getPointParameter() {
    if (Step::BaseObject::inited()) {
        return m_pointParameter;
    }
    else {
        return Step::getUnset(m_pointParameter);
    }
}

void IfcPointOnCurve::setPointParameter(IfcParameterValue value) {
    m_pointParameter = value;
}

void IfcPointOnCurve::release() {
    IfcPoint::release();
    m_basisCurve.release();
}

bool IfcPointOnCurve::init() {
    bool status = IfcPoint::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_basisCurve = NULL;
    }
    else {
        m_basisCurve = static_cast< IfcCurve * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pointParameter = Step::getUnset(m_pointParameter);
    }
    else {
        m_pointParameter = Step::spfToReal(arg);
    }
    return true;
}

void IfcPointOnCurve::copy(const IfcPointOnCurve &obj, const CopyOp &copyop) {
    IfcPoint::copy(obj, copyop);
    setBasisCurve(copyop(obj.m_basisCurve.get()));
    setPointParameter(obj.m_pointParameter);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPointOnCurve::s_type("IfcPointOnCurve");
