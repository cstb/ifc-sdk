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


#include <ifc2x3/IfcRailing.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRailing::IfcRailing(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_PredefinedType = IfcRailingTypeEnum_UNSET;
}

IfcRailing::~IfcRailing()
{}

bool IfcRailing::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRailing(this);
}


IfcRailingTypeEnum IfcRailing::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcRailingTypeEnum_UNSET;
    }    
}

IfcRailingTypeEnum IfcRailing::getPredefinedType() const
{
    return const_cast<IfcRailing *>(this)->getPredefinedType();
}

void IfcRailing::setPredefinedType(IfcRailingTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcRailing::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcRailingTypeEnum_UNSET;
}

bool IfcRailing::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcRailing::init()
{
    if (IfcBuildingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcRailingTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".HANDRAIL.")
        {
            m_PredefinedType = IfcRailingTypeEnum_HANDRAIL;
        }
        else if (arg == ".GUARDRAIL.")
        {
            m_PredefinedType = IfcRailingTypeEnum_GUARDRAIL;
        }
        else if (arg == ".BALUSTRADE.")
        {
            m_PredefinedType = IfcRailingTypeEnum_BALUSTRADE;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcRailingTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcRailingTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRailing::copy(const IfcRailing &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRailing, IfcBuildingElement)
