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

#include "precompiled.h"

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
#include <Step/logger.h>


#include <string>
#include <vector>

using namespace ifc2x3;

IfcElement::IfcElement(Step::Id id, Step::SPFData *args)
    : IfcProduct(id, args),
      m_hasStructuralMember(0),
      m_fillsVoids(0),
      m_connectedTo(0),
      m_hasCoverings(0),
      m_hasProjections(0),
      m_referencedInStructures(0),
      m_hasPorts(0),
      m_hasOpenings(0),
      m_isConnectionRealization(0),
      m_providesBoundaries(0),
      m_connectedFrom(0),
      m_containedInStructure(0)

{
    m_tag = Step::getUnset(m_tag);
}

IfcElement::~IfcElement() {
    if (m_hasStructuralMember)
        delete m_hasStructuralMember;
    if (m_fillsVoids)
        delete m_fillsVoids;
    if (m_connectedTo)
        delete m_connectedTo;
    if (m_hasCoverings)
        delete m_hasCoverings;
    if (m_hasProjections)
        delete m_hasProjections;
    if (m_referencedInStructures)
        delete m_referencedInStructures;
    if (m_hasPorts)
        delete m_hasPorts;
    if (m_hasOpenings)
        delete m_hasOpenings;
    if (m_isConnectionRealization)
        delete m_isConnectionRealization;
    if (m_providesBoundaries)
        delete m_providesBoundaries;
    if (m_connectedFrom)
        delete m_connectedFrom;
    if (m_containedInStructure)
        delete m_containedInStructure;
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
        return *m_hasStructuralMember;
    }
    else {
        Inverse_Set_IfcRelConnectsStructuralElement_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelConnectsStructuralElement_0_n &IfcElement::getHasStructuralMember() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getHasStructuralMember();
}

bool IfcElement::testHasStructuralMember() const {
    return !Step::isUnset(getHasStructuralMember());
}

Inverse_Set_IfcRelFillsElement_0_1 &IfcElement::getFillsVoids() {
    if (Step::BaseObject::inited()) {
        return *m_fillsVoids;
    }
    else {
        Inverse_Set_IfcRelFillsElement_0_1 inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelFillsElement_0_1 &IfcElement::getFillsVoids() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getFillsVoids();
}

bool IfcElement::testFillsVoids() const {
    return !Step::isUnset(getFillsVoids());
}

Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedTo() {
    if (Step::BaseObject::inited()) {
        return *m_connectedTo;
    }
    else {
        Inverse_Set_IfcRelConnectsElements_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedTo() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getConnectedTo();
}

bool IfcElement::testConnectedTo() const {
    return !Step::isUnset(getConnectedTo());
}

Inverse_Set_IfcRelCoversBldgElements_0_n &IfcElement::getHasCoverings() {
    if (Step::BaseObject::inited()) {
        return *m_hasCoverings;
    }
    else {
        Inverse_Set_IfcRelCoversBldgElements_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelCoversBldgElements_0_n &IfcElement::getHasCoverings() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getHasCoverings();
}

bool IfcElement::testHasCoverings() const {
    return !Step::isUnset(getHasCoverings());
}

Inverse_Set_IfcRelProjectsElement_0_n &IfcElement::getHasProjections() {
    if (Step::BaseObject::inited()) {
        return *m_hasProjections;
    }
    else {
        Inverse_Set_IfcRelProjectsElement_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelProjectsElement_0_n &IfcElement::getHasProjections() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getHasProjections();
}

bool IfcElement::testHasProjections() const {
    return !Step::isUnset(getHasProjections());
}

Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &IfcElement::getReferencedInStructures() {
    if (Step::BaseObject::inited()) {
        return *m_referencedInStructures;
    }
    else {
        Inverse_Set_IfcRelReferencedInSpatialStructure_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelReferencedInSpatialStructure_0_n &IfcElement::getReferencedInStructures() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getReferencedInStructures();
}

bool IfcElement::testReferencedInStructures() const {
    return !Step::isUnset(getReferencedInStructures());
}

Inverse_Set_IfcRelConnectsPortToElement_0_n &IfcElement::getHasPorts() {
    if (Step::BaseObject::inited()) {
        return *m_hasPorts;
    }
    else {
        Inverse_Set_IfcRelConnectsPortToElement_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelConnectsPortToElement_0_n &IfcElement::getHasPorts() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getHasPorts();
}

bool IfcElement::testHasPorts() const {
    return !Step::isUnset(getHasPorts());
}

Inverse_Set_IfcRelVoidsElement_0_n &IfcElement::getHasOpenings() {
    if (Step::BaseObject::inited()) {
        return *m_hasOpenings;
    }
    else {
        Inverse_Set_IfcRelVoidsElement_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelVoidsElement_0_n &IfcElement::getHasOpenings() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getHasOpenings();
}

bool IfcElement::testHasOpenings() const {
    return !Step::isUnset(getHasOpenings());
}

Inverse_Set_IfcRelConnectsWithRealizingElements_0_n &IfcElement::getIsConnectionRealization() {
    if (Step::BaseObject::inited()) {
        return *m_isConnectionRealization;
    }
    else {
        Inverse_Set_IfcRelConnectsWithRealizingElements_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelConnectsWithRealizingElements_0_n &IfcElement::getIsConnectionRealization() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getIsConnectionRealization();
}

bool IfcElement::testIsConnectionRealization() const {
    return !Step::isUnset(getIsConnectionRealization());
}

Inverse_Set_IfcRelSpaceBoundary_0_n &IfcElement::getProvidesBoundaries() {
    if (Step::BaseObject::inited()) {
        return *m_providesBoundaries;
    }
    else {
        Inverse_Set_IfcRelSpaceBoundary_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelSpaceBoundary_0_n &IfcElement::getProvidesBoundaries() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getProvidesBoundaries();
}

bool IfcElement::testProvidesBoundaries() const {
    return !Step::isUnset(getProvidesBoundaries());
}

Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedFrom() {
    if (Step::BaseObject::inited()) {
        return *m_connectedFrom;
    }
    else {
        Inverse_Set_IfcRelConnectsElements_0_n inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelConnectsElements_0_n &IfcElement::getConnectedFrom() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getConnectedFrom();
}

bool IfcElement::testConnectedFrom() const {
    return !Step::isUnset(getConnectedFrom());
}

Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcElement::getContainedInStructure() {
    if (Step::BaseObject::inited()) {
        return *m_containedInStructure;
    }
    else {
        Inverse_Set_IfcRelContainedInSpatialStructure_0_1 inv;
        inv.setUnset(true);
        return inv;
    }
}

const Inverse_Set_IfcRelContainedInSpatialStructure_0_1 &IfcElement::getContainedInStructure() const {
    IfcElement * deConstObject = const_cast< IfcElement * > (this);
    return deConstObject->getContainedInStructure();
}

bool IfcElement::testContainedInStructure() const {
    return !Step::isUnset(getContainedInStructure());
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
        m_hasStructuralMember = new Inverse_Set_IfcRelConnectsStructuralElement_0_n;
        m_hasStructuralMember->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasStructuralMember->insert(static_cast< IfcRelConnectsStructuralElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelFillsElement::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_fillsVoids = new Inverse_Set_IfcRelFillsElement_0_1;
        m_fillsVoids->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_fillsVoids->insert(static_cast< IfcRelFillsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsElements::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_connectedTo = new Inverse_Set_IfcRelConnectsElements_0_n;
        m_connectedTo->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedTo->insert(static_cast< IfcRelConnectsElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelCoversBldgElements::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasCoverings = new Inverse_Set_IfcRelCoversBldgElements_0_n;
        m_hasCoverings->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasCoverings->insert(static_cast< IfcRelCoversBldgElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelProjectsElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasProjections = new Inverse_Set_IfcRelProjectsElement_0_n;
        m_hasProjections->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasProjections->insert(static_cast< IfcRelProjectsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelReferencedInSpatialStructure::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_referencedInStructures = new Inverse_Set_IfcRelReferencedInSpatialStructure_0_n;
        m_referencedInStructures->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_referencedInStructures->insert(static_cast< IfcRelReferencedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsPortToElement::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_hasPorts = new Inverse_Set_IfcRelConnectsPortToElement_0_n;
        m_hasPorts->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasPorts->insert(static_cast< IfcRelConnectsPortToElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelVoidsElement::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_hasOpenings = new Inverse_Set_IfcRelVoidsElement_0_n;
        m_hasOpenings->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasOpenings->insert(static_cast< IfcRelVoidsElement * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsWithRealizingElements::getClassType(), 7);
    if (inverses) {
        unsigned int i;
        m_isConnectionRealization = new Inverse_Set_IfcRelConnectsWithRealizingElements_0_n;
        m_isConnectionRealization->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isConnectionRealization->insert(static_cast< IfcRelConnectsWithRealizingElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelSpaceBoundary::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_providesBoundaries = new Inverse_Set_IfcRelSpaceBoundary_0_n;
        m_providesBoundaries->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_providesBoundaries->insert(static_cast< IfcRelSpaceBoundary * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelConnectsElements::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_connectedFrom = new Inverse_Set_IfcRelConnectsElements_0_n;
        m_connectedFrom->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_connectedFrom->insert(static_cast< IfcRelConnectsElements * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcRelContainedInSpatialStructure::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_containedInStructure = new Inverse_Set_IfcRelContainedInSpatialStructure_0_1;
        m_containedInStructure->setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_containedInStructure->insert(static_cast< IfcRelContainedInSpatialStructure * > (m_expressDataSet->get((*inverses)[i])));
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
