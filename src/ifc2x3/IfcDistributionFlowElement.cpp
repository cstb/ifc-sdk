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


#include <ifc2x3/IfcDistributionFlowElement.h>

#include <ifc2x3/IfcRelFlowControlElements.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDistributionFlowElement::IfcDistributionFlowElement(Step::Id id, Step::SPFData *args) : 
    IfcDistributionElement(id, args)
{
}

IfcDistributionFlowElement::~IfcDistributionFlowElement()
{}

bool IfcDistributionFlowElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDistributionFlowElement(this);
}

Inverse_Set_IfcRelFlowControlElements_0_1 &IfcDistributionFlowElement::getHasControlElements()
{
    if (Step::BaseObject::inited())
    {
        return m_HasControlElements;
    }
 
    m_HasControlElements.setUnset(true);
    return m_HasControlElements;
}

const Inverse_Set_IfcRelFlowControlElements_0_1 &IfcDistributionFlowElement::getHasControlElements() const
{
    return  const_cast< IfcDistributionFlowElement * > (this)->getHasControlElements();
}

bool IfcDistributionFlowElement::testHasControlElements() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_HasControlElements.isUnset() == false;
}

bool IfcDistributionFlowElement::init()
{
    if (IfcDistributionElement::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelFlowControlElements::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_HasControlElements.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasControlElements.insert(static_cast< IfcRelFlowControlElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcDistributionFlowElement::copy(const IfcDistributionFlowElement &obj, const CopyOp &copyop)
{
    IfcDistributionElement::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDistributionFlowElement, IfcDistributionElement)
