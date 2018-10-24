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


#include <ifc2x3/IfcWasteTerminalType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcWasteTerminalType::IfcWasteTerminalType(Step::Id id, Step::SPFData *args) : 
    IfcFlowTerminalType(id, args)
{
    m_PredefinedType = IfcWasteTerminalTypeEnum_UNSET;
}

IfcWasteTerminalType::~IfcWasteTerminalType()
{}

bool IfcWasteTerminalType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcWasteTerminalType(this);
}


IfcWasteTerminalTypeEnum IfcWasteTerminalType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcWasteTerminalTypeEnum_UNSET;
    }    
}

IfcWasteTerminalTypeEnum IfcWasteTerminalType::getPredefinedType() const
{
    return const_cast<IfcWasteTerminalType *>(this)->getPredefinedType();
}

void IfcWasteTerminalType::setPredefinedType(IfcWasteTerminalTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcWasteTerminalType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcWasteTerminalTypeEnum_UNSET;
}

bool IfcWasteTerminalType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcWasteTerminalType::init()
{
    if (IfcFlowTerminalType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcWasteTerminalTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FLOORTRAP.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_FLOORTRAP;
        }
        else if (arg == ".FLOORWASTE.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_FLOORWASTE;
        }
        else if (arg == ".GULLYSUMP.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_GULLYSUMP;
        }
        else if (arg == ".GULLYTRAP.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_GULLYTRAP;
        }
        else if (arg == ".GREASEINTERCEPTOR.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_GREASEINTERCEPTOR;
        }
        else if (arg == ".OILINTERCEPTOR.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_OILINTERCEPTOR;
        }
        else if (arg == ".PETROLINTERCEPTOR.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_PETROLINTERCEPTOR;
        }
        else if (arg == ".ROOFDRAIN.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_ROOFDRAIN;
        }
        else if (arg == ".WASTEDISPOSALUNIT.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_WASTEDISPOSALUNIT;
        }
        else if (arg == ".WASTETRAP.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_WASTETRAP;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcWasteTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcWasteTerminalType::copy(const IfcWasteTerminalType &obj, const CopyOp &copyop)
{
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcWasteTerminalType, IfcFlowTerminalType)
