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


#include <ifc2x3/IfcPipeSegmentType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcPipeSegmentType::IfcPipeSegmentType(Step::Id id, Step::SPFData *args) : 
    IfcFlowSegmentType(id, args)
{
    m_PredefinedType = IfcPipeSegmentTypeEnum_UNSET;
}

IfcPipeSegmentType::~IfcPipeSegmentType()
{}

bool IfcPipeSegmentType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcPipeSegmentType(this);
}


IfcPipeSegmentTypeEnum IfcPipeSegmentType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcPipeSegmentTypeEnum_UNSET;
    }    
}

IfcPipeSegmentTypeEnum IfcPipeSegmentType::getPredefinedType() const
{
    return const_cast<IfcPipeSegmentType *>(this)->getPredefinedType();
}

void IfcPipeSegmentType::setPredefinedType(IfcPipeSegmentTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcPipeSegmentType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcPipeSegmentTypeEnum_UNSET;
}

bool IfcPipeSegmentType::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcPipeSegmentType::init()
{
    if (IfcFlowSegmentType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcPipeSegmentTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FLEXIBLESEGMENT.")
        {
            m_PredefinedType = IfcPipeSegmentTypeEnum_FLEXIBLESEGMENT;
        }
        else if (arg == ".RIGIDSEGMENT.")
        {
            m_PredefinedType = IfcPipeSegmentTypeEnum_RIGIDSEGMENT;
        }
        else if (arg == ".GUTTER.")
        {
            m_PredefinedType = IfcPipeSegmentTypeEnum_GUTTER;
        }
        else if (arg == ".SPOOL.")
        {
            m_PredefinedType = IfcPipeSegmentTypeEnum_SPOOL;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcPipeSegmentTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcPipeSegmentTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcPipeSegmentType::copy(const IfcPipeSegmentType &obj, const CopyOp &copyop)
{
    IfcFlowSegmentType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcPipeSegmentType, IfcFlowSegmentType)
