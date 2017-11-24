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



#include <ifc2x3/IfcPresentationLayerAssignment.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcLayeredItem.h>
#include <ifc2x3/IfcRepresentation.h>
#include <ifc2x3/IfcRepresentationItem.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcPresentationLayerAssignment_AssignedItems_type::Inverted_IfcPresentationLayerAssignment_AssignedItems_type():
    mOwner(0)
{
}

void Inverted_IfcPresentationLayerAssignment_AssignedItems_type::setOwner(IfcPresentationLayerAssignment *owner) {
    mOwner = owner;
}

void Inverted_IfcPresentationLayerAssignment_AssignedItems_type::insert(const Step::RefPtr< IfcLayeredItem > &value) throw(std::out_of_range) {
    IfcLayeredItem *inverse = const_cast< IfcLayeredItem * > (value.get());
    Set_IfcLayeredItem_1_n::insert(value);
    if (inverse->getIfcRepresentation() != NULL) {
        IfcRepresentation *object = inverse->getIfcRepresentation();
        object->getLayerAssignments().insert(mOwner);
    }
    else if (inverse->getIfcRepresentationItem() != NULL) {
        IfcRepresentationItem *object = inverse->getIfcRepresentationItem();
        object->getLayerAssignments().insert(mOwner);
    }
}

Inverted_IfcPresentationLayerAssignment_AssignedItems_type::size_type Inverted_IfcPresentationLayerAssignment_AssignedItems_type::erase(const Step::RefPtr< IfcLayeredItem > &value) {
    IfcLayeredItem *inverse = const_cast< IfcLayeredItem * > (value.get());
    if (inverse->getIfcRepresentation() != NULL) {
        IfcRepresentation *object = inverse->getIfcRepresentation();
        object->getLayerAssignments().erase(mOwner);
    }
    else if (inverse->getIfcRepresentationItem() != NULL) {
        IfcRepresentationItem *object = inverse->getIfcRepresentationItem();
        object->getLayerAssignments().erase(mOwner);
    }
    return Set_IfcLayeredItem_1_n::erase(value);
}

void Inverted_IfcPresentationLayerAssignment_AssignedItems_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcPresentationLayerAssignment::IfcPresentationLayerAssignment(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_assignedItems.setOwner(this);
    m_identifier = Step::getUnset(m_identifier);
}

IfcPresentationLayerAssignment::~IfcPresentationLayerAssignment() {
}

bool IfcPresentationLayerAssignment::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPresentationLayerAssignment(this);
}

const std::string &IfcPresentationLayerAssignment::type() const {
    return IfcPresentationLayerAssignment::s_type.getName();
}

const Step::ClassType &IfcPresentationLayerAssignment::getClassType() {
    return IfcPresentationLayerAssignment::s_type;
}

const Step::ClassType &IfcPresentationLayerAssignment::getType() const {
    return IfcPresentationLayerAssignment::s_type;
}

bool IfcPresentationLayerAssignment::isOfType(const Step::ClassType &t) const {
    return IfcPresentationLayerAssignment::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcPresentationLayerAssignment::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcPresentationLayerAssignment::getName() const {
    IfcPresentationLayerAssignment * deConstObject = const_cast< IfcPresentationLayerAssignment * > (this);
    return deConstObject->getName();
}

void IfcPresentationLayerAssignment::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcPresentationLayerAssignment::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcPresentationLayerAssignment::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcPresentationLayerAssignment::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcPresentationLayerAssignment::getDescription() const {
    IfcPresentationLayerAssignment * deConstObject = const_cast< IfcPresentationLayerAssignment * > (this);
    return deConstObject->getDescription();
}

void IfcPresentationLayerAssignment::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcPresentationLayerAssignment::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcPresentationLayerAssignment::testDescription() const {
    return !Step::isUnset(getDescription());
}

Set_IfcLayeredItem_1_n &IfcPresentationLayerAssignment::getAssignedItems() {
    if (Step::BaseObject::inited()) {
        return m_assignedItems;
    }
    else {
        m_assignedItems.setUnset(true);
        return m_assignedItems;
    }
}

const Set_IfcLayeredItem_1_n &IfcPresentationLayerAssignment::getAssignedItems() const {
    IfcPresentationLayerAssignment * deConstObject = const_cast< IfcPresentationLayerAssignment * > (this);
    return deConstObject->getAssignedItems();
}

void IfcPresentationLayerAssignment::unsetAssignedItems() {
    m_assignedItems.clear();
    m_assignedItems.setUnset(true);
}

bool IfcPresentationLayerAssignment::testAssignedItems() const {
    return !m_assignedItems.isUnset();
}

IfcIdentifier IfcPresentationLayerAssignment::getIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_identifier;
    }
    else {
        return Step::getUnset(m_identifier);
    }
}

const IfcIdentifier IfcPresentationLayerAssignment::getIdentifier() const {
    IfcPresentationLayerAssignment * deConstObject = const_cast< IfcPresentationLayerAssignment * > (this);
    return deConstObject->getIdentifier();
}

void IfcPresentationLayerAssignment::setIdentifier(const IfcIdentifier &value) {
    m_identifier = value;
}

void IfcPresentationLayerAssignment::unsetIdentifier() {
    m_identifier = Step::getUnset(getIdentifier());
}

bool IfcPresentationLayerAssignment::testIdentifier() const {
    return !Step::isUnset(getIdentifier());
}

bool IfcPresentationLayerAssignment::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_assignedItems.setUnset(true);
    }
    else {
        m_assignedItems.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcLayeredItem > attr2;
                attr2 = new IfcLayeredItem;
                if (str1[0] == '#') {
                    attr2->set(m_expressDataSet->get((Step::Id)atol(str1.c_str() + 1)));
                }
                else if (str1[str1.length() - 1] == ')') {
                    std::string type2;
                    std::string::size_type i2;
                    i2 = str1.find('(');
                    if (i2 != std::string::npos) {
                        type2 = str1.substr(0, i2);
                        str1 = str1.substr(i2 + 1, str1.length() - i2 - 2);
                    }
                }
                if (attr2.valid()) m_assignedItems.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_identifier = Step::getUnset(m_identifier);
    }
    else {
        m_identifier = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcPresentationLayerAssignment::copy(const IfcPresentationLayerAssignment &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcLayeredItem >, 1 >::const_iterator it_m_assignedItems;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    for (it_m_assignedItems = obj.m_assignedItems.begin(); it_m_assignedItems != obj.m_assignedItems.end(); ++it_m_assignedItems) {
        Step::RefPtr< IfcLayeredItem > copyTarget = new IfcLayeredItem;
        copyTarget->copy(*((*it_m_assignedItems).get()), copyop);
        m_assignedItems.insert(copyTarget.get());
    }
    setIdentifier(obj.m_identifier);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPresentationLayerAssignment::s_type("IfcPresentationLayerAssignment");
