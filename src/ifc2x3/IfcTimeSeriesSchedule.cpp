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



#include <ifc2x3/IfcTimeSeriesSchedule.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcControl.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcTimeSeries.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTimeSeriesSchedule::IfcTimeSeriesSchedule(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_applicableDates.setUnset(true);
    m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_UNSET;
    m_timeSeries = NULL;
}

IfcTimeSeriesSchedule::~IfcTimeSeriesSchedule() {
}

bool IfcTimeSeriesSchedule::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTimeSeriesSchedule(this);
}

const std::string &IfcTimeSeriesSchedule::type() const {
    return IfcTimeSeriesSchedule::s_type.getName();
}

const Step::ClassType &IfcTimeSeriesSchedule::getClassType() {
    return IfcTimeSeriesSchedule::s_type;
}

const Step::ClassType &IfcTimeSeriesSchedule::getType() const {
    return IfcTimeSeriesSchedule::s_type;
}

bool IfcTimeSeriesSchedule::isOfType(const Step::ClassType &t) const {
    return IfcTimeSeriesSchedule::s_type == t ? true : IfcControl::isOfType(t);
}

List_IfcDateTimeSelect_1_n &IfcTimeSeriesSchedule::getApplicableDates() {
    if (Step::BaseObject::inited()) {
        return m_applicableDates;
    }
    else {
        m_applicableDates.setUnset(true);
        return m_applicableDates;
    }
}

const List_IfcDateTimeSelect_1_n &IfcTimeSeriesSchedule::getApplicableDates() const {
    IfcTimeSeriesSchedule * deConstObject = const_cast< IfcTimeSeriesSchedule * > (this);
    return deConstObject->getApplicableDates();
}

void IfcTimeSeriesSchedule::setApplicableDates(const List_IfcDateTimeSelect_1_n &value) {
    m_applicableDates = value;
}

void IfcTimeSeriesSchedule::unsetApplicableDates() {
    m_applicableDates.clear();
    m_applicableDates.setUnset(true);
}

bool IfcTimeSeriesSchedule::testApplicableDates() const {
    return !m_applicableDates.isUnset();
}

IfcTimeSeriesScheduleTypeEnum IfcTimeSeriesSchedule::getTimeSeriesScheduleType() {
    if (Step::BaseObject::inited()) {
        return m_timeSeriesScheduleType;
    }
    else {
        return IfcTimeSeriesScheduleTypeEnum_UNSET;
    }
}

const IfcTimeSeriesScheduleTypeEnum IfcTimeSeriesSchedule::getTimeSeriesScheduleType() const {
    IfcTimeSeriesSchedule * deConstObject = const_cast< IfcTimeSeriesSchedule * > (this);
    return deConstObject->getTimeSeriesScheduleType();
}

void IfcTimeSeriesSchedule::setTimeSeriesScheduleType(IfcTimeSeriesScheduleTypeEnum value) {
    m_timeSeriesScheduleType = value;
}

void IfcTimeSeriesSchedule::unsetTimeSeriesScheduleType() {
    m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_UNSET;
}

bool IfcTimeSeriesSchedule::testTimeSeriesScheduleType() const {
    return getTimeSeriesScheduleType() != IfcTimeSeriesScheduleTypeEnum_UNSET;
}

IfcTimeSeries *IfcTimeSeriesSchedule::getTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_timeSeries.get();
    }
    else {
        return NULL;
    }
}

const IfcTimeSeries *IfcTimeSeriesSchedule::getTimeSeries() const {
    IfcTimeSeriesSchedule * deConstObject = const_cast< IfcTimeSeriesSchedule * > (this);
    return deConstObject->getTimeSeries();
}

void IfcTimeSeriesSchedule::setTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_timeSeries = value;
}

void IfcTimeSeriesSchedule::unsetTimeSeries() {
    m_timeSeries = Step::getUnset(getTimeSeries());
}

bool IfcTimeSeriesSchedule::testTimeSeries() const {
    return !Step::isUnset(getTimeSeries());
}

bool IfcTimeSeriesSchedule::init() {
    bool status = IfcControl::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicableDates.setUnset(true);
    }
    else {
        m_applicableDates.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcDateTimeSelect > attr2;
                attr2 = new IfcDateTimeSelect;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                m_applicableDates.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_UNSET;
    }
    else {
        if (arg == ".ANNUAL.") {
            m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_ANNUAL;
        }
        else if (arg == ".MONTHLY.") {
            m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_MONTHLY;
        }
        else if (arg == ".WEEKLY.") {
            m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_WEEKLY;
        }
        else if (arg == ".DAILY.") {
            m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_DAILY;
        }
        else if (arg == ".USERDEFINED.") {
            m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_timeSeries = NULL;
    }
    else {
        m_timeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcTimeSeriesSchedule::copy(const IfcTimeSeriesSchedule &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcDateTimeSelect >, 1 >::const_iterator it_m_applicableDates;
    IfcControl::copy(obj, copyop);
    for (it_m_applicableDates = obj.m_applicableDates.begin(); it_m_applicableDates != obj.m_applicableDates.end(); ++it_m_applicableDates) {
        Step::RefPtr< IfcDateTimeSelect > copyTarget = new IfcDateTimeSelect;
        copyTarget->copy(*((*it_m_applicableDates).get()), copyop);
        m_applicableDates.push_back(copyTarget.get());
    }
    setTimeSeriesScheduleType(obj.m_timeSeriesScheduleType);
    setTimeSeries((IfcTimeSeries*)copyop(obj.m_timeSeries.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTimeSeriesSchedule::s_type("IfcTimeSeriesSchedule");
