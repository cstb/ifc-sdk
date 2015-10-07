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



#include <ifc2x3/IfcDateAndTime.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcLocalTime.h>
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

IfcDateAndTime::IfcDateAndTime(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_dateComponent = NULL;
    m_timeComponent = NULL;
}

IfcDateAndTime::~IfcDateAndTime() {
}

bool IfcDateAndTime::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDateAndTime(this);
}

const std::string &IfcDateAndTime::type() const {
    return IfcDateAndTime::s_type.getName();
}

const Step::ClassType &IfcDateAndTime::getClassType() {
    return IfcDateAndTime::s_type;
}

const Step::ClassType &IfcDateAndTime::getType() const {
    return IfcDateAndTime::s_type;
}

bool IfcDateAndTime::isOfType(const Step::ClassType &t) const {
    return IfcDateAndTime::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcCalendarDate *IfcDateAndTime::getDateComponent() {
    if (Step::BaseObject::inited()) {
        return m_dateComponent.get();
    }
    else {
        return NULL;
    }
}

const IfcCalendarDate *IfcDateAndTime::getDateComponent() const {
    IfcDateAndTime * deConstObject = const_cast< IfcDateAndTime * > (this);
    return deConstObject->getDateComponent();
}

void IfcDateAndTime::setDateComponent(const Step::RefPtr< IfcCalendarDate > &value) {
    m_dateComponent = value;
}

void IfcDateAndTime::unsetDateComponent() {
    m_dateComponent = Step::getUnset(getDateComponent());
}

bool IfcDateAndTime::testDateComponent() const {
    return !Step::isUnset(getDateComponent());
}

IfcLocalTime *IfcDateAndTime::getTimeComponent() {
    if (Step::BaseObject::inited()) {
        return m_timeComponent.get();
    }
    else {
        return NULL;
    }
}

const IfcLocalTime *IfcDateAndTime::getTimeComponent() const {
    IfcDateAndTime * deConstObject = const_cast< IfcDateAndTime * > (this);
    return deConstObject->getTimeComponent();
}

void IfcDateAndTime::setTimeComponent(const Step::RefPtr< IfcLocalTime > &value) {
    m_timeComponent = value;
}

void IfcDateAndTime::unsetTimeComponent() {
    m_timeComponent = Step::getUnset(getTimeComponent());
}

bool IfcDateAndTime::testTimeComponent() const {
    return !Step::isUnset(getTimeComponent());
}

bool IfcDateAndTime::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dateComponent = NULL;
    }
    else {
        m_dateComponent = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeComponent = NULL;
    }
    else {
        m_timeComponent = static_cast< IfcLocalTime * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcDateAndTime::copy(const IfcDateAndTime &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setDateComponent((IfcCalendarDate*)copyop(obj.m_dateComponent.get()));
    setTimeComponent((IfcLocalTime*)copyop(obj.m_timeComponent.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDateAndTime::s_type("IfcDateAndTime");
