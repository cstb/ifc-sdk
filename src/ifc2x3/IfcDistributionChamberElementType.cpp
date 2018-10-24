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


#include <ifc2x3/IfcDistributionChamberElementType.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcDistributionChamberElementType::IfcDistributionChamberElementType(Step::Id id, Step::SPFData *args) : 
    IfcDistributionFlowElementType(id, args)
{
    m_PredefinedType = IfcDistributionChamberElementTypeEnum_UNSET;
}

IfcDistributionChamberElementType::~IfcDistributionChamberElementType()
{}

bool IfcDistributionChamberElementType::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcDistributionChamberElementType(this);
}


IfcDistributionChamberElementTypeEnum IfcDistributionChamberElementType::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcDistributionChamberElementTypeEnum_UNSET;
    }    
}

IfcDistributionChamberElementTypeEnum IfcDistributionChamberElementType::getPredefinedType() const
{
    return const_cast<IfcDistributionChamberElementType *>(this)->getPredefinedType();
}

void IfcDistributionChamberElementType::setPredefinedType(IfcDistributionChamberElementTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcDistributionChamberElementType::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcDistributionChamberElementTypeEnum_UNSET;
}

bool IfcDistributionChamberElementType::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcDistributionChamberElementType::init()
{
    if (IfcDistributionFlowElementType::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcDistributionChamberElementTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FORMEDDUCT.")
        {
            m_PredefinedType = IfcDistributionChamberElementTypeEnum_FORMEDDUCT;
        }
        else if (arg == ".INSPECTIONCHAMBER.")
        {
            m_PredefinedType = IfcDistributionChamberElementTypeEnum_INSPECTIONCHAMBER;
        }
        else if (arg == ".INSPECTIONPIT.")
        {
            m_PredefinedType = IfcDistributionChamberElementTypeEnum_INSPECTIONPIT;
        }
        else if (arg == ".MANHOLE.")
        {
            m_PredefinedType = IfcDistributionChamberElementTypeEnum_MANHOLE;
        }
        else if (arg == ".METERCHAMBER.")
        {
            m_PredefinedType = IfcDistributionChamberElementTypeEnum_METERCHAMBER;
        }
        else if (arg == ".SUMP.")
        {
            m_PredefinedType = IfcDistributionChamberElementTypeEnum_SUMP;
        }
        else if (arg == ".TRENCH.")
        {
            m_PredefinedType = IfcDistributionChamberElementTypeEnum_TRENCH;
        }
        else if (arg == ".VALVECHAMBER.")
        {
            m_PredefinedType = IfcDistributionChamberElementTypeEnum_VALVECHAMBER;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcDistributionChamberElementTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcDistributionChamberElementTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcDistributionChamberElementType::copy(const IfcDistributionChamberElementType &obj, const CopyOp &copyop)
{
    IfcDistributionFlowElementType::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcDistributionChamberElementType, IfcDistributionFlowElementType)
