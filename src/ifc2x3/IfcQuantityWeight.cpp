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


#include <ifc2x3/IfcQuantityWeight.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcQuantityWeight::IfcQuantityWeight(Step::Id id, Step::SPFData *args) : 
    IfcPhysicalSimpleQuantity(id, args)
{
    m_WeightValue = Step::getUnset(m_WeightValue);
}

IfcQuantityWeight::~IfcQuantityWeight()
{}

bool IfcQuantityWeight::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcQuantityWeight(this);
}


IfcMassMeasure IfcQuantityWeight::getWeightValue()
{
    if (Step::BaseObject::inited()) 
    {
        return m_WeightValue;
    }
    else 
    {
        return Step::getUnset(m_WeightValue);
    }    
}

IfcMassMeasure IfcQuantityWeight::getWeightValue() const
{
    return const_cast<IfcQuantityWeight *>(this)->getWeightValue();
}

void IfcQuantityWeight::setWeightValue(IfcMassMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WeightValue = value;
}

void IfcQuantityWeight::unsetWeightValue()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_WeightValue = Step::getUnset(getWeightValue());
}

bool IfcQuantityWeight::testWeightValue() const
{
    return Step::isUnset(getWeightValue()) == false;
}

bool IfcQuantityWeight::init()
{
    if (IfcPhysicalSimpleQuantity::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_WeightValue = Step::getUnset(m_WeightValue);
    }
    else
    {
        m_WeightValue = Step::spfToReal(arg)

;
    }
    return true;
}

void IfcQuantityWeight::copy(const IfcQuantityWeight &obj, const CopyOp &copyop)
{
    IfcPhysicalSimpleQuantity::copy(obj, copyop);
    setWeightValue(obj.m_WeightValue);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcQuantityWeight, IfcPhysicalSimpleQuantity)
