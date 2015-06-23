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



#include <ifc2x3/IfcDateTimeSelect.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcDateAndTime.h>
#include <ifc2x3/IfcLocalTime.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>



#include "precompiled.h"

using namespace ifc2x3;

IfcDateTimeSelect::IfcDateTimeSelect() : Step::BaseObject(0) {
    m_type = UNSET;
}

IfcDateTimeSelect::IfcDateTimeSelect(Step::SPFData *args) : Step::BaseObject(args) {
    m_type = UNSET;
}

IfcDateTimeSelect::~IfcDateTimeSelect() {
    deleteUnion();
}

bool IfcDateTimeSelect::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDateTimeSelect(this);
}

bool IfcDateTimeSelect::init() {
    return false;
}

const std::string &IfcDateTimeSelect::type() const {
    return IfcDateTimeSelect::s_type.getName();
}

const Step::ClassType &IfcDateTimeSelect::getClassType() {
    return IfcDateTimeSelect::s_type;
}

const Step::ClassType &IfcDateTimeSelect::getType() const {
    return IfcDateTimeSelect::s_type;
}

bool IfcDateTimeSelect::isOfType(const Step::ClassType &t) const {
    return IfcDateTimeSelect::s_type == t ? true : Step::BaseObject::isOfType(t);
}

void IfcDateTimeSelect::copy(const IfcDateTimeSelect &obj, const CopyOp &copyop) {
    switch(obj.m_type) {
    case IFCCALENDARDATE:
        setIfcCalendarDate((IfcCalendarDate *) (copyop(obj.m_IfcDateTimeSelect_union.m_IfcCalendarDate)));
        break;
    case IFCLOCALTIME:
        setIfcLocalTime((IfcLocalTime *) (copyop(obj.m_IfcDateTimeSelect_union.m_IfcLocalTime)));
        break;
    case IFCDATEANDTIME:
        setIfcDateAndTime((IfcDateAndTime *) (copyop(obj.m_IfcDateTimeSelect_union.m_IfcDateAndTime)));
        break;
    default:
        break;
    }
}

std::string IfcDateTimeSelect::currentTypeName() const {
    switch(m_type) {
    case IFCCALENDARDATE:
        return "IfcCalendarDate";
        break;
    case IFCLOCALTIME:
        return "IfcLocalTime";
        break;
    case IFCDATEANDTIME:
        return "IfcDateAndTime";
        break;
    default:
        return "UNSET";
    }
}

IfcDateTimeSelect::IfcDateTimeSelect_select IfcDateTimeSelect::currentType() const {
    return m_type;
}

void IfcDateTimeSelect::deleteUnion() {
    switch(m_type) {
    case IFCCALENDARDATE:
        m_IfcDateTimeSelect_union.m_IfcCalendarDate->unref();
        break;
    case IFCLOCALTIME:
        m_IfcDateTimeSelect_union.m_IfcLocalTime->unref();
        break;
    case IFCDATEANDTIME:
        m_IfcDateTimeSelect_union.m_IfcDateAndTime->unref();
        break;
    default:
        break;
    }
    m_type = UNSET;
}

IfcCalendarDate *IfcDateTimeSelect::getIfcCalendarDate() const {
    if (m_type == IFCCALENDARDATE) {
        return m_IfcDateTimeSelect_union.m_IfcCalendarDate;
    }
    else {
        return NULL;
    }
}

void IfcDateTimeSelect::setIfcCalendarDate(IfcCalendarDate *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDateTimeSelect_union.m_IfcCalendarDate = value;
    if (value) {
        value->ref();
        m_type = IFCCALENDARDATE;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCCALENDARDATE;
}

IfcLocalTime *IfcDateTimeSelect::getIfcLocalTime() const {
    if (m_type == IFCLOCALTIME) {
        return m_IfcDateTimeSelect_union.m_IfcLocalTime;
    }
    else {
        return NULL;
    }
}

void IfcDateTimeSelect::setIfcLocalTime(IfcLocalTime *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDateTimeSelect_union.m_IfcLocalTime = value;
    if (value) {
        value->ref();
        m_type = IFCLOCALTIME;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCLOCALTIME;
}

IfcDateAndTime *IfcDateTimeSelect::getIfcDateAndTime() const {
    if (m_type == IFCDATEANDTIME) {
        return m_IfcDateTimeSelect_union.m_IfcDateAndTime;
    }
    else {
        return NULL;
    }
}

void IfcDateTimeSelect::setIfcDateAndTime(IfcDateAndTime *value) {
    if (m_type != UNSET) {
        deleteUnion();
    }
    m_IfcDateTimeSelect_union.m_IfcDateAndTime = value;
    if (value) {
        value->ref();
        m_type = IFCDATEANDTIME;
    }
    else {
        m_type = UNSET;
    }
    m_type = IFCDATEANDTIME;
}

void IfcDateTimeSelect::set(Step::BaseObject *v) {
    if (v && v->isOfType(IfcCalendarDate::getClassType())) {
        setIfcCalendarDate(static_cast< IfcCalendarDate* > (v));
    }
    else if (v && v->isOfType(IfcLocalTime::getClassType())) {
        setIfcLocalTime(static_cast< IfcLocalTime* > (v));
    }
    else if (v && v->isOfType(IfcDateAndTime::getClassType())) {
        setIfcDateAndTime(static_cast< IfcDateAndTime* > (v));
    }
}

IFC2X3_EXPORT Step::ClassType IfcDateTimeSelect::s_type("IfcDateTimeSelect");
