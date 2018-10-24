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


#include <ifc2x3/IfcClassificationItem.h>

#include <ifc2x3/IfcClassificationNotationFacet.h>
#include <ifc2x3/IfcClassification.h>
#include <ifc2x3/IfcClassificationItemRelationship.h>
#include <ifc2x3/IfcClassificationItemRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/Visitor.h>

#include <Step/SPFData.h>
#include <Step/SPFFunctions.h>



using namespace ifc2x3;

IfcClassificationItem::IfcClassificationItem(Step::Id id, Step::SPFData *args) : 
    Step::BaseEntity(id, args)
{
    m_Notation = NULL;
    m_Title = Step::getUnset(m_Title);
    m_ItemOf = NULL;
}

IfcClassificationItem::~IfcClassificationItem()
{}

bool IfcClassificationItem::acceptVisitor(Step::BaseVisitor *visitor)
{
    return static_cast<Visitor *>(visitor)->visitIfcClassificationItem(this);
}


IfcClassificationNotationFacet *IfcClassificationItem::getNotation()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Notation.get();
    }
    else 
    {
        return NULL;
    }    
}

const IfcClassificationNotationFacet *IfcClassificationItem::getNotation() const
{
    return const_cast<IfcClassificationItem *>(this)->getNotation();
}

void IfcClassificationItem::setNotation(const Step::RefPtr< IfcClassificationNotationFacet > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Notation = value;
}

void IfcClassificationItem::unsetNotation()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Notation = Step::getUnset(getNotation());
}

bool IfcClassificationItem::testNotation() const
{
    return Step::isUnset(getNotation()) == false;
}


IfcLabel IfcClassificationItem::getTitle()
{
    if (Step::BaseObject::inited()) 
    {
        return m_Title;
    }
    else 
    {
        return Step::getUnset(m_Title);
    }    
}

const IfcLabel IfcClassificationItem::getTitle() const
{
    return const_cast<IfcClassificationItem *>(this)->getTitle();
}

void IfcClassificationItem::setTitle(const IfcLabel &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Title = value;
}

void IfcClassificationItem::unsetTitle()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_Title = Step::getUnset(getTitle());
}

bool IfcClassificationItem::testTitle() const
{
    return Step::isUnset(getTitle()) == false;
}

IfcClassification *IfcClassificationItem::getItemOf()
{
    if (Step::BaseObject::inited())
    {
        return m_ItemOf.get();
    }
    else
    {
        return NULL;
    }
}

const IfcClassification *IfcClassificationItem::getItemOf() const
{
    return const_cast< IfcClassificationItem * > (this)->getItemOf();
}

void IfcClassificationItem::setItemOf(const Step::RefPtr< IfcClassification > &value)
{
    Step::BaseObject::inited(); // make sure we are inited
    if (m_ItemOf.valid())
    {
        m_ItemOf->m_Contains.erase(this);
    }
    if (value.valid() )
    {
       value->m_Contains.insert(this);
    }
    m_ItemOf = value;
}

void IfcClassificationItem::unsetItemOf()
{
    Step::BaseObject::inited(); // make sure we are inited
    m_ItemOf = Step::getUnset(getItemOf());
}

bool IfcClassificationItem::testItemOf() const
{
    return Step::isUnset(getItemOf()) == false;
}

Inverse_Set_IfcClassificationItemRelationship_0_1 &IfcClassificationItem::getIsClassifyingItemIn()
{
    if (Step::BaseObject::inited())
    {
        return m_IsClassifyingItemIn;
    }
 
    m_IsClassifyingItemIn.setUnset(true);
    return m_IsClassifyingItemIn;
}

const Inverse_Set_IfcClassificationItemRelationship_0_1 &IfcClassificationItem::getIsClassifyingItemIn() const
{
    return  const_cast< IfcClassificationItem * > (this)->getIsClassifyingItemIn();
}

bool IfcClassificationItem::testIsClassifyingItemIn() const
{
    return m_IsClassifyingItemIn.isUnset() == false;
}

Inverse_Set_IfcClassificationItemRelationship_0_1 &IfcClassificationItem::getIsClassifiedItemIn()
{
    if (Step::BaseObject::inited())
    {
        return m_IsClassifiedItemIn;
    }
 
    m_IsClassifiedItemIn.setUnset(true);
    return m_IsClassifiedItemIn;
}

const Inverse_Set_IfcClassificationItemRelationship_0_1 &IfcClassificationItem::getIsClassifiedItemIn() const
{
    return  const_cast< IfcClassificationItem * > (this)->getIsClassifiedItemIn();
}

bool IfcClassificationItem::testIsClassifiedItemIn() const
{
    return m_IsClassifiedItemIn.isUnset() == false;
}

bool IfcClassificationItem::init()
{
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Notation = NULL;
    }
    else
    {
        m_Notation = static_cast< IfcClassificationNotationFacet * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_Title = Step::getUnset(m_Title);
    }
    else
    {
        m_Title = Step::String::fromSPF(arg)
;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*")
    {
        m_ItemOf = NULL;
    }
    else
    {
        m_ItemOf = static_cast< IfcClassification * > (m_expressDataSet->get(Step::getIdParam(arg)))
;
    }
    std::vector< Step::Id > *inverses;
    inverses = m_args->getInverses(IfcClassificationItemRelationship::getClassType(), 0);
    if (inverses)
    {
        unsigned int i;
        m_IsClassifyingItemIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsClassifyingItemIn.insert(static_cast< IfcClassificationItemRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcClassificationItemRelationship::getClassType(), 1);
    if (inverses)
    {
        unsigned int i;
        m_IsClassifiedItemIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++)
        {
            m_IsClassifiedItemIn.insert(static_cast< IfcClassificationItemRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcClassificationItem::copy(const IfcClassificationItem &obj, const CopyOp &copyop)
{
    Step::BaseEntity::copy(obj, copyop);
    setNotation((IfcClassificationNotationFacet*)copyop(obj.m_Notation.get()));
    setTitle(obj.m_Title);
    setItemOf((IfcClassification*)copyop(obj.m_ItemOf.get()));
    return;
}

ClassType_child_implementations(IFC2X3_EXPORT, IfcClassificationItem, Step::BaseEntity)
