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


#include <ifc2x3/IfcSlab.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSlab::IfcSlab(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_PredefinedType = IfcSlabTypeEnum_UNSET;
}

IfcSlab::~IfcSlab()
{}

bool IfcSlab::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSlab(this);
}


IfcSlabTypeEnum IfcSlab::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcSlabTypeEnum_UNSET;
    }    
}

IfcSlabTypeEnum IfcSlab::getPredefinedType() const
{
    return const_cast<IfcSlab *>(this)->getPredefinedType();
}

void IfcSlab::setPredefinedType(IfcSlabTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcSlab::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcSlabTypeEnum_UNSET;
}

bool IfcSlab::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcSlab::init()
{
    if (IfcBuildingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcSlabTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FLOOR.")
        {
            m_PredefinedType = IfcSlabTypeEnum_FLOOR;
        }
        else if (arg == ".ROOF.")
        {
            m_PredefinedType = IfcSlabTypeEnum_ROOF;
        }
        else if (arg == ".LANDING.")
        {
            m_PredefinedType = IfcSlabTypeEnum_LANDING;
        }
        else if (arg == ".BASESLAB.")
        {
            m_PredefinedType = IfcSlabTypeEnum_BASESLAB;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcSlabTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcSlabTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcSlab::copy(const IfcSlab &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSlab, IfcBuildingElement)
