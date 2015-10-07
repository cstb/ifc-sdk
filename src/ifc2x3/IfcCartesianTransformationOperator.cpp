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



#include <ifc2x3/IfcCartesianTransformationOperator.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCartesianPoint.h>
#include <ifc2x3/IfcDirection.h>
#include <ifc2x3/IfcGeometricRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCartesianTransformationOperator::IfcCartesianTransformationOperator(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_axis1 = NULL;
    m_axis2 = NULL;
    m_localOrigin = NULL;
    m_scale = Step::getUnset(m_scale);
}

IfcCartesianTransformationOperator::~IfcCartesianTransformationOperator() {
}

bool IfcCartesianTransformationOperator::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCartesianTransformationOperator(this);
}

const std::string &IfcCartesianTransformationOperator::type() const {
    return IfcCartesianTransformationOperator::s_type.getName();
}

const Step::ClassType &IfcCartesianTransformationOperator::getClassType() {
    return IfcCartesianTransformationOperator::s_type;
}

const Step::ClassType &IfcCartesianTransformationOperator::getType() const {
    return IfcCartesianTransformationOperator::s_type;
}

bool IfcCartesianTransformationOperator::isOfType(const Step::ClassType &t) const {
    return IfcCartesianTransformationOperator::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcDirection *IfcCartesianTransformationOperator::getAxis1() {
    if (Step::BaseObject::inited()) {
        return m_axis1.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcCartesianTransformationOperator::getAxis1() const {
    IfcCartesianTransformationOperator * deConstObject = const_cast< IfcCartesianTransformationOperator * > (this);
    return deConstObject->getAxis1();
}

void IfcCartesianTransformationOperator::setAxis1(const Step::RefPtr< IfcDirection > &value) {
    m_axis1 = value;
}

void IfcCartesianTransformationOperator::unsetAxis1() {
    m_axis1 = Step::getUnset(getAxis1());
}

bool IfcCartesianTransformationOperator::testAxis1() const {
    return !Step::isUnset(getAxis1());
}

IfcDirection *IfcCartesianTransformationOperator::getAxis2() {
    if (Step::BaseObject::inited()) {
        return m_axis2.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcCartesianTransformationOperator::getAxis2() const {
    IfcCartesianTransformationOperator * deConstObject = const_cast< IfcCartesianTransformationOperator * > (this);
    return deConstObject->getAxis2();
}

void IfcCartesianTransformationOperator::setAxis2(const Step::RefPtr< IfcDirection > &value) {
    m_axis2 = value;
}

void IfcCartesianTransformationOperator::unsetAxis2() {
    m_axis2 = Step::getUnset(getAxis2());
}

bool IfcCartesianTransformationOperator::testAxis2() const {
    return !Step::isUnset(getAxis2());
}

IfcCartesianPoint *IfcCartesianTransformationOperator::getLocalOrigin() {
    if (Step::BaseObject::inited()) {
        return m_localOrigin.get();
    }
    else {
        return NULL;
    }
}

const IfcCartesianPoint *IfcCartesianTransformationOperator::getLocalOrigin() const {
    IfcCartesianTransformationOperator * deConstObject = const_cast< IfcCartesianTransformationOperator * > (this);
    return deConstObject->getLocalOrigin();
}

void IfcCartesianTransformationOperator::setLocalOrigin(const Step::RefPtr< IfcCartesianPoint > &value) {
    m_localOrigin = value;
}

void IfcCartesianTransformationOperator::unsetLocalOrigin() {
    m_localOrigin = Step::getUnset(getLocalOrigin());
}

bool IfcCartesianTransformationOperator::testLocalOrigin() const {
    return !Step::isUnset(getLocalOrigin());
}

Step::Real IfcCartesianTransformationOperator::getScale() {
    if (Step::BaseObject::inited()) {
        return m_scale;
    }
    else {
        return Step::getUnset(m_scale);
    }
}

const Step::Real IfcCartesianTransformationOperator::getScale() const {
    IfcCartesianTransformationOperator * deConstObject = const_cast< IfcCartesianTransformationOperator * > (this);
    return deConstObject->getScale();
}

void IfcCartesianTransformationOperator::setScale(Step::Real value) {
    m_scale = value;
}

void IfcCartesianTransformationOperator::unsetScale() {
    m_scale = Step::getUnset(getScale());
}

bool IfcCartesianTransformationOperator::testScale() const {
    return !Step::isUnset(getScale());
}

bool IfcCartesianTransformationOperator::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis1 = NULL;
    }
    else {
        m_axis1 = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_axis2 = NULL;
    }
    else {
        m_axis2 = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_localOrigin = NULL;
    }
    else {
        m_localOrigin = static_cast< IfcCartesianPoint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_scale = Step::getUnset(m_scale);
    }
    else {
        m_scale = Step::spfToReal(arg);
    }
    return true;
}

void IfcCartesianTransformationOperator::copy(const IfcCartesianTransformationOperator &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setAxis1((IfcDirection*)copyop(obj.m_axis1.get()));
    setAxis2((IfcDirection*)copyop(obj.m_axis2.get()));
    setLocalOrigin((IfcCartesianPoint*)copyop(obj.m_localOrigin.get()));
    setScale(obj.m_scale);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCartesianTransformationOperator::s_type("IfcCartesianTransformationOperator");
