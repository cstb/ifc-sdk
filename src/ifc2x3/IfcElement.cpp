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



#include <ifc2x3/IfcElement.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelConnectsElements.h>
#include <ifc2x3/IfcRelConnectsPortToElement.h>
#include <ifc2x3/IfcRelConnectsStructuralElement.h>
#include <ifc2x3/IfcRelConnectsWithRealizingElements.h>
#include <ifc2x3/IfcRelContainedInSpatialStructure.h>
#include <ifc2x3/IfcRelCoversBldgElements.h>
#include <ifc2x3/IfcRelFillsElement.h>
#include <ifc2x3/IfcRelProjectsElement.h>
#include <ifc2x3/IfcRelReferencedInSpatialStructure.h>
#include <ifc2x3/IfcRelSpaceBoundary.h>
#include <ifc2x3/IfcRelVoidsElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/String.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcElement::IfcElement(Step::Id id, Step::SPFData *args) : IfcProduct(id, args) {
    m_tag = Step::getUnset(m_tag);
}

IfcElement::~IfcElement() {
}

bool IfcElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcElement(this);
}

const std::string &IfcElement::type() const {
    return IfcElement::s_type.getName();
}

const Step::ClassType &IfcElement::getClassType() {
    return IfcElement::s_type;
}

const Step::ClassType &IfcElement::getType() const {
    return IfcElement::s_type;
}

bool IfcElement::isOfType(const Step::ClassType &t) const {
    return IfcElement::s_type == t ? true : IfcProduct::isOfType(t);
}

IfcIdentifier IfcElement::getTag() {
    if (Step::BaseObject::inited()) {
        return m_tag;
    }
    else {
        return Step::getUnset(m_tag);
    }
}

const IfcIdentifier IfcElement::getTag() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getTag();
}

void IfcElement::setTag(const IfcIdentifier &value) {
    m_tag = value;
}

void IfcElement::unsetTag() {
    m_tag = Step::getUnset(getTag());
}

bool IfcElement::testTag() const {
    return !Step::isUnset(getTag());
}

Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcElement::getHasStructuralMember() {
    if (Step::BaseObject::inited()) {
        return m_hasStructuralMember;
    }
    else {
        m_hasStructuralMember.setUnset(true);
        return m_hasStructuralMember;
    }
}

const Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcElement::getHasStructuralMember() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getHasStructuralMember();
}

bool IfcElement::testHasStructuralMember() const {
    return !m_hasStructuralMember.isUnset();
}

Inverse_Set_IfcRelFillsElement_0_1 &IfcElement::getFillsVoids() {
    if (Step::BaseObject::inited()) {
        return m_fillsVoids;
    }
    else {
        m_fillsVoids.setUnset(true);
        return m_fillsVoids;
    }
}

const Inverse_Set_IfcRelFillsElement_0_1 &IfcElement::getFillsVoids() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getFillsVoids();
}

bool IfcElement::testFillsVoids() const {
    return !m_fillsVoids.isUnset();
}

Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedTo() {
    if (Step::BaseObject::inited()) {
        return m_connectedTo;
    }
    else {
        m_connectedTo.setUnset(true);
        return m_connectedTo;
    }
}

const Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedTo() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getConnectedTo();
}

bool IfcElement::testConnectedTo() const {
    return !m_connectedTo.isUnset();
}

Inverse_Set_IfcRelCoversBldgElements_0_n &IfcElement::getHasCoverings() {
    if (Step::BaseObject::inited()) {
        return m_hasCoverings;
    }
    else {
        m_hasCoverings.setUnset(true);
        return m_hasCoverings;
    }
}

const Inverse_Set_IfcRelCoversBldgElements_0_n &IfcElement::getHasCoverings() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getHasCoverings();
}

bool IfcElement::testHasCoverings() const {
    return !m_hasCoverings.isUnset();
}

Inverse_Set_IfcRelProjectsElement_0_n &IfcElement::getHasProjections() {
    if (Step::BaseObject::inited()) {
        return m_hasProjections;
    }
    else {
        m_hasProjections.setUnset(true);
        return m_hasProjections;
    }
}

const Inverse_Set_IfcRelProjectsElement_0_n &IfcElement::getHasProjections() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getHasProjections();
}

bool IfcElement::testHasProjections() const {
    return !m_hasProjections.isUnset();
}

Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &IfcElement::getReferencedInStructures() {
    if (Step::BaseObject::inited()) {
        return m_referencedInStructures;
    }
    else {
        m_referencedInStructures.setUnset(true);
        return m_referencedInStructures;
    }
}

const Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &IfcElement::getReferencedInStructures() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getReferencedInStructures();
}

bool IfcElement::testReferencedInStructures() const {
    return !m_referencedInStructures.isUnset();
}

Inverse_Set_IfcRelConnectsPortToElement_0_n &IfcElement::getHasPorts() {
    if (Step::BaseObject::inited()) {
        return m_hasPorts;
    }
    else {
        m_hasPorts.setUnset(true);
        return m_hasPorts;
    }
}

const Inverse_Set_IfcRelConnectsPortToElement_0_n &IfcElement::getHasPorts() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getHasPorts();
}

bool IfcElement::testHasPorts() const {
    return !m_hasPorts.isUnset();
}

Inverse_Set_IfcRelVoidsElement_0_n &IfcElement::getHasOpenings() {
    if (Step::BaseObject::inited()) {
        return m_hasOpenings;
    }
    else {
        m_hasOpenings.setUnset(true);
        return m_hasOpenings;
    }
}

const Inverse_Set_IfcRelVoidsElement_0_n &IfcElement::getHasOpenings() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getHasOpenings();
}

bool IfcElement::testHasOpenings() const {
    return !m_hasOpenings.isUnset();
}

Inverse_Set_IfcRelConnectsWithRealizingElements_0_n &IfcElement::getIsConnectionRealization() {
    if (Step::BaseObject::inited()) {
        return m_isConnectionRealization;
    }
    else {
        m_isConnectionRealization.setUnset(true);
        return m_isConnectionRealization;
    }
}

const Inverse_Set_IfcRelConnectsWithRealizingElements_0_n &IfcElement::getIsConnectionRealization() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getIsConnectionRealization();
}

bool IfcElement::testIsConnectionRealization() const {
    return !m_isConnectionRealization.isUnset();
}

Inverse_Set_IfcRelSpaceBoundary_0_n &IfcElement::getProvidesBoundaries() {
    if (Step::BaseObject::inited()) {
        return m_providesBoundaries;
    }
    else {
        m_providesBoundaries.setUnset(true);
        return m_providesBoundaries;
    }
}

const Inverse_Set_IfcRelSpaceBoundary_0_n &IfcElement::getProvidesBoundaries() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getProvidesBoundaries();
}

bool IfcElement::testProvidesBoundaries() const {
    return !m_providesBoundaries.isUnset();
}

Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedFrom() {
    if (Step::BaseObject::inited()) {
        return m_connectedFrom;
    }
    else {
        m_connectedFrom.setUnset(true);
        return m_connectedFrom;
    }
}

const Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedFrom() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getConnectedFrom();
}

bool IfcElement::testConnectedFrom() const {
    return !m_connectedFrom.isUnset();
}

Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcElement::getContainedInStructure() {
    if (Step::BaseObject::inited()) {
        return m_containedInStructure;
    }
    else {
        m_containedInStructure.setUnset(true);
        return m_containedInStructure;
    }
}

const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcElement::getContainedInStructure() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getContainedInStructure();
}

bool IfcElement::testContainedInStructure() const {
    return !m_containedInStructure.isUnset();
}

bool IfcElement::init() {
    bool status = IfcProduct::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tag = Step::getUnset(m_tag);
    }
    else {
        m_tag = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcRelConnectsStructuralElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasStructuralMember.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasStructuralMember.insert(static_cast< IfcRelConnectsStructuralElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelFillsElement::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_fillsVoids.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_fillsVoids.insert(static_cast< IfcRelFillsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsElements::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_connectedTo.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedTo.insert(static_cast< IfcRelConnectsElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelCoversBldgElements::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasCoverings.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasCoverings.insert(static_cast< IfcRelCoversBldgElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelProjectsElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasProjections.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasProjections.insert(static_cast< IfcRelProjectsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelReferencedInSpatialStructure::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_referencedInStructures.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referencedInStructures.insert(static_cast< IfcRelReferencedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsPortToElement::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_hasPorts.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasPorts.insert(static_cast< IfcRelConnectsPortToElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelVoidsElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasOpenings.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasOpenings.insert(static_cast< IfcRelVoidsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsWithRealizingElements::getClassType(), 7);
    if (inverses) {
        unsigned int i;
        m_isConnectionRealization.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isConnectionRealization.insert(static_cast< IfcRelConnectsWithRealizingElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelSpaceBoundary::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_providesBoundaries.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_providesBoundaries.insert(static_cast< IfcRelSpaceBoundary * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsElements::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_connectedFrom.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedFrom.insert(static_cast< IfcRelConnectsElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_containedInStructure.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_containedInStructure.insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcElement::copy(const IfcElement &obj, const CopyOp &copyop) {
    IfcProduct::copy(obj, copyop);
    setTag(obj.m_tag);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcElement::s_type("IfcElement");
