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


#include <ifc2x3/IfcCableSegmentType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCableSegmentType::IfcCableSegmentType(Step::Id id, Step::SPFData *args) : 
    IfcFlowSegmentType(id, args)
{
    m_PredefinedType = IfcCableSegmentTypeEnum_UNSET;
}

IfcCableSegmentType::~IfcCableSegmentType()
{}

bool IfcCableSegmentType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCableSegmentType(this);
}


IfcCableSegmentTypeEnum IfcCableSegmentType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcCableSegmentTypeEnum_UNSET;
    }    
}

IfcCableSegmentTypeEnum IfcCableSegmentType::getPredefinedType() const
{
    return const_cast<IfcCableSegmentType *>(this)->getPredefinedType();
}

void IfcCableSegmentType::setPredefinedType(IfcCableSegmentTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcCableSegmentType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcCableSegmentTypeEnum_UNSET;
}

bool IfcCableSegmentType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcCableSegmentType::init()
{
    if (IfcFlowSegmentType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcCableSegmentTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CABLESEGMENT.")
        {
            m_PredefinedType = IfcCableSegmentTypeEnum_CABLESEGMENT;
        }
        else if (arg == ".CONDUCTORSEGMENT.")
        {
            m_PredefinedType = IfcCableSegmentTypeEnum_CONDUCTORSEGMENT;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcCableSegmentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcCableSegmentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcCableSegmentType::copy(const IfcCableSegmentType &obj, const CopyOp &copyop)
{
    IfcFlowSegmentType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCableSegmentType, IfcFlowSegmentType)
