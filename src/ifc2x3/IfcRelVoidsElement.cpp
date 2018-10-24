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


#include <ifc2x3/IfcRelVoidsElement.h>

#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcFeatureElementSubtraction.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelVoidsElement::IfcRelVoidsElement(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RelatingBuildingElement = NULL;
    m_RelatedOpeningElement = NULL;
}

IfcRelVoidsElement::~IfcRelVoidsElement()
{}

bool IfcRelVoidsElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelVoidsElement(this);
}

IfcElement *IfcRelVoidsElement::getRelatingBuildingElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingBuildingElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcElement *IfcRelVoidsElement::getRelatingBuildingElement() const
{
    return const_cast< IfcRelVoidsElement * > (this)->getRelatingBuildingElement();
}

void IfcRelVoidsElement::setRelatingBuildingElement(const Step::RefPtr< IfcElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingBuildingElement.valid())
    {
        m_RelatingBuildingElement->m_HasOpenings.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasOpenings.insert(this);
    }
    m_RelatingBuildingElement = value;
}

void IfcRelVoidsElement::unsetRelatingBuildingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingBuildingElement = Step::getUnset(getRelatingBuildingElement());
}

bool IfcRelVoidsElement::testRelatingBuildingElement() const
{
    return Step::isUnset(getRelatingBuildingElement()) == false;
}

IfcFeatureElementSubtraction *IfcRelVoidsElement::getRelatedOpeningElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedOpeningElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcFeatureElementSubtraction *IfcRelVoidsElement::getRelatedOpeningElement() const
{
    return const_cast< IfcRelVoidsElement * > (this)->getRelatedOpeningElement();
}

void IfcRelVoidsElement::setRelatedOpeningElement(const Step::RefPtr< IfcFeatureElementSubtraction > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedOpeningElement.valid())
    {
        m_RelatedOpeningElement->m_VoidsElements = NULL;
    }
    if (value.valid() )
    {
        value->m_VoidsElements = this;
    }
    m_RelatedOpeningElement = value;
}

void IfcRelVoidsElement::unsetRelatedOpeningElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedOpeningElement = Step::getUnset(getRelatedOpeningElement());
}

bool IfcRelVoidsElement::testRelatedOpeningElement() const
{
    return Step::isUnset(getRelatedOpeningElement()) == false;
}

bool IfcRelVoidsElement::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingBuildingElement = NULL;
    }
    else
    {
        m_RelatingBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedOpeningElement = NULL;
    }
    else
    {
        m_RelatedOpeningElement = static_cast< IfcFeatureElementSubtraction * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelVoidsElement::copy(const IfcRelVoidsElement &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setRelatingBuildingElement((IfcElement*)copyop(obj.m_RelatingBuildingElement.get()));
    setRelatedOpeningElement((IfcFeatureElementSubtraction*)copyop(obj.m_RelatedOpeningElement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelVoidsElement, IfcRelConnects)
