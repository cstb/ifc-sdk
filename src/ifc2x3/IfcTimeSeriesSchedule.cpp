/*
///////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik generator                    //
//  Powered by : Eve CSTB                    //
///////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2007 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcTimeSeriesSchedule.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcControl.h"
#include "ifc2x3/IfcDateTimeSelect.h"
#include "ifc2x3/IfcTimeSeries.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

#ifdef USE_MEMORYMANAGER
#include <Tools/MemoryManager/mmgr.h>
#endif
using namespace ifc2x3;

IfcTimeSeriesSchedule::IfcTimeSeriesSchedule(Step::Id id, Step::SPFData *args) : IfcControl(id, args) {
    m_applicableDates.setUnset(true);
    m_timeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_UNSET;
    m_timeSeries = NULL;
}

IfcTimeSeriesSchedule::~IfcTimeSeriesSchedule() {
}

bool IfcTimeSeriesSchedule::acceptVisitor(Step::BaseVisitor *v) {
    return static_cast< Visitor * > (v)->visitIfcTimeSeriesSchedule(this);
}

const std::string &IfcTimeSeriesSchedule::type() {
    return IfcTimeSeriesSchedule::s_type.getName();
}

Step::ClassType IfcTimeSeriesSchedule::getClassType() {
    return IfcTimeSeriesSchedule::s_type;
}

Step::ClassType IfcTimeSeriesSchedule::getType() const {
    return IfcTimeSeriesSchedule::s_type;
}

bool IfcTimeSeriesSchedule::isOfType(Step::ClassType t) {
    return IfcTimeSeriesSchedule::s_type == t ? true : IfcControl::isOfType(t);
}

Step::List< Step::RefPtr< IfcDateTimeSelect > > &IfcTimeSeriesSchedule::getApplicableDates() {
    if (Step::BaseObject::inited()) {
        return m_applicableDates;
    }
    else {
        m_applicableDates.setUnset(true);
        return m_applicableDates;
    }
}

void IfcTimeSeriesSchedule::setApplicableDates(const Step::List< Step::RefPtr< IfcDateTimeSelect > > &value) {
    m_applicableDates = value;
}

IfcTimeSeriesScheduleTypeEnum IfcTimeSeriesSchedule::getTimeSeriesScheduleType() {
    if (Step::BaseObject::inited()) {
        return m_timeSeriesScheduleType;
    }
    else {
        return IfcTimeSeriesScheduleTypeEnum_UNSET;
    }
}

void IfcTimeSeriesSchedule::setTimeSeriesScheduleType(IfcTimeSeriesScheduleTypeEnum value) {
    m_timeSeriesScheduleType = value;
}

IfcTimeSeries *IfcTimeSeriesSchedule::getTimeSeries() {
    if (Step::BaseObject::inited()) {
        return m_timeSeries.get();
    }
    else {
        return NULL;
    }
}

void IfcTimeSeriesSchedule::setTimeSeries(const Step::RefPtr< IfcTimeSeries > &value) {
    m_timeSeries = value;
}

void IfcTimeSeriesSchedule::release() {
    IfcControl::release();
    m_applicableDates.clear();
    m_timeSeries.release();
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
                    attr2->set(m_expressDataSet->get(atoi(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    unsigned int i2;
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
        m_timeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(atoi(arg.c_str() + 1)));
    }
    return true;
}

void IfcTimeSeriesSchedule::copy(const IfcTimeSeriesSchedule &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcDateTimeSelect > >::const_iterator it_m_applicableDates;
    IfcControl::copy(obj, copyop);
    for (it_m_applicableDates = obj.m_applicableDates.begin(); it_m_applicableDates != obj.m_applicableDates.end(); ++it_m_applicableDates) {
        Step::RefPtr< IfcDateTimeSelect > copyTarget = new IfcDateTimeSelect;
        copyTarget->copy(*((*it_m_applicableDates).get()), copyop);
        m_applicableDates.push_back(copyTarget.get());
    }
    setTimeSeriesScheduleType(obj.m_timeSeriesScheduleType);
    setTimeSeries(copyop(obj.m_timeSeries.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTimeSeriesSchedule::s_type("IfcTimeSeriesSchedule");
