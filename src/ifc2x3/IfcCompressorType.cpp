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


#include <ifc2x3/IfcCompressorType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCompressorType::IfcCompressorType(Step::Id id, Step::SPFData *args) : 
    IfcFlowMovingDeviceType(id, args)
{
    m_PredefinedType = IfcCompressorTypeEnum_UNSET;
}

IfcCompressorType::~IfcCompressorType()
{}

bool IfcCompressorType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCompressorType(this);
}


IfcCompressorTypeEnum IfcCompressorType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcCompressorTypeEnum_UNSET;
    }    
}

IfcCompressorTypeEnum IfcCompressorType::getPredefinedType() const
{
    return const_cast<IfcCompressorType *>(this)->getPredefinedType();
}

void IfcCompressorType::setPredefinedType(IfcCompressorTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcCompressorType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcCompressorTypeEnum_UNSET;
}

bool IfcCompressorType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcCompressorType::init()
{
    if (IfcFlowMovingDeviceType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcCompressorTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".DYNAMIC.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_DYNAMIC;
        }
        else if (arg == ".RECIPROCATING.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_RECIPROCATING;
        }
        else if (arg == ".ROTARY.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_ROTARY;
        }
        else if (arg == ".SCROLL.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_SCROLL;
        }
        else if (arg == ".TROCHOIDAL.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_TROCHOIDAL;
        }
        else if (arg == ".SINGLESTAGE.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_SINGLESTAGE;
        }
        else if (arg == ".BOOSTER.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_BOOSTER;
        }
        else if (arg == ".OPENTYPE.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_OPENTYPE;
        }
        else if (arg == ".HERMETIC.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_HERMETIC;
        }
        else if (arg == ".SEMIHERMETIC.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_SEMIHERMETIC;
        }
        else if (arg == ".WELDEDSHELLHERMETIC.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_WELDEDSHELLHERMETIC;
        }
        else if (arg == ".ROLLINGPISTON.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_ROLLINGPISTON;
        }
        else if (arg == ".ROTARYVANE.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_ROTARYVANE;
        }
        else if (arg == ".SINGLESCREW.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_SINGLESCREW;
        }
        else if (arg == ".TWINSCREW.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_TWINSCREW;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcCompressorTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCompressorType::copy(const IfcCompressorType &obj, const CopyOp &copyop)
{
    IfcFlowMovingDeviceType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCompressorType, IfcFlowMovingDeviceType)
