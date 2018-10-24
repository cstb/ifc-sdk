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


#include <ifc2x3/IfcCableCarrierFittingType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCableCarrierFittingType::IfcCableCarrierFittingType(Step::Id id, Step::SPFData *args) : 
    IfcFlowFittingType(id, args)
{
    m_PredefinedType = IfcCableCarrierFittingTypeEnum_UNSET;
}

IfcCableCarrierFittingType::~IfcCableCarrierFittingType()
{}

bool IfcCableCarrierFittingType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCableCarrierFittingType(this);
}


IfcCableCarrierFittingTypeEnum IfcCableCarrierFittingType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcCableCarrierFittingTypeEnum_UNSET;
    }    
}

IfcCableCarrierFittingTypeEnum IfcCableCarrierFittingType::getPredefinedType() const
{
    return const_cast<IfcCableCarrierFittingType *>(this)->getPredefinedType();
}

void IfcCableCarrierFittingType::setPredefinedType(IfcCableCarrierFittingTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcCableCarrierFittingType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcCableCarrierFittingTypeEnum_UNSET;
}

bool IfcCableCarrierFittingType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcCableCarrierFittingType::init()
{
    if (IfcFlowFittingType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcCableCarrierFittingTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".BEND.")
        {
            m_PredefinedType = IfcCableCarrierFittingTypeEnum_BEND;
        }
        else if (arg == ".CROSS.")
        {
            m_PredefinedType = IfcCableCarrierFittingTypeEnum_CROSS;
        }
        else if (arg == ".REDUCER.")
        {
            m_PredefinedType = IfcCableCarrierFittingTypeEnum_REDUCER;
        }
        else if (arg == ".TEE.")
        {
            m_PredefinedType = IfcCableCarrierFittingTypeEnum_TEE;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcCableCarrierFittingTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcCableCarrierFittingTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCableCarrierFittingType::copy(const IfcCableCarrierFittingType &obj, const CopyOp &copyop)
{
    IfcFlowFittingType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCableCarrierFittingType, IfcFlowFittingType)
