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


#include <ifc2x3/IfcAlarmType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcAlarmType::IfcAlarmType(Step::Id id, Step::SPFData *args) : 
    IfcDistributionControlElementType(id, args)
{
    m_PredefinedType = IfcAlarmTypeEnum_UNSET;
}

IfcAlarmType::~IfcAlarmType()
{}

bool IfcAlarmType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcAlarmType(this);
}


IfcAlarmTypeEnum IfcAlarmType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcAlarmTypeEnum_UNSET;
    }    
}

IfcAlarmTypeEnum IfcAlarmType::getPredefinedType() const
{
    return const_cast<IfcAlarmType *>(this)->getPredefinedType();
}

void IfcAlarmType::setPredefinedType(IfcAlarmTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcAlarmType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcAlarmTypeEnum_UNSET;
}

bool IfcAlarmType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcAlarmType::init()
{
    if (IfcDistributionControlElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcAlarmTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".BELL.")
        {
            m_PredefinedType = IfcAlarmTypeEnum_BELL;
        }
        else if (arg == ".BREAKGLASSBUTTON.")
        {
            m_PredefinedType = IfcAlarmTypeEnum_BREAKGLASSBUTTON;
        }
        else if (arg == ".LIGHT.")
        {
            m_PredefinedType = IfcAlarmTypeEnum_LIGHT;
        }
        else if (arg == ".MANUALPULLBOX.")
        {
            m_PredefinedType = IfcAlarmTypeEnum_MANUALPULLBOX;
        }
        else if (arg == ".SIREN.")
        {
            m_PredefinedType = IfcAlarmTypeEnum_SIREN;
        }
        else if (arg == ".WHISTLE.")
        {
            m_PredefinedType = IfcAlarmTypeEnum_WHISTLE;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcAlarmTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcAlarmTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcAlarmType::copy(const IfcAlarmType &obj, const CopyOp &copyop)
{
    IfcDistributionControlElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcAlarmType, IfcDistributionControlElementType)
