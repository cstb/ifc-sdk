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


#include <ifc2x3/IfcGasTerminalType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcGasTerminalType::IfcGasTerminalType(Step::Id id, Step::SPFData *args) : 
    IfcFlowTerminalType(id, args)
{
    m_PredefinedType = IfcGasTerminalTypeEnum_UNSET;
}

IfcGasTerminalType::~IfcGasTerminalType()
{}

bool IfcGasTerminalType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcGasTerminalType(this);
}


IfcGasTerminalTypeEnum IfcGasTerminalType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcGasTerminalTypeEnum_UNSET;
    }    
}

IfcGasTerminalTypeEnum IfcGasTerminalType::getPredefinedType() const
{
    return const_cast<IfcGasTerminalType *>(this)->getPredefinedType();
}

void IfcGasTerminalType::setPredefinedType(IfcGasTerminalTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcGasTerminalType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcGasTerminalTypeEnum_UNSET;
}

bool IfcGasTerminalType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcGasTerminalType::init()
{
    if (IfcFlowTerminalType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcGasTerminalTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".GASAPPLIANCE.")
        {
            m_PredefinedType = IfcGasTerminalTypeEnum_GASAPPLIANCE;
        }
        else if (arg == ".GASBOOSTER.")
        {
            m_PredefinedType = IfcGasTerminalTypeEnum_GASBOOSTER;
        }
        else if (arg == ".GASBURNER.")
        {
            m_PredefinedType = IfcGasTerminalTypeEnum_GASBURNER;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcGasTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcGasTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcGasTerminalType::copy(const IfcGasTerminalType &obj, const CopyOp &copyop)
{
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcGasTerminalType, IfcFlowTerminalType)
