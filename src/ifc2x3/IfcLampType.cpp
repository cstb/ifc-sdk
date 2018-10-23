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


#include <ifc2x3/IfcLampType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcLampType::IfcLampType(Step::Id id, Step::SPFData *args) : 
    IfcFlowTerminalType(id, args)
{
    m_PredefinedType = IfcLampTypeEnum_UNSET;
}

IfcLampType::~IfcLampType()
{}

bool IfcLampType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcLampType(this);
}


IfcLampTypeEnum IfcLampType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcLampTypeEnum_UNSET;
    }    
}

IfcLampTypeEnum IfcLampType::getPredefinedType() const
{
    return const_cast<IfcLampType *>(this)->getPredefinedType();
}

void IfcLampType::setPredefinedType(IfcLampTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcLampType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcLampTypeEnum_UNSET;
}

bool IfcLampType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcLampType::init()
{
    if (IfcFlowTerminalType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcLampTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".COMPACTFLUORESCENT.")
        {
            m_PredefinedType = IfcLampTypeEnum_COMPACTFLUORESCENT;
        }
        else if (arg == ".FLUORESCENT.")
        {
            m_PredefinedType = IfcLampTypeEnum_FLUORESCENT;
        }
        else if (arg == ".HIGHPRESSUREMERCURY.")
        {
            m_PredefinedType = IfcLampTypeEnum_HIGHPRESSUREMERCURY;
        }
        else if (arg == ".HIGHPRESSURESODIUM.")
        {
            m_PredefinedType = IfcLampTypeEnum_HIGHPRESSURESODIUM;
        }
        else if (arg == ".METALHALIDE.")
        {
            m_PredefinedType = IfcLampTypeEnum_METALHALIDE;
        }
        else if (arg == ".TUNGSTENFILAMENT.")
        {
            m_PredefinedType = IfcLampTypeEnum_TUNGSTENFILAMENT;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcLampTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcLampTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcLampType::copy(const IfcLampType &obj, const CopyOp &copyop)
{
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcLampType, IfcFlowTerminalType)
