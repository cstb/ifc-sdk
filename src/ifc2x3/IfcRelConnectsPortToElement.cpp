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


#include <ifc2x3/IfcRelConnectsPortToElement.h>

#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcPort.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelConnectsPortToElement::IfcRelConnectsPortToElement(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RelatedElement = NULL;
    m_RelatingPort = NULL;
}

IfcRelConnectsPortToElement::~IfcRelConnectsPortToElement()
{}

bool IfcRelConnectsPortToElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelConnectsPortToElement(this);
}

IfcElement *IfcRelConnectsPortToElement::getRelatedElement()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedElement.get();
    }
    else
    {
        return NULL;
    }
}

const IfcElement *IfcRelConnectsPortToElement::getRelatedElement() const
{
    return const_cast< IfcRelConnectsPortToElement * > (this)->getRelatedElement();
}

void IfcRelConnectsPortToElement::setRelatedElement(const Step::RefPtr< IfcElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedElement.valid())
    {
        m_RelatedElement->m_HasPorts.erase(this);
    }
    if (value.valid() )
    {
       value->m_HasPorts.insert(this);
    }
    m_RelatedElement = value;
}

void IfcRelConnectsPortToElement::unsetRelatedElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedElement = Step::getUnset(getRelatedElement());
}

bool IfcRelConnectsPortToElement::testRelatedElement() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatedElement()) == false;
}

IfcPort *IfcRelConnectsPortToElement::getRelatingPort()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingPort.get();
    }
    else
    {
        return NULL;
    }
}

const IfcPort *IfcRelConnectsPortToElement::getRelatingPort() const
{
    return const_cast< IfcRelConnectsPortToElement * > (this)->getRelatingPort();
}

void IfcRelConnectsPortToElement::setRelatingPort(const Step::RefPtr< IfcPort > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingPort.valid())
    {
        m_RelatingPort->m_ContainedIn = NULL;
    }
    if (value.valid() )
    {
        value->m_ContainedIn = this;
    }
    m_RelatingPort = value;
}

void IfcRelConnectsPortToElement::unsetRelatingPort()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingPort = Step::getUnset(getRelatingPort());
}

bool IfcRelConnectsPortToElement::testRelatingPort() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getRelatingPort()) == false;
}

bool IfcRelConnectsPortToElement::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedElement = NULL;
    }
    else
    {
        m_RelatedElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingPort = NULL;
    }
    else
    {
        m_RelatingPort = static_cast< IfcPort * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelConnectsPortToElement::copy(const IfcRelConnectsPortToElement &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setRelatedElement((IfcElement*)copyop(obj.m_RelatedElement.get()));
    setRelatingPort((IfcPort*)copyop(obj.m_RelatingPort.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelConnectsPortToElement, IfcRelConnects)
