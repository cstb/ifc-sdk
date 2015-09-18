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



#include <ifc2x3/IfcStairFlight.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcBuildingElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcStairFlight::IfcStairFlight(Step::Id id, Step::SPFData *args) : IfcBuildingElement(id, args) {
    m_numberOfRiser = Step::getUnset(m_numberOfRiser);
    m_numberOfTreads = Step::getUnset(m_numberOfTreads);
    m_riserHeight = Step::getUnset(m_riserHeight);
    m_treadLength = Step::getUnset(m_treadLength);
}

IfcStairFlight::~IfcStairFlight() {
}

bool IfcStairFlight::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcStairFlight(this);
}

const std::string &IfcStairFlight::type() const {
    return IfcStairFlight::s_type.getName();
}

const Step::ClassType &IfcStairFlight::getClassType() {
    return IfcStairFlight::s_type;
}

const Step::ClassType &IfcStairFlight::getType() const {
    return IfcStairFlight::s_type;
}

bool IfcStairFlight::isOfType(const Step::ClassType &t) const {
    return IfcStairFlight::s_type == t ? true : IfcBuildingElement::isOfType(t);
}

Step::Integer IfcStairFlight::getNumberOfRiser() {
    if (Step::BaseObject::inited()) {
        return m_numberOfRiser;
    }
    else {
        return Step::getUnset(m_numberOfRiser);
    }
}

const Step::Integer IfcStairFlight::getNumberOfRiser() const {
    IfcStairFlight * deConstObject = const_cast< IfcStairFlight * > (this);
    return deConstObject->getNumberOfRiser();
}

void IfcStairFlight::setNumberOfRiser(Step::Integer value) {
    m_numberOfRiser = value;
}

void IfcStairFlight::unsetNumberOfRiser() {
    m_numberOfRiser = Step::getUnset(getNumberOfRiser());
}

bool IfcStairFlight::testNumberOfRiser() const {
    return !Step::isUnset(getNumberOfRiser());
}

Step::Integer IfcStairFlight::getNumberOfTreads() {
    if (Step::BaseObject::inited()) {
        return m_numberOfTreads;
    }
    else {
        return Step::getUnset(m_numberOfTreads);
    }
}

const Step::Integer IfcStairFlight::getNumberOfTreads() const {
    IfcStairFlight * deConstObject = const_cast< IfcStairFlight * > (this);
    return deConstObject->getNumberOfTreads();
}

void IfcStairFlight::setNumberOfTreads(Step::Integer value) {
    m_numberOfTreads = value;
}

void IfcStairFlight::unsetNumberOfTreads() {
    m_numberOfTreads = Step::getUnset(getNumberOfTreads());
}

bool IfcStairFlight::testNumberOfTreads() const {
    return !Step::isUnset(getNumberOfTreads());
}

IfcPositiveLengthMeasure IfcStairFlight::getRiserHeight() {
    if (Step::BaseObject::inited()) {
        return m_riserHeight;
    }
    else {
        return Step::getUnset(m_riserHeight);
    }
}

const IfcPositiveLengthMeasure IfcStairFlight::getRiserHeight() const {
    IfcStairFlight * deConstObject = const_cast< IfcStairFlight * > (this);
    return deConstObject->getRiserHeight();
}

void IfcStairFlight::setRiserHeight(IfcPositiveLengthMeasure value) {
    m_riserHeight = value;
}

void IfcStairFlight::unsetRiserHeight() {
    m_riserHeight = Step::getUnset(getRiserHeight());
}

bool IfcStairFlight::testRiserHeight() const {
    return !Step::isUnset(getRiserHeight());
}

IfcPositiveLengthMeasure IfcStairFlight::getTreadLength() {
    if (Step::BaseObject::inited()) {
        return m_treadLength;
    }
    else {
        return Step::getUnset(m_treadLength);
    }
}

const IfcPositiveLengthMeasure IfcStairFlight::getTreadLength() const {
    IfcStairFlight * deConstObject = const_cast< IfcStairFlight * > (this);
    return deConstObject->getTreadLength();
}

void IfcStairFlight::setTreadLength(IfcPositiveLengthMeasure value) {
    m_treadLength = value;
}

void IfcStairFlight::unsetTreadLength() {
    m_treadLength = Step::getUnset(getTreadLength());
}

bool IfcStairFlight::testTreadLength() const {
    return !Step::isUnset(getTreadLength());
}

bool IfcStairFlight::init() {
    bool status = IfcBuildingElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_numberOfRiser = Step::getUnset(m_numberOfRiser);
    }
    else {
        m_numberOfRiser = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_numberOfTreads = Step::getUnset(m_numberOfTreads);
    }
    else {
        m_numberOfTreads = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_riserHeight = Step::getUnset(m_riserHeight);
    }
    else {
        m_riserHeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_treadLength = Step::getUnset(m_treadLength);
    }
    else {
        m_treadLength = Step::spfToReal(arg);
    }
    return true;
}

void IfcStairFlight::copy(const IfcStairFlight &obj, const CopyOp &copyop) {
    IfcBuildingElement::copy(obj, copyop);
    setNumberOfRiser(obj.m_numberOfRiser);
    setNumberOfTreads(obj.m_numberOfTreads);
    setRiserHeight(obj.m_riserHeight);
    setTreadLength(obj.m_treadLength);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcStairFlight::s_type("IfcStairFlight");
