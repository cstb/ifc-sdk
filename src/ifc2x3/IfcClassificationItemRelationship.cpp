// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
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


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcClassificationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcClassificationItemRelationship_RelatedItems_type::Inverted_IfcClassificationItemRelationship_RelatedItems_type():
    mOwner(0)
{
}

void Inverted_IfcClassificationItemRelationship_RelatedItems_type::setOwner(IfcClassificationItemRelationship *owner) {
    mOwner = owner;
}

void Inverted_IfcClassificationItemRelationship_RelatedItems_type::insert(const Step::RefPtr< IfcClassificationItem > &value) throw(std::out_of_range) {
    IfcClassificationItem *inverse = const_cast< IfcClassificationItem * > (value.get());
    Set_IfcClassificationItem_1_n::insert(value);
    inverse->m_isClassifiedItemIn.insert(mOwner);
}

Inverted_IfcClassificationItemRelationship_RelatedItems_type::size_type Inverted_IfcClassificationItemRelationship_RelatedItems_type::erase(const Step::RefPtr< IfcClassificationItem > &value) {
    IfcClassificationItem *inverse = const_cast< IfcClassificationItem * > (value.get());
    inverse->m_isClassifiedItemIn.erase(mOwner);
    return Set_IfcClassificationItem_1_n::erase(value);
}

void Inverted_IfcClassificationItemRelationship_RelatedItems_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcClassificationItemRelationship::IfcClassificationItemRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relatingItem = NULL;
    m_relatedItems.setOwner(this);
}

IfcClassificationItemRelationship::~IfcClassificationItemRelationship() {
}

bool IfcClassificationItemRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcClassificationItemRelationship(this);
}

const std::string &IfcClassificationItemRelationship::type() const {
    return IfcClassificationItemRelationship::s_type.getName();
}

const Step::ClassType &IfcClassificationItemRelationship::getClassType() {
    return IfcClassificationItemRelationship::s_type;
}

const Step::ClassType &IfcClassificationItemRelationship::getType() const {
    return IfcClassificationItemRelationship::s_type;
}

bool IfcClassificationItemRelationship::isOfType(const Step::ClassType &t) const {
    return IfcClassificationItemRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcClassificationItem *IfcClassificationItemRelationship::getRelatingItem() {
    if (Step::BaseObject::inited()) {
        return m_relatingItem.get();
    }
    else {
        return NULL;
    }
}

const IfcClassificationItem *IfcClassificationItemRelationship::getRelatingItem() const {
    IfcClassificationItemRelationship * deConstObject = const_cast< IfcClassificationItemRelationship * > (this);
    return deConstObject->getRelatingItem();
}

void IfcClassificationItemRelationship::setRelatingItem(const Step::RefPtr< IfcClassificationItem > &value) {
    if (m_relatingItem.valid()) {
        m_relatingItem->m_isClassifyingItemIn.erase(this);
    }
    if (value.valid()) {
        value->m_isClassifyingItemIn.insert(this);
    }
    m_relatingItem = value;
}

void IfcClassificationItemRelationship::unsetRelatingItem() {
    m_relatingItem = Step::getUnset(getRelatingItem());
}

bool IfcClassificationItemRelationship::testRelatingItem() const {
    return !Step::isUnset(getRelatingItem());
}

Set_IfcClassificationItem_1_n &IfcClassificationItemRelationship::getRelatedItems() {
    if (Step::BaseObject::inited()) {
        return m_relatedItems;
    }
    else {
        m_relatedItems.setUnset(true);
        return m_relatedItems;
    }
}

const Set_IfcClassificationItem_1_n &IfcClassificationItemRelationship::getRelatedItems() const {
    IfcClassificationItemRelationship * deConstObject = const_cast< IfcClassificationItemRelationship * > (this);
    return deConstObject->getRelatedItems();
}

void IfcClassificationItemRelationship::unsetRelatedItems() {
    m_relatedItems.clear();
    m_relatedItems.setUnset(true);
}

bool IfcClassificationItemRelationship::testRelatedItems() const {
    return !m_relatedItems.isUnset();
}

bool IfcClassificationItemRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingItem = NULL;
    }
    else {
        m_relatingItem = static_cast< IfcClassificationItem * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedItems.setUnset(true);
    }
    else {
        m_relatedItems.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcClassificationItem > attr2;
                attr2 = static_cast< IfcClassificationItem * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedItems.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcClassificationItemRelationship::copy(const IfcClassificationItemRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcClassificationItem >, 1 >::const_iterator it_m_relatedItems;
    Step::BaseEntity::copy(obj, copyop);
    setRelatingItem((IfcClassificationItem*)copyop(obj.m_relatingItem.get()));
    for (it_m_relatedItems = obj.m_relatedItems.begin(); it_m_relatedItems != obj.m_relatedItems.end(); ++it_m_relatedItems) {
        Step::RefPtr< IfcClassificationItem > copyTarget = (IfcClassificationItem *) (copyop((*it_m_relatedItems).get()));
        m_relatedItems.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcClassificationItemRelationship::s_type("IfcClassificationItemRelationship");
