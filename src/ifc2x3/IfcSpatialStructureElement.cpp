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



#include <ifc2x3/IfcSpatialStructureElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/IfcRelReferencedInSpatialStructure.h>
#include <ifc2x3/IfcRelServicesBuildings.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcSpatialStructureElement::IfcSpatialStructureElement(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
    m_longName = Step::getUnset(m_longName);
    m_compositionType = IfcElementCompositionEnum_UNSET;
}

IfcSpatialStructureElement::~IfcSpatialStructureElement() {
}

bool IfcSpatialStructureElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcSpatialStructureElement(this);
}

const std::string &IfcSpatialStructureElement::type() const {
    return IfcSpatialStructureElement::s_type.getName();
}

const Step::ClassType &IfcSpatialStructureElement::getClassType() {
    return IfcSpatialStructureElement::s_type;
}

const Step::ClassType &IfcSpatialStructureElement::getType() const {
    return IfcSpatialStructureElement::s_type;
}

bool IfcSpatialStructureElement::isOfType(const Step::ClassType &t) const {
    return IfcSpatialStructureElement::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcLabel IfcSpatialStructureElement::getLongName() {
    if (Step::BaseObject::inited()) {
        return m_longName;
    }
    else {
        return Step::getUnset(m_longName);
    }
}

const IfcLabel IfcSpatialStructureElement::getLongName() const {
    IfcSpatialStructureElement * deConstObject = const_cast< IfcSpatialStructureElement * > (this);
    return deConstObject->getLongName();
}

void IfcSpatialStructureElement::setLongName(const IfcLabel &value) {
    m_longName = value;
}

void IfcSpatialStructureElement::unsetLongName() {
    m_longName = Step::getUnset(getLongName());
}

bool IfcSpatialStructureElement::testLongName() const {
    return !Step::isUnset(getLongName());
}

IfcElementCompositionEnum IfcSpatialStructureElement::getCompositionType() {
    if (Step::BaseObject::inited()) {
        return m_compositionType;
    }
    else {
        return IfcElementCompositionEnum_UNSET;
    }
}

const IfcElementCompositionEnum IfcSpatialStructureElement::getCompositionType() const {
    IfcSpatialStructureElement * deConstObject = const_cast< IfcSpatialStructureElement * > (this);
    return deConstObject->getCompositionType();
}

void IfcSpatialStructureElement::setCompositionType(IfcElementCompositionEnum value) {
    m_compositionType = value;
}

void IfcSpatialStructureElement::unsetCompositionType() {
    m_compositionType = IfcElementCompositionEnum_UNSET;
}

bool IfcSpatialStructureElement::testCompositionType() const {
    return getCompositionType() != IfcElementCompositionEnum_UNSET;
}

Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &IfcSpatialStructureElement::getReferencesElements() {
    if (Step::BaseObject::inited()) {
        return m_referencesElements;
    }
    else {
        m_referencesElements.setUnset(true);
        return m_referencesElements;
    }
}

const Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &IfcSpatialStructureElement::getReferencesElements() const {
    IfcSpatialStructureElement * deConstObject = const_cast< IfcSpatialStructureElement * > (this);
    return deConstObject->getReferencesElements();
}

bool IfcSpatialStructureElement::testReferencesElements() const {
    return !m_referencesElements.isUnset();
}

Inverse_Set_IfcRelServicesBuildings_0_n &IfcSpatialStructureElement::getServicedBySystems() {
    if (Step::BaseObject::inited()) {
        return m_servicedBySystems;
    }
    else {
        m_servicedBySystems.setUnset(true);
        return m_servicedBySystems;
    }
}

const Inverse_Set_IfcRelServicesBuildings_0_n &IfcSpatialStructureElement::getServicedBySystems() const {
    IfcSpatialStructureElement * deConstObject = const_cast< IfcSpatialStructureElement * > (this);
    return deConstObject->getServicedBySystems();
}

bool IfcSpatialStructureElement::testServicedBySystems() const {
    return !m_servicedBySystems.isUnset();
}

Inverse_Set_IfcRelContainedInSpatialStructure_0_n &IfcSpatialStructureElement::getContainsElements() {
    if (Step::BaseObject::inited()) {
        return m_containsElements;
    }
    else {
        m_containsElements.setUnset(true);
        return m_containsElements;
    }
}

const Inverse_Set_IfcRelContainedInSpatialStructure_0_n &IfcSpatialStructureElement::getContainsElements() const {
    IfcSpatialStructureElement * deConstObject = const_cast< IfcSpatialStructureElement * > (this);
    return deConstObject->getContainsElements();
}

bool IfcSpatialStructureElement::testContainsElements() const {
    return !m_containsElements.isUnset();
}

bool IfcSpatialStructureElement::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_longName = Step::getUnset(m_longName);
    }
    else {
        m_longName = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_compositionType = IfcElementCompositionEnum_UNSET;
    }
    else {
        if (arg == ".COMPLEX.") {
            m_compositionType = IfcElementCompositionEnum_COMPLEX;
        }
        else if (arg == ".ELEMENT.") {
            m_compositionType = IfcElementCompositionEnum_ELEMENT;
        }
        else if (arg == ".PARTIAL.") {
            m_compositionType = IfcElementCompositionEnum_PARTIAL;
        }
    }
    inverses = m_args->getInverses(IfcRelReferencedInSpatialStructure::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_referencesElements.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referencesElements.insert(static_cast< IfcRelReferencedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelServicesBuildings::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_servicedBySystems.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_servicedBySystems.insert(static_cast< IfcRelServicesBuildings * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_containsElements.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_containsElements.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcSpatialStructureElement::copy(const IfcSpatialStructureElement &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    setLongName(obj.m_longName);
    setCompositionType(obj.m_compositionType);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcSpatialStructureElement::s_type("IfcSpatialStructureElement");
