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


#include <ifc2x3/IfcCondenserType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCondenserType::IfcCondenserType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcCondenserTypeEnum_UNSET;
}

IfcCondenserType::~IfcCondenserType()
{}

bool IfcCondenserType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCondenserType(this);
}


IfcCondenserTypeEnum IfcCondenserType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcCondenserTypeEnum_UNSET;
    }    
}

IfcCondenserTypeEnum IfcCondenserType::getPredefinedType() const
{
    return const_cast<IfcCondenserType *>(this)->getPredefinedType();
}

void IfcCondenserType::setPredefinedType(IfcCondenserTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcCondenserType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcCondenserTypeEnum_UNSET;
}

bool IfcCondenserType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcCondenserType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcCondenserTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".WATERCOOLEDSHELLTUBE.")
        {
            m_PredefinedType = IfcCondenserTypeEnum_WATERCOOLEDSHELLTUBE;
        }
        else if (arg == ".WATERCOOLEDSHELLCOIL.")
        {
            m_PredefinedType = IfcCondenserTypeEnum_WATERCOOLEDSHELLCOIL;
        }
        else if (arg == ".WATERCOOLEDTUBEINTUBE.")
        {
            m_PredefinedType = IfcCondenserTypeEnum_WATERCOOLEDTUBEINTUBE;
        }
        else if (arg == ".WATERCOOLEDBRAZEDPLATE.")
        {
            m_PredefinedType = IfcCondenserTypeEnum_WATERCOOLEDBRAZEDPLATE;
        }
        else if (arg == ".AIRCOOLED.")
        {
            m_PredefinedType = IfcCondenserTypeEnum_AIRCOOLED;
        }
        else if (arg == ".EVAPORATIVECOOLED.")
        {
            m_PredefinedType = IfcCondenserTypeEnum_EVAPORATIVECOOLED;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcCondenserTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcCondenserTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCondenserType::copy(const IfcCondenserType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCondenserType, IfcEnergyConversionDeviceType)
