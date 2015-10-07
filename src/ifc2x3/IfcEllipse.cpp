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



#include <ifc2x3/IfcEllipse.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConic.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcEllipse::IfcEllipse(Step::Id id, Step::SPFData *args) : IfcConic(id, args) {
    m_semiAxis1 = Step::getUnset(m_semiAxis1);
    m_semiAxis2 = Step::getUnset(m_semiAxis2);
}

IfcEllipse::~IfcEllipse() {
}

bool IfcEllipse::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcEllipse(this);
}

const std::string &IfcEllipse::type() const {
    return IfcEllipse::s_type.getName();
}

const Step::ClassType &IfcEllipse::getClassType() {
    return IfcEllipse::s_type;
}

const Step::ClassType &IfcEllipse::getType() const {
    return IfcEllipse::s_type;
}

bool IfcEllipse::isOfType(const Step::ClassType &t) const {
    return IfcEllipse::s_type == t ? true : IfcConic::isOfType(t);
}

IfcPositiveLengthMeasure IfcEllipse::getSemiAxis1() {
    if (Step::BaseObject::inited()) {
        return m_semiAxis1;
    }
    else {
        return Step::getUnset(m_semiAxis1);
    }
}

const IfcPositiveLengthMeasure IfcEllipse::getSemiAxis1() const {
    IfcEllipse * deConstObject = const_cast< IfcEllipse * > (this);
    return deConstObject->getSemiAxis1();
}

void IfcEllipse::setSemiAxis1(IfcPositiveLengthMeasure value) {
    m_semiAxis1 = value;
}

void IfcEllipse::unsetSemiAxis1() {
    m_semiAxis1 = Step::getUnset(getSemiAxis1());
}

bool IfcEllipse::testSemiAxis1() const {
    return !Step::isUnset(getSemiAxis1());
}

IfcPositiveLengthMeasure IfcEllipse::getSemiAxis2() {
    if (Step::BaseObject::inited()) {
        return m_semiAxis2;
    }
    else {
        return Step::getUnset(m_semiAxis2);
    }
}

const IfcPositiveLengthMeasure IfcEllipse::getSemiAxis2() const {
    IfcEllipse * deConstObject = const_cast< IfcEllipse * > (this);
    return deConstObject->getSemiAxis2();
}

void IfcEllipse::setSemiAxis2(IfcPositiveLengthMeasure value) {
    m_semiAxis2 = value;
}

void IfcEllipse::unsetSemiAxis2() {
    m_semiAxis2 = Step::getUnset(getSemiAxis2());
}

bool IfcEllipse::testSemiAxis2() const {
    return !Step::isUnset(getSemiAxis2());
}

bool IfcEllipse::init() {
    bool status = IfcConic::init();
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

void IfcEllipse::copy(const IfcEllipse &obj, const CopyOp &copyop) {
    IfcConic::copy(obj, copyop);
    setSemiAxis1(obj.m_semiAxis1);
    setSemiAxis2(obj.m_semiAxis2);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcEllipse::s_type("IfcEllipse");
