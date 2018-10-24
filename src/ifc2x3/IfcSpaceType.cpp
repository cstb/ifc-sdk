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


#include <ifc2x3/IfcSpaceType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSpaceType::IfcSpaceType(Step::Id id, Step::SPFData *args) : 
    IfcSpatialStructureElementType(id, args)
{
    m_PredefinedType = IfcSpaceTypeEnum_UNSET;
}

IfcSpaceType::~IfcSpaceType()
{}

bool IfcSpaceType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSpaceType(this);
}


IfcSpaceTypeEnum IfcSpaceType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcSpaceTypeEnum_UNSET;
    }    
}

IfcSpaceTypeEnum IfcSpaceType::getPredefinedType() const
{
    return const_cast<IfcSpaceType *>(this)->getPredefinedType();
}

void IfcSpaceType::setPredefinedType(IfcSpaceTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcSpaceType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcSpaceTypeEnum_UNSET;
}

bool IfcSpaceType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcSpaceType::init()
{
    if (IfcSpatialStructureElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcSpaceTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcSpaceTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcSpaceTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSpaceType::copy(const IfcSpaceType &obj, const CopyOp &copyop)
{
    IfcSpatialStructureElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSpaceType, IfcSpatialStructureElementType)
