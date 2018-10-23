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


#include <ifc2x3/IfcQuantityArea.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcQuantityArea::IfcQuantityArea(Step::Id id, Step::SPFData *args) : 
    IfcPhysicalSimpleQuantity(id, args)
{
    m_AreaValue = Step::getUnset(m_AreaValue);
}

IfcQuantityArea::~IfcQuantityArea()
{}

bool IfcQuantityArea::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcQuantityArea(this);
}


IfcAreaMeasure IfcQuantityArea::getAreaValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_AreaValue;
    }
    else 
    {
        return Step::getUnset(m_AreaValue);
    }    
}

IfcAreaMeasure IfcQuantityArea::getAreaValue() const
{
    return const_cast<IfcQuantityArea *>(this)->getAreaValue();
}

void IfcQuantityArea::setAreaValue(IfcAreaMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AreaValue = value;
}

void IfcQuantityArea::unsetAreaValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_AreaValue = Step::getUnset(getAreaValue());
}

bool IfcQuantityArea::testAreaValue() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getAreaValue()) == false;
}

bool IfcQuantityArea::init()
{
    if (IfcPhysicalSimpleQuantity::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_AreaValue = Step::getUnset(m_AreaValue);
    }
    else
    {
        m_AreaValue = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcQuantityArea::copy(const IfcQuantityArea &obj, const CopyOp &copyop)
{
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setAreaValue(obj.m_AreaValue);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcQuantityArea, IfcPhysicalSimpleQuantity)
