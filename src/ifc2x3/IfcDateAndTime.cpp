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


#include <ifc2x3/IfcDateAndTime.h>

#include <ifc2x3/IfcCalendarDate.h>
#include <ifc2x3/IfcLocalTime.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDateAndTime::IfcDateAndTime(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_DateComponent = NULL;
    m_TimeComponent = NULL;
}

IfcDateAndTime::~IfcDateAndTime()
{}

bool IfcDateAndTime::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDateAndTime(this);
}


IfcCalendarDate *IfcDateAndTime::getDateComponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DateComponent.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCalendarDate *IfcDateAndTime::getDateComponent() const
{
    return const_cast<IfcDateAndTime *>(this)->getDateComponent();
}

void IfcDateAndTime::setDateComponent(const Step::RefPtr< IfcCalendarDate > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DateComponent = value;
}

void IfcDateAndTime::unsetDateComponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DateComponent = Step::getUnset(getDateComponent());
}

bool IfcDateAndTime::testDateComponent() const
{
    return Step::isUnset(getDateComponent()) == false;
}


IfcLocalTime *IfcDateAndTime::getTimeComponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TimeComponent.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcLocalTime *IfcDateAndTime::getTimeComponent() const
{
    return const_cast<IfcDateAndTime *>(this)->getTimeComponent();
}

void IfcDateAndTime::setTimeComponent(const Step::RefPtr< IfcLocalTime > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeComponent = value;
}

void IfcDateAndTime::unsetTimeComponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeComponent = Step::getUnset(getTimeComponent());
}

bool IfcDateAndTime::testTimeComponent() const
{
    return Step::isUnset(getTimeComponent()) == false;
}

bool IfcDateAndTime::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DateComponent = NULL;
    }
    else
    {
        m_DateComponent = static_cast< IfcCalendarDate * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TimeComponent = NULL;
    }
    else
    {
        m_TimeComponent = static_cast< IfcLocalTime * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcDateAndTime::copy(const IfcDateAndTime &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setDateComponent((IfcCalendarDate*)copyop(obj.m_DateComponent.get()));
    setTimeComponent((IfcLocalTime*)copyop(obj.m_TimeComponent.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDateAndTime, Step::BaseEntity)
