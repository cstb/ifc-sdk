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


#include <ifc2x3/IfcEvaporatorType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcEvaporatorType::IfcEvaporatorType(Step::Id id, Step::SPFData *args) : 
    IfcEnergyConversionDeviceType(id, args)
{
    m_PredefinedType = IfcEvaporatorTypeEnum_UNSET;
}

IfcEvaporatorType::~IfcEvaporatorType()
{}

bool IfcEvaporatorType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcEvaporatorType(this);
}


IfcEvaporatorTypeEnum IfcEvaporatorType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcEvaporatorTypeEnum_UNSET;
    }    
}

IfcEvaporatorTypeEnum IfcEvaporatorType::getPredefinedType() const
{
    return const_cast<IfcEvaporatorType *>(this)->getPredefinedType();
}

void IfcEvaporatorType::setPredefinedType(IfcEvaporatorTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcEvaporatorType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcEvaporatorTypeEnum_UNSET;
}

bool IfcEvaporatorType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcEvaporatorType::init()
{
    if (IfcEnergyConversionDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcEvaporatorTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".DIRECTEXPANSIONSHELLANDTUBE.")
        {
            m_PredefinedType = IfcEvaporatorTypeEnum_DIRECTEXPANSIONSHELLANDTUBE;
        }
        else if (arg == ".DIRECTEXPANSIONTUBEINTUBE.")
        {
            m_PredefinedType = IfcEvaporatorTypeEnum_DIRECTEXPANSIONTUBEINTUBE;
        }
        else if (arg == ".DIRECTEXPANSIONBRAZEDPLATE.")
        {
            m_PredefinedType = IfcEvaporatorTypeEnum_DIRECTEXPANSIONBRAZEDPLATE;
        }
        else if (arg == ".FLOODEDSHELLANDTUBE.")
        {
            m_PredefinedType = IfcEvaporatorTypeEnum_FLOODEDSHELLANDTUBE;
        }
        else if (arg == ".SHELLANDCOIL.")
        {
            m_PredefinedType = IfcEvaporatorTypeEnum_SHELLANDCOIL;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcEvaporatorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcEvaporatorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcEvaporatorType::copy(const IfcEvaporatorType &obj, const CopyOp &copyop)
{
    IfcEnergyConversionDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcEvaporatorType, IfcEnergyConversionDeviceType)
