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


#include <ifc2x3/IfcCovering.h>

#include <ifc2x3/IfcRelCoversBldgElements.h>
#include <ifc2x3/IfcRelCoversSpaces.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcCovering::IfcCovering(Step::Id id, Step::SPFData *args) : 
    IfcBuildingElement(id, args)
{
    m_PredefinedType = IfcCoveringTypeEnum_UNSET;
}

IfcCovering::~IfcCovering()
{}

bool IfcCovering::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcCovering(this);
}


IfcCoveringTypeEnum IfcCovering::getPredefinedType()
{
    if (Step::BaseObject::inited()) 
    {
        return m_PredefinedType;
    }
    else 
    {
        return IfcCoveringTypeEnum_UNSET;
    }    
}

IfcCoveringTypeEnum IfcCovering::getPredefinedType() const
{
    return const_cast<IfcCovering *>(this)->getPredefinedType();
}

void IfcCovering::setPredefinedType(IfcCoveringTypeEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = value;
}

void IfcCovering::unsetPredefinedType()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_PredefinedType = IfcCoveringTypeEnum_UNSET;
}

bool IfcCovering::testPredefinedType() const
{
    return Step::isUnset(getPredefinedType()) == false;
}

Inverse_Set_IfcRelCoversBldgElements_0_1 &IfcCovering::getCovers()
{
    if (Step::BaseObject::inited())
    {
        return m_Covers;
    }
 
    m_Covers.setUnset(true);
    return m_Covers;
}

const Inverse_Set_IfcRelCoversBldgElements_0_1 &IfcCovering::getCovers() const
{
    return  const_cast< IfcCovering * > (this)->getCovers();
}

bool IfcCovering::testCovers() const
{
    return m_Covers.isUnset() == false;
}

Inverse_Set_IfcRelCoversSpaces_0_1 &IfcCovering::getCoversSpaces()
{
    if (Step::BaseObject::inited())
    {
        return m_CoversSpaces;
    }
 
    m_CoversSpaces.setUnset(true);
    return m_CoversSpaces;
}

const Inverse_Set_IfcRelCoversSpaces_0_1 &IfcCovering::getCoversSpaces() const
{
    return  const_cast< IfcCovering * > (this)->getCoversSpaces();
}

bool IfcCovering::testCoversSpaces() const
{
    return m_CoversSpaces.isUnset() == false;
}

bool IfcCovering::init()
{
    if (IfcBuildingElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_PredefinedType = IfcCoveringTypeEnum_UNSET;
    }
    else
    {
        if (arg == ".CEILING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_CEILING;
        }
        else if (arg == ".FLOORING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_FLOORING;
        }
        else if (arg == ".CLADDING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_CLADDING;
        }
        else if (arg == ".ROOFING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_ROOFING;
        }
        else if (arg == ".INSULATION.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_INSULATION;
        }
        else if (arg == ".MEMBRANE.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_MEMBRANE;
        }
        else if (arg == ".SLEEVING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_SLEEVING;
        }
        else if (arg == ".WRAPPING.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_WRAPPING;
        }
        else if (arg == ".USERDEFINED.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_PredefinedType = IfcCoveringTypeEnum_NOTDEFINED;
        }
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelCoversBldgElements::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_Covers.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_Covers.insert(static_cast< IfcRelCoversBldgElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelCoversSpaces::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_CoversSpaces.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_CoversSpaces.insert(static_cast< IfcRelCoversSpaces * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcCovering::copy(const IfcCovering &obj, const CopyOp &copyop)
{
    IfcBuildingElement::copy(obj, copyop);
    setPredefinedType(obj.m_PredefinedType);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcCovering, IfcBuildingElement)
