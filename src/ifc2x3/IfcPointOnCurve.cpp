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
 *     Copyright (C) 2009 CSTB                                             *
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
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPointOnCurve::IfcPointOnCurve(Step::Id id, Step::SPFData *args) : IfcPoint(id, args) {
    m_basisCurve = NULL;
    m_pointParameter = Step::getUnset(m_pointParameter);
}

IfcPointOnCurve::~IfcPointOnCurve() {
}

bool IfcPointOnCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPointOnCurve(this);
}

const std::string &IfcPointOnCurve::type() const {
    return IfcPointOnCurve::s_type.getName();
}

const Step::ClassType &IfcPointOnCurve::getClassType() {
    return IfcPointOnCurve::s_type;
}

const Step::ClassType &IfcPointOnCurve::getType() const {
    return IfcPointOnCurve::s_type;
}

bool IfcPointOnCurve::isOfType(const Step::ClassType &t) const {
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

const IfcCurve *IfcPointOnCurve::getBasisCurve() const {
    IfcPointOnCurve * deConstObject = const_cast< IfcPointOnCurve * > (this);
    return deConstObject->getBasisCurve();
}

void IfcPointOnCurve::setBasisCurve(const Step::RefPtr< IfcCurve > &value) {
    m_basisCurve = value;
}

void IfcPointOnCurve::unsetBasisCurve() {
    m_basisCurve = Step::getUnset(getBasisCurve());
}

bool IfcPointOnCurve::testBasisCurve() const {
    return !Step::isUnset(getBasisCurve());
}

IfcParameterValue IfcPointOnCurve::getPointParameter() {
    if (Step::BaseObject::inited()) {
        return m_pointParameter;
    }
    else {
        return Step::getUnset(m_pointParameter);
    }
}

const IfcParameterValue IfcPointOnCurve::getPointParameter() const {
    IfcPointOnCurve * deConstObject = const_cast< IfcPointOnCurve * > (this);
    return deConstObject->getPointParameter();
}

void IfcPointOnCurve::setPointParameter(IfcParameterValue value) {
    m_pointParameter = value;
}

void IfcPointOnCurve::unsetPointParameter() {
    m_pointParameter = Step::getUnset(getPointParameter());
}

bool IfcPointOnCurve::testPointParameter() const {
    return !Step::isUnset(getPointParameter());
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
        m_basisCurve = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
    setBasisCurve((IfcCurve*)copyop(obj.m_basisCurve.get()));
    setPointParameter(obj.m_pointParameter);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPointOnCurve::s_type("IfcPointOnCurve");
