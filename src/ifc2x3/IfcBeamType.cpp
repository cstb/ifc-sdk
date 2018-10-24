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


#include <ifc2x3/IfcBeamType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcBeamType::IfcBeamType(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElementType(id, args)
{
    m_PredefinedType = IfcBeamTypeEnum_UNSET;
}

IfcBeamType::~IfcBeamType()
{}

bool IfcBeamType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcBeamType(this);
}


IfcBeamTypeEnum IfcBeamType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcBeamTypeEnum_UNSET;
    }    
}

IfcBeamTypeEnum IfcBeamType::getPredefinedType() const
{
    return const_cast<IfcBeamType *>(this)->getPredefinedType();
}

void IfcBeamType::setPredefinedType(IfcBeamTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcBeamType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcBeamTypeEnum_UNSET;
}

bool IfcBeamType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcBeamType::init()
{
    if (IfcBuildingElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcBeamTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".BEAM.")
        {
            m_PredefinedType = IfcBeamTypeEnum_BEAM;
        }
        else if (arg == ".JOIST.")
        {
            m_PredefinedType = IfcBeamTypeEnum_JOIST;
        }
        else if (arg == ".LINTEL.")
        {
            m_PredefinedType = IfcBeamTypeEnum_LINTEL;
        }
        else if (arg == ".T_BEAM.")
        {
            m_PredefinedType = IfcBeamTypeEnum_T_BEAM;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcBeamTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcBeamTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcBeamType::copy(const IfcBeamType &obj, const CopyOp &copyop)
{
    IfcBuildingElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcBeamType, IfcBuildingElementType)
