// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.



#include <ifc2x3/IfcBSplineCurve.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBoundedCurve.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcBSplineCurve::IfcBSplineCurve(Step::Id id, Step::SPFData *args) : IfcBoundedCurve(id, args) {
    m_degree = Step::getUnset(m_degree);
    m_curveForm = IfcBSplineCurveForm_UNSET;
    m_closedCurve = Step::getUnset(m_closedCurve);
    m_selfIntersect = Step::getUnset(m_selfIntersect);
}

IfcBSplineCurve::~IfcBSplineCurve() {
}

bool IfcBSplineCurve::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcBSplineCurve(this);
}

const std::string &IfcBSplineCurve::type() const {
    return IfcBSplineCurve::s_type.getName();
}

const Step::ClassType &IfcBSplineCurve::getClassType() {
    return IfcBSplineCurve::s_type;
}

const Step::ClassType &IfcBSplineCurve::getType() const {
    return IfcBSplineCurve::s_type;
}

bool IfcBSplineCurve::isOfType(const Step::ClassType &t) const {
    return IfcBSplineCurve::s_type == t ? true : IfcBoundedCurve::isOfType(t);
}

Step::Integer IfcBSplineCurve::getDegree() {
    if (Step::BaseObject::inited()) {
        return m_degree;
    }
    else {
        return Step::getUnset(m_degree);
    }
}

const Step::Integer IfcBSplineCurve::getDegree() const {
    IfcBSplineCurve * deConstObject = const_cast< IfcBSplineCurve * > (this);
    return deConstObject->getDegree();
}

void IfcBSplineCurve::setDegree(Step::Integer value) {
    m_degree = value;
}

void IfcBSplineCurve::unsetDegree() {
    m_degree = Step::getUnset(getDegree());
}

bool IfcBSplineCurve::testDegree() const {
    return !Step::isUnset(getDegree());
}

List_IfcCartesianPoint_2_n &IfcBSplineCurve::getControlPointsList() {
    if (Step::BaseObject::inited()) {
        return m_controlPointsList;
    }
    else {
        m_controlPointsList.setUnset(true);
        return m_controlPointsList;
    }
}

const List_IfcCartesianPoint_2_n &IfcBSplineCurve::getControlPointsList() const {
    IfcBSplineCurve * deConstObject = const_cast< IfcBSplineCurve * > (this);
    return deConstObject->getControlPointsList();
}

void IfcBSplineCurve::setControlPointsList(const List_IfcCartesianPoint_2_n &value) {
    m_controlPointsList = value;
}

void IfcBSplineCurve::unsetControlPointsList() {
    m_controlPointsList.clear();
    m_controlPointsList.setUnset(true);
}

bool IfcBSplineCurve::testControlPointsList() const {
    return !m_controlPointsList.isUnset();
}

IfcBSplineCurveForm IfcBSplineCurve::getCurveForm() {
    if (Step::BaseObject::inited()) {
        return m_curveForm;
    }
    else {
        return IfcBSplineCurveForm_UNSET;
    }
}

const IfcBSplineCurveForm IfcBSplineCurve::getCurveForm() const {
    IfcBSplineCurve * deConstObject = const_cast< IfcBSplineCurve * > (this);
    return deConstObject->getCurveForm();
}

void IfcBSplineCurve::setCurveForm(IfcBSplineCurveForm value) {
    m_curveForm = value;
}

void IfcBSplineCurve::unsetCurveForm() {
    m_curveForm = IfcBSplineCurveForm_UNSET;
}

bool IfcBSplineCurve::testCurveForm() const {
    return getCurveForm() != IfcBSplineCurveForm_UNSET;
}

Step::Logical IfcBSplineCurve::getClosedCurve() {
    if (Step::BaseObject::inited()) {
        return m_closedCurve;
    }
    else {
        return Step::getUnset(m_closedCurve);
    }
}

const Step::Logical IfcBSplineCurve::getClosedCurve() const {
    IfcBSplineCurve * deConstObject = const_cast< IfcBSplineCurve * > (this);
    return deConstObject->getClosedCurve();
}

void IfcBSplineCurve::setClosedCurve(Step::Logical value) {
    m_closedCurve = value;
}

void IfcBSplineCurve::unsetClosedCurve() {
    m_closedCurve = Step::getUnset(getClosedCurve());
}

bool IfcBSplineCurve::testClosedCurve() const {
    return !Step::isUnset(getClosedCurve());
}

Step::Logical IfcBSplineCurve::getSelfIntersect() {
    if (Step::BaseObject::inited()) {
        return m_selfIntersect;
    }
    else {
        return Step::getUnset(m_selfIntersect);
    }
}

const Step::Logical IfcBSplineCurve::getSelfIntersect() const {
    IfcBSplineCurve * deConstObject = const_cast< IfcBSplineCurve * > (this);
    return deConstObject->getSelfIntersect();
}

void IfcBSplineCurve::setSelfIntersect(Step::Logical value) {
    m_selfIntersect = value;
}

void IfcBSplineCurve::unsetSelfIntersect() {
    m_selfIntersect = Step::getUnset(getSelfIntersect());
}

bool IfcBSplineCurve::testSelfIntersect() const {
    return !Step::isUnset(getSelfIntersect());
}

bool IfcBSplineCurve::init() {
    bool status = IfcBoundedCurve::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_degree = Step::getUnset(m_degree);
    }
    else {
        m_degree = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_controlPointsList.setUnset(true);
    }
    else {
        m_controlPointsList.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcCartesianPoint > attr2;
                attr2 = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_controlPointsList.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_curveForm = IfcBSplineCurveForm_UNSET;
    }
    else {
        if (arg == ".POLYLINE_FORM.") {
            m_curveForm = IfcBSplineCurveForm_POLYLINE_FORM;
        }
        else if (arg == ".CIRCULAR_ARC.") {
            m_curveForm = IfcBSplineCurveForm_CIRCULAR_ARC;
        }
        else if (arg == ".ELLIPTIC_ARC.") {
            m_curveForm = IfcBSplineCurveForm_ELLIPTIC_ARC;
        }
        else if (arg == ".PARABOLIC_ARC.") {
            m_curveForm = IfcBSplineCurveForm_PARABOLIC_ARC;
        }
        else if (arg == ".HYPERBOLIC_ARC.") {
            m_curveForm = IfcBSplineCurveForm_HYPERBOLIC_ARC;
        }
        else if (arg == ".UNSPECIFIED.") {
            m_curveForm = IfcBSplineCurveForm_UNSPECIFIED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_closedCurve = Step::getUnset(m_closedCurve);
    }
    else {
        m_closedCurve = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_selfIntersect = Step::getUnset(m_selfIntersect);
    }
    else {
        m_selfIntersect = Step::spfToLogical(arg);
    }
    return true;
}

void IfcBSplineCurve::copy(const IfcBSplineCurve &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcCartesianPoint >, 2 >::const_iterator it_m_controlPointsList;
    IfcBoundedCurve::copy(obj, copyop);
    setDegree(obj.m_degree);
    for (it_m_controlPointsList = obj.m_controlPointsList.begin(); it_m_controlPointsList != obj.m_controlPointsList.end(); ++it_m_controlPointsList) {
        Step::RefPtr< IfcCartesianPoint > copyTarget = (IfcCartesianPoint *) (copyop((*it_m_controlPointsList).get()));
        m_controlPointsList.push_back(copyTarget.get());
    }
    setCurveForm(obj.m_curveForm);
    setClosedCurve(obj.m_closedCurve);
    setSelfIntersect(obj.m_selfIntersect);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcBSplineCurve::s_type("IfcBSplineCurve");
