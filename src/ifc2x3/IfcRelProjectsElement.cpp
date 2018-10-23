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


#include <ifc2x3/IfcRelProjectsElement.h>

#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcFeatureElementAddition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelProjectsElement::IfcRelProjectsElement(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RelatingElement = NULL;
    m_RelatedFeatureElement = NULL;
}

IfcRelProjectsElement::~IfcRelProjectsElement()
{}

bool IfcRelProjectsElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelProjectsElement(this);
}

IfcElement *IfcRelProjectsElement::getRelatingElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcElement *IfcRelProjectsElement::getRelatingElement() const
{
    return const_cast< IfcRelProjectsElement * > (this)->getRelatingElement();
}

void IfcRelProjectsElement::setRelatingElement(const Step::RefPtr< IfcElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingElement.valid())
    {
        m_RelatingElement->m_HasProjections.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasProjections.insert(this);
    }
    m_RelatingElement = value;
}

void IfcRelProjectsElement::unsetRelatingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingElement = Step::getUnset(getRelatingElement());
}

bool IfcRelProjectsElement::testRelatingElement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingElement()) == false;
}

IfcFeatureElementAddition *IfcRelProjectsElement::getRelatedFeatureElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedFeatureElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcFeatureElementAddition *IfcRelProjectsElement::getRelatedFeatureElement() const
{
    return const_cast< IfcRelProjectsElement * > (this)->getRelatedFeatureElement();
}

void IfcRelProjectsElement::setRelatedFeatureElement(const Step::RefPtr< IfcFeatureElementAddition > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedFeatureElement.valid())
    {
        m_RelatedFeatureElement->m_ProjectsElements = NULL;
    }
    if (value.valid() )
    {
        value->m_ProjectsElements = this;
    }
    m_RelatedFeatureElement = value;
}

void IfcRelProjectsElement::unsetRelatedFeatureElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedFeatureElement = Step::getUnset(getRelatedFeatureElement());
}

bool IfcRelProjectsElement::testRelatedFeatureElement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatedFeatureElement()) == false;
}

bool IfcRelProjectsElement::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingElement = NULL;
    }
    else
    {
        m_RelatingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedFeatureElement = NULL;
    }
    else
    {
        m_RelatedFeatureElement = static_cast< IfcFeatureElementAddition * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelProjectsElement::copy(const IfcRelProjectsElement &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setRelatingElement((IfcElement*)copyop(obj.m_RelatingElement.get()));
    setRelatedFeatureElement((IfcFeatureElementAddition*)copyop(obj.m_RelatedFeatureElement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelProjectsElement, IfcRelConnects)
