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



#include <ifc2x3/IfcEllipseProfileDef.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcParameterizedProfileDef.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcEllipseProfileDef::IfcEllipseProfileDef(Step::Id id, Step::SPFData *args) : IfcParameterizedProfileDef(id, args) {
    m_semiAxis1 = Step::getUnset(m_semiAxis1);
    m_semiAxis2 = Step::getUnset(m_semiAxis2);
}

IfcEllipseProfileDef::~IfcEllipseProfileDef() {
}

bool IfcEllipseProfileDef::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEllipseProfileDef(this);
}

const std::string &IfcEllipseProfileDef::type() const {
    return IfcEllipseProfileDef::s_type.getName();
}

const Step::ClassType &IfcEllipseProfileDef::getClassType() {
    return IfcEllipseProfileDef::s_type;
}

const Step::ClassType &IfcEllipseProfileDef::getType() const {
    return IfcEllipseProfileDef::s_type;
}

bool IfcEllipseProfileDef::isOfType(const Step::ClassType &t) const {
    return IfcEllipseProfileDef::s_type == t ? true : IfcParameterizedProfileDef::isOfType(t);
}

IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis1() {
    if (Step::BaseObject::inited()) {
        return m_semiAxis1;
    }
    else {
        return Step::getUnset(m_semiAxis1);
    }
}

const IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis1() const {
    IfcEllipseProfileDef * deConstObject = const_cast< IfcEllipseProfileDef * > (this);
    return deConstObject->getSemiAxis1();
}

void IfcEllipseProfileDef::setSemiAxis1(IfcPositiveLengthMeasure value) {
    m_semiAxis1 = value;
}

void IfcEllipseProfileDef::unsetSemiAxis1() {
    m_semiAxis1 = Step::getUnset(getSemiAxis1());
}

bool IfcEllipseProfileDef::testSemiAxis1() const {
    return !Step::isUnset(getSemiAxis1());
}

IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis2() {
    if (Step::BaseObject::inited()) {
        return m_semiAxis2;
    }
    else {
        return Step::getUnset(m_semiAxis2);
    }
}

const IfcPositiveLengthMeasure IfcEllipseProfileDef::getSemiAxis2() const {
    IfcEllipseProfileDef * deConstObject = const_cast< IfcEllipseProfileDef * > (this);
    return deConstObject->getSemiAxis2();
}

void IfcEllipseProfileDef::setSemiAxis2(IfcPositiveLengthMeasure value) {
    m_semiAxis2 = value;
}

void IfcEllipseProfileDef::unsetSemiAxis2() {
    m_semiAxis2 = Step::getUnset(getSemiAxis2());
}

bool IfcEllipseProfileDef::testSemiAxis2() const {
    return !Step::isUnset(getSemiAxis2());
}

bool IfcEllipseProfileDef::init() {
    bool status = IfcParameterizedProfileDef::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_semiAxis1 = Step::getUnset(m_semiAxis1);
    }
    else {
        m_semiAxis1 = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_semiAxis2 = Step::getUnset(m_semiAxis2);
    }
    else {
        m_semiAxis2 = Step::spfToReal(arg);
    }
    return true;
}

void IfcEllipseProfileDef::copy(const IfcEllipseProfileDef &obj, const CopyOp &copyop) {
    IfcParameterizedProfileDef::copy(obj, copyop);
    setSemiAxis1(obj.m_semiAxis1);
    setSemiAxis2(obj.m_semiAxis2);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcEllipseProfileDef::s_type("IfcEllipseProfileDef");
