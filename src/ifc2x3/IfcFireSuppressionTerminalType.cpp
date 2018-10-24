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


#include <ifc2x3/IfcFireSuppressionTerminalType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFireSuppressionTerminalType::IfcFireSuppressionTerminalType(Step::Id id, Step::SPFData *args) : 
    IfcFlowTerminalType(id, args)
{
    m_PredefinedType = IfcFireSuppressionTerminalTypeEnum_UNSET;
}

IfcFireSuppressionTerminalType::~IfcFireSuppressionTerminalType()
{}

bool IfcFireSuppressionTerminalType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFireSuppressionTerminalType(this);
}


IfcFireSuppressionTerminalTypeEnum IfcFireSuppressionTerminalType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcFireSuppressionTerminalTypeEnum_UNSET;
    }    
}

IfcFireSuppressionTerminalTypeEnum IfcFireSuppressionTerminalType::getPredefinedType() const
{
    return const_cast<IfcFireSuppressionTerminalType *>(this)->getPredefinedType();
}

void IfcFireSuppressionTerminalType::setPredefinedType(IfcFireSuppressionTerminalTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcFireSuppressionTerminalType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcFireSuppressionTerminalTypeEnum_UNSET;
}

bool IfcFireSuppressionTerminalType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcFireSuppressionTerminalType::init()
{
    if (IfcFlowTerminalType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcFireSuppressionTerminalTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".BREECHINGINLET.")
        {
            m_PredefinedType = IfcFireSuppressionTerminalTypeEnum_BREECHINGINLET;
        }
        else if (arg == ".FIREHYDRANT.")
        {
            m_PredefinedType = IfcFireSuppressionTerminalTypeEnum_FIREHYDRANT;
        }
        else if (arg == ".HOSEREEL.")
        {
            m_PredefinedType = IfcFireSuppressionTerminalTypeEnum_HOSEREEL;
        }
        else if (arg == ".SPRINKLER.")
        {
            m_PredefinedType = IfcFireSuppressionTerminalTypeEnum_SPRINKLER;
        }
        else if (arg == ".SPRINKLERDEFLECTOR.")
        {
            m_PredefinedType = IfcFireSuppressionTerminalTypeEnum_SPRINKLERDEFLECTOR;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcFireSuppressionTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcFireSuppressionTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFireSuppressionTerminalType::copy(const IfcFireSuppressionTerminalType &obj, const CopyOp &copyop)
{
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFireSuppressionTerminalType, IfcFlowTerminalType)
