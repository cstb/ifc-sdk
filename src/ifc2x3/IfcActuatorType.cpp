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


#include <ifc2x3/IfcActuatorType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcActuatorType::IfcActuatorType(Step::Id id, Step::SPFData *args) : 
    IfcDistributionControlElementType(id, args)
{
    m_PredefinedType = IfcActuatorTypeEnum_UNSET;
}

IfcActuatorType::~IfcActuatorType()
{}

bool IfcActuatorType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcActuatorType(this);
}


IfcActuatorTypeEnum IfcActuatorType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcActuatorTypeEnum_UNSET;
    }    
}

IfcActuatorTypeEnum IfcActuatorType::getPredefinedType() const
{
    return const_cast<IfcActuatorType *>(this)->getPredefinedType();
}

void IfcActuatorType::setPredefinedType(IfcActuatorTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcActuatorType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcActuatorTypeEnum_UNSET;
}

bool IfcActuatorType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcActuatorType::init()
{
    if (IfcDistributionControlElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcActuatorTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ELECTRICACTUATOR.")
        {
            m_PredefinedType = IfcActuatorTypeEnum_ELECTRICACTUATOR;
        }
        else if (arg == ".HANDOPERATEDACTUATOR.")
        {
            m_PredefinedType = IfcActuatorTypeEnum_HANDOPERATEDACTUATOR;
        }
        else if (arg == ".HYDRAULICACTUATOR.")
        {
            m_PredefinedType = IfcActuatorTypeEnum_HYDRAULICACTUATOR;
        }
        else if (arg == ".PNEUMATICACTUATOR.")
        {
            m_PredefinedType = IfcActuatorTypeEnum_PNEUMATICACTUATOR;
        }
        else if (arg == ".THERMOSTATICACTUATOR.")
        {
            m_PredefinedType = IfcActuatorTypeEnum_THERMOSTATICACTUATOR;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcActuatorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcActuatorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcActuatorType::copy(const IfcActuatorType &obj, const CopyOp &copyop)
{
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcActuatorType, IfcDistributionControlElementType)
