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


#include <ifc2x3/IfcElectricFlowStorageDeviceType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcElectricFlowStorageDeviceType::IfcElectricFlowStorageDeviceType(Step::Id id, Step::SPFData *args) : 
    IfcFlowStorageDeviceType(id, args)
{
    m_PredefinedType = IfcElectricFlowStorageDeviceTypeEnum_UNSET;
}

IfcElectricFlowStorageDeviceType::~IfcElectricFlowStorageDeviceType()
{}

bool IfcElectricFlowStorageDeviceType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcElectricFlowStorageDeviceType(this);
}


IfcElectricFlowStorageDeviceTypeEnum IfcElectricFlowStorageDeviceType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcElectricFlowStorageDeviceTypeEnum_UNSET;
    }    
}

IfcElectricFlowStorageDeviceTypeEnum IfcElectricFlowStorageDeviceType::getPredefinedType() const
{
    return const_cast<IfcElectricFlowStorageDeviceType *>(this)->getPredefinedType();
}

void IfcElectricFlowStorageDeviceType::setPredefinedType(IfcElectricFlowStorageDeviceTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcElectricFlowStorageDeviceType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcElectricFlowStorageDeviceTypeEnum_UNSET;
}

bool IfcElectricFlowStorageDeviceType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcElectricFlowStorageDeviceType::init()
{
    if (IfcFlowStorageDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcElectricFlowStorageDeviceTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".BATTERY.")
        {
            m_PredefinedType = IfcElectricFlowStorageDeviceTypeEnum_BATTERY;
        }
        else if (arg == ".CAPACITORBANK.")
        {
            m_PredefinedType = IfcElectricFlowStorageDeviceTypeEnum_CAPACITORBANK;
        }
        else if (arg == ".HARMONICFILTER.")
        {
            m_PredefinedType = IfcElectricFlowStorageDeviceTypeEnum_HARMONICFILTER;
        }
        else if (arg == ".INDUCTORBANK.")
        {
            m_PredefinedType = IfcElectricFlowStorageDeviceTypeEnum_INDUCTORBANK;
        }
        else if (arg == ".UPS.")
        {
            m_PredefinedType = IfcElectricFlowStorageDeviceTypeEnum_UPS;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcElectricFlowStorageDeviceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcElectricFlowStorageDeviceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricFlowStorageDeviceType::copy(const IfcElectricFlowStorageDeviceType &obj, const CopyOp &copyop)
{
    IfcFlowStorageDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcElectricFlowStorageDeviceType, IfcFlowStorageDeviceType)
