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


#include <ifc2x3/IfcAirTerminalType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAirTerminalType::IfcAirTerminalType(Step::Id id, Step::SPFData *args) : 
    IfcFlowTerminalType(id, args)
{
    m_PredefinedType = IfcAirTerminalTypeEnum_UNSET;
}

IfcAirTerminalType::~IfcAirTerminalType()
{}

bool IfcAirTerminalType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAirTerminalType(this);
}


IfcAirTerminalTypeEnum IfcAirTerminalType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcAirTerminalTypeEnum_UNSET;
    }    
}

IfcAirTerminalTypeEnum IfcAirTerminalType::getPredefinedType() const
{
    return const_cast<IfcAirTerminalType *>(this)->getPredefinedType();
}

void IfcAirTerminalType::setPredefinedType(IfcAirTerminalTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcAirTerminalType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcAirTerminalTypeEnum_UNSET;
}

bool IfcAirTerminalType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcAirTerminalType::init()
{
    if (IfcFlowTerminalType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcAirTerminalTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".GRILLE.")
        {
            m_PredefinedType = IfcAirTerminalTypeEnum_GRILLE;
        }
        else if (arg == ".REGISTER.")
        {
            m_PredefinedType = IfcAirTerminalTypeEnum_REGISTER;
        }
        else if (arg == ".DIFFUSER.")
        {
            m_PredefinedType = IfcAirTerminalTypeEnum_DIFFUSER;
        }
        else if (arg == ".EYEBALL.")
        {
            m_PredefinedType = IfcAirTerminalTypeEnum_EYEBALL;
        }
        else if (arg == ".IRIS.")
        {
            m_PredefinedType = IfcAirTerminalTypeEnum_IRIS;
        }
        else if (arg == ".LINEARGRILLE.")
        {
            m_PredefinedType = IfcAirTerminalTypeEnum_LINEARGRILLE;
        }
        else if (arg == ".LINEARDIFFUSER.")
        {
            m_PredefinedType = IfcAirTerminalTypeEnum_LINEARDIFFUSER;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcAirTerminalTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcAirTerminalTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcAirTerminalType::copy(const IfcAirTerminalType &obj, const CopyOp &copyop)
{
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAirTerminalType, IfcFlowTerminalType)
