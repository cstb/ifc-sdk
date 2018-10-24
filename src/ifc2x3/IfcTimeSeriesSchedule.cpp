// IFC SDK : IFC2X3 C++ Early Classes
// Copyright (C) 2009-2018 CSTB   
//   
// For further information please contact
//                                       
//         eveBIM-support@cstb.fr        
//   or                                  
//         CSTB DTI/MIC                  
//         290, route des Lucioles       
//         BP 209                        
//         06904 Sophia Antipolis, France
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

#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcTimeSeries.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTimeSeriesSchedule::IfcTimeSeriesSchedule(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_ApplicableDates.setUnset(true);
    m_TimeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_UNSET;
    m_TimeSeries = NULL;
}

IfcTimeSeriesSchedule::~IfcTimeSeriesSchedule()
{}

bool IfcTimeSeriesSchedule::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTimeSeriesSchedule(this);
}


List_IfcDateTimeSelect_1_n &IfcTimeSeriesSchedule::getApplicableDates()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ApplicableDates;
    }
    else 
    {
        m_ApplicableDates.setUnset(true);
        return m_ApplicableDates;
    }    
}

const List_IfcDateTimeSelect_1_n &IfcTimeSeriesSchedule::getApplicableDates() const
{
    return const_cast<IfcTimeSeriesSchedule *>(this)->getApplicableDates();
}

void IfcTimeSeriesSchedule::setApplicableDates(const List_IfcDateTimeSelect_1_n &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicableDates = value;
}

void IfcTimeSeriesSchedule::unsetApplicableDates()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ApplicableDates.clear();
    m_ApplicableDates.setUnset(true);
}

bool IfcTimeSeriesSchedule::testApplicableDates() const
{
    return m_ApplicableDates.isUnset() == false;
}


IfcTimeSeriesScheduleTypeEnum IfcTimeSeriesSchedule::getTimeSeriesScheduleType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TimeSeriesScheduleType;
    }
    else 
    {
        return IfcTimeSeriesScheduleTypeEnum_UNSET;
    }    
}

IfcTimeSeriesScheduleTypeEnum IfcTimeSeriesSchedule::getTimeSeriesScheduleType() const
{
    return const_cast<IfcTimeSeriesSchedule *>(this)->getTimeSeriesScheduleType();
}

void IfcTimeSeriesSchedule::setTimeSeriesScheduleType(IfcTimeSeriesScheduleTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeSeriesScheduleType = value;
}

void IfcTimeSeriesSchedule::unsetTimeSeriesScheduleType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_UNSET;
}

bool IfcTimeSeriesSchedule::testTimeSeriesScheduleType() const
{
    return Step::isUnset(getTimeSeriesScheduleType()) == false;
}


IfcTimeSeries *IfcTimeSeriesSchedule::getTimeSeries()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TimeSeries.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcTimeSeries *IfcTimeSeriesSchedule::getTimeSeries() const
{
    return const_cast<IfcTimeSeriesSchedule *>(this)->getTimeSeries();
}

void IfcTimeSeriesSchedule::setTimeSeries(const Step::RefPtr< IfcTimeSeries > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeSeries = value;
}

void IfcTimeSeriesSchedule::unsetTimeSeries()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeSeries = Step::getUnset(getTimeSeries());
}

bool IfcTimeSeriesSchedule::testTimeSeries() const
{
    return Step::isUnset(getTimeSeries()) == false;
}

bool IfcTimeSeriesSchedule::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ApplicableDates.setUnset(true);
    }
    else
    {
        m_ApplicableDates.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                Step::RefPtr< IfcDateTimeSelect > attr2 = new IfcDateTimeSelect();
                if (str1[0] == '#') 
                {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') 
                {
                    std::string::size_type i2 = str1.find('(');
                    if (i2 != std::string::npos) 
                    {
                        std::string type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) 
                {
                    m_ApplicableDates.push_back(attr2);
                }
            }
            else 
            {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TimeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ANNUAL.")
        {
            m_TimeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_ANNUAL;
        }
        else if (arg == ".MONTHLY.")
        {
            m_TimeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_MONTHLY;
        }
        else if (arg == ".WEEKLY.")
        {
            m_TimeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_WEEKLY;
        }
        else if (arg == ".DAILY.")
        {
            m_TimeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_DAILY;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_TimeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_TimeSeriesScheduleType = IfcTimeSeriesScheduleTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TimeSeries = NULL;
    }
    else
    {
        m_TimeSeries = static_cast< IfcTimeSeries * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcTimeSeriesSchedule::copy(const IfcTimeSeriesSchedule &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    List_IfcDateTimeSelect_1_n::const_iterator it_m_ApplicableDates;
    for (it_m_ApplicableDates = obj.m_ApplicableDates.begin(); it_m_ApplicableDates != obj.m_ApplicableDates.end(); ++it_m_ApplicableDates)
    {
        Step::RefPtr< IfcDateTimeSelect > copyTarget = new IfcDateTimeSelect;
        copyTarget->copy(*((*it_m_ApplicableDates).get()), copyop);
        m_ApplicableDates.push_back(copyTarget.get());
    }
    
    setTimeSeriesScheduleType(obj.m_TimeSeriesScheduleType);
    setTimeSeries((IfcTimeSeries*)copyop(obj.m_TimeSeries.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTimeSeriesSchedule, IfcControl)
