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



#include <ifc2x3/IfcRightCircularCylinder.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRightCircularCylinder::IfcRightCircularCylinder(Step::Id id, Step::SPFData *args) : IfcCsgPrimitive3D(id, args) {
    m_height = Step::getUnset(m_height);
    m_radius = Step::getUnset(m_radius);
}

IfcRightCircularCylinder::~IfcRightCircularCylinder() {
}

bool IfcRightCircularCylinder::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRightCircularCylinder(this);
}

const std::string &IfcRightCircularCylinder::type() const {
    return IfcRightCircularCylinder::s_type.getName();
}

const Step::ClassType &IfcRightCircularCylinder::getClassType() {
    return IfcRightCircularCylinder::s_type;
}

const Step::ClassType &IfcRightCircularCylinder::getType() const {
    return IfcRightCircularCylinder::s_type;
}

bool IfcRightCircularCylinder::isOfType(const Step::ClassType &t) const {
    return IfcRightCircularCylinder::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcRightCircularCylinder::getHeight() {
    if (Step::BaseObject::inited()) {
        return m_height;
    }
    else {
        return Step::getUnset(m_height);
    }
}

const IfcPositiveLengthMeasure IfcRightCircularCylinder::getHeight() const {
    IfcRightCircularCylinder * deConstObject = const_cast< IfcRightCircularCylinder * > (this);
    return deConstObject->getHeight();
}

void IfcRightCircularCylinder::setHeight(IfcPositiveLengthMeasure value) {
    m_height = value;
}

void IfcRightCircularCylinder::unsetHeight() {
    m_height = Step::getUnset(getHeight());
}

bool IfcRightCircularCylinder::testHeight() const {
    return !Step::isUnset(getHeight());
}

IfcPositiveLengthMeasure IfcRightCircularCylinder::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

const IfcPositiveLengthMeasure IfcRightCircularCylinder::getRadius() const {
    IfcRightCircularCylinder * deConstObject = const_cast< IfcRightCircularCylinder * > (this);
    return deConstObject->getRadius();
}

void IfcRightCircularCylinder::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcRightCircularCylinder::unsetRadius() {
    m_radius = Step::getUnset(getRadius());
}

bool IfcRightCircularCylinder::testRadius() const {
    return !Step::isUnset(getRadius());
}

bool IfcRightCircularCylinder::init() {
    bool status = IfcCsgPrimitive3D::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_height = Step::getUnset(m_height);
    }
    else {
        m_height = Step::spfToReal(arg);
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

void IfcRightCircularCylinder::copy(const IfcRightCircularCylinder &obj, const CopyOp &copyop) {
    IfcCsgPrimitive3D::copy(obj, copyop);
    setHeight(obj.m_height);
    setRadius(obj.m_radius);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRightCircularCylinder::s_type("IfcRightCircularCylinder");
