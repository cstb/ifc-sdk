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


#include <ifc2x3/IfcCalendarDate.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCalendarDate::IfcCalendarDate(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_DayComponent = Step::getUnset(m_DayComponent);
    m_MonthComponent = Step::getUnset(m_MonthComponent);
    m_YearComponent = Step::getUnset(m_YearComponent);
}

IfcCalendarDate::~IfcCalendarDate()
{}

bool IfcCalendarDate::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCalendarDate(this);
}


IfcDayInMonthNumber IfcCalendarDate::getDayComponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DayComponent;
    }
    else 
    {
        return Step::getUnset(m_DayComponent);
    }    
}

IfcDayInMonthNumber IfcCalendarDate::getDayComponent() const
{
    return const_cast<IfcCalendarDate *>(this)->getDayComponent();
}

void IfcCalendarDate::setDayComponent(IfcDayInMonthNumber value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DayComponent = value;
}

void IfcCalendarDate::unsetDayComponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DayComponent = Step::getUnset(getDayComponent());
}

bool IfcCalendarDate::testDayComponent() const
{
    return Step::isUnset(getDayComponent()) == false;
}


IfcMonthInYearNumber IfcCalendarDate::getMonthComponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MonthComponent;
    }
    else 
    {
        return Step::getUnset(m_MonthComponent);
    }    
}

IfcMonthInYearNumber IfcCalendarDate::getMonthComponent() const
{
    return const_cast<IfcCalendarDate *>(this)->getMonthComponent();
}

void IfcCalendarDate::setMonthComponent(IfcMonthInYearNumber value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MonthComponent = value;
}

void IfcCalendarDate::unsetMonthComponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MonthComponent = Step::getUnset(getMonthComponent());
}

bool IfcCalendarDate::testMonthComponent() const
{
    return Step::isUnset(getMonthComponent()) == false;
}


IfcYearNumber IfcCalendarDate::getYearComponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_YearComponent;
    }
    else 
    {
        return Step::getUnset(m_YearComponent);
    }    
}

IfcYearNumber IfcCalendarDate::getYearComponent() const
{
    return const_cast<IfcCalendarDate *>(this)->getYearComponent();
}

void IfcCalendarDate::setYearComponent(IfcYearNumber value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YearComponent = value;
}

void IfcCalendarDate::unsetYearComponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_YearComponent = Step::getUnset(getYearComponent());
}

bool IfcCalendarDate::testYearComponent() const
{
    return Step::isUnset(getYearComponent()) == false;
}

bool IfcCalendarDate::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DayComponent = Step::getUnset(m_DayComponent);
    }
    else
    {
        m_DayComponent = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MonthComponent = Step::getUnset(m_MonthComponent);
    }
    else
    {
        m_MonthComponent = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_YearComponent = Step::getUnset(m_YearComponent);
    }
    else
    {
        m_YearComponent = Step::spfToInteger(arg)
;
    }
    return true;
}

void IfcCalendarDate::copy(const IfcCalendarDate &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setDayComponent(obj.m_DayComponent);
    setMonthComponent(obj.m_MonthComponent);
    setYearComponent(obj.m_YearComponent);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCalendarDate, Step::BaseEntity)
