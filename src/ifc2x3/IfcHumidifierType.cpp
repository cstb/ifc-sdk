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


#include <ifc2x3/IfcHumidifierType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcHumidifierType::IfcHumidifierType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcHumidifierTypeEnum_UNSET;
}

IfcHumidifierType::~IfcHumidifierType()
{}

bool IfcHumidifierType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcHumidifierType(this);
}


IfcHumidifierTypeEnum IfcHumidifierType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcHumidifierTypeEnum_UNSET;
    }    
}

IfcHumidifierTypeEnum IfcHumidifierType::getPredefinedType() const
{
    return const_cast<IfcHumidifierType *>(this)->getPredefinedType();
}

void IfcHumidifierType::setPredefinedType(IfcHumidifierTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcHumidifierType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcHumidifierTypeEnum_UNSET;
}

bool IfcHumidifierType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcHumidifierType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcHumidifierTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".STEAMINJECTION.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_STEAMINJECTION;
        }
        else if (arg == ".ADIABATICAIRWASHER.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ADIABATICAIRWASHER;
        }
        else if (arg == ".ADIABATICPAN.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ADIABATICPAN;
        }
        else if (arg == ".ADIABATICWETTEDELEMENT.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ADIABATICWETTEDELEMENT;
        }
        else if (arg == ".ADIABATICATOMIZING.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ADIABATICATOMIZING;
        }
        else if (arg == ".ADIABATICULTRASONIC.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ADIABATICULTRASONIC;
        }
        else if (arg == ".ADIABATICRIGIDMEDIA.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ADIABATICRIGIDMEDIA;
        }
        else if (arg == ".ADIABATICCOMPRESSEDAIRNOZZLE.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ADIABATICCOMPRESSEDAIRNOZZLE;
        }
        else if (arg == ".ASSISTEDELECTRIC.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ASSISTEDELECTRIC;
        }
        else if (arg == ".ASSISTEDNATURALGAS.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ASSISTEDNATURALGAS;
        }
        else if (arg == ".ASSISTEDPROPANE.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ASSISTEDPROPANE;
        }
        else if (arg == ".ASSISTEDBUTANE.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ASSISTEDBUTANE;
        }
        else if (arg == ".ASSISTEDSTEAM.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_ASSISTEDSTEAM;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcHumidifierTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcHumidifierType::copy(const IfcHumidifierType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcHumidifierType, IfcEnergyConversionDeviceType)
