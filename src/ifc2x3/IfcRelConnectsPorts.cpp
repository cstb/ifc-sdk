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


#include <ifc2x3/IfcRelConnectsPorts.h>

#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcPort.h>
#include <ifc2x3/IfcPort.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRelConnectsPorts::IfcRelConnectsPorts(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RealizingElement = NULL;
    m_RelatingPort = NULL;
    m_RelatedPort = NULL;
}

IfcRelConnectsPorts::~IfcRelConnectsPorts()
{}

bool IfcRelConnectsPorts::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelConnectsPorts(this);
}


IfcElement *IfcRelConnectsPorts::getRealizingElement()
{
    if (Step::BaseObject::inited()) 
    {
        return m_RealizingElement.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcElement *IfcRelConnectsPorts::getRealizingElement() const
{
    return const_cast<IfcRelConnectsPorts *>(this)->getRealizingElement();
}

void IfcRelConnectsPorts::setRealizingElement(const Step::RefPtr< IfcElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RealizingElement = value;
}

void IfcRelConnectsPorts::unsetRealizingElement()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RealizingElement = Step::getUnset(getRealizingElement());
}

bool IfcRelConnectsPorts::testRealizingElement() const
{
    return Step::isUnset(getRealizingElement()) == false;
}

IfcPort *IfcRelConnectsPorts::getRelatingPort()
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

const IfcPort *IfcRelConnectsPorts::getRelatingPort() const
{
    return const_cast< IfcRelConnectsPorts * > (this)->getRelatingPort();
}

void IfcRelConnectsPorts::setRelatingPort(const Step::RefPtr< IfcPort > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingPort.valid())
    {
        m_RelatingPort->m_ConnectedTo.erase(this);
    }
    if (value.valid() )
    {
       value->m_ConnectedTo.insert(this);
    }
    m_RelatingPort = value;
}

void IfcRelConnectsPorts::unsetRelatingPort()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingPort = Step::getUnset(getRelatingPort());
}

bool IfcRelConnectsPorts::testRelatingPort() const
{
    return Step::isUnset(getRelatingPort()) == false;
}

IfcPort *IfcRelConnectsPorts::getRelatedPort()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedPort.get();
    }
    else
    {
        return NULL;
    }
}

const IfcPort *IfcRelConnectsPorts::getRelatedPort() const
{
    return const_cast< IfcRelConnectsPorts * > (this)->getRelatedPort();
}

void IfcRelConnectsPorts::setRelatedPort(const Step::RefPtr< IfcPort > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatedPort.valid())
    {
        m_RelatedPort->m_ConnectedFrom.erase(this);
    }
    if (value.valid() )
    {
       value->m_ConnectedFrom.insert(this);
    }
    m_RelatedPort = value;
}

void IfcRelConnectsPorts::unsetRelatedPort()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedPort = Step::getUnset(getRelatedPort());
}

bool IfcRelConnectsPorts::testRelatedPort() const
{
    return Step::isUnset(getRelatedPort()) == false;
}

bool IfcRelConnectsPorts::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RealizingElement = NULL;
    }
    else
    {
        m_RealizingElement = static_cast< IfcElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedPort = NULL;
    }
    else
    {
        m_RelatedPort = static_cast< IfcPort * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    return true;
}

void IfcRelConnectsPorts::copy(const IfcRelConnectsPorts &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setRealizingElement((IfcElement*)copyop(obj.m_RealizingElement.get()));
    setRelatingPort((IfcPort*)copyop(obj.m_RelatingPort.get()));
    setRelatedPort((IfcPort*)copyop(obj.m_RelatedPort.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelConnectsPorts, IfcRelConnects)
