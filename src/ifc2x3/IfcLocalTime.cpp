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



#include <ifc2x3/IfcLocalTime.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCoordinatedUniversalTimeOffset.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcLocalTime::IfcLocalTime(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_hourComponent = Step::getUnset(m_hourComponent);
    m_minuteComponent = Step::getUnset(m_minuteComponent);
    m_secondComponent = Step::getUnset(m_secondComponent);
    m_zone = NULL;
    m_daylightSavingOffset = Step::getUnset(m_daylightSavingOffset);
}

IfcLocalTime::~IfcLocalTime() {
}

bool IfcLocalTime::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcLocalTime(this);
}

const std::string &IfcLocalTime::type() const {
    return IfcLocalTime::s_type.getName();
}

const Step::ClassType &IfcLocalTime::getClassType() {
    return IfcLocalTime::s_type;
}

const Step::ClassType &IfcLocalTime::getType() const {
    return IfcLocalTime::s_type;
}

bool IfcLocalTime::isOfType(const Step::ClassType &t) const {
    return IfcLocalTime::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcHourInDay IfcLocalTime::getHourComponent() {
    if (Step::BaseObject::inited()) {
        return m_hourComponent;
    }
    else {
        return Step::getUnset(m_hourComponent);
    }
}

const IfcHourInDay IfcLocalTime::getHourComponent() const {
    IfcLocalTime * deConstObject = const_cast< IfcLocalTime * > (this);
    return deConstObject->getHourComponent();
}

void IfcLocalTime::setHourComponent(IfcHourInDay value) {
    m_hourComponent = value;
}

void IfcLocalTime::unsetHourComponent() {
    m_hourComponent = Step::getUnset(getHourComponent());
}

bool IfcLocalTime::testHourComponent() const {
    return !Step::isUnset(getHourComponent());
}

IfcMinuteInHour IfcLocalTime::getMinuteComponent() {
    if (Step::BaseObject::inited()) {
        return m_minuteComponent;
    }
    else {
        return Step::getUnset(m_minuteComponent);
    }
}

const IfcMinuteInHour IfcLocalTime::getMinuteComponent() const {
    IfcLocalTime * deConstObject = const_cast< IfcLocalTime * > (this);
    return deConstObject->getMinuteComponent();
}

void IfcLocalTime::setMinuteComponent(IfcMinuteInHour value) {
    m_minuteComponent = value;
}

void IfcLocalTime::unsetMinuteComponent() {
    m_minuteComponent = Step::getUnset(getMinuteComponent());
}

bool IfcLocalTime::testMinuteComponent() const {
    return !Step::isUnset(getMinuteComponent());
}

IfcSecondInMinute IfcLocalTime::getSecondComponent() {
    if (Step::BaseObject::inited()) {
        return m_secondComponent;
    }
    else {
        return Step::getUnset(m_secondComponent);
    }
}

const IfcSecondInMinute IfcLocalTime::getSecondComponent() const {
    IfcLocalTime * deConstObject = const_cast< IfcLocalTime * > (this);
    return deConstObject->getSecondComponent();
}

void IfcLocalTime::setSecondComponent(IfcSecondInMinute value) {
    m_secondComponent = value;
}

void IfcLocalTime::unsetSecondComponent() {
    m_secondComponent = Step::getUnset(getSecondComponent());
}

bool IfcLocalTime::testSecondComponent() const {
    return !Step::isUnset(getSecondComponent());
}

IfcCoordinatedUniversalTimeOffset *IfcLocalTime::getZone() {
    if (Step::BaseObject::inited()) {
        return m_zone.get();
    }
    else {
        return NULL;
    }
}

const IfcCoordinatedUniversalTimeOffset *IfcLocalTime::getZone() const {
    IfcLocalTime * deConstObject = const_cast< IfcLocalTime * > (this);
    return deConstObject->getZone();
}

void IfcLocalTime::setZone(const Step::RefPtr< IfcCoordinatedUniversalTimeOffset > &value) {
    m_zone = value;
}

void IfcLocalTime::unsetZone() {
    m_zone = Step::getUnset(getZone());
}

bool IfcLocalTime::testZone() const {
    return !Step::isUnset(getZone());
}

IfcDaylightSavingHour IfcLocalTime::getDaylightSavingOffset() {
    if (Step::BaseObject::inited()) {
        return m_daylightSavingOffset;
    }
    else {
        return Step::getUnset(m_daylightSavingOffset);
    }
}

const IfcDaylightSavingHour IfcLocalTime::getDaylightSavingOffset() const {
    IfcLocalTime * deConstObject = const_cast< IfcLocalTime * > (this);
    return deConstObject->getDaylightSavingOffset();
}

void IfcLocalTime::setDaylightSavingOffset(IfcDaylightSavingHour value) {
    m_daylightSavingOffset = value;
}

void IfcLocalTime::unsetDaylightSavingOffset() {
    m_daylightSavingOffset = Step::getUnset(getDaylightSavingOffset());
}

bool IfcLocalTime::testDaylightSavingOffset() const {
    return !Step::isUnset(getDaylightSavingOffset());
}

bool IfcLocalTime::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hourComponent = Step::getUnset(m_hourComponent);
    }
    else {
        m_hourComponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_minuteComponent = Step::getUnset(m_minuteComponent);
    }
    else {
        m_minuteComponent = Step::spfToInteger(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_secondComponent = Step::getUnset(m_secondComponent);
    }
    else {
        m_secondComponent = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_zone = NULL;
    }
    else {
        m_zone = static_cast< IfcCoordinatedUniversalTimeOffset * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_daylightSavingOffset = Step::getUnset(m_daylightSavingOffset);
    }
    else {
        m_daylightSavingOffset = Step::spfToInteger(arg);
    }
    return true;
}

void IfcLocalTime::copy(const IfcLocalTime &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setHourComponent(obj.m_hourComponent);
    setMinuteComponent(obj.m_minuteComponent);
    setSecondComponent(obj.m_secondComponent);
    setZone((IfcCoordinatedUniversalTimeOffset*)copyop(obj.m_zone.get()));
    setDaylightSavingOffset(obj.m_daylightSavingOffset);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcLocalTime::s_type("IfcLocalTime");
