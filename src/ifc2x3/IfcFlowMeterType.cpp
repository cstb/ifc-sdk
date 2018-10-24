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


#include <ifc2x3/IfcFlowMeterType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFlowMeterType::IfcFlowMeterType(Step::Id id, Step::SPFData *args) : 
    IfcFlowControllerType(id, args)
{
    m_PredefinedType = IfcFlowMeterTypeEnum_UNSET;
}

IfcFlowMeterType::~IfcFlowMeterType()
{}

bool IfcFlowMeterType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFlowMeterType(this);
}


IfcFlowMeterTypeEnum IfcFlowMeterType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcFlowMeterTypeEnum_UNSET;
    }    
}

IfcFlowMeterTypeEnum IfcFlowMeterType::getPredefinedType() const
{
    return const_cast<IfcFlowMeterType *>(this)->getPredefinedType();
}

void IfcFlowMeterType::setPredefinedType(IfcFlowMeterTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcFlowMeterType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcFlowMeterTypeEnum_UNSET;
}

bool IfcFlowMeterType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcFlowMeterType::init()
{
    if (IfcFlowControllerType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcFlowMeterTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ELECTRICMETER.")
        {
            m_PredefinedType = IfcFlowMeterTypeEnum_ELECTRICMETER;
        }
        else if (arg == ".ENERGYMETER.")
        {
            m_PredefinedType = IfcFlowMeterTypeEnum_ENERGYMETER;
        }
        else if (arg == ".FLOWMETER.")
        {
            m_PredefinedType = IfcFlowMeterTypeEnum_FLOWMETER;
        }
        else if (arg == ".GASMETER.")
        {
            m_PredefinedType = IfcFlowMeterTypeEnum_GASMETER;
        }
        else if (arg == ".OILMETER.")
        {
            m_PredefinedType = IfcFlowMeterTypeEnum_OILMETER;
        }
        else if (arg == ".WATERMETER.")
        {
            m_PredefinedType = IfcFlowMeterTypeEnum_WATERMETER;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcFlowMeterTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcFlowMeterTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFlowMeterType::copy(const IfcFlowMeterType &obj, const CopyOp &copyop)
{
    IfcFlowControllerType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFlowMeterType, IfcFlowControllerType)
