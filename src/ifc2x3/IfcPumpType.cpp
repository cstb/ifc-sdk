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


#include <ifc2x3/IfcPumpType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPumpType::IfcPumpType(Step::Id id, Step::SPFData *args) : 
    IfcFlowMovingDeviceType(id, args)
{
    m_PredefinedType = IfcPumpTypeEnum_UNSET;
}

IfcPumpType::~IfcPumpType()
{}

bool IfcPumpType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPumpType(this);
}


IfcPumpTypeEnum IfcPumpType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcPumpTypeEnum_UNSET;
    }    
}

IfcPumpTypeEnum IfcPumpType::getPredefinedType() const
{
    return const_cast<IfcPumpType *>(this)->getPredefinedType();
}

void IfcPumpType::setPredefinedType(IfcPumpTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcPumpType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcPumpTypeEnum_UNSET;
}

bool IfcPumpType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcPumpType::init()
{
    if (IfcFlowMovingDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcPumpTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CIRCULATOR.")
        {
            m_PredefinedType = IfcPumpTypeEnum_CIRCULATOR;
        }
        else if (arg == ".ENDSUCTION.")
        {
            m_PredefinedType = IfcPumpTypeEnum_ENDSUCTION;
        }
        else if (arg == ".SPLITCASE.")
        {
            m_PredefinedType = IfcPumpTypeEnum_SPLITCASE;
        }
        else if (arg == ".VERTICALINLINE.")
        {
            m_PredefinedType = IfcPumpTypeEnum_VERTICALINLINE;
        }
        else if (arg == ".VERTICALTURBINE.")
        {
            m_PredefinedType = IfcPumpTypeEnum_VERTICALTURBINE;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcPumpTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcPumpTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPumpType::copy(const IfcPumpType &obj, const CopyOp &copyop)
{
    IfcFlowMovingDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPumpType, IfcFlowMovingDeviceType)
