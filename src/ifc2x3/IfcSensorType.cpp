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


#include <ifc2x3/IfcSensorType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSensorType::IfcSensorType(Step::Id id, Step::SPFData *args) : 
    IfcDistributionControlElementType(id, args)
{
    m_PredefinedType = IfcSensorTypeEnum_UNSET;
}

IfcSensorType::~IfcSensorType()
{}

bool IfcSensorType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSensorType(this);
}


IfcSensorTypeEnum IfcSensorType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcSensorTypeEnum_UNSET;
    }    
}

IfcSensorTypeEnum IfcSensorType::getPredefinedType() const
{
    return const_cast<IfcSensorType *>(this)->getPredefinedType();
}

void IfcSensorType::setPredefinedType(IfcSensorTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcSensorType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcSensorTypeEnum_UNSET;
}

bool IfcSensorType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcSensorType::init()
{
    if (IfcDistributionControlElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcSensorTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CO2SENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_CO2SENSOR;
        }
        else if (arg == ".FIRESENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_FIRESENSOR;
        }
        else if (arg == ".FLOWSENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_FLOWSENSOR;
        }
        else if (arg == ".GASSENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_GASSENSOR;
        }
        else if (arg == ".HEATSENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_HEATSENSOR;
        }
        else if (arg == ".HUMIDITYSENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_HUMIDITYSENSOR;
        }
        else if (arg == ".LIGHTSENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_LIGHTSENSOR;
        }
        else if (arg == ".MOISTURESENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_MOISTURESENSOR;
        }
        else if (arg == ".MOVEMENTSENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_MOVEMENTSENSOR;
        }
        else if (arg == ".PRESSURESENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_PRESSURESENSOR;
        }
        else if (arg == ".SMOKESENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_SMOKESENSOR;
        }
        else if (arg == ".SOUNDSENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_SOUNDSENSOR;
        }
        else if (arg == ".TEMPERATURESENSOR.")
        {
            m_PredefinedType = IfcSensorTypeEnum_TEMPERATURESENSOR;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcSensorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcSensorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSensorType::copy(const IfcSensorType &obj, const CopyOp &copyop)
{
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSensorType, IfcDistributionControlElementType)
