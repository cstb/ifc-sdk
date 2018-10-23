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


#include <ifc2x3/IfcMemberType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcMemberType::IfcMemberType(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElementType(id, args)
{
    m_PredefinedType = IfcMemberTypeEnum_UNSET;
}

IfcMemberType::~IfcMemberType()
{}

bool IfcMemberType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcMemberType(this);
}


IfcMemberTypeEnum IfcMemberType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcMemberTypeEnum_UNSET;
    }    
}

IfcMemberTypeEnum IfcMemberType::getPredefinedType() const
{
    return const_cast<IfcMemberType *>(this)->getPredefinedType();
}

void IfcMemberType::setPredefinedType(IfcMemberTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcMemberType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcMemberTypeEnum_UNSET;
}

bool IfcMemberType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcMemberType::init()
{
    if (IfcBuildingElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcMemberTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".BRACE.")
        {
            m_PredefinedType = IfcMemberTypeEnum_BRACE;
        }
        else if (arg == ".CHORD.")
        {
            m_PredefinedType = IfcMemberTypeEnum_CHORD;
        }
        else if (arg == ".COLLAR.")
        {
            m_PredefinedType = IfcMemberTypeEnum_COLLAR;
        }
        else if (arg == ".MEMBER.")
        {
            m_PredefinedType = IfcMemberTypeEnum_MEMBER;
        }
        else if (arg == ".MULLION.")
        {
            m_PredefinedType = IfcMemberTypeEnum_MULLION;
        }
        else if (arg == ".PLATE.")
        {
            m_PredefinedType = IfcMemberTypeEnum_PLATE;
        }
        else if (arg == ".POST.")
        {
            m_PredefinedType = IfcMemberTypeEnum_POST;
        }
        else if (arg == ".PURLIN.")
        {
            m_PredefinedType = IfcMemberTypeEnum_PURLIN;
        }
        else if (arg == ".RAFTER.")
        {
            m_PredefinedType = IfcMemberTypeEnum_RAFTER;
        }
        else if (arg == ".STRINGER.")
        {
            m_PredefinedType = IfcMemberTypeEnum_STRINGER;
        }
        else if (arg == ".STRUT.")
        {
            m_PredefinedType = IfcMemberTypeEnum_STRUT;
        }
        else if (arg == ".STUD.")
        {
            m_PredefinedType = IfcMemberTypeEnum_STUD;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcMemberTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcMemberTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcMemberType::copy(const IfcMemberType &obj, const CopyOp &copyop)
{
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcMemberType, IfcBuildingElementType)
