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


#include <ifc2x3/IfcCableCarrierSegmentType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCableCarrierSegmentType::IfcCableCarrierSegmentType(Step::Id id, Step::SPFData *args) : 
    IfcFlowSegmentType(id, args)
{
    m_PredefinedType = IfcCableCarrierSegmentTypeEnum_UNSET;
}

IfcCableCarrierSegmentType::~IfcCableCarrierSegmentType()
{}

bool IfcCableCarrierSegmentType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCableCarrierSegmentType(this);
}


IfcCableCarrierSegmentTypeEnum IfcCableCarrierSegmentType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcCableCarrierSegmentTypeEnum_UNSET;
    }    
}

IfcCableCarrierSegmentTypeEnum IfcCableCarrierSegmentType::getPredefinedType() const
{
    return const_cast<IfcCableCarrierSegmentType *>(this)->getPredefinedType();
}

void IfcCableCarrierSegmentType::setPredefinedType(IfcCableCarrierSegmentTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcCableCarrierSegmentType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcCableCarrierSegmentTypeEnum_UNSET;
}

bool IfcCableCarrierSegmentType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcCableCarrierSegmentType::init()
{
    if (IfcFlowSegmentType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcCableCarrierSegmentTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CABLELADDERSEGMENT.")
        {
            m_PredefinedType = IfcCableCarrierSegmentTypeEnum_CABLELADDERSEGMENT;
        }
        else if (arg == ".CABLETRAYSEGMENT.")
        {
            m_PredefinedType = IfcCableCarrierSegmentTypeEnum_CABLETRAYSEGMENT;
        }
        else if (arg == ".CABLETRUNKINGSEGMENT.")
        {
            m_PredefinedType = IfcCableCarrierSegmentTypeEnum_CABLETRUNKINGSEGMENT;
        }
        else if (arg == ".CONDUITSEGMENT.")
        {
            m_PredefinedType = IfcCableCarrierSegmentTypeEnum_CONDUITSEGMENT;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcCableCarrierSegmentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcCableCarrierSegmentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCableCarrierSegmentType::copy(const IfcCableCarrierSegmentType &obj, const CopyOp &copyop)
{
    IfcFlowSegmentType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCableCarrierSegmentType, IfcFlowSegmentType)
