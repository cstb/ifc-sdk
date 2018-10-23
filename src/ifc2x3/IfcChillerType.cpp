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


#include <ifc2x3/IfcChillerType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcChillerType::IfcChillerType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcChillerTypeEnum_UNSET;
}

IfcChillerType::~IfcChillerType()
{}

bool IfcChillerType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcChillerType(this);
}


IfcChillerTypeEnum IfcChillerType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcChillerTypeEnum_UNSET;
    }    
}

IfcChillerTypeEnum IfcChillerType::getPredefinedType() const
{
    return const_cast<IfcChillerType *>(this)->getPredefinedType();
}

void IfcChillerType::setPredefinedType(IfcChillerTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcChillerType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcChillerTypeEnum_UNSET;
}

bool IfcChillerType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcChillerType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcChillerTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".AIRCOOLED.")
        {
            m_PredefinedType = IfcChillerTypeEnum_AIRCOOLED;
        }
        else if (arg == ".WATERCOOLED.")
        {
            m_PredefinedType = IfcChillerTypeEnum_WATERCOOLED;
        }
        else if (arg == ".HEATRECOVERY.")
        {
            m_PredefinedType = IfcChillerTypeEnum_HEATRECOVERY;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcChillerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcChillerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcChillerType::copy(const IfcChillerType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcChillerType, IfcEnergyConversionDeviceType)
