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


#include <ifc2x3/IfcSlabType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSlabType::IfcSlabType(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElementType(id, args)
{
    m_PredefinedType = IfcSlabTypeEnum_UNSET;
}

IfcSlabType::~IfcSlabType()
{}

bool IfcSlabType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSlabType(this);
}


IfcSlabTypeEnum IfcSlabType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcSlabTypeEnum_UNSET;
    }    
}

IfcSlabTypeEnum IfcSlabType::getPredefinedType() const
{
    return const_cast<IfcSlabType *>(this)->getPredefinedType();
}

void IfcSlabType::setPredefinedType(IfcSlabTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcSlabType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcSlabTypeEnum_UNSET;
}

bool IfcSlabType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcSlabType::init()
{
    if (IfcBuildingElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcSlabTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FLOOR.")
        {
            m_PredefinedType = IfcSlabTypeEnum_FLOOR;
        }
        else if (arg == ".ROOF.")
        {
            m_PredefinedType = IfcSlabTypeEnum_ROOF;
        }
        else if (arg == ".LANDING.")
        {
            m_PredefinedType = IfcSlabTypeEnum_LANDING;
        }
        else if (arg == ".BASESLAB.")
        {
            m_PredefinedType = IfcSlabTypeEnum_BASESLAB;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcSlabTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcSlabTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSlabType::copy(const IfcSlabType &obj, const CopyOp &copyop)
{
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSlabType, IfcBuildingElementType)
