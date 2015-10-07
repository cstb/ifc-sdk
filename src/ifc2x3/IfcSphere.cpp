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



#include <ifc2x3/IfcSphere.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcSphere::IfcSphere(Step::Id id, Step::SPFData *args) : IfcCsgPrimitive3D(id, args) {
    m_radius = Step::getUnset(m_radius);
}

IfcSphere::~IfcSphere() {
}

bool IfcSphere::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSphere(this);
}

const std::string &IfcSphere::type() const {
    return IfcSphere::s_type.getName();
}

const Step::ClassType &IfcSphere::getClassType() {
    return IfcSphere::s_type;
}

const Step::ClassType &IfcSphere::getType() const {
    return IfcSphere::s_type;
}

bool IfcSphere::isOfType(const Step::ClassType &t) const {
    return IfcSphere::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcSphere::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

const IfcPositiveLengthMeasure IfcSphere::getRadius() const {
    IfcSphere * deConstObject = const_cast< IfcSphere * > (this);
    return deConstObject->getRadius();
}

void IfcSphere::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcSphere::unsetRadius() {
    m_radius = Step::getUnset(getRadius());
}

bool IfcSphere::testRadius() const {
    return !Step::isUnset(getRadius());
}

bool IfcSphere::init() {
    bool status = IfcCsgPrimitive3D::init();
    std::string arg;
    if (!status) {
        return false;
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

void IfcSphere::copy(const IfcSphere &obj, const CopyOp &copyop) {
    IfcCsgPrimitive3D::copy(obj, copyop);
    setRadius(obj.m_radius);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSphere::s_type("IfcSphere");
