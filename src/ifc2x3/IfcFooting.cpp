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


#include <ifc2x3/IfcFooting.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcFooting::IfcFooting(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_PredefinedType = IfcFootingTypeEnum_UNSET;
}

IfcFooting::~IfcFooting()
{}

bool IfcFooting::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcFooting(this);
}


IfcFootingTypeEnum IfcFooting::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcFootingTypeEnum_UNSET;
    }    
}

IfcFootingTypeEnum IfcFooting::getPredefinedType() const
{
    return const_cast<IfcFooting *>(this)->getPredefinedType();
}

void IfcFooting::setPredefinedType(IfcFootingTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcFooting::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcFootingTypeEnum_UNSET;
}

bool IfcFooting::testPredefinedType() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getPredefinedType()) == false;
}

bool IfcFooting::init()
{
    if (IfcBuildingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcFootingTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".FOOTING_BEAM.")
        {
            m_PredefinedType = IfcFootingTypeEnum_FOOTING_BEAM;
        }
        else if (arg == ".PAD_FOOTING.")
        {
            m_PredefinedType = IfcFootingTypeEnum_PAD_FOOTING;
        }
        else if (arg == ".PILE_CAP.")
        {
            m_PredefinedType = IfcFootingTypeEnum_PILE_CAP;
        }
        else if (arg == ".STRIP_FOOTING.")
        {
            m_PredefinedType = IfcFootingTypeEnum_STRIP_FOOTING;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcFootingTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcFootingTypeEnum_NOTDEFINED;
        }
    }
    return true;
}

void IfcFooting::copy(const IfcFooting &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcFooting, IfcBuildingElement)
