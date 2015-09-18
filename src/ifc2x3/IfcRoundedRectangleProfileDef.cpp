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



#include <ifc2x3/IfcRoundedRectangleProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcRectangleProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcRoundedRectangleProfileDef::IfcRoundedRectangleProfileDef(Step::Id id, Step::SPFData *args) : IfcRectangleProfileDef(id, args) {
    m_roundingRadius = Step::getUnset(m_roundingRadius);
}

IfcRoundedRectangleProfileDef::~IfcRoundedRectangleProfileDef() {
}

bool IfcRoundedRectangleProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRoundedRectangleProfileDef(this);
}

const std::string &IfcRoundedRectangleProfileDef::type() const {
    return IfcRoundedRectangleProfileDef::s_type.getName();
}

const Step::ClassType &IfcRoundedRectangleProfileDef::getClassType() {
    return IfcRoundedRectangleProfileDef::s_type;
}

const Step::ClassType &IfcRoundedRectangleProfileDef::getType() const {
    return IfcRoundedRectangleProfileDef::s_type;
}

bool IfcRoundedRectangleProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcRoundedRectangleProfileDef::s_type == t ? true : IfcRectangleProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcRoundedRectangleProfileDef::getRoundingRadius() {
    if (Step::BaseObject::inited()) {
        return m_roundingRadius;
    }
    else {
        return Step::getUnset(m_roundingRadius);
    }
}

const IfcPositiveLengthMeasure IfcRoundedRectangleProfileDef::getRoundingRadius() const {
    IfcRoundedRectangleProfileDef * deConstObject = const_cast< IfcRoundedRectangleProfileDef * > (this);
    return deConstObject->getRoundingRadius();
}

void IfcRoundedRectangleProfileDef::setRoundingRadius(IfcPositiveLengthMeasure value) {
    m_roundingRadius = value;
}

void IfcRoundedRectangleProfileDef::unsetRoundingRadius() {
    m_roundingRadius = Step::getUnset(getRoundingRadius());
}

bool IfcRoundedRectangleProfileDef::testRoundingRadius() const {
    return !Step::isUnset(getRoundingRadius());
}

bool IfcRoundedRectangleProfileDef::init() {
    bool status = IfcRectangleProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_roundingRadius = Step::getUnset(m_roundingRadius);
    }
    else {
        m_roundingRadius = Step::spfToReal(arg);
    }
    return true;
}

void IfcRoundedRectangleProfileDef::copy(const IfcRoundedRectangleProfileDef &obj, const CopyOp &copyop) {
    IfcRectangleProfileDef::copy(obj, copyop);
    setRoundingRadius(obj.m_roundingRadius);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRoundedRectangleProfileDef::s_type("IfcRoundedRectangleProfileDef");
