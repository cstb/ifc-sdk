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


#include <ifc2x3/IfcRampFlightType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcRampFlightType::IfcRampFlightType(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElementType(id, args)
{
    m_PredefinedType = IfcRampFlightTypeEnum_UNSET;
}

IfcRampFlightType::~IfcRampFlightType()
{}

bool IfcRampFlightType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRampFlightType(this);
}


IfcRampFlightTypeEnum IfcRampFlightType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcRampFlightTypeEnum_UNSET;
    }    
}

IfcRampFlightTypeEnum IfcRampFlightType::getPredefinedType() const
{
    return const_cast<IfcRampFlightType *>(this)->getPredefinedType();
}

void IfcRampFlightType::setPredefinedType(IfcRampFlightTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcRampFlightType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcRampFlightTypeEnum_UNSET;
}

bool IfcRampFlightType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcRampFlightType::init()
{
    if (IfcBuildingElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcRampFlightTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".STRAIGHT.")
        {
            m_PredefinedType = IfcRampFlightTypeEnum_STRAIGHT;
        }
        else if (arg == ".SPIRAL.")
        {
            m_PredefinedType = IfcRampFlightTypeEnum_SPIRAL;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcRampFlightTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcRampFlightTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcRampFlightType::copy(const IfcRampFlightType &obj, const CopyOp &copyop)
{
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRampFlightType, IfcBuildingElementType)
