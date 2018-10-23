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


#include <ifc2x3/IfcCoordinatedUniversalTimeOffset.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCoordinatedUniversalTimeOffset::IfcCoordinatedUniversalTimeOffset(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_HourOffset = Step::getUnset(m_HourOffset);
    m_MinuteOffset = Step::getUnset(m_MinuteOffset);
    m_Sense = IfcAheadOrBehind_UNSET;
}

IfcCoordinatedUniversalTimeOffset::~IfcCoordinatedUniversalTimeOffset()
{}

bool IfcCoordinatedUniversalTimeOffset::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCoordinatedUniversalTimeOffset(this);
}


IfcHourInDay IfcCoordinatedUniversalTimeOffset::getHourOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_HourOffset;
    }
    else 
    {
        return Step::getUnset(m_HourOffset);
    }    
}

IfcHourInDay IfcCoordinatedUniversalTimeOffset::getHourOffset() const
{
    return const_cast<IfcCoordinatedUniversalTimeOffset *>(this)->getHourOffset();
}

void IfcCoordinatedUniversalTimeOffset::setHourOffset(IfcHourInDay value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HourOffset = value;
}

void IfcCoordinatedUniversalTimeOffset::unsetHourOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_HourOffset = Step::getUnset(getHourOffset());
}

bool IfcCoordinatedUniversalTimeOffset::testHourOffset() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getHourOffset()) == false;
}


IfcMinuteInHour IfcCoordinatedUniversalTimeOffset::getMinuteOffset()
{
    if (Step::BaseObject::inited()) 
    {
        return m_MinuteOffset;
    }
    else 
    {
        return Step::getUnset(m_MinuteOffset);
    }    
}

IfcMinuteInHour IfcCoordinatedUniversalTimeOffset::getMinuteOffset() const
{
    return const_cast<IfcCoordinatedUniversalTimeOffset *>(this)->getMinuteOffset();
}

void IfcCoordinatedUniversalTimeOffset::setMinuteOffset(IfcMinuteInHour value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinuteOffset = value;
}

void IfcCoordinatedUniversalTimeOffset::unsetMinuteOffset()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_MinuteOffset = Step::getUnset(getMinuteOffset());
}

bool IfcCoordinatedUniversalTimeOffset::testMinuteOffset() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getMinuteOffset()) == false;
}


IfcAheadOrBehind IfcCoordinatedUniversalTimeOffset::getSense()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Sense;
    }
    else 
    {
        return IfcAheadOrBehind_UNSET;
    }    
}

IfcAheadOrBehind IfcCoordinatedUniversalTimeOffset::getSense() const
{
    return const_cast<IfcCoordinatedUniversalTimeOffset *>(this)->getSense();
}

void IfcCoordinatedUniversalTimeOffset::setSense(IfcAheadOrBehind value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Sense = value;
}

void IfcCoordinatedUniversalTimeOffset::unsetSense()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Sense = IfcAheadOrBehind_UNSET;
}

bool IfcCoordinatedUniversalTimeOffset::testSense() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getSense()) == false;
}

bool IfcCoordinatedUniversalTimeOffset::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_HourOffset = Step::getUnset(m_HourOffset);
    }
    else
    {
        m_HourOffset = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_MinuteOffset = Step::getUnset(m_MinuteOffset);
    }
    else
    {
        m_MinuteOffset = Step::spfToInteger(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Sense = IfcAheadOrBehind_UNSET;
    }
    else
    {
        if (arg == ".AHEAD.")
        {
            m_Sense = IfcAheadOrBehind_AHEAD;
        }
        else if (arg == ".BEHIND.")
        {
            m_Sense = IfcAheadOrBehind_BEHIND;
        }
    }
    return true;
}

void IfcCoordinatedUniversalTimeOffset::copy(const IfcCoordinatedUniversalTimeOffset &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setHourOffset(obj.m_HourOffset);
    setMinuteOffset(obj.m_MinuteOffset);
    setSense(obj.m_Sense);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCoordinatedUniversalTimeOffset, Step::BaseEntity)
