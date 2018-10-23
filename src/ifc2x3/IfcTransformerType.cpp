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


#include <ifc2x3/IfcTransformerType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTransformerType::IfcTransformerType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcTransformerTypeEnum_UNSET;
}

IfcTransformerType::~IfcTransformerType()
{}

bool IfcTransformerType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTransformerType(this);
}


IfcTransformerTypeEnum IfcTransformerType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcTransformerTypeEnum_UNSET;
    }    
}

IfcTransformerTypeEnum IfcTransformerType::getPredefinedType() const
{
    return const_cast<IfcTransformerType *>(this)->getPredefinedType();
}

void IfcTransformerType::setPredefinedType(IfcTransformerTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcTransformerType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcTransformerTypeEnum_UNSET;
}

bool IfcTransformerType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcTransformerType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcTransformerTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CURRENT.")
        {
            m_PredefinedType = IfcTransformerTypeEnum_CURRENT;
        }
        else if (arg == ".FREQUENCY.")
        {
            m_PredefinedType = IfcTransformerTypeEnum_FREQUENCY;
        }
        else if (arg == ".VOLTAGE.")
        {
            m_PredefinedType = IfcTransformerTypeEnum_VOLTAGE;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcTransformerTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcTransformerTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcTransformerType::copy(const IfcTransformerType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTransformerType, IfcEnergyConversionDeviceType)
