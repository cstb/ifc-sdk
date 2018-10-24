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


#include <ifc2x3/IfcRelFillsElement.h>

#include <ifc2x3/IfcOpeningElement.h>
#include <ifc2x3/IfcElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelFillsElement::IfcRelFillsElement(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RelatingOpeningElement = NULL;
    m_RelatedBuildingElement = NULL;
}

IfcRelFillsElement::~IfcRelFillsElement()
{}

bool IfcRelFillsElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelFillsElement(this);
}

IfcOpeningElement *IfcRelFillsElement::getRelatingOpeningElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingOpeningElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcOpeningElement *IfcRelFillsElement::getRelatingOpeningElement() const
{
    return const_cast< IfcRelFillsElement * > (this)->getRelatingOpeningElement();
}

void IfcRelFillsElement::setRelatingOpeningElement(const Step::RefPtr< IfcOpeningElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingOpeningElement.valid())
    {
        m_RelatingOpeningElement->m_HasFillings.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasFillings.insert(this);
    }
    m_RelatingOpeningElement = value;
}

void IfcRelFillsElement::unsetRelatingOpeningElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingOpeningElement = Step::getUnset(getRelatingOpeningElement());
}

bool IfcRelFillsElement::testRelatingOpeningElement() const
{
    return Step::isUnset(getRelatingOpeningElement()) == false;
}

IfcElement *IfcRelFillsElement::getRelatedBuildingElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedBuildingElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcElement *IfcRelFillsElement::getRelatedBuildingElement() const
{
    return const_cast< IfcRelFillsElement * > (this)->getRelatedBuildingElement();
}

void IfcRelFillsElement::setRelatedBuildingElement(const Step::RefPtr< IfcElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedBuildingElement.valid())
    {
        m_RelatedBuildingElement->m_FillsVoids.erase(this);
    }
    if (value.valid() )
    {
       value->m_FillsVoids.insert(this);
    }
    m_RelatedBuildingElement = value;
}

void IfcRelFillsElement::unsetRelatedBuildingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedBuildingElement = Step::getUnset(getRelatedBuildingElement());
}

bool IfcRelFillsElement::testRelatedBuildingElement() const
{
    return Step::isUnset(getRelatedBuildingElement()) == false;
}

bool IfcRelFillsElement::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingOpeningElement = NULL;
    }
    else
    {
        m_RelatingOpeningElement = static_cast< IfcOpeningElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedBuildingElement = NULL;
    }
    else
    {
        m_RelatedBuildingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelFillsElement::copy(const IfcRelFillsElement &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setRelatingOpeningElement((IfcOpeningElement*)copyop(obj.m_RelatingOpeningElement.get()));
    setRelatedBuildingElement((IfcElement*)copyop(obj.m_RelatedBuildingElement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelFillsElement, IfcRelConnects)
