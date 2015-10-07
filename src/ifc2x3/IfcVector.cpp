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



#include <ifc2x3/IfcVector.h>

#include <ifc2x3/CopyOp.h>
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

IfcVector::IfcVector(Step::Id id, Step::SPFData *args) : IfcGeometricRepresentationItem(id, args) {
    m_orientation = NULL;
    m_magnitude = Step::getUnset(m_magnitude);
}

IfcVector::~IfcVector() {
}

bool IfcVector::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcVector(this);
}

const std::string &IfcVector::type() const {
    return IfcVector::s_type.getName();
}

const Step::ClassType &IfcVector::getClassType() {
    return IfcVector::s_type;
}

const Step::ClassType &IfcVector::getType() const {
    return IfcVector::s_type;
}

bool IfcVector::isOfType(const Step::ClassType &t) const {
    return IfcVector::s_type == t ? true : IfcGeometricRepresentationItem::isOfType(t);
}

IfcDirection *IfcVector::getOrientation() {
    if (Step::BaseObject::inited()) {
        return m_orientation.get();
    }
    else {
        return NULL;
    }
}

const IfcDirection *IfcVector::getOrientation() const {
    IfcVector * deConstObject = const_cast< IfcVector * > (this);
    return deConstObject->getOrientation();
}

void IfcVector::setOrientation(const Step::RefPtr< IfcDirection > &value) {
    m_orientation = value;
}

void IfcVector::unsetOrientation() {
    m_orientation = Step::getUnset(getOrientation());
}

bool IfcVector::testOrientation() const {
    return !Step::isUnset(getOrientation());
}

IfcLengthMeasure IfcVector::getMagnitude() {
    if (Step::BaseObject::inited()) {
        return m_magnitude;
    }
    else {
        return Step::getUnset(m_magnitude);
    }
}

const IfcLengthMeasure IfcVector::getMagnitude() const {
    IfcVector * deConstObject = const_cast< IfcVector * > (this);
    return deConstObject->getMagnitude();
}

void IfcVector::setMagnitude(IfcLengthMeasure value) {
    m_magnitude = value;
}

void IfcVector::unsetMagnitude() {
    m_magnitude = Step::getUnset(getMagnitude());
}

bool IfcVector::testMagnitude() const {
    return !Step::isUnset(getMagnitude());
}

bool IfcVector::init() {
    bool status = IfcGeometricRepresentationItem::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_orientation = NULL;
    }
    else {
        m_orientation = static_cast< IfcDirection * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_magnitude = Step::getUnset(m_magnitude);
    }
    else {
        m_magnitude = Step::spfToReal(arg);
    }
    return true;
}

void IfcVector::copy(const IfcVector &obj, const CopyOp &copyop) {
    IfcGeometricRepresentationItem::copy(obj, copyop);
    setOrientation((IfcDirection*)copyop(obj.m_orientation.get()));
    setMagnitude(obj.m_magnitude);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcVector::s_type("IfcVector");
