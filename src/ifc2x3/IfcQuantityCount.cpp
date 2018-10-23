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


#include <ifc2x3/IfcQuantityCount.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcQuantityCount::IfcQuantityCount(Step::Id id, Step::SPFData *args) : 
    IfcPhysicalSimpleQuantity(id, args)
{
    m_CountValue = Step::getUnset(m_CountValue);
}

IfcQuantityCount::~IfcQuantityCount()
{}

bool IfcQuantityCount::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcQuantityCount(this);
}


IfcCountMeasure IfcQuantityCount::getCountValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CountValue;
    }
    else 
    {
        return Step::getUnset(m_CountValue);
    }    
}

IfcCountMeasure IfcQuantityCount::getCountValue() const
{
    return const_cast<IfcQuantityCount *>(this)->getCountValue();
}

void IfcQuantityCount::setCountValue(IfcCountMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CountValue = value;
}

void IfcQuantityCount::unsetCountValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CountValue = Step::getUnset(getCountValue());
}

bool IfcQuantityCount::testCountValue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getCountValue()) == false;
}

bool IfcQuantityCount::init()
{
    if (IfcPhysicalSimpleQuantity::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CountValue = Step::getUnset(m_CountValue);
    }
    else
    {
        m_CountValue = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcQuantityCount::copy(const IfcQuantityCount &obj, const CopyOp &copyop)
{
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setCountValue(obj.m_CountValue);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcQuantityCount, IfcPhysicalSimpleQuantity)
