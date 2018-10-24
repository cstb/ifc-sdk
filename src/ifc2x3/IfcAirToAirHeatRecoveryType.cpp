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


#include <ifc2x3/IfcAirToAirHeatRecoveryType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAirToAirHeatRecoveryType::IfcAirToAirHeatRecoveryType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_UNSET;
}

IfcAirToAirHeatRecoveryType::~IfcAirToAirHeatRecoveryType()
{}

bool IfcAirToAirHeatRecoveryType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAirToAirHeatRecoveryType(this);
}


IfcAirToAirHeatRecoveryTypeEnum IfcAirToAirHeatRecoveryType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcAirToAirHeatRecoveryTypeEnum_UNSET;
    }    
}

IfcAirToAirHeatRecoveryTypeEnum IfcAirToAirHeatRecoveryType::getPredefinedType() const
{
    return const_cast<IfcAirToAirHeatRecoveryType *>(this)->getPredefinedType();
}

void IfcAirToAirHeatRecoveryType::setPredefinedType(IfcAirToAirHeatRecoveryTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcAirToAirHeatRecoveryType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_UNSET;
}

bool IfcAirToAirHeatRecoveryType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcAirToAirHeatRecoveryType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FIXEDPLATECOUNTERFLOWEXCHANGER.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATECOUNTERFLOWEXCHANGER;
        }
        else if (arg == ".FIXEDPLATECROSSFLOWEXCHANGER.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATECROSSFLOWEXCHANGER;
        }
        else if (arg == ".FIXEDPLATEPARALLELFLOWEXCHANGER.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_FIXEDPLATEPARALLELFLOWEXCHANGER;
        }
        else if (arg == ".ROTARYWHEEL.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_ROTARYWHEEL;
        }
        else if (arg == ".RUNAROUNDCOILLOOP.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_RUNAROUNDCOILLOOP;
        }
        else if (arg == ".HEATPIPE.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_HEATPIPE;
        }
        else if (arg == ".TWINTOWERENTHALPYRECOVERYLOOPS.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_TWINTOWERENTHALPYRECOVERYLOOPS;
        }
        else if (arg == ".THERMOSIPHONSEALEDTUBEHEATEXCHANGERS.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_THERMOSIPHONSEALEDTUBEHEATEXCHANGERS;
        }
        else if (arg == ".THERMOSIPHONCOILTYPEHEATEXCHANGERS.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_THERMOSIPHONCOILTYPEHEATEXCHANGERS;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcAirToAirHeatRecoveryTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcAirToAirHeatRecoveryType::copy(const IfcAirToAirHeatRecoveryType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAirToAirHeatRecoveryType, IfcEnergyConversionDeviceType)
