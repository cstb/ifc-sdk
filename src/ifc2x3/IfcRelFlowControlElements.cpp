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


#include <ifc2x3/IfcRelFlowControlElements.h>

#include <ifc2x3/IfcDistributionFlowElement.h>
#include <ifc2x3/IfcDistributionControlElement.h>
#include <ifc2x3/IfcDistributionControlElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcRelFlowControlElements_RelatedControlElements_type::Inverted_IfcRelFlowControlElements_RelatedControlElements_type()
{

}

void Inverted_IfcRelFlowControlElements_RelatedControlElements_type::setOwner(IfcRelFlowControlElements *owner)
{
    mOwner = owner;
}

void Inverted_IfcRelFlowControlElements_RelatedControlElements_type::insert(const Step::RefPtr< IfcDistributionControlElement > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcDistributionControlElement *inverse = const_cast< IfcDistributionControlElement * > (value.get());
    Set_IfcDistributionControlElement_1_n::insert(value);
    inverse->m_AssignedToFlowElement.insert(mOwner);
}


Inverted_IfcRelFlowControlElements_RelatedControlElements_type::size_type Inverted_IfcRelFlowControlElements_RelatedControlElements_type::erase(const Step::RefPtr< IfcDistributionControlElement > &value)
{
    IfcDistributionControlElement *inverse = const_cast< IfcDistributionControlElement * > (value.get());
    inverse->m_AssignedToFlowElement.erase(mOwner);
    return Set_IfcDistributionControlElement_1_n::erase(value);
}

void Inverted_IfcRelFlowControlElements_RelatedControlElements_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcRelFlowControlElements::IfcRelFlowControlElements(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RelatingFlowElement = NULL;
    m_RelatedControlElements.setUnset(true);
    m_RelatedControlElements.setOwner(this);
}

IfcRelFlowControlElements::~IfcRelFlowControlElements()
{}

bool IfcRelFlowControlElements::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelFlowControlElements(this);
}

IfcDistributionFlowElement *IfcRelFlowControlElements::getRelatingFlowElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingFlowElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcDistributionFlowElement *IfcRelFlowControlElements::getRelatingFlowElement() const
{
    return const_cast< IfcRelFlowControlElements * > (this)->getRelatingFlowElement();
}

void IfcRelFlowControlElements::setRelatingFlowElement(const Step::RefPtr< IfcDistributionFlowElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingFlowElement.valid())
    {
        m_RelatingFlowElement->m_HasControlElements.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasControlElements.insert(this);
    }
    m_RelatingFlowElement = value;
}

void IfcRelFlowControlElements::unsetRelatingFlowElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingFlowElement = Step::getUnset(getRelatingFlowElement());
}

bool IfcRelFlowControlElements::testRelatingFlowElement() const
{
    return Step::isUnset(getRelatingFlowElement()) == false;
}

Set_IfcDistributionControlElement_1_n &IfcRelFlowControlElements::getRelatedControlElements()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedControlElements;
    }
    else
    {
        m_RelatedControlElements.setUnset(true);
        return m_RelatedControlElements;
    }
}

const Set_IfcDistributionControlElement_1_n &IfcRelFlowControlElements::getRelatedControlElements() const
{
    return const_cast< IfcRelFlowControlElements * > (this)->getRelatedControlElements();
}

void IfcRelFlowControlElements::unsetRelatedControlElements()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedControlElements.clear();
    m_RelatedControlElements.setUnset(true);
}

bool IfcRelFlowControlElements::testRelatedControlElements() const
{
    return m_RelatedControlElements.isUnset() == false;
}

bool IfcRelFlowControlElements::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingFlowElement = NULL;
    }
    else
    {
        m_RelatingFlowElement = static_cast< IfcDistributionFlowElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedControlElements.setUnset(true);
    }
    else
    {
        m_RelatedControlElements.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedControlElements.insert(static_cast< IfcDistributionControlElement * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcRelFlowControlElements::copy(const IfcRelFlowControlElements &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setRelatingFlowElement((IfcDistributionFlowElement*)copyop(obj.m_RelatingFlowElement.get()));
    Set_IfcDistributionControlElement_1_n::const_iterator it_m_RelatedControlElements;
    for (it_m_RelatedControlElements = obj.m_RelatedControlElements.begin(); it_m_RelatedControlElements != obj.m_RelatedControlElements.end(); ++it_m_RelatedControlElements)
    {
        Step::RefPtr< IfcDistributionControlElement > copyTarget = (IfcDistributionControlElement *) (copyop((*it_m_RelatedControlElements).get()));
        m_RelatedControlElements.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelFlowControlElements, IfcRelConnects)
