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


#include <ifc2x3/IfcCostValue.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCostValue::IfcCostValue(Step::Id id, Step::SPFData *args) : 
    IfcAppliedValue(id, args)
{
    m_CostType = Step::getUnset(m_CostType);
    m_Condition = Step::getUnset(m_Condition);
}

IfcCostValue::~IfcCostValue()
{}

bool IfcCostValue::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCostValue(this);
}


IfcLabel IfcCostValue::getCostType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_CostType;
    }
    else 
    {
        return Step::getUnset(m_CostType);
    }    
}

const IfcLabel IfcCostValue::getCostType() const
{
    return const_cast<IfcCostValue *>(this)->getCostType();
}

void IfcCostValue::setCostType(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CostType = value;
}

void IfcCostValue::unsetCostType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_CostType = Step::getUnset(getCostType());
}

bool IfcCostValue::testCostType() const
{
    return Step::isUnset(getCostType()) == false;
}


IfcText IfcCostValue::getCondition()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Condition;
    }
    else 
    {
        return Step::getUnset(m_Condition);
    }    
}

const IfcText IfcCostValue::getCondition() const
{
    return const_cast<IfcCostValue *>(this)->getCondition();
}

void IfcCostValue::setCondition(const IfcText &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Condition = value;
}

void IfcCostValue::unsetCondition()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Condition = Step::getUnset(getCondition());
}

bool IfcCostValue::testCondition() const
{
    return Step::isUnset(getCondition()) == false;
}

bool IfcCostValue::init()
{
    if (IfcAppliedValue::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_CostType = Step::getUnset(m_CostType);
    }
    else
    {
        m_CostType = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Condition = Step::getUnset(m_Condition);
    }
    else
    {
        m_Condition = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcCostValue::copy(const IfcCostValue &obj, const CopyOp &copyop)
{
    IfcAppliedValue::copy(obj, copyop);
    setCostType(obj.m_CostType);
    setCondition(obj.m_Condition);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCostValue, IfcAppliedValue)
