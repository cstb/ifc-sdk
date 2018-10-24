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


#include <ifc2x3/IfcEvaporativeCoolerType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcEvaporativeCoolerType::IfcEvaporativeCoolerType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcEvaporativeCoolerTypeEnum_UNSET;
}

IfcEvaporativeCoolerType::~IfcEvaporativeCoolerType()
{}

bool IfcEvaporativeCoolerType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcEvaporativeCoolerType(this);
}


IfcEvaporativeCoolerTypeEnum IfcEvaporativeCoolerType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcEvaporativeCoolerTypeEnum_UNSET;
    }    
}

IfcEvaporativeCoolerTypeEnum IfcEvaporativeCoolerType::getPredefinedType() const
{
    return const_cast<IfcEvaporativeCoolerType *>(this)->getPredefinedType();
}

void IfcEvaporativeCoolerType::setPredefinedType(IfcEvaporativeCoolerTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcEvaporativeCoolerType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcEvaporativeCoolerTypeEnum_UNSET;
}

bool IfcEvaporativeCoolerType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcEvaporativeCoolerType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcEvaporativeCoolerTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER;
        }
        else if (arg == ".DIRECTEVAPORATIVEAIRWASHER.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_DIRECTEVAPORATIVEAIRWASHER;
        }
        else if (arg == ".INDIRECTEVAPORATIVEPACKAGEAIRCOOLER.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVEPACKAGEAIRCOOLER;
        }
        else if (arg == ".INDIRECTEVAPORATIVEWETCOIL.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVEWETCOIL;
        }
        else if (arg == ".INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER;
        }
        else if (arg == ".INDIRECTDIRECTCOMBINATION.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_INDIRECTDIRECTCOMBINATION;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcEvaporativeCoolerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcEvaporativeCoolerType::copy(const IfcEvaporativeCoolerType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcEvaporativeCoolerType, IfcEnergyConversionDeviceType)
