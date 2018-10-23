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


#include <ifc2x3/IfcTransportElementType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcTransportElementType::IfcTransportElementType(Step::Id id, Step::SPFData *args) : 
    IfcElementType(id, args)
{
    m_PredefinedType = IfcTransportElementTypeEnum_UNSET;
}

IfcTransportElementType::~IfcTransportElementType()
{}

bool IfcTransportElementType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcTransportElementType(this);
}


IfcTransportElementTypeEnum IfcTransportElementType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcTransportElementTypeEnum_UNSET;
    }    
}

IfcTransportElementTypeEnum IfcTransportElementType::getPredefinedType() const
{
    return const_cast<IfcTransportElementType *>(this)->getPredefinedType();
}

void IfcTransportElementType::setPredefinedType(IfcTransportElementTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcTransportElementType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcTransportElementTypeEnum_UNSET;
}

bool IfcTransportElementType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcTransportElementType::init()
{
    if (IfcElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcTransportElementTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".ELEVATOR.")
        {
            m_PredefinedType = IfcTransportElementTypeEnum_ELEVATOR;
        }
        else if (arg == ".ESCALATOR.")
        {
            m_PredefinedType = IfcTransportElementTypeEnum_ESCALATOR;
        }
        else if (arg == ".MOVINGWALKWAY.")
        {
            m_PredefinedType = IfcTransportElementTypeEnum_MOVINGWALKWAY;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcTransportElementTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcTransportElementTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcTransportElementType::copy(const IfcTransportElementType &obj, const CopyOp &copyop)
{
    IfcElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcTransportElementType, IfcElementType)
