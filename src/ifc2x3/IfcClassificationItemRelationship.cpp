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


#include <ifc2x3/IfcClassificationItemRelationship.h>

#include <ifc2x3/IfcClassificationItem.h>
#include <ifc2x3/IfcClassificationItem.h>
#include <ifc2x3/IfcClassificationItem.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

Inverted_IfcClassificationItemRelationship_RelatedItems_type::Inverted_IfcClassificationItemRelationship_RelatedItems_type()
{

}

void Inverted_IfcClassificationItemRelationship_RelatedItems_type::setOwner(IfcClassificationItemRelationship *owner)
{
    mOwner = owner;
}

void Inverted_IfcClassificationItemRelationship_RelatedItems_type::insert(const Step::RefPtr< IfcClassificationItem > &value)
#ifdef STEP_CHECK_RANGE
    throw(std::out_of_range)
#endif
{
    IfcClassificationItem *inverse = const_cast< IfcClassificationItem * > (value.get());
    Set_IfcClassificationItem_1_n::insert(value);
    inverse->m_IsClassifiedItemIn.insert(mOwner);
}


Inverted_IfcClassificationItemRelationship_RelatedItems_type::size_type Inverted_IfcClassificationItemRelationship_RelatedItems_type::erase(const Step::RefPtr< IfcClassificationItem > &value)
{
    IfcClassificationItem *inverse = const_cast< IfcClassificationItem * > (value.get());
    inverse->m_IsClassifiedItemIn.erase(mOwner);
    return Set_IfcClassificationItem_1_n::erase(value);
}

void Inverted_IfcClassificationItemRelationship_RelatedItems_type::clear()
{
    while (size())
    {
        erase(*begin());
    }
}


IfcClassificationItemRelationship::IfcClassificationItemRelationship(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_RelatingItem = NULL;
    m_RelatedItems.setUnset(true);
    m_RelatedItems.setOwner(this);
}

IfcClassificationItemRelationship::~IfcClassificationItemRelationship()
{}

bool IfcClassificationItemRelationship::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcClassificationItemRelationship(this);
}

IfcClassificationItem *IfcClassificationItemRelationship::getRelatingItem()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatingItem.get();
    }
    else
    {
        return NULL;
    }
}

const IfcClassificationItem *IfcClassificationItemRelationship::getRelatingItem() const
{
    return const_cast< IfcClassificationItemRelationship * > (this)->getRelatingItem();
}

void IfcClassificationItemRelationship::setRelatingItem(const Step::RefPtr< IfcClassificationItem > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_RelatingItem.valid())
    {
        m_RelatingItem->m_IsClassifyingItemIn.erase(this);
    }
    if (value.valid() )
    {
       value->m_IsClassifyingItemIn.insert(this);
    }
    m_RelatingItem = value;
}

void IfcClassificationItemRelationship::unsetRelatingItem()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatingItem = Step::getUnset(getRelatingItem());
}

bool IfcClassificationItemRelationship::testRelatingItem() const
{
    return Step::isUnset(getRelatingItem()) == false;
}

Set_IfcClassificationItem_1_n &IfcClassificationItemRelationship::getRelatedItems()
{
    if (Step::BaseObject::inited())
    {
        return m_RelatedItems;
    }
    else
    {
        m_RelatedItems.setUnset(true);
        return m_RelatedItems;
    }
}

const Set_IfcClassificationItem_1_n &IfcClassificationItemRelationship::getRelatedItems() const
{
    return const_cast< IfcClassificationItemRelationship * > (this)->getRelatedItems();
}

void IfcClassificationItemRelationship::unsetRelatedItems()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_RelatedItems.clear();
    m_RelatedItems.setUnset(true);
}

bool IfcClassificationItemRelationship::testRelatedItems() const
{
    return m_RelatedItems.isUnset() == false;
}

bool IfcClassificationItemRelationship::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatingItem = NULL;
    }
    else
    {
        m_RelatingItem = static_cast< IfcClassificationItem * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_RelatedItems.setUnset(true);
    }
    else
    {
        m_RelatedItems.setUnset(false);
        while (true)
        {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (!str1.empty())
            {
                m_RelatedItems.insert(static_cast< IfcClassificationItem * > (m_expressDataSet->get(Step::getIdParam(str1)))
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

void IfcClassificationItemRelationship::copy(const IfcClassificationItemRelationship &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setRelatingItem((IfcClassificationItem*)copyop(obj.m_RelatingItem.get()));
    Set_IfcClassificationItem_1_n::const_iterator it_m_RelatedItems;
    for (it_m_RelatedItems = obj.m_RelatedItems.begin(); it_m_RelatedItems != obj.m_RelatedItems.end(); ++it_m_RelatedItems)
    {
        Step::RefPtr< IfcClassificationItem > copyTarget = (IfcClassificationItem *) (copyop((*it_m_RelatedItems).get()));
        m_RelatedItems.insert(copyTarget);
    }
    
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcClassificationItemRelationship, Step::BaseEntity)
