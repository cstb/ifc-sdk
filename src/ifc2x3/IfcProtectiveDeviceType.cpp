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


#include <ifc2x3/IfcProtectiveDeviceType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcProtectiveDeviceType::IfcProtectiveDeviceType(Step::Id id, Step::SPFData *args) : 
    IfcFlowControllerType(id, args)
{
    m_PredefinedType = IfcProtectiveDeviceTypeEnum_UNSET;
}

IfcProtectiveDeviceType::~IfcProtectiveDeviceType()
{}

bool IfcProtectiveDeviceType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcProtectiveDeviceType(this);
}


IfcProtectiveDeviceTypeEnum IfcProtectiveDeviceType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcProtectiveDeviceTypeEnum_UNSET;
    }    
}

IfcProtectiveDeviceTypeEnum IfcProtectiveDeviceType::getPredefinedType() const
{
    return const_cast<IfcProtectiveDeviceType *>(this)->getPredefinedType();
}

void IfcProtectiveDeviceType::setPredefinedType(IfcProtectiveDeviceTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcProtectiveDeviceType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcProtectiveDeviceTypeEnum_UNSET;
}

bool IfcProtectiveDeviceType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcProtectiveDeviceType::init()
{
    if (IfcFlowControllerType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcProtectiveDeviceTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FUSEDISCONNECTOR.")
        {
            m_PredefinedType = IfcProtectiveDeviceTypeEnum_FUSEDISCONNECTOR;
        }
        else if (arg == ".CIRCUITBREAKER.")
        {
            m_PredefinedType = IfcProtectiveDeviceTypeEnum_CIRCUITBREAKER;
        }
        else if (arg == ".EARTHFAILUREDEVICE.")
        {
            m_PredefinedType = IfcProtectiveDeviceTypeEnum_EARTHFAILUREDEVICE;
        }
        else if (arg == ".RESIDUALCURRENTCIRCUITBREAKER.")
        {
            m_PredefinedType = IfcProtectiveDeviceTypeEnum_RESIDUALCURRENTCIRCUITBREAKER;
        }
        else if (arg == ".RESIDUALCURRENTSWITCH.")
        {
            m_PredefinedType = IfcProtectiveDeviceTypeEnum_RESIDUALCURRENTSWITCH;
        }
        else if (arg == ".VARISTOR.")
        {
            m_PredefinedType = IfcProtectiveDeviceTypeEnum_VARISTOR;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcProtectiveDeviceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcProtectiveDeviceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcProtectiveDeviceType::copy(const IfcProtectiveDeviceType &obj, const CopyOp &copyop)
{
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcProtectiveDeviceType, IfcFlowControllerType)
