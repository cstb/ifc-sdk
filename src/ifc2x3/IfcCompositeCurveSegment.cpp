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



#include <ifc2x3/IfcCompositeCurveSegment.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCompositeCurve.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcCompositeCurveSegment::IfcCompositeCurveSegment(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_transition = IfcTransitionCode_UNSET;
    m_sameSense = Step::getUnset(m_sameSense);
    m_parentCurve = NULL;
}

IfcCompositeCurveSegment::~IfcCompositeCurveSegment() {
}

bool IfcCompositeCurveSegment::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCompositeCurveSegment(this);
}

const std::string &IfcCompositeCurveSegment::type() const {
    return IfcCompositeCurveSegment::s_type.getName();
}

const Step::ClassType &IfcCompositeCurveSegment::getClassType() {
    return IfcCompositeCurveSegment::s_type;
}

const Step::ClassType &IfcCompositeCurveSegment::getType() const {
    return IfcCompositeCurveSegment::s_type;
}

bool IfcCompositeCurveSegment::isOfType(const Step::ClassType &t) const {
    return IfcCompositeCurveSegment::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcTransitionCode IfcCompositeCurveSegment::getTransition() {
    if (Step::BaseObject::inited()) {
        return m_transition;
    }
    else {
        return IfcTransitionCode_UNSET;
    }
}

const IfcTransitionCode IfcCompositeCurveSegment::getTransition() const {
    IfcCompositeCurveSegment * deConstObject = const_cast< IfcCompositeCurveSegment * > (this);
    return deConstObject->getTransition();
}

void IfcCompositeCurveSegment::setTransition(IfcTransitionCode value) {
    m_transition = value;
}

void IfcCompositeCurveSegment::unsetTransition() {
    m_transition = IfcTransitionCode_UNSET;
}

bool IfcCompositeCurveSegment::testTransition() const {
    return getTransition() != IfcTransitionCode_UNSET;
}

Step::Boolean IfcCompositeCurveSegment::getSameSense() {
    if (Step::BaseObject::inited()) {
        return m_sameSense;
    }
    else {
        return Step::getUnset(m_sameSense);
    }
}

const Step::Boolean IfcCompositeCurveSegment::getSameSense() const {
    IfcCompositeCurveSegment * deConstObject = const_cast< IfcCompositeCurveSegment * > (this);
    return deConstObject->getSameSense();
}

void IfcCompositeCurveSegment::setSameSense(Step::Boolean value) {
    m_sameSense = value;
}

void IfcCompositeCurveSegment::unsetSameSense() {
    m_sameSense = Step::getUnset(getSameSense());
}

bool IfcCompositeCurveSegment::testSameSense() const {
    return !Step::isUnset(getSameSense());
}

IfcCurve *IfcCompositeCurveSegment::getParentCurve() {
    if (Step::BaseObject::inited()) {
        return m_parentCurve.get();
    }
    else {
        return NULL;
    }
}

const IfcCurve *IfcCompositeCurveSegment::getParentCurve() const {
    IfcCompositeCurveSegment * deConstObject = const_cast< IfcCompositeCurveSegment * > (this);
    return deConstObject->getParentCurve();
}

void IfcCompositeCurveSegment::setParentCurve(const Step::RefPtr< IfcCurve > &value) {
    m_parentCurve = value;
}

void IfcCompositeCurveSegment::unsetParentCurve() {
    m_parentCurve = Step::getUnset(getParentCurve());
}

bool IfcCompositeCurveSegment::testParentCurve() const {
    return !Step::isUnset(getParentCurve());
}

Inverse_Set_IfcCompositeCurve_1_n &IfcCompositeCurveSegment::getUsingCurves() {
    if (Step::BaseObject::inited()) {
        return m_usingCurves;
    }
    else {
        m_usingCurves.setUnset(true);
        return m_usingCurves;
    }
}

const Inverse_Set_IfcCompositeCurve_1_n &IfcCompositeCurveSegment::getUsingCurves() const {
    IfcCompositeCurveSegment * deConstObject = const_cast< IfcCompositeCurveSegment * > (this);
    return deConstObject->getUsingCurves();
}

bool IfcCompositeCurveSegment::testUsingCurves() const {
    return !m_usingCurves.isUnset();
}

bool IfcCompositeCurveSegment::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_transition = IfcTransitionCode_UNSET;
    }
    else {
        if (arg == ".DISCONTINUOUS.") {
            m_transition = IfcTransitionCode_DISCONTINUOUS;
        }
        else if (arg == ".CONTINUOUS.") {
            m_transition = IfcTransitionCode_CONTINUOUS;
        }
        else if (arg == ".CONTSAMEGRADIENT.") {
            m_transition = IfcTransitionCode_CONTSAMEGRADIENT;
        }
        else if (arg == ".CONTSAMEGRADIENTSAMECURVATURE.") {
            m_transition = IfcTransitionCode_CONTSAMEGRADIENTSAMECURVATURE;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sameSense = Step::getUnset(m_sameSense);
    }
    else {
        m_sameSense = Step::spfToBoolean(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_parentCurve = NULL;
    }
    else {
        m_parentCurve = static_cast< IfcCurve * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    inverses = m_args->getInverses(IfcCompositeCurve::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_usingCurves.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_usingCurves.insert(static_cast< IfcCompositeCurve * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcCompositeCurveSegment::copy(const IfcCompositeCurveSegment &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setTransition(obj.m_transition);
    setSameSense(obj.m_sameSense);
    setParentCurve((IfcCurve*)copyop(obj.m_parentCurve.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCompositeCurveSegment::s_type("IfcCompositeCurveSegment");
