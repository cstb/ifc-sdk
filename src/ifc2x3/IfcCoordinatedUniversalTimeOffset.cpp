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



#include <ifc2x3/IfcCoordinatedUniversalTimeOffset.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseObject.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcCoordinatedUniversalTimeOffset::IfcCoordinatedUniversalTimeOffset(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_hourOffset = Step::getUnset(m_hourOffset);
    m_minuteOffset = Step::getUnset(m_minuteOffset);
    m_sense = IfcAheadOrBehind_UNSET;
}

IfcCoordinatedUniversalTimeOffset::~IfcCoordinatedUniversalTimeOffset() {
}

bool IfcCoordinatedUniversalTimeOffset::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcCoordinatedUniversalTimeOffset(this);
}

const std::string &IfcCoordinatedUniversalTimeOffset::type() const {
    return IfcCoordinatedUniversalTimeOffset::s_type.getName();
}

const Step::ClassType &IfcCoordinatedUniversalTimeOffset::getClassType() {
    return IfcCoordinatedUniversalTimeOffset::s_type;
}

const Step::ClassType &IfcCoordinatedUniversalTimeOffset::getType() const {
    return IfcCoordinatedUniversalTimeOffset::s_type;
}

bool IfcCoordinatedUniversalTimeOffset::isOfType(const Step::ClassType &t) const {
    return IfcCoordinatedUniversalTimeOffset::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcHourInDay IfcCoordinatedUniversalTimeOffset::getHourOffset() {
    if (Step::BaseObject::inited()) {
        return m_hourOffset;
    }
    else {
        return Step::getUnset(m_hourOffset);
    }
}

const IfcHourInDay IfcCoordinatedUniversalTimeOffset::getHourOffset() const {
    IfcCoordinatedUniversalTimeOffset * deConstObject = const_cast< IfcCoordinatedUniversalTimeOffset * > (this);
    return deConstObject->getHourOffset();
}

void IfcCoordinatedUniversalTimeOffset::setHourOffset(IfcHourInDay value) {
    m_hourOffset = value;
}

void IfcCoordinatedUniversalTimeOffset::unsetHourOffset() {
    m_hourOffset = Step::getUnset(getHourOffset());
}

bool IfcCoordinatedUniversalTimeOffset::testHourOffset() const {
    return !Step::isUnset(getHourOffset());
}

IfcMinuteInHour IfcCoordinatedUniversalTimeOffset::getMinuteOffset() {
    if (Step::BaseObject::inited()) {
        return m_minuteOffset;
    }
    else {
        return Step::getUnset(m_minuteOffset);
    }
}

const IfcMinuteInHour IfcCoordinatedUniversalTimeOffset::getMinuteOffset() const {
    IfcCoordinatedUniversalTimeOffset * deConstObject = const_cast< IfcCoordinatedUniversalTimeOffset * > (this);
    return deConstObject->getMinuteOffset();
}

void IfcCoordinatedUniversalTimeOffset::setMinuteOffset(IfcMinuteInHour value) {
    m_minuteOffset = value;
}

void IfcCoordinatedUniversalTimeOffset::unsetMinuteOffset() {
    m_minuteOffset = Step::getUnset(getMinuteOffset());
}

bool IfcCoordinatedUniversalTimeOffset::testMinuteOffset() const {
    return !Step::isUnset(getMinuteOffset());
}

IfcAheadOrBehind IfcCoordinatedUniversalTimeOffset::getSense() {
    if (Step::BaseObject::inited()) {
        return m_sense;
    }
    else {
        return IfcAheadOrBehind_UNSET;
    }
}

const IfcAheadOrBehind IfcCoordinatedUniversalTimeOffset::getSense() const {
    IfcCoordinatedUniversalTimeOffset * deConstObject = const_cast< IfcCoordinatedUniversalTimeOffset * > (this);
    return deConstObject->getSense();
}

void IfcCoordinatedUniversalTimeOffset::setSense(IfcAheadOrBehind value) {
    m_sense = value;
}

void IfcCoordinatedUniversalTimeOffset::unsetSense() {
    m_sense = IfcAheadOrBehind_UNSET;
}

bool IfcCoordinatedUniversalTimeOffset::testSense() const {
    return getSense() != IfcAheadOrBehind_UNSET;
}

bool IfcCoordinatedUniversalTimeOffset::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hourOffset = Step::getUnset(m_hourOffset);
    }
    else {
        m_hourOffset = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minuteOffset = Step::getUnset(m_minuteOffset);
    }
    else {
        m_minuteOffset = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_sense = IfcAheadOrBehind_UNSET;
    }
    else {
        if (arg == ".AHEAD.") {
            m_sense = IfcAheadOrBehind_AHEAD;
        }
        else if (arg == ".BEHIND.") {
            m_sense = IfcAheadOrBehind_BEHIND;
        }
    }
    return true;
}

void IfcCoordinatedUniversalTimeOffset::copy(const IfcCoordinatedUniversalTimeOffset &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setHourOffset(obj.m_hourOffset);
    setMinuteOffset(obj.m_minuteOffset);
    setSense(obj.m_sense);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcCoordinatedUniversalTimeOffset::s_type("IfcCoordinatedUniversalTimeOffset");
