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


#include <ifc2x3/IfcFanType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFanType::IfcFanType(Step::Id id, Step::SPFData *args) : 
    IfcFlowMovingDeviceType(id, args)
{
    m_PredefinedType = IfcFanTypeEnum_UNSET;
}

IfcFanType::~IfcFanType()
{}

bool IfcFanType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFanType(this);
}


IfcFanTypeEnum IfcFanType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcFanTypeEnum_UNSET;
    }    
}

IfcFanTypeEnum IfcFanType::getPredefinedType() const
{
    return const_cast<IfcFanType *>(this)->getPredefinedType();
}

void IfcFanType::setPredefinedType(IfcFanTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcFanType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcFanTypeEnum_UNSET;
}

bool IfcFanType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcFanType::init()
{
    if (IfcFlowMovingDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcFanTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CENTRIFUGALFORWARDCURVED.")
        {
            m_PredefinedType = IfcFanTypeEnum_CENTRIFUGALFORWARDCURVED;
        }
        else if (arg == ".CENTRIFUGALRADIAL.")
        {
            m_PredefinedType = IfcFanTypeEnum_CENTRIFUGALRADIAL;
        }
        else if (arg == ".CENTRIFUGALBACKWARDINCLINEDCURVED.")
        {
            m_PredefinedType = IfcFanTypeEnum_CENTRIFUGALBACKWARDINCLINEDCURVED;
        }
        else if (arg == ".CENTRIFUGALAIRFOIL.")
        {
            m_PredefinedType = IfcFanTypeEnum_CENTRIFUGALAIRFOIL;
        }
        else if (arg == ".TUBEAXIAL.")
        {
            m_PredefinedType = IfcFanTypeEnum_TUBEAXIAL;
        }
        else if (arg == ".VANEAXIAL.")
        {
            m_PredefinedType = IfcFanTypeEnum_VANEAXIAL;
        }
        else if (arg == ".PROPELLORAXIAL.")
        {
            m_PredefinedType = IfcFanTypeEnum_PROPELLORAXIAL;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcFanTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcFanTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFanType::copy(const IfcFanType &obj, const CopyOp &copyop)
{
    IfcFlowMovingDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFanType, IfcFlowMovingDeviceType)
