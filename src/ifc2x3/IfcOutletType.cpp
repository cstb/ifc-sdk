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


#include <ifc2x3/IfcOutletType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcOutletType::IfcOutletType(Step::Id id, Step::SPFData *args) : 
    IfcFlowTerminalType(id, args)
{
    m_PredefinedType = IfcOutletTypeEnum_UNSET;
}

IfcOutletType::~IfcOutletType()
{}

bool IfcOutletType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcOutletType(this);
}


IfcOutletTypeEnum IfcOutletType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcOutletTypeEnum_UNSET;
    }    
}

IfcOutletTypeEnum IfcOutletType::getPredefinedType() const
{
    return const_cast<IfcOutletType *>(this)->getPredefinedType();
}

void IfcOutletType::setPredefinedType(IfcOutletTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcOutletType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcOutletTypeEnum_UNSET;
}

bool IfcOutletType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcOutletType::init()
{
    if (IfcFlowTerminalType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcOutletTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".AUDIOVISUALOUTLET.")
        {
            m_PredefinedType = IfcOutletTypeEnum_AUDIOVISUALOUTLET;
        }
        else if (arg == ".COMMUNICATIONSOUTLET.")
        {
            m_PredefinedType = IfcOutletTypeEnum_COMMUNICATIONSOUTLET;
        }
        else if (arg == ".POWEROUTLET.")
        {
            m_PredefinedType = IfcOutletTypeEnum_POWEROUTLET;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcOutletTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcOutletTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcOutletType::copy(const IfcOutletType &obj, const CopyOp &copyop)
{
    IfcFlowTerminalType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcOutletType, IfcFlowTerminalType)
