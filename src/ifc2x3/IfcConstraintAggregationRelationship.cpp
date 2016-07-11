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



#include <ifc2x3/IfcConstraintAggregationRelationship.h>


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

Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type():
    mOwner(0)
{
}

void Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::setOwner(IfcConstraintAggregationRelationship *owner) {
    mOwner = owner;
}

void Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::push_back(const Step::RefPtr< IfcConstraint > &value) throw(std::out_of_range) {
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    List_IfcConstraint_1_n::push_back(value);
    inverse->m_isAggregatedIn.insert(mOwner);
}

Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::iterator Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::erase(const Step::RefPtr< IfcConstraint > &value) {
    IfcConstraint *inverse = const_cast< IfcConstraint * > (value.get());
    inverse->m_isAggregatedIn.erase(mOwner);
    return List_IfcConstraint_1_n::erase(value);
}

void Inverted_IfcConstraintAggregationRelationship_RelatedConstraints_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcConstraintAggregationRelationship::IfcConstraintAggregationRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_relatingConstraint = NULL;
    m_relatedConstraints.setOwner(this);
    m_logicalAggregator = IfcLogicalOperatorEnum_UNSET;
}

IfcConstraintAggregationRelationship::~IfcConstraintAggregationRelationship() {
}

bool IfcConstraintAggregationRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConstraintAggregationRelationship(this);
}

const std::string &IfcConstraintAggregationRelationship::type() const {
    return IfcConstraintAggregationRelationship::s_type.getName();
}

const Step::ClassType &IfcConstraintAggregationRelationship::getClassType() {
    return IfcConstraintAggregationRelationship::s_type;
}

const Step::ClassType &IfcConstraintAggregationRelationship::getType() const {
    return IfcConstraintAggregationRelationship::s_type;
}

bool IfcConstraintAggregationRelationship::isOfType(const Step::ClassType &t) const {
    return IfcConstraintAggregationRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcConstraintAggregationRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcConstraintAggregationRelationship::getName() const {
    IfcConstraintAggregationRelationship * deConstObject = const_cast< IfcConstraintAggregationRelationship * > (this);
    return deConstObject->getName();
}

void IfcConstraintAggregationRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcConstraintAggregationRelationship::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcConstraintAggregationRelationship::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcConstraintAggregationRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcConstraintAggregationRelationship::getDescription() const {
    IfcConstraintAggregationRelationship * deConstObject = const_cast< IfcConstraintAggregationRelationship * > (this);
    return deConstObject->getDescription();
}

void IfcConstraintAggregationRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcConstraintAggregationRelationship::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcConstraintAggregationRelationship::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcConstraint *IfcConstraintAggregationRelationship::getRelatingConstraint() {
    if (Step::BaseObject::inited()) {
        return m_relatingConstraint.get();
    }
    else {
        return NULL;
    }
}

const IfcConstraint *IfcConstraintAggregationRelationship::getRelatingConstraint() const {
    IfcConstraintAggregationRelationship * deConstObject = const_cast< IfcConstraintAggregationRelationship * > (this);
    return deConstObject->getRelatingConstraint();
}

void IfcConstraintAggregationRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
    if (m_relatingConstraint.valid()) {
        m_relatingConstraint->m_aggregates.erase(this);
    }
    if (value.valid()) {
        value->m_aggregates.insert(this);
    }
    m_relatingConstraint = value;
}

void IfcConstraintAggregationRelationship::unsetRelatingConstraint() {
    m_relatingConstraint = Step::getUnset(getRelatingConstraint());
}

bool IfcConstraintAggregationRelationship::testRelatingConstraint() const {
    return !Step::isUnset(getRelatingConstraint());
}

List_IfcConstraint_1_n &IfcConstraintAggregationRelationship::getRelatedConstraints() {
    if (Step::BaseObject::inited()) {
        return m_relatedConstraints;
    }
    else {
        m_relatedConstraints.setUnset(true);
        return m_relatedConstraints;
    }
}

const List_IfcConstraint_1_n &IfcConstraintAggregationRelationship::getRelatedConstraints() const {
    IfcConstraintAggregationRelationship * deConstObject = const_cast< IfcConstraintAggregationRelationship * > (this);
    return deConstObject->getRelatedConstraints();
}

void IfcConstraintAggregationRelationship::unsetRelatedConstraints() {
    m_relatedConstraints.clear();
    m_relatedConstraints.setUnset(true);
}

bool IfcConstraintAggregationRelationship::testRelatedConstraints() const {
    return !m_relatedConstraints.isUnset();
}

IfcLogicalOperatorEnum IfcConstraintAggregationRelationship::getLogicalAggregator() {
    if (Step::BaseObject::inited()) {
        return m_logicalAggregator;
    }
    else {
        return IfcLogicalOperatorEnum_UNSET;
    }
}

const IfcLogicalOperatorEnum IfcConstraintAggregationRelationship::getLogicalAggregator() const {
    IfcConstraintAggregationRelationship * deConstObject = const_cast< IfcConstraintAggregationRelationship * > (this);
    return deConstObject->getLogicalAggregator();
}

void IfcConstraintAggregationRelationship::setLogicalAggregator(IfcLogicalOperatorEnum value) {
    m_logicalAggregator = value;
}

void IfcConstraintAggregationRelationship::unsetLogicalAggregator() {
    m_logicalAggregator = IfcLogicalOperatorEnum_UNSET;
}

bool IfcConstraintAggregationRelationship::testLogicalAggregator() const {
    return getLogicalAggregator() != IfcLogicalOperatorEnum_UNSET;
}

bool IfcConstraintAggregationRelationship::init() {
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
                m_relatedConstraints.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_logicalAggregator = IfcLogicalOperatorEnum_UNSET;
    }
    else {
        if (arg == ".LOGICALAND.") {
            m_logicalAggregator = IfcLogicalOperatorEnum_LOGICALAND;
        }
        else if (arg == ".LOGICALOR.") {
            m_logicalAggregator = IfcLogicalOperatorEnum_LOGICALOR;
        }
    }
    return true;
}

void IfcConstraintAggregationRelationship::copy(const IfcConstraintAggregationRelationship &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcConstraint >, 1 >::const_iterator it_m_relatedConstraints;
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    setRelatingConstraint((IfcConstraint*)copyop(obj.m_relatingConstraint.get()));
    for (it_m_relatedConstraints = obj.m_relatedConstraints.begin(); it_m_relatedConstraints != obj.m_relatedConstraints.end(); ++it_m_relatedConstraints) {
        Step::RefPtr< IfcConstraint > copyTarget = (IfcConstraint *) (copyop((*it_m_relatedConstraints).get()));
        m_relatedConstraints.push_back(copyTarget.get());
    }
    setLogicalAggregator(obj.m_logicalAggregator);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConstraintAggregationRelationship::s_type("IfcConstraintAggregationRelationship");
