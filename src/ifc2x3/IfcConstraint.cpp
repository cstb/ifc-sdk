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



#include <ifc2x3/IfcConstraint.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcConstraintAggregationRelationship.h>
#include <ifc2x3/IfcConstraintClassificationRelationship.h>
#include <ifc2x3/IfcConstraintRelationship.h>
#include <ifc2x3/IfcDateTimeSelect.h>
#include <ifc2x3/IfcPropertyConstraintRelationship.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/String.h>


#include <stdlib.h>
#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcConstraint::IfcConstraint(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_constraintGrade = IfcConstraintEnum_UNSET;
    m_constraintSource = Step::getUnset(m_constraintSource);
    m_creatingActor = NULL;
    m_creationTime = NULL;
    m_userDefinedGrade = Step::getUnset(m_userDefinedGrade);
}

IfcConstraint::~IfcConstraint() {
}

bool IfcConstraint::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcConstraint(this);
}

const std::string &IfcConstraint::type() const {
    return IfcConstraint::s_type.getName();
}

const Step::ClassType &IfcConstraint::getClassType() {
    return IfcConstraint::s_type;
}

const Step::ClassType &IfcConstraint::getType() const {
    return IfcConstraint::s_type;
}

bool IfcConstraint::isOfType(const Step::ClassType &t) const {
    return IfcConstraint::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcConstraint::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcConstraint::getName() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getName();
}

void IfcConstraint::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcConstraint::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcConstraint::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcConstraint::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcConstraint::getDescription() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getDescription();
}

void IfcConstraint::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcConstraint::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcConstraint::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcConstraintEnum IfcConstraint::getConstraintGrade() {
    if (Step::BaseObject::inited()) {
        return m_constraintGrade;
    }
    else {
        return IfcConstraintEnum_UNSET;
    }
}

const IfcConstraintEnum IfcConstraint::getConstraintGrade() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getConstraintGrade();
}

void IfcConstraint::setConstraintGrade(IfcConstraintEnum value) {
    m_constraintGrade = value;
}

void IfcConstraint::unsetConstraintGrade() {
    m_constraintGrade = IfcConstraintEnum_UNSET;
}

bool IfcConstraint::testConstraintGrade() const {
    return getConstraintGrade() != IfcConstraintEnum_UNSET;
}

IfcLabel IfcConstraint::getConstraintSource() {
    if (Step::BaseObject::inited()) {
        return m_constraintSource;
    }
    else {
        return Step::getUnset(m_constraintSource);
    }
}

const IfcLabel IfcConstraint::getConstraintSource() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getConstraintSource();
}

void IfcConstraint::setConstraintSource(const IfcLabel &value) {
    m_constraintSource = value;
}

void IfcConstraint::unsetConstraintSource() {
    m_constraintSource = Step::getUnset(getConstraintSource());
}

bool IfcConstraint::testConstraintSource() const {
    return !Step::isUnset(getConstraintSource());
}

IfcActorSelect *IfcConstraint::getCreatingActor() {
    if (Step::BaseObject::inited()) {
        return m_creatingActor.get();
    }
    else {
        return NULL;
    }
}

const IfcActorSelect *IfcConstraint::getCreatingActor() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getCreatingActor();
}

void IfcConstraint::setCreatingActor(const Step::RefPtr< IfcActorSelect > &value) {
    m_creatingActor = value;
}

void IfcConstraint::unsetCreatingActor() {
    m_creatingActor = Step::getUnset(getCreatingActor());
}

bool IfcConstraint::testCreatingActor() const {
    return !Step::isUnset(getCreatingActor());
}

IfcDateTimeSelect *IfcConstraint::getCreationTime() {
    if (Step::BaseObject::inited()) {
        return m_creationTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcConstraint::getCreationTime() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getCreationTime();
}

void IfcConstraint::setCreationTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_creationTime = value;
}

void IfcConstraint::unsetCreationTime() {
    m_creationTime = Step::getUnset(getCreationTime());
}

bool IfcConstraint::testCreationTime() const {
    return !Step::isUnset(getCreationTime());
}

IfcLabel IfcConstraint::getUserDefinedGrade() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedGrade;
    }
    else {
        return Step::getUnset(m_userDefinedGrade);
    }
}

const IfcLabel IfcConstraint::getUserDefinedGrade() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getUserDefinedGrade();
}

void IfcConstraint::setUserDefinedGrade(const IfcLabel &value) {
    m_userDefinedGrade = value;
}

void IfcConstraint::unsetUserDefinedGrade() {
    m_userDefinedGrade = Step::getUnset(getUserDefinedGrade());
}

bool IfcConstraint::testUserDefinedGrade() const {
    return !Step::isUnset(getUserDefinedGrade());
}

Inverse_Set_IfcConstraintClassificationRelationship_0_n &IfcConstraint::getClassifiedAs() {
    if (Step::BaseObject::inited()) {
        return m_classifiedAs;
    }
    else {
        m_classifiedAs.setUnset(true);
        return m_classifiedAs;
    }
}

const Inverse_Set_IfcConstraintClassificationRelationship_0_n &IfcConstraint::getClassifiedAs() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getClassifiedAs();
}

bool IfcConstraint::testClassifiedAs() const {
    return !m_classifiedAs.isUnset();
}

Inverse_Set_IfcConstraintRelationship_0_n &IfcConstraint::getRelatesConstraints() {
    if (Step::BaseObject::inited()) {
        return m_relatesConstraints;
    }
    else {
        m_relatesConstraints.setUnset(true);
        return m_relatesConstraints;
    }
}

const Inverse_Set_IfcConstraintRelationship_0_n &IfcConstraint::getRelatesConstraints() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getRelatesConstraints();
}

bool IfcConstraint::testRelatesConstraints() const {
    return !m_relatesConstraints.isUnset();
}

Inverse_Set_IfcConstraintRelationship_0_n &IfcConstraint::getIsRelatedWith() {
    if (Step::BaseObject::inited()) {
        return m_isRelatedWith;
    }
    else {
        m_isRelatedWith.setUnset(true);
        return m_isRelatedWith;
    }
}

const Inverse_Set_IfcConstraintRelationship_0_n &IfcConstraint::getIsRelatedWith() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getIsRelatedWith();
}

bool IfcConstraint::testIsRelatedWith() const {
    return !m_isRelatedWith.isUnset();
}

Inverse_Set_IfcPropertyConstraintRelationship_0_n &IfcConstraint::getPropertiesForConstraint() {
    if (Step::BaseObject::inited()) {
        return m_propertiesForConstraint;
    }
    else {
        m_propertiesForConstraint.setUnset(true);
        return m_propertiesForConstraint;
    }
}

const Inverse_Set_IfcPropertyConstraintRelationship_0_n &IfcConstraint::getPropertiesForConstraint() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getPropertiesForConstraint();
}

bool IfcConstraint::testPropertiesForConstraint() const {
    return !m_propertiesForConstraint.isUnset();
}

Inverse_Set_IfcConstraintAggregationRelationship_0_n &IfcConstraint::getAggregates() {
    if (Step::BaseObject::inited()) {
        return m_aggregates;
    }
    else {
        m_aggregates.setUnset(true);
        return m_aggregates;
    }
}

const Inverse_Set_IfcConstraintAggregationRelationship_0_n &IfcConstraint::getAggregates() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getAggregates();
}

bool IfcConstraint::testAggregates() const {
    return !m_aggregates.isUnset();
}

Inverse_Set_IfcConstraintAggregationRelationship_0_n &IfcConstraint::getIsAggregatedIn() {
    if (Step::BaseObject::inited()) {
        return m_isAggregatedIn;
    }
    else {
        m_isAggregatedIn.setUnset(true);
        return m_isAggregatedIn;
    }
}

const Inverse_Set_IfcConstraintAggregationRelationship_0_n &IfcConstraint::getIsAggregatedIn() const {
    IfcConstraint * deConstObject = const_cast< IfcConstraint * > (this);
    return deConstObject->getIsAggregatedIn();
}

bool IfcConstraint::testIsAggregatedIn() const {
    return !m_isAggregatedIn.isUnset();
}

bool IfcConstraint::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
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
        m_constraintGrade = IfcConstraintEnum_UNSET;
    }
    else {
        if (arg == ".HARD.") {
            m_constraintGrade = IfcConstraintEnum_HARD;
        }
        else if (arg == ".SOFT.") {
            m_constraintGrade = IfcConstraintEnum_SOFT;
        }
        else if (arg == ".ADVISORY.") {
            m_constraintGrade = IfcConstraintEnum_ADVISORY;
        }
        else if (arg == ".USERDEFINED.") {
            m_constraintGrade = IfcConstraintEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_constraintGrade = IfcConstraintEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_constraintSource = Step::getUnset(m_constraintSource);
    }
    else {
        m_constraintSource = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_creatingActor = NULL;
    }
    else {
        m_creatingActor = new IfcActorSelect;
        if (arg[0] == '#') {
            m_creatingActor->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_creationTime = NULL;
    }
    else {
        m_creationTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_creationTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            std::string::size_type i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_userDefinedGrade = Step::getUnset(m_userDefinedGrade);
    }
    else {
        m_userDefinedGrade = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcConstraintClassificationRelationship::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_classifiedAs.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_classifiedAs.insert(static_cast< IfcConstraintClassificationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcConstraintRelationship::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_relatesConstraints.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_relatesConstraints.insert(static_cast< IfcConstraintRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcConstraintRelationship::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_isRelatedWith.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isRelatedWith.insert(static_cast< IfcConstraintRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPropertyConstraintRelationship::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_propertiesForConstraint.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_propertiesForConstraint.insert(static_cast< IfcPropertyConstraintRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcConstraintAggregationRelationship::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_aggregates.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_aggregates.insert(static_cast< IfcConstraintAggregationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcConstraintAggregationRelationship::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_isAggregatedIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isAggregatedIn.insert(static_cast< IfcConstraintAggregationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcConstraint::copy(const IfcConstraint &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    setConstraintGrade(obj.m_constraintGrade);
    setConstraintSource(obj.m_constraintSource);
    m_creatingActor = new IfcActorSelect;
    m_creatingActor->copy(*(obj.m_creatingActor.get()), copyop);
    m_creationTime = new IfcDateTimeSelect;
    m_creationTime->copy(*(obj.m_creationTime.get()), copyop);
    setUserDefinedGrade(obj.m_userDefinedGrade);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcConstraint::s_type("IfcConstraint");
