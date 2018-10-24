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


#include <ifc2x3/IfcPort.h>

#include <ifc2x3/IfcRelConnectsPorts.h>
#include <ifc2x3/IfcRelConnectsPorts.h>
#include <ifc2x3/IfcRelConnectsPortToElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPort::IfcPort(Step::Id id, Step::SPFData *args) : 
    IfcProduct(id, args)
{
}

IfcPort::~IfcPort()
{}

bool IfcPort::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPort(this);
}

Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedTo()
{
    if (Step::BaseObject::inited())
    {
        return m_ConnectedTo;
    }
 
    m_ConnectedTo.setUnset(true);
    return m_ConnectedTo;
}

const Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedTo() const
{
    return  const_cast< IfcPort * > (this)->getConnectedTo();
}

bool IfcPort::testConnectedTo() const
{
    return m_ConnectedTo.isUnset() == false;
}

Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedFrom()
{
    if (Step::BaseObject::inited())
    {
        return m_ConnectedFrom;
    }
 
    m_ConnectedFrom.setUnset(true);
    return m_ConnectedFrom;
}

const Inverse_Set_IfcRelConnectsPorts_0_1 &IfcPort::getConnectedFrom() const
{
    return  const_cast< IfcPort * > (this)->getConnectedFrom();
}

bool IfcPort::testConnectedFrom() const
{
    return m_ConnectedFrom.isUnset() == false;
}

IfcRelConnectsPortToElement *IfcPort::getContainedIn()
{
    if (Step::BaseObject::inited())
    {
        return m_ContainedIn.get();
    }
 
    return NULL;
}

const IfcRelConnectsPortToElement *IfcPort::getContainedIn() const
{
    return  const_cast< IfcPort * > (this)->getContainedIn();
}

bool IfcPort::testContainedIn() const
{
    return Step::isUnset(getContainedIn()) == false;
}

bool IfcPort::init()
{
    if (IfcProduct::init() == false)
    {
        return false;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelConnectsPorts::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_ConnectedTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ConnectedTo.insert(static_cast< IfcRelConnectsPorts * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsPorts::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_ConnectedFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ConnectedFrom.insert(static_cast< IfcRelConnectsPorts * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsPortToElement::getClassType(), 4);
    if (inverses)
    {
        m_ContainedIn = static_cast< IfcRelConnectsPortToElement * > (m_expressDataSet->get((*inverses)[0]));
    }
    return true;
}

void IfcPort::copy(const IfcPort &obj, const CopyOp &copyop)
{
    IfcProduct::copy(obj, copyop);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPort, IfcProduct)
