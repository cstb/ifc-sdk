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



#include <ifc2x3/IfcCenterLineProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcArbitraryOpenProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCenterLineProfileDef::IfcCenterLineProfileDef(Step::Id id, Step::SPFData *args) : IfcArbitraryOpenProfileDef(id, args) {
    m_thickness = Step::getUnset(m_thickness);
}

IfcCenterLineProfileDef::~IfcCenterLineProfileDef() {
}

bool IfcCenterLineProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCenterLineProfileDef(this);
}

const std::string &IfcCenterLineProfileDef::type() const {
    return IfcCenterLineProfileDef::s_type.getName();
}

const Step::ClassType &IfcCenterLineProfileDef::getClassType() {
    return IfcCenterLineProfileDef::s_type;
}

const Step::ClassType &IfcCenterLineProfileDef::getType() const {
    return IfcCenterLineProfileDef::s_type;
}

bool IfcCenterLineProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcCenterLineProfileDef::s_type == t ? true : IfcArbitraryOpenProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcCenterLineProfileDef::getThickness() {
    if (Step::BaseObject::inited()) {
        return m_thickness;
    }
    else {
        return Step::getUnset(m_thickness);
    }
}

const IfcPositiveLengthMeasure IfcCenterLineProfileDef::getThickness() const {
    IfcCenterLineProfileDef * deConstObject = const_cast< IfcCenterLineProfileDef * > (this);
    return deConstObject->getThickness();
}

void IfcCenterLineProfileDef::setThickness(IfcPositiveLengthMeasure value) {
    m_thickness = value;
}

void IfcCenterLineProfileDef::unsetThickness() {
    m_thickness = Step::getUnset(getThickness());
}

bool IfcCenterLineProfileDef::testThickness() const {
    return !Step::isUnset(getThickness());
}

bool IfcCenterLineProfileDef::init() {
    bool status = IfcArbitraryOpenProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_thickness = Step::getUnset(m_thickness);
    }
    else {
        m_thickness = Step::spfToReal(arg);
    }
    return true;
}

void IfcCenterLineProfileDef::copy(const IfcCenterLineProfileDef &obj, const CopyOp &copyop) {
    IfcArbitraryOpenProfileDef::copy(obj, copyop);
    setThickness(obj.m_thickness);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCenterLineProfileDef::s_type("IfcCenterLineProfileDef");
