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


#include <ifc2x3/IfcProjectOrder.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProjectOrder::IfcProjectOrder(Step::Id id, Step::SPFData *args) : 
    IfcControl(id, args)
{
    m_ID = Step::getUnset(m_ID);
    m_PredefinedType = IfcProjectOrderTypeEnum_UNSET;
    m_Status = Step::getUnset(m_Status);
}

IfcProjectOrder::~IfcProjectOrder()
{}

bool IfcProjectOrder::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProjectOrder(this);
}


IfcIdentifier IfcProjectOrder::getID()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ID;
    }
    else 
    {
        return Step::getUnset(m_ID);
    }    
}

const IfcIdentifier IfcProjectOrder::getID() const
{
    return const_cast<IfcProjectOrder *>(this)->getID();
}

void IfcProjectOrder::setID(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ID = value;
}

void IfcProjectOrder::unsetID()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ID = Step::getUnset(getID());
}

bool IfcProjectOrder::testID() const
{
    return Step::isUnset(getID()) == false;
}


IfcProjectOrderTypeEnum IfcProjectOrder::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcProjectOrderTypeEnum_UNSET;
    }    
}

IfcProjectOrderTypeEnum IfcProjectOrder::getPredefinedType() const
{
    return const_cast<IfcProjectOrder *>(this)->getPredefinedType();
}

void IfcProjectOrder::setPredefinedType(IfcProjectOrderTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcProjectOrder::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcProjectOrderTypeEnum_UNSET;
}

bool IfcProjectOrder::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}


IfcLabel IfcProjectOrder::getStatus()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Status;
    }
    else 
    {
        return Step::getUnset(m_Status);
    }    
}

const IfcLabel IfcProjectOrder::getStatus() const
{
    return const_cast<IfcProjectOrder *>(this)->getStatus();
}

void IfcProjectOrder::setStatus(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Status = value;
}

void IfcProjectOrder::unsetStatus()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Status = Step::getUnset(getStatus());
}

bool IfcProjectOrder::testStatus() const
{
    return Step::isUnset(getStatus()) == false;
}

bool IfcProjectOrder::init()
{
    if (IfcControl::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ID = Step::getUnset(m_ID);
    }
    else
    {
        m_ID = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcProjectOrderTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CHANGEORDER.")
        {
            m_PredefinedType = IfcProjectOrderTypeEnum_CHANGEORDER;
        }
        else if (arg == ".MAINTENANCEWORKORDER.")
        {
            m_PredefinedType = IfcProjectOrderTypeEnum_MAINTENANCEWORKORDER;
        }
        else if (arg == ".MOVEORDER.")
        {
            m_PredefinedType = IfcProjectOrderTypeEnum_MOVEORDER;
        }
        else if (arg == ".PURCHASEORDER.")
        {
            m_PredefinedType = IfcProjectOrderTypeEnum_PURCHASEORDER;
        }
        else if (arg == ".WORKORDER.")
        {
            m_PredefinedType = IfcProjectOrderTypeEnum_WORKORDER;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcProjectOrderTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcProjectOrderTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Status = Step::getUnset(m_Status);
    }
    else
    {
        m_Status = Step::String::fromSPF(arg)
;
    }
    return true;
}

void IfcProjectOrder::copy(const IfcProjectOrder &obj, const CopyOp &copyop)
{
    IfcControl::copy(obj, copyop);
    setID(obj.m_ID);
    setPredefinedType(obj.m_PredefinedType);
    setStatus(obj.m_Status);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProjectOrder, IfcControl)
