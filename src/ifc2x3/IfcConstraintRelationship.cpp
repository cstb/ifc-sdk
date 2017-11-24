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



#include <ifc2x3/IfcConstraintRelationship.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConstraint.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcConstraintRelationship_RelatedConstraints_type::Inverted_IfcConstraintRelationship_RelatedConstraints_type():
    mOwner(0)
{
}

void Inverted_IfcConstraintRelationship_RelatedConstraints_type::setOwner(IfcConstraintRelationship *owner) {
    mOwner = owner;
}

void Inverted_IfcConstraintRelationship_RelatedConstraints_type::insert(const Step::RefPtr< IfcConstraint > &value) throw(std::out_of_range) {
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    Set_IfcConstraint_1_n::insert(value);
    inverse->m_isRelatedWith.insert(mOwner);
}

Inverted_IfcConstraintRelationship_RelatedConstraints_type::size_type Inverted_IfcConstraintRelationship_RelatedConstraints_type::erase(const Step::RefPtr< IfcConstraint > &value) {
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    inverse->m_isRelatedWith.erase(mOwner);
    return Set_IfcConstraint_1_n::erase(value);
}

void Inverted_IfcConstraintRelationship_RelatedConstraints_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcConstraintRelationship::IfcConstraintRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_relatingConstraint = NULL;
    m_relatedConstraints.setOwner(this);
}

IfcConstraintRelationship::~IfcConstraintRelationship() {
}

bool IfcConstraintRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConstraintRelationship(this);
}

const std::string &IfcConstraintRelationship::type() const {
    return IfcConstraintRelationship::s_type.getName();
}

const Step::ClassType &IfcConstraintRelationship::getClassType() {
    return IfcConstraintRelationship::s_type;
}

const Step::ClassType &IfcConstraintRelationship::getType() const {
    return IfcConstraintRelationship::s_type;
}

bool IfcConstraintRelationship::isOfType(const Step::ClassType &t) const {
    return IfcConstraintRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcConstraintRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcConstraintRelationship::getName() const {
    IfcConstraintRelationship * deConstObject = const_cast< IfcConstraintRelationship * > (this);
    return deConstObject->getName();
}

void IfcConstraintRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcConstraintRelationship::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcConstraintRelationship::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcConstraintRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcConstraintRelationship::getDescription() const {
    IfcConstraintRelationship * deConstObject = const_cast< IfcConstraintRelationship * > (this);
    return deConstObject->getDescription();
}

void IfcConstraintRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcConstraintRelationship::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcConstraintRelationship::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcConstraint *IfcConstraintRelationship::getRelatingConstraint() {
    if (Step::BaseObject::inited()) {
        return m_relatingConstraint.get();
    }
    else {
        return NULL;
    }
}

const IfcConstraint *IfcConstraintRelationship::getRelatingConstraint() const {
    IfcConstraintRelationship * deConstObject = const_cast< IfcConstraintRelationship * > (this);
    return deConstObject->getRelatingConstraint();
}

void IfcConstraintRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
    if (m_relatingConstraint.valid()) {
        m_relatingConstraint->m_relatesConstraints.erase(this);
    }
    if (value.valid()) {
        value->m_relatesConstraints.insert(this);
    }
    m_relatingConstraint = value;
}

void IfcConstraintRelationship::unsetRelatingConstraint() {
    m_relatingConstraint = Step::getUnset(getRelatingConstraint());
}

bool IfcConstraintRelationship::testRelatingConstraint() const {
    return !Step::isUnset(getRelatingConstraint());
}

Set_IfcConstraint_1_n &IfcConstraintRelationship::getRelatedConstraints() {
    if (Step::BaseObject::inited()) {
        return m_relatedConstraints;
    }
    else {
        m_relatedConstraints.setUnset(true);
        return m_relatedConstraints;
    }
}

const Set_IfcConstraint_1_n &IfcConstraintRelationship::getRelatedConstraints() const {
    IfcConstraintRelationship * deConstObject = const_cast< IfcConstraintRelationship * > (this);
    return deConstObject->getRelatedConstraints();
}

void IfcConstraintRelationship::unsetRelatedConstraints() {
    m_relatedConstraints.clear();
    m_relatedConstraints.setUnset(true);
}

bool IfcConstraintRelationship::testRelatedConstraints() const {
    return !m_relatedConstraints.isUnset();
}

bool IfcConstraintRelationship::init() {
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
        m_relatingConstraint = NULL;
    }
    else {
        m_relatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedConstraints.setUnset(true);
    }
    else {
        m_relatedConstraints.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcConstraint > attr2;
                attr2 = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedConstraints.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcConstraintRelationship::copy(const IfcConstraintRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcConstraint >, 1 >::const_iterator it_m_relatedConstraints;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    setRelatingConstraint((IfcConstraint*)copyop(obj.m_relatingConstraint.get()));
    for (it_m_relatedConstraints = obj.m_relatedConstraints.begin(); it_m_relatedConstraints != obj.m_relatedConstraints.end(); ++it_m_relatedConstraints) {
        Step::RefPtr< IfcConstraint > copyTarget = (IfcConstraint *) (copyop((*it_m_relatedConstraints).get()));
        m_relatedConstraints.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConstraintRelationship::s_type("IfcConstraintRelationship");
