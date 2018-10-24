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


#include <ifc2x3/IfcSwitchingDeviceType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSwitchingDeviceType::IfcSwitchingDeviceType(Step::Id id, Step::SPFData *args) : 
    IfcFlowControllerType(id, args)
{
    m_PredefinedType = IfcSwitchingDeviceTypeEnum_UNSET;
}

IfcSwitchingDeviceType::~IfcSwitchingDeviceType()
{}

bool IfcSwitchingDeviceType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSwitchingDeviceType(this);
}


IfcSwitchingDeviceTypeEnum IfcSwitchingDeviceType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcSwitchingDeviceTypeEnum_UNSET;
    }    
}

IfcSwitchingDeviceTypeEnum IfcSwitchingDeviceType::getPredefinedType() const
{
    return const_cast<IfcSwitchingDeviceType *>(this)->getPredefinedType();
}

void IfcSwitchingDeviceType::setPredefinedType(IfcSwitchingDeviceTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcSwitchingDeviceType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcSwitchingDeviceTypeEnum_UNSET;
}

bool IfcSwitchingDeviceType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcSwitchingDeviceType::init()
{
    if (IfcFlowControllerType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcSwitchingDeviceTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CONTACTOR.")
        {
            m_PredefinedType = IfcSwitchingDeviceTypeEnum_CONTACTOR;
        }
        else if (arg == ".EMERGENCYSTOP.")
        {
            m_PredefinedType = IfcSwitchingDeviceTypeEnum_EMERGENCYSTOP;
        }
        else if (arg == ".STARTER.")
        {
            m_PredefinedType = IfcSwitchingDeviceTypeEnum_STARTER;
        }
        else if (arg == ".SWITCHDISCONNECTOR.")
        {
            m_PredefinedType = IfcSwitchingDeviceTypeEnum_SWITCHDISCONNECTOR;
        }
        else if (arg == ".TOGGLESWITCH.")
        {
            m_PredefinedType = IfcSwitchingDeviceTypeEnum_TOGGLESWITCH;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcSwitchingDeviceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcSwitchingDeviceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSwitchingDeviceType::copy(const IfcSwitchingDeviceType &obj, const CopyOp &copyop)
{
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSwitchingDeviceType, IfcFlowControllerType)
