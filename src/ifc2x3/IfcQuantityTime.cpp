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


#include <ifc2x3/IfcQuantityTime.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcQuantityTime::IfcQuantityTime(Step::Id id, Step::SPFData *args) : 
    IfcPhysicalSimpleQuantity(id, args)
{
    m_TimeValue = Step::getUnset(m_TimeValue);
}

IfcQuantityTime::~IfcQuantityTime()
{}

bool IfcQuantityTime::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcQuantityTime(this);
}


IfcTimeMeasure IfcQuantityTime::getTimeValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_TimeValue;
    }
    else 
    {
        return Step::getUnset(m_TimeValue);
    }    
}

IfcTimeMeasure IfcQuantityTime::getTimeValue() const
{
    return const_cast<IfcQuantityTime *>(this)->getTimeValue();
}

void IfcQuantityTime::setTimeValue(IfcTimeMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeValue = value;
}

void IfcQuantityTime::unsetTimeValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_TimeValue = Step::getUnset(getTimeValue());
}

bool IfcQuantityTime::testTimeValue() const
{
    return Step::isUnset(getTimeValue()) == false;
}

bool IfcQuantityTime::init()
{
    if (IfcPhysicalSimpleQuantity::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_TimeValue = Step::getUnset(m_TimeValue);
    }
    else
    {
        m_TimeValue = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcQuantityTime::copy(const IfcQuantityTime &obj, const CopyOp &copyop)
{
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setTimeValue(obj.m_TimeValue);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcQuantityTime, IfcPhysicalSimpleQuantity)
