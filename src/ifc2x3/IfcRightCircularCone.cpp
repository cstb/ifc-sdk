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



#include <ifc2x3/IfcRightCircularCone.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRightCircularCone::IfcRightCircularCone(Step::Id id, Step::SPFData *args) : IfcCsgPrimitive3D(id, args) {
    m_height = Step::getUnset(m_height);
    m_bottomRadius = Step::getUnset(m_bottomRadius);
}

IfcRightCircularCone::~IfcRightCircularCone() {
}

bool IfcRightCircularCone::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRightCircularCone(this);
}

const std::string &IfcRightCircularCone::type() const {
    return IfcRightCircularCone::s_type.getName();
}

const Step::ClassType &IfcRightCircularCone::getClassType() {
    return IfcRightCircularCone::s_type;
}

const Step::ClassType &IfcRightCircularCone::getType() const {
    return IfcRightCircularCone::s_type;
}

bool IfcRightCircularCone::isOfType(const Step::ClassType &t) const {
    return IfcRightCircularCone::s_type == t ? true : IfcCsgPrimitive3D::isOfType(t);
}

IfcPositiveLengthMeasure IfcRightCircularCone::getHeight() {
    if (Step::BaseObject::inited()) {
        return m_height;
    }
    else {
        return Step::getUnset(m_height);
    }
}

const IfcPositiveLengthMeasure IfcRightCircularCone::getHeight() const {
    IfcRightCircularCone * deConstObject = const_cast< IfcRightCircularCone * > (this);
    return deConstObject->getHeight();
}

void IfcRightCircularCone::setHeight(IfcPositiveLengthMeasure value) {
    m_height = value;
}

void IfcRightCircularCone::unsetHeight() {
    m_height = Step::getUnset(getHeight());
}

bool IfcRightCircularCone::testHeight() const {
    return !Step::isUnset(getHeight());
}

IfcPositiveLengthMeasure IfcRightCircularCone::getBottomRadius() {
    if (Step::BaseObject::inited()) {
        return m_bottomRadius;
    }
    else {
        return Step::getUnset(m_bottomRadius);
    }
}

const IfcPositiveLengthMeasure IfcRightCircularCone::getBottomRadius() const {
    IfcRightCircularCone * deConstObject = const_cast< IfcRightCircularCone * > (this);
    return deConstObject->getBottomRadius();
}

void IfcRightCircularCone::setBottomRadius(IfcPositiveLengthMeasure value) {
    m_bottomRadius = value;
}

void IfcRightCircularCone::unsetBottomRadius() {
    m_bottomRadius = Step::getUnset(getBottomRadius());
}

bool IfcRightCircularCone::testBottomRadius() const {
    return !Step::isUnset(getBottomRadius());
}

bool IfcRightCircularCone::init() {
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
        m_bottomRadius = Step::getUnset(m_bottomRadius);
    }
    else {
        m_bottomRadius = Step::spfToReal(arg);
    }
    return true;
}

void IfcRightCircularCone::copy(const IfcRightCircularCone &obj, const CopyOp &copyop) {
    IfcCsgPrimitive3D::copy(obj, copyop);
    setHeight(obj.m_height);
    setBottomRadius(obj.m_bottomRadius);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRightCircularCone::s_type("IfcRightCircularCone");
