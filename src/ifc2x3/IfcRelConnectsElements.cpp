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


#include <ifc2x3/IfcRelConnectsElements.h>

#include <ifc2x3/IfcConnectionGeometry.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelConnectsElements::IfcRelConnectsElements(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_ConnectionGeometry = NULL;
    m_RelatedElement = NULL;
    m_RelatingElement = NULL;
}

IfcRelConnectsElements::~IfcRelConnectsElements()
{}

bool IfcRelConnectsElements::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelConnectsElements(this);
}


IfcConnectionGeometry *IfcRelConnectsElements::getConnectionGeometry()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ConnectionGeometry.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcConnectionGeometry *IfcRelConnectsElements::getConnectionGeometry() const
{
    return const_cast<IfcRelConnectsElements *>(this)->getConnectionGeometry();
}

void IfcRelConnectsElements::setConnectionGeometry(const Step::RefPtr< IfcConnectionGeometry > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConnectionGeometry = value;
}

void IfcRelConnectsElements::unsetConnectionGeometry()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ConnectionGeometry = Step::getUnset(getConnectionGeometry());
}

bool IfcRelConnectsElements::testConnectionGeometry() const
{
    return Step::isUnset(getConnectionGeometry()) == false;
}

IfcElement *IfcRelConnectsElements::getRelatedElement()
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

const IfcElement *IfcRelConnectsElements::getRelatedElement() const
{
    return const_cast< IfcRelConnectsElements * > (this)->getRelatedElement();
}

void IfcRelConnectsElements::setRelatedElement(const Step::RefPtr< IfcElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedElement.valid())
    {
        m_RelatedElement->m_ConnectedFrom.erase(this);
    }
    if (value.valid() )
    {
       value->m_ConnectedFrom.insert(this);
    }
    m_RelatedElement = value;
}

void IfcRelConnectsElements::unsetRelatedElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedElement = Step::getUnset(getRelatedElement());
}

bool IfcRelConnectsElements::testRelatedElement() const
{
    return Step::isUnset(getRelatedElement()) == false;
}

IfcElement *IfcRelConnectsElements::getRelatingElement()
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

const IfcElement *IfcRelConnectsElements::getRelatingElement() const
{
    return const_cast< IfcRelConnectsElements * > (this)->getRelatingElement();
}

void IfcRelConnectsElements::setRelatingElement(const Step::RefPtr< IfcElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingElement.valid())
    {
        m_RelatingElement->m_ConnectedTo.erase(this);
    }
    if (value.valid() )
    {
       value->m_ConnectedTo.insert(this);
    }
    m_RelatingElement = value;
}

void IfcRelConnectsElements::unsetRelatingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingElement = Step::getUnset(getRelatingElement());
}

bool IfcRelConnectsElements::testRelatingElement() const
{
    return Step::isUnset(getRelatingElement()) == false;
}

bool IfcRelConnectsElements::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ConnectionGeometry = NULL;
    }
    else
    {
        m_ConnectionGeometry = static_cast< IfcConnectionGeometry * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
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
        m_RelatingElement = NULL;
    }
    else
    {
        m_RelatingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelConnectsElements::copy(const IfcRelConnectsElements &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setConnectionGeometry((IfcConnectionGeometry*)copyop(obj.m_ConnectionGeometry.get()));
    setRelatedElement((IfcElement*)copyop(obj.m_RelatedElement.get()));
    setRelatingElement((IfcElement*)copyop(obj.m_RelatingElement.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelConnectsElements, IfcRelConnects)
