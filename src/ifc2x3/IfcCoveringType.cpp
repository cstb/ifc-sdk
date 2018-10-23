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


#include <ifc2x3/IfcCoveringType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCoveringType::IfcCoveringType(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElementType(id, args)
{
    m_PredefinedType = IfcCoveringTypeEnum_UNSET;
}

IfcCoveringType::~IfcCoveringType()
{}

bool IfcCoveringType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCoveringType(this);
}


IfcCoveringTypeEnum IfcCoveringType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcCoveringTypeEnum_UNSET;
    }    
}

IfcCoveringTypeEnum IfcCoveringType::getPredefinedType() const
{
    return const_cast<IfcCoveringType *>(this)->getPredefinedType();
}

void IfcCoveringType::setPredefinedType(IfcCoveringTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcCoveringType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcCoveringTypeEnum_UNSET;
}

bool IfcCoveringType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcCoveringType::init()
{
    if (IfcBuildingElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcCoveringTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CEILING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_CEILING;
        }
        else if (arg == ".FLOORING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_FLOORING;
        }
        else if (arg == ".CLADDING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_CLADDING;
        }
        else if (arg == ".ROOFING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_ROOFING;
        }
        else if (arg == ".INSULATION.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_INSULATION;
        }
        else if (arg == ".MEMBRANE.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_MEMBRANE;
        }
        else if (arg == ".SLEEVING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_SLEEVING;
        }
        else if (arg == ".WRAPPING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_WRAPPING;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCoveringType::copy(const IfcCoveringType &obj, const CopyOp &copyop)
{
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCoveringType, IfcBuildingElementType)
