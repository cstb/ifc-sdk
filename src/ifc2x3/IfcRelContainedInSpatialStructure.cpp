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



#include <ifc2x3/IfcRelContainedInSpatialStructure.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAnnotation.h>
#include <ifc2x3/IfcElement.h>
#include <ifc2x3/IfcGrid.h>
#include <ifc2x3/IfcProduct.h>
#include <ifc2x3/IfcRelConnects.h>
#include <ifc2x3/IfcSpatialStructureElement.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type::Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type():
    mOwner(0)
{
}

void Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type::setOwner(IfcRelContainedInSpatialStructure *owner) {
    mOwner = owner;
}

void Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type::insert(const Step::RefPtr< IfcProduct > &value) throw(std::out_of_range) {
    IfcProduct *inverse = const_cast< IfcProduct * > (value.get());
    Set_IfcProduct_1_n::insert(value);
    if (dynamic_cast< IfcAnnotation * > (inverse) != NULL) {
        ((IfcAnnotation *) (inverse))->m_containedInStructure.insert(mOwner);
    }
    if (dynamic_cast< IfcElement * > (inverse) != NULL) {
        ((IfcElement *) (inverse))->m_containedInStructure.insert(mOwner);
    }
    if (dynamic_cast< IfcGrid * > (inverse) != NULL) {
        ((IfcGrid *) (inverse))->m_containedInStructure.insert(mOwner);
    }
}

Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type::size_type Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type::erase(const Step::RefPtr< IfcProduct > &value) {
    return Set_IfcProduct_1_n::erase(value);
}

void Inverted_IfcRelContainedInSpatialStructure_RelatedElements_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcRelContainedInSpatialStructure::IfcRelContainedInSpatialStructure(Step::Id id, Step::SPFData *args) : IfcRelConnects(id, args) {
    m_relatedElements.setOwner(this);
    m_relatingStructure = NULL;
}

IfcRelContainedInSpatialStructure::~IfcRelContainedInSpatialStructure() {
}

bool IfcRelContainedInSpatialStructure::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelContainedInSpatialStructure(this);
}

const std::string &IfcRelContainedInSpatialStructure::type() const {
    return IfcRelContainedInSpatialStructure::s_type.getName();
}

const Step::ClassType &IfcRelContainedInSpatialStructure::getClassType() {
    return IfcRelContainedInSpatialStructure::s_type;
}

const Step::ClassType &IfcRelContainedInSpatialStructure::getType() const {
    return IfcRelContainedInSpatialStructure::s_type;
}

bool IfcRelContainedInSpatialStructure::isOfType(const Step::ClassType &t) const {
    return IfcRelContainedInSpatialStructure::s_type == t ? true : IfcRelConnects::isOfType(t);
}

Set_IfcProduct_1_n &IfcRelContainedInSpatialStructure::getRelatedElements() {
    if (Step::BaseObject::inited()) {
        return m_relatedElements;
    }
    else {
        m_relatedElements.setUnset(true);
        return m_relatedElements;
    }
}

const Set_IfcProduct_1_n &IfcRelContainedInSpatialStructure::getRelatedElements() const {
    IfcRelContainedInSpatialStructure * deConstObject = const_cast< IfcRelContainedInSpatialStructure * > (this);
    return deConstObject->getRelatedElements();
}

void IfcRelContainedInSpatialStructure::unsetRelatedElements() {
    m_relatedElements.clear();
    m_relatedElements.setUnset(true);
}

bool IfcRelContainedInSpatialStructure::testRelatedElements() const {
    return !m_relatedElements.isUnset();
}

IfcSpatialStructureElement *IfcRelContainedInSpatialStructure::getRelatingStructure() {
    if (Step::BaseObject::inited()) {
        return m_relatingStructure.get();
    }
    else {
        return NULL;
    }
}

const IfcSpatialStructureElement *IfcRelContainedInSpatialStructure::getRelatingStructure() const {
    IfcRelContainedInSpatialStructure * deConstObject = const_cast< IfcRelContainedInSpatialStructure * > (this);
    return deConstObject->getRelatingStructure();
}

void IfcRelContainedInSpatialStructure::setRelatingStructure(const Step::RefPtr< IfcSpatialStructureElement > &value) {
    if (m_relatingStructure.valid()) {
        m_relatingStructure->m_containsElements.erase(this);
    }
    if (value.valid()) {
        value->m_containsElements.insert(this);
    }
    m_relatingStructure = value;
}

void IfcRelContainedInSpatialStructure::unsetRelatingStructure() {
    m_relatingStructure = Step::getUnset(getRelatingStructure());
}

bool IfcRelContainedInSpatialStructure::testRelatingStructure() const {
    return !Step::isUnset(getRelatingStructure());
}

bool IfcRelContainedInSpatialStructure::init() {
    bool status = IfcRelConnects::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedElements.setUnset(true);
    }
    else {
        m_relatedElements.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProduct > attr2;
                attr2 = static_cast< IfcProduct * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedElements.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingStructure = NULL;
    }
    else {
        m_relatingStructure = static_cast< IfcSpatialStructureElement * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelContainedInSpatialStructure::copy(const IfcRelContainedInSpatialStructure &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProduct >, 1 >::const_iterator it_m_relatedElements;
    IfcRelConnects::copy(obj, copyop);
    for (it_m_relatedElements = obj.m_relatedElements.begin(); it_m_relatedElements != obj.m_relatedElements.end(); ++it_m_relatedElements) {
        Step::RefPtr< IfcProduct > copyTarget = (IfcProduct *) (copyop((*it_m_relatedElements).get()));
        m_relatedElements.insert(copyTarget.get());
    }
    setRelatingStructure((IfcSpatialStructureElement*)copyop(obj.m_relatingStructure.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRelContainedInSpatialStructure::s_type("IfcRelContainedInSpatialStructure");
