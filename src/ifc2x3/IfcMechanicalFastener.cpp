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



#include <ifc2x3/IfcMechanicalFastener.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcFastener.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcMechanicalFastener::IfcMechanicalFastener(Step::Id id, Step::SPFData *args) : IfcFastener(id, args) {
    m_nominalDiameter = Step::getUnset(m_nominalDiameter);
    m_nominalLength = Step::getUnset(m_nominalLength);
}

IfcMechanicalFastener::~IfcMechanicalFastener() {
}

bool IfcMechanicalFastener::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMechanicalFastener(this);
}

const std::string &IfcMechanicalFastener::type() const {
    return IfcMechanicalFastener::s_type.getName();
}

const Step::ClassType &IfcMechanicalFastener::getClassType() {
    return IfcMechanicalFastener::s_type;
}

const Step::ClassType &IfcMechanicalFastener::getType() const {
    return IfcMechanicalFastener::s_type;
}

bool IfcMechanicalFastener::isOfType(const Step::ClassType &t) const {
    return IfcMechanicalFastener::s_type == t ? true : IfcFastener::isOfType(t);
}

IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalDiameter() {
    if (Step::BaseObject::inited()) {
        return m_nominalDiameter;
    }
    else {
        return Step::getUnset(m_nominalDiameter);
    }
}

const IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalDiameter() const {
    IfcMechanicalFastener * deConstObject = const_cast< IfcMechanicalFastener * > (this);
    return deConstObject->getNominalDiameter();
}

void IfcMechanicalFastener::setNominalDiameter(IfcPositiveLengthMeasure value) {
    m_nominalDiameter = value;
}

void IfcMechanicalFastener::unsetNominalDiameter() {
    m_nominalDiameter = Step::getUnset(getNominalDiameter());
}

bool IfcMechanicalFastener::testNominalDiameter() const {
    return !Step::isUnset(getNominalDiameter());
}

IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalLength() {
    if (Step::BaseObject::inited()) {
        return m_nominalLength;
    }
    else {
        return Step::getUnset(m_nominalLength);
    }
}

const IfcPositiveLengthMeasure IfcMechanicalFastener::getNominalLength() const {
    IfcMechanicalFastener * deConstObject = const_cast< IfcMechanicalFastener * > (this);
    return deConstObject->getNominalLength();
}

void IfcMechanicalFastener::setNominalLength(IfcPositiveLengthMeasure value) {
    m_nominalLength = value;
}

void IfcMechanicalFastener::unsetNominalLength() {
    m_nominalLength = Step::getUnset(getNominalLength());
}

bool IfcMechanicalFastener::testNominalLength() const {
    return !Step::isUnset(getNominalLength());
}

bool IfcMechanicalFastener::init() {
    bool status = IfcFastener::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_nominalDiameter = Step::getUnset(m_nominalDiameter);
    }
    else {
        m_nominalDiameter = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_nominalLength = Step::getUnset(m_nominalLength);
    }
    else {
        m_nominalLength = Step::spfToReal(arg);
    }
    return true;
}

void IfcMechanicalFastener::copy(const IfcMechanicalFastener &obj, const CopyOp &copyop) {
    IfcFastener::copy(obj, copyop);
    setNominalDiameter(obj.m_nominalDiameter);
    setNominalLength(obj.m_nominalLength);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMechanicalFastener::s_type("IfcMechanicalFastener");
