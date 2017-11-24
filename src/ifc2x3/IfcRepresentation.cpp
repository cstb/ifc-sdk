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



#include <ifc2x3/IfcRepresentation.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPresentationLayerAssignment.h>
#include <ifc2x3/IfcProductRepresentation.h>
#include <ifc2x3/IfcRepresentationContext.h>
#include <ifc2x3/IfcRepresentationItem.h>
#include <ifc2x3/IfcRepresentationMap.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcRepresentation::IfcRepresentation(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_contextOfItems = NULL;
    m_representationIdentifier = Step::getUnset(m_representationIdentifier);
    m_representationType = Step::getUnset(m_representationType);
}

IfcRepresentation::~IfcRepresentation() {
}

bool IfcRepresentation::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRepresentation(this);
}

const std::string &IfcRepresentation::type() const {
    return IfcRepresentation::s_type.getName();
}

const Step::ClassType &IfcRepresentation::getClassType() {
    return IfcRepresentation::s_type;
}

const Step::ClassType &IfcRepresentation::getType() const {
    return IfcRepresentation::s_type;
}

bool IfcRepresentation::isOfType(const Step::ClassType &t) const {
    return IfcRepresentation::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcRepresentationContext *IfcRepresentation::getContextOfItems() {
    if (Step::BaseObject::inited()) {
        return m_contextOfItems.get();
    }
    else {
        return NULL;
    }
}

const IfcRepresentationContext *IfcRepresentation::getContextOfItems() const {
    IfcRepresentation * deConstObject = const_cast< IfcRepresentation * > (this);
    return deConstObject->getContextOfItems();
}

void IfcRepresentation::setContextOfItems(const Step::RefPtr< IfcRepresentationContext > &value) {
    if (m_contextOfItems.valid()) {
        m_contextOfItems->m_representationsInContext.erase(this);
    }
    if (value.valid()) {
        value->m_representationsInContext.insert(this);
    }
    m_contextOfItems = value;
}

void IfcRepresentation::unsetContextOfItems() {
    m_contextOfItems = Step::getUnset(getContextOfItems());
}

bool IfcRepresentation::testContextOfItems() const {
    return !Step::isUnset(getContextOfItems());
}

IfcLabel IfcRepresentation::getRepresentationIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_representationIdentifier;
    }
    else {
        return Step::getUnset(m_representationIdentifier);
    }
}

const IfcLabel IfcRepresentation::getRepresentationIdentifier() const {
    IfcRepresentation * deConstObject = const_cast< IfcRepresentation * > (this);
    return deConstObject->getRepresentationIdentifier();
}

void IfcRepresentation::setRepresentationIdentifier(const IfcLabel &value) {
    m_representationIdentifier = value;
}

void IfcRepresentation::unsetRepresentationIdentifier() {
    m_representationIdentifier = Step::getUnset(getRepresentationIdentifier());
}

bool IfcRepresentation::testRepresentationIdentifier() const {
    return !Step::isUnset(getRepresentationIdentifier());
}

IfcLabel IfcRepresentation::getRepresentationType() {
    if (Step::BaseObject::inited()) {
        return m_representationType;
    }
    else {
        return Step::getUnset(m_representationType);
    }
}

const IfcLabel IfcRepresentation::getRepresentationType() const {
    IfcRepresentation * deConstObject = const_cast< IfcRepresentation * > (this);
    return deConstObject->getRepresentationType();
}

void IfcRepresentation::setRepresentationType(const IfcLabel &value) {
    m_representationType = value;
}

void IfcRepresentation::unsetRepresentationType() {
    m_representationType = Step::getUnset(getRepresentationType());
}

bool IfcRepresentation::testRepresentationType() const {
    return !Step::isUnset(getRepresentationType());
}

Set_IfcRepresentationItem_1_n &IfcRepresentation::getItems() {
    if (Step::BaseObject::inited()) {
        return m_items;
    }
    else {
        m_items.setUnset(true);
        return m_items;
    }
}

const Set_IfcRepresentationItem_1_n &IfcRepresentation::getItems() const {
    IfcRepresentation * deConstObject = const_cast< IfcRepresentation * > (this);
    return deConstObject->getItems();
}

void IfcRepresentation::setItems(const Set_IfcRepresentationItem_1_n &value) {
    m_items = value;
}

void IfcRepresentation::unsetItems() {
    m_items.clear();
    m_items.setUnset(true);
}

bool IfcRepresentation::testItems() const {
    return !m_items.isUnset();
}

Inverse_Set_IfcRepresentationMap_0_1 &IfcRepresentation::getRepresentationMap() {
    if (Step::BaseObject::inited()) {
        return m_representationMap;
    }
    else {
        m_representationMap.setUnset(true);
        return m_representationMap;
    }
}

const Inverse_Set_IfcRepresentationMap_0_1 &IfcRepresentation::getRepresentationMap() const {
    IfcRepresentation * deConstObject = const_cast< IfcRepresentation * > (this);
    return deConstObject->getRepresentationMap();
}

bool IfcRepresentation::testRepresentationMap() const {
    return !m_representationMap.isUnset();
}

Inverse_Set_IfcPresentationLayerAssignment_0_n &IfcRepresentation::getLayerAssignments() {
    if (Step::BaseObject::inited()) {
        return m_layerAssignments;
    }
    else {
        m_layerAssignments.setUnset(true);
        return m_layerAssignments;
    }
}

const Inverse_Set_IfcPresentationLayerAssignment_0_n &IfcRepresentation::getLayerAssignments() const {
    IfcRepresentation * deConstObject = const_cast< IfcRepresentation * > (this);
    return deConstObject->getLayerAssignments();
}

bool IfcRepresentation::testLayerAssignments() const {
    return !m_layerAssignments.isUnset();
}

Inverse_Set_IfcProductRepresentation_0_1 &IfcRepresentation::getOfProductRepresentation() {
    if (Step::BaseObject::inited()) {
        return m_ofProductRepresentation;
    }
    else {
        m_ofProductRepresentation.setUnset(true);
        return m_ofProductRepresentation;
    }
}

const Inverse_Set_IfcProductRepresentation_0_1 &IfcRepresentation::getOfProductRepresentation() const {
    IfcRepresentation * deConstObject = const_cast< IfcRepresentation * > (this);
    return deConstObject->getOfProductRepresentation();
}

bool IfcRepresentation::testOfProductRepresentation() const {
    return !m_ofProductRepresentation.isUnset();
}

bool IfcRepresentation::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_contextOfItems = NULL;
    }
    else {
        m_contextOfItems = static_cast< IfcRepresentationContext * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representationIdentifier = Step::getUnset(m_representationIdentifier);
    }
    else {
        m_representationIdentifier = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representationType = Step::getUnset(m_representationType);
    }
    else {
        m_representationType = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_items.setUnset(true);
    }
    else {
        m_items.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRepresentationItem > attr2;
                attr2 = static_cast< IfcRepresentationItem * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_items.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    inverses = m_args->getInverses(IfcRepresentationMap::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_representationMap.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_representationMap.insert(static_cast< IfcRepresentationMap * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPresentationLayerAssignment::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_layerAssignments.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_layerAssignments.insert(static_cast< IfcPresentationLayerAssignment * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcProductRepresentation::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_ofProductRepresentation.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_ofProductRepresentation.insert(static_cast< IfcProductRepresentation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcRepresentation::copy(const IfcRepresentation &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcRepresentationItem >, 1 >::const_iterator it_m_items;
    Step::BaseEntity::copy(obj, copyop);
    setContextOfItems((IfcRepresentationContext*)copyop(obj.m_contextOfItems.get()));
    setRepresentationIdentifier(obj.m_representationIdentifier);
    setRepresentationType(obj.m_representationType);
    for (it_m_items = obj.m_items.begin(); it_m_items != obj.m_items.end(); ++it_m_items) {
        Step::RefPtr< IfcRepresentationItem > copyTarget = (IfcRepresentationItem *) (copyop((*it_m_items).get()));
        m_items.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRepresentation::s_type("IfcRepresentation");
