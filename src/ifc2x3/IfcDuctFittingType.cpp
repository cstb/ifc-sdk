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


#include <ifc2x3/IfcDuctFittingType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDuctFittingType::IfcDuctFittingType(Step::Id id, Step::SPFData *args) : 
    IfcFlowFittingType(id, args)
{
    m_PredefinedType = IfcDuctFittingTypeEnum_UNSET;
}

IfcDuctFittingType::~IfcDuctFittingType()
{}

bool IfcDuctFittingType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDuctFittingType(this);
}


IfcDuctFittingTypeEnum IfcDuctFittingType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcDuctFittingTypeEnum_UNSET;
    }    
}

IfcDuctFittingTypeEnum IfcDuctFittingType::getPredefinedType() const
{
    return const_cast<IfcDuctFittingType *>(this)->getPredefinedType();
}

void IfcDuctFittingType::setPredefinedType(IfcDuctFittingTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcDuctFittingType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcDuctFittingTypeEnum_UNSET;
}

bool IfcDuctFittingType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcDuctFittingType::init()
{
    if (IfcFlowFittingType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcDuctFittingTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".BEND.")
        {
            m_PredefinedType = IfcDuctFittingTypeEnum_BEND;
        }
        else if (arg == ".CONNECTOR.")
        {
            m_PredefinedType = IfcDuctFittingTypeEnum_CONNECTOR;
        }
        else if (arg == ".ENTRY.")
        {
            m_PredefinedType = IfcDuctFittingTypeEnum_ENTRY;
        }
        else if (arg == ".EXIT.")
        {
            m_PredefinedType = IfcDuctFittingTypeEnum_EXIT;
        }
        else if (arg == ".JUNCTION.")
        {
            m_PredefinedType = IfcDuctFittingTypeEnum_JUNCTION;
        }
        else if (arg == ".OBSTRUCTION.")
        {
            m_PredefinedType = IfcDuctFittingTypeEnum_OBSTRUCTION;
        }
        else if (arg == ".TRANSITION.")
        {
            m_PredefinedType = IfcDuctFittingTypeEnum_TRANSITION;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcDuctFittingTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcDuctFittingTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDuctFittingType::copy(const IfcDuctFittingType &obj, const CopyOp &copyop)
{
    IfcFlowFittingType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDuctFittingType, IfcFlowFittingType)
