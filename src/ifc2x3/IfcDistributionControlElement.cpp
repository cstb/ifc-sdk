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


#include <ifc2x3/IfcDistributionControlElement.h>

#include <ifc2x3/IfcRelFlowControlElements.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDistributionControlElement::IfcDistributionControlElement(Step::Id id, Step::SPFData *args) : 
    IfcDistributionElement(id, args)
{
    m_ControlElementId = Step::getUnset(m_ControlElementId);
}

IfcDistributionControlElement::~IfcDistributionControlElement()
{}

bool IfcDistributionControlElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDistributionControlElement(this);
}


IfcIdentifier IfcDistributionControlElement::getControlElementId()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ControlElementId;
    }
    else 
    {
        return Step::getUnset(m_ControlElementId);
    }    
}

const IfcIdentifier IfcDistributionControlElement::getControlElementId() const
{
    return const_cast<IfcDistributionControlElement *>(this)->getControlElementId();
}

void IfcDistributionControlElement::setControlElementId(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ControlElementId = value;
}

void IfcDistributionControlElement::unsetControlElementId()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ControlElementId = Step::getUnset(getControlElementId());
}

bool IfcDistributionControlElement::testControlElementId() const
{
    return Step::isUnset(getControlElementId()) == false;
}

Inverse_Set_IfcRelFlowControlElements_0_1 &IfcDistributionControlElement::getAssignedToFlowElement()
{
    if (Step::BaseObject::inited())
    {
        return m_AssignedToFlowElement;
    }
 
    m_AssignedToFlowElement.setUnset(true);
    return m_AssignedToFlowElement;
}

const Inverse_Set_IfcRelFlowControlElements_0_1 &IfcDistributionControlElement::getAssignedToFlowElement() const
{
    return  const_cast< IfcDistributionControlElement * > (this)->getAssignedToFlowElement();
}

bool IfcDistributionControlElement::testAssignedToFlowElement() const
{
    return m_AssignedToFlowElement.isUnset() == false;
}

bool IfcDistributionControlElement::init()
{
    if (IfcDistributionElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ControlElementId = Step::getUnset(m_ControlElementId);
    }
    else
    {
        m_ControlElementId = Step::String::fromSPF(arg)
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelFlowControlElements::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_AssignedToFlowElement.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_AssignedToFlowElement.insert(static_cast< IfcRelFlowControlElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDistributionControlElement::copy(const IfcDistributionControlElement &obj, const CopyOp &copyop)
{
    IfcDistributionElement::copy(obj, copyop);
    setControlElementId(obj.m_ControlElementId);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDistributionControlElement, IfcDistributionElement)
