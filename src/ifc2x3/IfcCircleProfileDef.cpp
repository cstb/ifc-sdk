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



#include <ifc2x3/IfcCircleProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCircleProfileDef::IfcCircleProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_radius = Step::getUnset(m_radius);
}

IfcCircleProfileDef::~IfcCircleProfileDef() {
}

bool IfcCircleProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCircleProfileDef(this);
}

const std::string &IfcCircleProfileDef::type() const {
    return IfcCircleProfileDef::s_type.getName();
}

const Step::ClassType &IfcCircleProfileDef::getClassType() {
    return IfcCircleProfileDef::s_type;
}

const Step::ClassType &IfcCircleProfileDef::getType() const {
    return IfcCircleProfileDef::s_type;
}

bool IfcCircleProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcCircleProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCircleProfileDef::getRadius() {
    if (Step::BaseObject::inited()) {
        return m_radius;
    }
    else {
        return Step::getUnset(m_radius);
    }
}

const IfcPositiveLengthMeasure IfcCircleProfileDef::getRadius() const {
    IfcCircleProfileDef * deConstObject = const_cast< IfcCircleProfileDef * > (this);
    return deConstObject->getRadius();
}

void IfcCircleProfileDef::setRadius(IfcPositiveLengthMeasure value) {
    m_radius = value;
}

void IfcCircleProfileDef::unsetRadius() {
    m_radius = Step::getUnset(getRadius());
}

bool IfcCircleProfileDef::testRadius() const {
    return !Step::isUnset(getRadius());
}

bool IfcCircleProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
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

void IfcCircleProfileDef::copy(const IfcCircleProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setRadius(obj.m_radius);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCircleProfileDef::s_type("IfcCircleProfileDef");
