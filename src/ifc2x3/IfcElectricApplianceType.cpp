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


#include <ifc2x3/IfcElectricApplianceType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcElectricApplianceType::IfcElectricApplianceType(Step::Id id, Step::SPFData *args) : 
    IfcFlowTerminalType(id, args)
{
    m_PredefinedType = IfcElectricApplianceTypeEnum_UNSET;
}

IfcElectricApplianceType::~IfcElectricApplianceType()
{}

bool IfcElectricApplianceType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcElectricApplianceType(this);
}


IfcElectricApplianceTypeEnum IfcElectricApplianceType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcElectricApplianceTypeEnum_UNSET;
    }    
}

IfcElectricApplianceTypeEnum IfcElectricApplianceType::getPredefinedType() const
{
    return const_cast<IfcElectricApplianceType *>(this)->getPredefinedType();
}

void IfcElectricApplianceType::setPredefinedType(IfcElectricApplianceTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcElectricApplianceType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcElectricApplianceTypeEnum_UNSET;
}

bool IfcElectricApplianceType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcElectricApplianceType::init()
{
    if (IfcFlowTerminalType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcElectricApplianceTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".COMPUTER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_COMPUTER;
        }
        else if (arg == ".DIRECTWATERHEATER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_DIRECTWATERHEATER;
        }
        else if (arg == ".DISHWASHER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_DISHWASHER;
        }
        else if (arg == ".ELECTRICCOOKER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_ELECTRICCOOKER;
        }
        else if (arg == ".ELECTRICHEATER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_ELECTRICHEATER;
        }
        else if (arg == ".FACSIMILE.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_FACSIMILE;
        }
        else if (arg == ".FREESTANDINGFAN.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_FREESTANDINGFAN;
        }
        else if (arg == ".FREEZER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_FREEZER;
        }
        else if (arg == ".FRIDGE_FREEZER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_FRIDGE_FREEZER;
        }
        else if (arg == ".HANDDRYER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_HANDDRYER;
        }
        else if (arg == ".INDIRECTWATERHEATER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_INDIRECTWATERHEATER;
        }
        else if (arg == ".MICROWAVE.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_MICROWAVE;
        }
        else if (arg == ".PHOTOCOPIER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_PHOTOCOPIER;
        }
        else if (arg == ".PRINTER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_PRINTER;
        }
        else if (arg == ".REFRIGERATOR.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_REFRIGERATOR;
        }
        else if (arg == ".RADIANTHEATER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_RADIANTHEATER;
        }
        else if (arg == ".SCANNER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_SCANNER;
        }
        else if (arg == ".TELEPHONE.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_TELEPHONE;
        }
        else if (arg == ".TUMBLEDRYER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_TUMBLEDRYER;
        }
        else if (arg == ".TV.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_TV;
        }
        else if (arg == ".VENDINGMACHINE.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_VENDINGMACHINE;
        }
        else if (arg == ".WASHINGMACHINE.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_WASHINGMACHINE;
        }
        else if (arg == ".WATERHEATER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_WATERHEATER;
        }
        else if (arg == ".WATERCOOLER.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_WATERCOOLER;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcElectricApplianceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcElectricApplianceType::copy(const IfcElectricApplianceType &obj, const CopyOp &copyop)
{
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcElectricApplianceType, IfcFlowTerminalType)
