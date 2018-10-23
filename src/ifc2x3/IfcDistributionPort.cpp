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


#include <ifc2x3/IfcDistributionPort.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDistributionPort::IfcDistributionPort(Step::Id id, Step::SPFData *args) : 
    IfcPort(id, args)
{
    m_FlowDirection = IfcFlowDirectionEnum_UNSET;
}

IfcDistributionPort::~IfcDistributionPort()
{}

bool IfcDistributionPort::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDistributionPort(this);
}


IfcFlowDirectionEnum IfcDistributionPort::getFlowDirection()
{
    if (Step::BaseObject::inited()) 
    {
        return m_FlowDirection;
    }
    else 
    {
        return IfcFlowDirectionEnum_UNSET;
    }    
}

IfcFlowDirectionEnum IfcDistributionPort::getFlowDirection() const
{
    return const_cast<IfcDistributionPort *>(this)->getFlowDirection();
}

void IfcDistributionPort::setFlowDirection(IfcFlowDirectionEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlowDirection = value;
}

void IfcDistributionPort::unsetFlowDirection()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_FlowDirection = IfcFlowDirectionEnum_UNSET;
}

bool IfcDistributionPort::testFlowDirection() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getFlowDirection()) == false;
}

bool IfcDistributionPort::init()
{
    if (IfcPort::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_FlowDirection = IfcFlowDirectionEnum_UNSET;
    }
    else
    {
        if (arg == ".SOURCE.")
        {
            m_FlowDirection = IfcFlowDirectionEnum_SOURCE;
        }
        else if (arg == ".SINK.")
        {
            m_FlowDirection = IfcFlowDirectionEnum_SINK;
        }
        else if (arg == ".SOURCEANDSINK.")
        {
            m_FlowDirection = IfcFlowDirectionEnum_SOURCEANDSINK;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_FlowDirection = IfcFlowDirectionEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDistributionPort::copy(const IfcDistributionPort &obj, const CopyOp &copyop)
{
    IfcPort::copy(obj, copyop);
    setFlowDirection(obj.m_FlowDirection);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDistributionPort, IfcPort)
