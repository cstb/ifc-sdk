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


#include <ifc2x3/IfcSanitaryTerminalType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSanitaryTerminalType::IfcSanitaryTerminalType(Step::Id id, Step::SPFData *args) : 
    IfcFlowTerminalType(id, args)
{
    m_PredefinedType = IfcSanitaryTerminalTypeEnum_UNSET;
}

IfcSanitaryTerminalType::~IfcSanitaryTerminalType()
{}

bool IfcSanitaryTerminalType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSanitaryTerminalType(this);
}


IfcSanitaryTerminalTypeEnum IfcSanitaryTerminalType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcSanitaryTerminalTypeEnum_UNSET;
    }    
}

IfcSanitaryTerminalTypeEnum IfcSanitaryTerminalType::getPredefinedType() const
{
    return const_cast<IfcSanitaryTerminalType *>(this)->getPredefinedType();
}

void IfcSanitaryTerminalType::setPredefinedType(IfcSanitaryTerminalTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcSanitaryTerminalType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcSanitaryTerminalTypeEnum_UNSET;
}

bool IfcSanitaryTerminalType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcSanitaryTerminalType::init()
{
    if (IfcFlowTerminalType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcSanitaryTerminalTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".BATH.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_BATH;
        }
        else if (arg == ".BIDET.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_BIDET;
        }
        else if (arg == ".CISTERN.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_CISTERN;
        }
        else if (arg == ".SHOWER.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_SHOWER;
        }
        else if (arg == ".SINK.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_SINK;
        }
        else if (arg == ".SANITARYFOUNTAIN.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_SANITARYFOUNTAIN;
        }
        else if (arg == ".TOILETPAN.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_TOILETPAN;
        }
        else if (arg == ".URINAL.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_URINAL;
        }
        else if (arg == ".WASHHANDBASIN.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_WASHHANDBASIN;
        }
        else if (arg == ".WCSEAT.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_WCSEAT;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcSanitaryTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSanitaryTerminalType::copy(const IfcSanitaryTerminalType &obj, const CopyOp &copyop)
{
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSanitaryTerminalType, IfcFlowTerminalType)
