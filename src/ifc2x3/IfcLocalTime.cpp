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


#include <ifc2x3/IfcLocalTime.h>

#include <ifc2x3/IfcCoordinatedUniversalTimeOffset.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLocalTime::IfcLocalTime(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_HourComponent = Step::getUnset(m_HourComponent);
    m_MinuteComponent = Step::getUnset(m_MinuteComponent);
    m_SecondComponent = Step::getUnset(m_SecondComponent);
    m_Zone = NULL;
    m_DaylightSavingOffset = Step::getUnset(m_DaylightSavingOffset);
}

IfcLocalTime::~IfcLocalTime()
{}

bool IfcLocalTime::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLocalTime(this);
}


IfcHourInDay IfcLocalTime::getHourComponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_HourComponent;
    }
    else 
    {
        return Step::getUnset(m_HourComponent);
    }    
}

IfcHourInDay IfcLocalTime::getHourComponent() const
{
    return const_cast<IfcLocalTime *>(this)->getHourComponent();
}

void IfcLocalTime::setHourComponent(IfcHourInDay value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HourComponent = value;
}

void IfcLocalTime::unsetHourComponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HourComponent = Step::getUnset(getHourComponent());
}

bool IfcLocalTime::testHourComponent() const
{
    return Step::isUnset(getHourComponent()) == false;
}


IfcMinuteInHour IfcLocalTime::getMinuteComponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MinuteComponent;
    }
    else 
    {
        return Step::getUnset(m_MinuteComponent);
    }    
}

IfcMinuteInHour IfcLocalTime::getMinuteComponent() const
{
    return const_cast<IfcLocalTime *>(this)->getMinuteComponent();
}

void IfcLocalTime::setMinuteComponent(IfcMinuteInHour value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinuteComponent = value;
}

void IfcLocalTime::unsetMinuteComponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinuteComponent = Step::getUnset(getMinuteComponent());
}

bool IfcLocalTime::testMinuteComponent() const
{
    return Step::isUnset(getMinuteComponent()) == false;
}


IfcSecondInMinute IfcLocalTime::getSecondComponent()
{
    if (Step::BaseObject::inited()) 
    {
        return m_SecondComponent;
    }
    else 
    {
        return Step::getUnset(m_SecondComponent);
    }    
}

IfcSecondInMinute IfcLocalTime::getSecondComponent() const
{
    return const_cast<IfcLocalTime *>(this)->getSecondComponent();
}

void IfcLocalTime::setSecondComponent(IfcSecondInMinute value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondComponent = value;
}

void IfcLocalTime::unsetSecondComponent()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_SecondComponent = Step::getUnset(getSecondComponent());
}

bool IfcLocalTime::testSecondComponent() const
{
    return Step::isUnset(getSecondComponent()) == false;
}


IfcCoordinatedUniversalTimeOffset *IfcLocalTime::getZone()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Zone.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcCoordinatedUniversalTimeOffset *IfcLocalTime::getZone() const
{
    return const_cast<IfcLocalTime *>(this)->getZone();
}

void IfcLocalTime::setZone(const Step::RefPtr< IfcCoordinatedUniversalTimeOffset > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Zone = value;
}

void IfcLocalTime::unsetZone()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Zone = Step::getUnset(getZone());
}

bool IfcLocalTime::testZone() const
{
    return Step::isUnset(getZone()) == false;
}


IfcDaylightSavingHour IfcLocalTime::getDaylightSavingOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_DaylightSavingOffset;
    }
    else 
    {
        return Step::getUnset(m_DaylightSavingOffset);
    }    
}

IfcDaylightSavingHour IfcLocalTime::getDaylightSavingOffset() const
{
    return const_cast<IfcLocalTime *>(this)->getDaylightSavingOffset();
}

void IfcLocalTime::setDaylightSavingOffset(IfcDaylightSavingHour value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DaylightSavingOffset = value;
}

void IfcLocalTime::unsetDaylightSavingOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_DaylightSavingOffset = Step::getUnset(getDaylightSavingOffset());
}

bool IfcLocalTime::testDaylightSavingOffset() const
{
    return Step::isUnset(getDaylightSavingOffset()) == false;
}

bool IfcLocalTime::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HourComponent = Step::getUnset(m_HourComponent);
    }
    else
    {
        m_HourComponent = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MinuteComponent = Step::getUnset(m_MinuteComponent);
    }
    else
    {
        m_MinuteComponent = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_SecondComponent = Step::getUnset(m_SecondComponent);
    }
    else
    {
        m_SecondComponent = Step::spfToReal(arg)

;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Zone = NULL;
    }
    else
    {
        m_Zone = static_cast< IfcCoordinatedUniversalTimeOffset * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_DaylightSavingOffset = Step::getUnset(m_DaylightSavingOffset);
    }
    else
    {
        m_DaylightSavingOffset = Step::spfToInteger(arg)
;
    }
    return true;
}

void IfcLocalTime::copy(const IfcLocalTime &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setHourComponent(obj.m_HourComponent);
    setMinuteComponent(obj.m_MinuteComponent);
    setSecondComponent(obj.m_SecondComponent);
    setZone((IfcCoordinatedUniversalTimeOffset*)copyop(obj.m_Zone.get()));
    setDaylightSavingOffset(obj.m_DaylightSavingOffset);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLocalTime, Step::BaseEntity)
