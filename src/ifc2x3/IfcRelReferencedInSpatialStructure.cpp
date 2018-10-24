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


#include <ifc2x3/IfcRelReferencedInSpatialStructure.h>

#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type::Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type()
{

}

void Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type::setOwner(IfcRelReferencedInSpatialStructure *owner)
{
    mOwner = owner;
}

void Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type::insert(const Step::RefPtr< IfcProduct > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcProduct *inverse = const_cast< IfcProduct * > (value.get());
    Set_IfcProduct_1_n::insert(value);
    if (dynamic_cast< IfcElement * > (inverse) != NULL) 
    {
        ((IfcElement *) (inverse))->m_ReferencedInStructures.insert(mOwner);
    }
}


Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type::size_type Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type::erase(const Step::RefPtr< IfcProduct > &value)
{
    IfcProduct *inverse = const_cast< IfcProduct * > (value.get());
    if (dynamic_cast< IfcElement * > (inverse) != NULL) 
    {
        ((IfcElement *) (inverse))->m_ReferencedInStructures.erase(mOwner);
    }
    return Set_IfcProduct_1_n::erase(value);
}

void Inverted_IfcRelReferencedInSpatialStructure_RelatedElements_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcRelReferencedInSpatialStructure::IfcRelReferencedInSpatialStructure(Step::Id id, Step::SPFData *args) : 
    IfcRelConnects(id, args)
{
    m_RelatingStructure = NULL;
    m_RelatedElements.setUnset(true);
    m_RelatedElements.setOwner(this);
}

IfcRelReferencedInSpatialStructure::~IfcRelReferencedInSpatialStructure()
{}

bool IfcRelReferencedInSpatialStructure::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcRelReferencedInSpatialStructure(this);
}

IfcSpatialStructureElement *IfcRelReferencedInSpatialStructure::getRelatingStructure()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingStructure.get();
    }
    else
    {
        return NULL;
    }
}

const IfcSpatialStructureElement *IfcRelReferencedInSpatialStructure::getRelatingStructure() const
{
    return const_cast< IfcRelReferencedInSpatialStructure * > (this)->getRelatingStructure();
}

void IfcRelReferencedInSpatialStructure::setRelatingStructure(const Step::RefPtr< IfcSpatialStructureElement > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingStructure.valid())
    {
        m_RelatingStructure->m_ReferencesElements.erase(this);
    }
    if (value.valid() )
    {
       value->m_ReferencesElements.insert(this);
    }
    m_RelatingStructure = value;
}

void IfcRelReferencedInSpatialStructure::unsetRelatingStructure()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingStructure = Step::getUnset(getRelatingStructure());
}

bool IfcRelReferencedInSpatialStructure::testRelatingStructure() const
{
    return Step::isUnset(getRelatingStructure()) == false;
}

Set_IfcProduct_1_n &IfcRelReferencedInSpatialStructure::getRelatedElements()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedElements;
    }
    else
    {
        m_RelatedElements.setUnset(true);
        return m_RelatedElements;
    }
}

const Set_IfcProduct_1_n &IfcRelReferencedInSpatialStructure::getRelatedElements() const
{
    return const_cast< IfcRelReferencedInSpatialStructure * > (this)->getRelatedElements();
}

void IfcRelReferencedInSpatialStructure::unsetRelatedElements()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedElements.clear();
    m_RelatedElements.setUnset(true);
}

bool IfcRelReferencedInSpatialStructure::testRelatedElements() const
{
    return m_RelatedElements.isUnset() == false;
}

bool IfcRelReferencedInSpatialStructure::init()
{
    if (IfcRelConnects::init() == false)
    {
        return false;
    }
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingStructure = NULL;
    }
    else
    {
        m_RelatingStructure = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedElements.setUnset(true);
    }
    else
    {
        m_RelatedElements.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedElements.insert(static_cast< IfcProduct * > (m_expressDataSet->get(Step::getIdParam(str1)))
);
            }
            else 
            {
                break;
            }
        }
    }
    return true;
}

void IfcRelReferencedInSpatialStructure::copy(const IfcRelReferencedInSpatialStructure &obj, const CopyOp &copyop)
{
    IfcRelConnects::copy(obj, copyop);
    setRelatingStructure((IfcSpatialStructureElement*)copyop(obj.m_RelatingStructure.get()));
    Set_IfcProduct_1_n::const_iterator it_m_RelatedElements;
    for (it_m_RelatedElements = obj.m_RelatedElements.begin(); it_m_RelatedElements != obj.m_RelatedElements.end(); ++it_m_RelatedElements)
    {
        Step::RefPtr< IfcProduct > copyTarget = (IfcProduct *) (copyop((*it_m_RelatedElements).get()));
        m_RelatedElements.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcRelReferencedInSpatialStructure, IfcRelConnects)
