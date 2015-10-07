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



#include <ifc2x3/IfcDoor.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcDoor::IfcDoor(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_overallHeight = Step::getUnset(m_overallHeight);
    m_overallWidth = Step::getUnset(m_overallWidth);
}

IfcDoor::~IfcDoor() {
}

bool IfcDoor::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDoor(this);
}

const std::string &IfcDoor::type() const {
    return IfcDoor::s_type.getName();
}

const Step::ClassType &IfcDoor::getClassType() {
    return IfcDoor::s_type;
}

const Step::ClassType &IfcDoor::getType() const {
    return IfcDoor::s_type;
}

bool IfcDoor::isOfType(const Step::ClassType &t) const {
    return IfcDoor::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

IfcPositiveLengthMeasure IfcDoor::getOverallHeight() {
    if (Step::BaseObject::inited()) {
        return m_overallHeight;
    }
    else {
        return Step::getUnset(m_overallHeight);
    }
}

const IfcPositiveLengthMeasure IfcDoor::getOverallHeight() const {
    IfcDoor * deConstObject = const_cast< IfcDoor * > (this);
    return deConstObject->getOverallHeight();
}

void IfcDoor::setOverallHeight(IfcPositiveLengthMeasure value) {
    m_overallHeight = value;
}

void IfcDoor::unsetOverallHeight() {
    m_overallHeight = Step::getUnset(getOverallHeight());
}

bool IfcDoor::testOverallHeight() const {
    return !Step::isUnset(getOverallHeight());
}

IfcPositiveLengthMeasure IfcDoor::getOverallWidth() {
    if (Step::BaseObject::inited()) {
        return m_overallWidth;
    }
    else {
        return Step::getUnset(m_overallWidth);
    }
}

const IfcPositiveLengthMeasure IfcDoor::getOverallWidth() const {
    IfcDoor * deConstObject = const_cast< IfcDoor * > (this);
    return deConstObject->getOverallWidth();
}

void IfcDoor::setOverallWidth(IfcPositiveLengthMeasure value) {
    m_overallWidth = value;
}

void IfcDoor::unsetOverallWidth() {
    m_overallWidth = Step::getUnset(getOverallWidth());
}

bool IfcDoor::testOverallWidth() const {
    return !Step::isUnset(getOverallWidth());
}

bool IfcDoor::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallHeight = Step::getUnset(m_overallHeight);
    }
    else {
        m_overallHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_overallWidth = Step::getUnset(m_overallWidth);
    }
    else {
        m_overallWidth = Step::spfToReal(arg);
    }
    return true;
}

void IfcDoor::copy(const IfcDoor &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setOverallHeight(obj.m_overallHeight);
    setOverallWidth(obj.m_overallWidth);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDoor::s_type("IfcDoor");
