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



#include <ifc2x3/IfcOffsetCurve3D.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCurve.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcOffsetCurve3D::IfcOffsetCurve3D(Step::Id id, Step::SPFData *args) : IfcCurve(id, args) {
    m_basisCurve = NULL;
    m_distance = Step::getUnset(m_distance);
    m_selfIntersect = Step::getUnset(m_selfIntersect);
    m_refDirection = NULL;
}

IfcOffsetCurve3D::~IfcOffsetCurve3D() {
}

bool IfcOffsetCurve3D::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOffsetCurve3D(this);
}

const std::string &IfcOffsetCurve3D::type() const {
    return IfcOffsetCurve3D::s_type.getName();
}

const Step::ClassType &IfcOffsetCurve3D::getClassType() {
    return IfcOffsetCurve3D::s_type;
}

const Step::ClassType &IfcOffsetCurve3D::getType() const {
    return IfcOffsetCurve3D::s_type;
}

bool IfcOffsetCurve3D::isOfType(const Step::ClassType &t) const {
    return IfcOffsetCurve3D::s_type == t ? true : IfcCurve::isOfType(t);
}

IfcCurve *IfcOffsetCurve3D::getBasisCurve() {
    if (Step::BaseObject::inited()) {
        return m_basisCurve.get();
    }
    else {
        return NULL;
    }
}

const IfcCurve *IfcOffsetCurve3D::getBasisCurve() const {
    IfcOffsetCurve3D * deConstObject = const_cast< IfcOffsetCurve3D * > (this);
    return deConstObject->getBasisCurve();
}

void IfcOffsetCurve3D::setBasisCurve(const Step::RefPtr< IfcCurve > &value) {
    m_basisCurve = value;
}

void IfcOffsetCurve3D::unsetBasisCurve() {
    m_basisCurve = Step::getUnset(getBasisCurve());
}

bool IfcOffsetCurve3D::testBasisCurve() const {
    return !Step::isUnset(getBasisCurve());
}

IfcLengthMeasure IfcOffsetCurve3D::getDistance() {
    if (Step::BaseObject::inited()) {
        return m_distance;
    }
    else {
        return Step::getUnset(m_distance);
    }
}

const IfcLengthMeasure IfcOffsetCurve3D::getDistance() const {
    IfcOffsetCurve3D * deConstObject = const_cast< IfcOffsetCurve3D * > (this);
    return deConstObject->getDistance();
}

void IfcOffsetCurve3D::setDistance(IfcLengthMeasure value) {
    m_distance = value;
}

void IfcOffsetCurve3D::unsetDistance() {
    m_distance = Step::getUnset(getDistance());
}

bool IfcOffsetCurve3D::testDistance() const {
    return !Step::isUnset(getDistance());
}

Step::Logical IfcOffsetCurve3D::getSelfIntersect() {
    if (Step::BaseObject::inited()) {
        return m_selfIntersect;
    }
    else {
        return Step::getUnset(m_selfIntersect);
    }
}

const Step::Logical IfcOffsetCurve3D::getSelfIntersect() const {
    IfcOffsetCurve3D * deConstObject = const_cast< IfcOffsetCurve3D * > (this);
    return deConstObject->getSelfIntersect();
}

void IfcOffsetCurve3D::setSelfIntersect(Step::Logical value) {
    m_selfIntersect = value;
}

void IfcOffsetCurve3D::unsetSelfIntersect() {
    m_selfIntersect = Step::getUnset(getSelfIntersect());
}

bool IfcOffsetCurve3D::testSelfIntersect() const {
    return !Step::isUnset(getSelfIntersect());
}

IfcDirection *IfcOffsetCurve3D::getRefDirection() {
    if (Step::BaseObject::inited()) {
        return m_refDirection.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcOffsetCurve3D::getRefDirection() const {
    IfcOffsetCurve3D * deConstObject = const_cast< IfcOffsetCurve3D * > (this);
    return deConstObject->getRefDirection();
}

void IfcOffsetCurve3D::setRefDirection(const Step::RefPtr< IfcDirection > &value) {
    m_refDirection = value;
}

void IfcOffsetCurve3D::unsetRefDirection() {
    m_refDirection = Step::getUnset(getRefDirection());
}

bool IfcOffsetCurve3D::testRefDirection() const {
    return !Step::isUnset(getRefDirection());
}

bool IfcOffsetCurve3D::init() {
    bool status = IfcCurve::init();
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
        m_distance = Step::getUnset(m_distance);
    }
    else {
        m_distance = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_selfIntersect = Step::getUnset(m_selfIntersect);
    }
    else {
        m_selfIntersect = Step::spfToLogical(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_refDirection = NULL;
    }
    else {
        m_refDirection = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcOffsetCurve3D::copy(const IfcOffsetCurve3D &obj, const CopyOp &copyop) {
    IfcCurve::copy(obj, copyop);
    setBasisCurve((IfcCurve*)copyop(obj.m_basisCurve.get()));
    setDistance(obj.m_distance);
    setSelfIntersect(obj.m_selfIntersect);
    setRefDirection((IfcDirection*)copyop(obj.m_refDirection.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcOffsetCurve3D::s_type("IfcOffsetCurve3D");
