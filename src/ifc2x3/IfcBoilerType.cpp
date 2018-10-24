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


#include <ifc2x3/IfcBoilerType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBoilerType::IfcBoilerType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcBoilerTypeEnum_UNSET;
}

IfcBoilerType::~IfcBoilerType()
{}

bool IfcBoilerType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBoilerType(this);
}


IfcBoilerTypeEnum IfcBoilerType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcBoilerTypeEnum_UNSET;
    }    
}

IfcBoilerTypeEnum IfcBoilerType::getPredefinedType() const
{
    return const_cast<IfcBoilerType *>(this)->getPredefinedType();
}

void IfcBoilerType::setPredefinedType(IfcBoilerTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcBoilerType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcBoilerTypeEnum_UNSET;
}

bool IfcBoilerType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcBoilerType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcBoilerTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".WATER.")
        {
            m_PredefinedType = IfcBoilerTypeEnum_WATER;
        }
        else if (arg == ".STEAM.")
        {
            m_PredefinedType = IfcBoilerTypeEnum_STEAM;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcBoilerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcBoilerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcBoilerType::copy(const IfcBoilerType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBoilerType, IfcEnergyConversionDeviceType)
