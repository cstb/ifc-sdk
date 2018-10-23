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


#include <ifc2x3/IfcElement.h>

#include <ifc2x3/IfcRelSpaceBoundary.h>
#include <ifc2x3/IfcRelConnectsElements.h>
#include <ifc2x3/IfcRelCoversBldgElements.h>
#include <ifc2x3/IfcRelFillsElement.h>
#include <ifc2x3/IfcRelReferencedInSpatialStructure.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/IfcRelVoidsElement.h>
#include <ifc2x3/IfcRelConnectsElements.h>
#include <ifc2x3/IfcRelProjectsElement.h>
#include <ifc2x3/IfcRelConnectsPortToElement.h>
#include <ifc2x3/IfcRelConnectsWithRealizingElements.h>
#include <ifc2x3/IfcRelConnectsStructuralElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcElement::IfcElement(Step::Id id, Step::SPFData *args) : 
    IfcProduct(id, args)
{
    m_Tag = Step::getUnset(m_Tag);
}

IfcElement::~IfcElement()
{}

bool IfcElement::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcElement(this);
}


IfcIdentifier IfcElement::getTag()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Tag;
    }
    else 
    {
        return Step::getUnset(m_Tag);
    }    
}

const IfcIdentifier IfcElement::getTag() const
{
    return const_cast<IfcElement *>(this)->getTag();
}

void IfcElement::setTag(const IfcIdentifier &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Tag = value;
}

void IfcElement::unsetTag()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Tag = Step::getUnset(getTag());
}

bool IfcElement::testTag() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return Step::isUnset(getTag()) == false;
}

Inverse_Set_IfcRelSpaceBoundary_0_n &IfcElement::getProvidesBoundaries()
{
    if (Step::BaseObject::inited())
    {
        return m_ProvidesBoundaries;
    }
 
    m_ProvidesBoundaries.setUnset(true);
    return m_ProvidesBoundaries;
}

const Inverse_Set_IfcRelSpaceBoundary_0_n &IfcElement::getProvidesBoundaries() const
{
    return  const_cast< IfcElement * > (this)->getProvidesBoundaries();
}

bool IfcElement::testProvidesBoundaries() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ProvidesBoundaries.isUnset() == false;
}

Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedFrom()
{
    if (Step::BaseObject::inited())
    {
        return m_ConnectedFrom;
    }
 
    m_ConnectedFrom.setUnset(true);
    return m_ConnectedFrom;
}

const Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedFrom() const
{
    return  const_cast< IfcElement * > (this)->getConnectedFrom();
}

bool IfcElement::testConnectedFrom() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ConnectedFrom.isUnset() == false;
}

Inverse_Set_IfcRelCoversBldgElements_0_n &IfcElement::getHasCoverings()
{
    if (Step::BaseObject::inited())
    {
        return m_HasCoverings;
    }
 
    m_HasCoverings.setUnset(true);
    return m_HasCoverings;
}

const Inverse_Set_IfcRelCoversBldgElements_0_n &IfcElement::getHasCoverings() const
{
    return  const_cast< IfcElement * > (this)->getHasCoverings();
}

bool IfcElement::testHasCoverings() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_HasCoverings.isUnset() == false;
}

Inverse_Set_IfcRelFillsElement_0_1 &IfcElement::getFillsVoids()
{
    if (Step::BaseObject::inited())
    {
        return m_FillsVoids;
    }
 
    m_FillsVoids.setUnset(true);
    return m_FillsVoids;
}

const Inverse_Set_IfcRelFillsElement_0_1 &IfcElement::getFillsVoids() const
{
    return  const_cast< IfcElement * > (this)->getFillsVoids();
}

bool IfcElement::testFillsVoids() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_FillsVoids.isUnset() == false;
}

Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &IfcElement::getReferencedInStructures()
{
    if (Step::BaseObject::inited())
    {
        return m_ReferencedInStructures;
    }
 
    m_ReferencedInStructures.setUnset(true);
    return m_ReferencedInStructures;
}

const Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &IfcElement::getReferencedInStructures() const
{
    return  const_cast< IfcElement * > (this)->getReferencedInStructures();
}

bool IfcElement::testReferencedInStructures() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ReferencedInStructures.isUnset() == false;
}

Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcElement::getContainedInStructure()
{
    if (Step::BaseObject::inited())
    {
        return m_ContainedInStructure;
    }
 
    m_ContainedInStructure.setUnset(true);
    return m_ContainedInStructure;
}

const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcElement::getContainedInStructure() const
{
    return  const_cast< IfcElement * > (this)->getContainedInStructure();
}

bool IfcElement::testContainedInStructure() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ContainedInStructure.isUnset() == false;
}

Inverse_Set_IfcRelVoidsElement_0_n &IfcElement::getHasOpenings()
{
    if (Step::BaseObject::inited())
    {
        return m_HasOpenings;
    }
 
    m_HasOpenings.setUnset(true);
    return m_HasOpenings;
}

const Inverse_Set_IfcRelVoidsElement_0_n &IfcElement::getHasOpenings() const
{
    return  const_cast< IfcElement * > (this)->getHasOpenings();
}

bool IfcElement::testHasOpenings() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_HasOpenings.isUnset() == false;
}

Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedTo()
{
    if (Step::BaseObject::inited())
    {
        return m_ConnectedTo;
    }
 
    m_ConnectedTo.setUnset(true);
    return m_ConnectedTo;
}

const Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedTo() const
{
    return  const_cast< IfcElement * > (this)->getConnectedTo();
}

bool IfcElement::testConnectedTo() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_ConnectedTo.isUnset() == false;
}

Inverse_Set_IfcRelProjectsElement_0_n &IfcElement::getHasProjections()
{
    if (Step::BaseObject::inited())
    {
        return m_HasProjections;
    }
 
    m_HasProjections.setUnset(true);
    return m_HasProjections;
}

const Inverse_Set_IfcRelProjectsElement_0_n &IfcElement::getHasProjections() const
{
    return  const_cast< IfcElement * > (this)->getHasProjections();
}

bool IfcElement::testHasProjections() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_HasProjections.isUnset() == false;
}

Inverse_Set_IfcRelConnectsPortToElement_0_n &IfcElement::getHasPorts()
{
    if (Step::BaseObject::inited())
    {
        return m_HasPorts;
    }
 
    m_HasPorts.setUnset(true);
    return m_HasPorts;
}

const Inverse_Set_IfcRelConnectsPortToElement_0_n &IfcElement::getHasPorts() const
{
    return  const_cast< IfcElement * > (this)->getHasPorts();
}

bool IfcElement::testHasPorts() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_HasPorts.isUnset() == false;
}

Inverse_Set_IfcRelConnectsWithRealizingElements_0_n &IfcElement::getIsConnectionRealization()
{
    if (Step::BaseObject::inited())
    {
        return m_IsConnectionRealization;
    }
 
    m_IsConnectionRealization.setUnset(true);
    return m_IsConnectionRealization;
}

const Inverse_Set_IfcRelConnectsWithRealizingElements_0_n &IfcElement::getIsConnectionRealization() const
{
    return  const_cast< IfcElement * > (this)->getIsConnectionRealization();
}

bool IfcElement::testIsConnectionRealization() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_IsConnectionRealization.isUnset() == false;
}

Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcElement::getHasStructuralMember()
{
    if (Step::BaseObject::inited())
    {
        return m_HasStructuralMember;
    }
 
    m_HasStructuralMember.setUnset(true);
    return m_HasStructuralMember;
}

const Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcElement::getHasStructuralMember() const
{
    return  const_cast< IfcElement * > (this)->getHasStructuralMember();
}

bool IfcElement::testHasStructuralMember() const
{
    Step::BaseObject::inited(); // make sure we are inited
    return m_HasStructuralMember.isUnset() == false;
}

bool IfcElement::init()
{
    if (IfcProduct::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Tag = Step::getUnset(m_Tag);
    }
    else
    {
        m_Tag = Step::String::fromSPF(arg)
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcRelSpaceBoundary::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_ProvidesBoundaries.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ProvidesBoundaries.insert(static_cast< IfcRelSpaceBoundary * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsElements::getClassType(), 6);
    if (inverses)
    {
        unsigned int i;
        m_ConnectedFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ConnectedFrom.insert(static_cast< IfcRelConnectsElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelCoversBldgElements::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_HasCoverings.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasCoverings.insert(static_cast< IfcRelCoversBldgElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelFillsElement::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_FillsVoids.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_FillsVoids.insert(static_cast< IfcRelFillsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelReferencedInSpatialStructure::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_ReferencedInStructures.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ReferencedInStructures.insert(static_cast< IfcRelReferencedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_ContainedInStructure.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ContainedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelVoidsElement::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_HasOpenings.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasOpenings.insert(static_cast< IfcRelVoidsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsElements::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_ConnectedTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_ConnectedTo.insert(static_cast< IfcRelConnectsElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelProjectsElement::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_HasProjections.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasProjections.insert(static_cast< IfcRelProjectsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsPortToElement::getClassType(), 5);
    if (inverses)
    {
        unsigned int i;
        m_HasPorts.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasPorts.insert(static_cast< IfcRelConnectsPortToElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsWithRealizingElements::getClassType(), 7);
    if (inverses)
    {
        unsigned int i;
        m_IsConnectionRealization.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsConnectionRealization.insert(static_cast< IfcRelConnectsWithRealizingElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralElement::getClassType(), 4);
    if (inverses)
    {
        unsigned int i;
        m_HasStructuralMember.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_HasStructuralMember.insert(static_cast< IfcRelConnectsStructuralElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcElement::copy(const IfcElement &obj, const CopyOp &copyop)
{
    IfcProduct::copy(obj, copyop);
    setTag(obj.m_Tag);
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcElement, IfcProduct)
