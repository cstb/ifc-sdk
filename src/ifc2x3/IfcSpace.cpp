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


#include <ifc2x3/IfcSpace.h>

#include <ifc2x3/IfcRelSpaceBoundary.h>
#include <ifc2x3/IfcRelCoversSpaces.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcSpace::IfcSpace(Step::Id id, Step::SPFData *args) : 
    IfcSpatialStructureElement(id, args)
{
    m_InteriorOrExteriorSpace = IfcInternalOrExternalEnum_UNSET;
    m_ElevationWithFlooring = Step::getUnset(m_ElevationWithFlooring);
}

IfcSpace::~IfcSpace()
{}

bool IfcSpace::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcSpace(this);
}


IfcInternalOrExternalEnum IfcSpace::getInteriorOrExteriorSpace()
{
    if (Step::BaseObject::inited()) 
    {
        return m_InteriorOrExteriorSpace;
    }
    else 
    {
        return IfcInternalOrExternalEnum_UNSET;
    }    
}

IfcInternalOrExternalEnum IfcSpace::getInteriorOrExteriorSpace() const
{
    return const_cast<IfcSpace *>(this)->getInteriorOrExteriorSpace();
}

void IfcSpace::setInteriorOrExteriorSpace(IfcInternalOrExternalEnum value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InteriorOrExteriorSpace = value;
}

void IfcSpace::unsetInteriorOrExteriorSpace()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_InteriorOrExteriorSpace = IfcInternalOrExternalEnum_UNSET;
}

bool IfcSpace::testInteriorOrExteriorSpace() const
{
    return Step::isUnset(getInteriorOrExteriorSpace()) == false;
}


IfcLengthMeasure IfcSpace::getElevationWithFlooring()
{
    if (Step::BaseObject::inited()) 
    {
        return m_ElevationWithFlooring;
    }
    else 
    {
        return Step::getUnset(m_ElevationWithFlooring);
    }    
}

IfcLengthMeasure IfcSpace::getElevationWithFlooring() const
{
    return const_cast<IfcSpace *>(this)->getElevationWithFlooring();
}

void IfcSpace::setElevationWithFlooring(IfcLengthMeasure value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElevationWithFlooring = value;
}

void IfcSpace::unsetElevationWithFlooring()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ElevationWithFlooring = Step::getUnset(getElevationWithFlooring());
}

bool IfcSpace::testElevationWithFlooring() const
{
    return Step::isUnset(getElevationWithFlooring()) == false;
}

Inverse_Set_IfcRelSpaceBoundary_0_n &IfcSpace::getBoundedBy()
{
    if (Step::BaseObject::inited())
    {
        return m_BoundedBy;
    }
 
    m_BoundedBy.setUnset(true);
    return m_BoundedBy;
}

const Inverse_Set_IfcRelSpaceBoundary_0_n &IfcSpace::getBoundedBy() const
{
    return  const_cast< IfcSpace * > (this)->getBoundedBy();
}

bool IfcSpace::testBoundedBy() const
{
    return m_BoundedBy.isUnset() == false;
}

Inverse_Set_IfcRelCoversSpaces_0_n &IfcSpace::getHasCoverings()
{
    if (Step::BaseObject::inited())
    {
        return m_HasCoverings;
    }
 
    m_HasCoverings.setUnset(true);
    return m_HasCoverings;
}

const Inverse_Set_IfcRelCoversSpaces_0_n &IfcSpace::getHasCoverings() const
{
    return  const_cast< IfcSpace * > (this)->getHasCoverings();
}

bool IfcSpace::testHasCoverings() const
{
    return m_HasCoverings.isUnset() == false;
}

bool IfcSpace::init()
{
    if (IfcSpatialStructureElement::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_InteriorOrExteriorSpace = IfcInternalOrExternalEnum_UNSET;
    }
    else
    {
        if (arg == ".INTERNAL.")
        {
            m_InteriorOrExteriorSpace = IfcInternalOrExternalEnum_INTERNAL;
        }
        else if (arg == ".EXTERNAL.")
        {
            m_InteriorOrExteriorSpace = IfcInternalOrExternalEnum_EXTERNAL;
        }
        else if (arg == ".NOTDEFINED.")
        {
            m_InteriorOrExteriorSpace = IfcInternalOrExternalEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ElevationWithFlooring = Step::getUnset(m_ElevationWithFlooring);
    }
    else
    {
        m_ElevationWithFlooring = Step::spfToReal(arg)

;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelSpaceBoundary::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_BoundedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_BoundedBy.insert(static_cast< IfcRelSpaceBoundary * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelCoversSpaces::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_HasCoverings.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasCoverings.insert(static_cast< IfcRelCoversSpaces * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcSpace::copy(const IfcSpace &obj, const CopyOp &copyop)
{
    IfcSpatialStructureElement::copy(obj, copyop);
    setInteriorOrExteriorSpace(obj.m_InteriorOrExteriorSpace);
    setElevationWithFlooring(obj.m_ElevationWithFlooring);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcSpace, IfcSpatialStructureElement)
