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


#include <ifc2x3/IfcCoilType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCoilType::IfcCoilType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcCoilTypeEnum_UNSET;
}

IfcCoilType::~IfcCoilType()
{}

bool IfcCoilType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCoilType(this);
}


IfcCoilTypeEnum IfcCoilType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcCoilTypeEnum_UNSET;
    }    
}

IfcCoilTypeEnum IfcCoilType::getPredefinedType() const
{
    return const_cast<IfcCoilType *>(this)->getPredefinedType();
}

void IfcCoilType::setPredefinedType(IfcCoilTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcCoilType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcCoilTypeEnum_UNSET;
}

bool IfcCoilType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcCoilType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcCoilTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".DXCOOLINGCOIL.")
        {
            m_PredefinedType = IfcCoilTypeEnum_DXCOOLINGCOIL;
        }
        else if (arg == ".WATERCOOLINGCOIL.")
        {
            m_PredefinedType = IfcCoilTypeEnum_WATERCOOLINGCOIL;
        }
        else if (arg == ".STEAMHEATINGCOIL.")
        {
            m_PredefinedType = IfcCoilTypeEnum_STEAMHEATINGCOIL;
        }
        else if (arg == ".WATERHEATINGCOIL.")
        {
            m_PredefinedType = IfcCoilTypeEnum_WATERHEATINGCOIL;
        }
        else if (arg == ".ELECTRICHEATINGCOIL.")
        {
            m_PredefinedType = IfcCoilTypeEnum_ELECTRICHEATINGCOIL;
        }
        else if (arg == ".GASHEATINGCOIL.")
        {
            m_PredefinedType = IfcCoilTypeEnum_GASHEATINGCOIL;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcCoilTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcCoilTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCoilType::copy(const IfcCoilType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCoilType, IfcEnergyConversionDeviceType)
