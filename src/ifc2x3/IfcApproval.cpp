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



#include <ifc2x3/IfcApproval.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcApprovalActorRelationship.h>
#include <ifc2x3/IfcApprovalRelationship.h>
#include <ifc2x3/IfcDateTimeSelect.h>
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

IfcApproval::IfcApproval(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_description = Step::getUnset(m_description);
    m_approvalDateTime = NULL;
    m_approvalStatus = Step::getUnset(m_approvalStatus);
    m_approvalLevel = Step::getUnset(m_approvalLevel);
    m_approvalQualifier = Step::getUnset(m_approvalQualifier);
    m_name = Step::getUnset(m_name);
    m_identifier = Step::getUnset(m_identifier);
}

IfcApproval::~IfcApproval() {
}

bool IfcApproval::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcApproval(this);
}

const std::string &IfcApproval::type() const {
    return IfcApproval::s_type.getName();
}

const Step::ClassType &IfcApproval::getClassType() {
    return IfcApproval::s_type;
}

const Step::ClassType &IfcApproval::getType() const {
    return IfcApproval::s_type;
}

bool IfcApproval::isOfType(const Step::ClassType &t) const {
    return IfcApproval::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcText IfcApproval::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcApproval::getDescription() const {
    IfcApproval * deConstObject = const_cast< IfcApproval * > (this);
    return deConstObject->getDescription();
}

void IfcApproval::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcApproval::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcApproval::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcDateTimeSelect *IfcApproval::getApprovalDateTime() {
    if (Step::BaseObject::inited()) {
        return m_approvalDateTime.get();
    }
    else {
        return NULL;
    }
}

const IfcDateTimeSelect *IfcApproval::getApprovalDateTime() const {
    IfcApproval * deConstObject = const_cast< IfcApproval * > (this);
    return deConstObject->getApprovalDateTime();
}

void IfcApproval::setApprovalDateTime(const Step::RefPtr< IfcDateTimeSelect > &value) {
    m_approvalDateTime = value;
}

void IfcApproval::unsetApprovalDateTime() {
    m_approvalDateTime = Step::getUnset(getApprovalDateTime());
}

bool IfcApproval::testApprovalDateTime() const {
    return !Step::isUnset(getApprovalDateTime());
}

IfcLabel IfcApproval::getApprovalStatus() {
    if (Step::BaseObject::inited()) {
        return m_approvalStatus;
    }
    else {
        return Step::getUnset(m_approvalStatus);
    }
}

const IfcLabel IfcApproval::getApprovalStatus() const {
    IfcApproval * deConstObject = const_cast< IfcApproval * > (this);
    return deConstObject->getApprovalStatus();
}

void IfcApproval::setApprovalStatus(const IfcLabel &value) {
    m_approvalStatus = value;
}

void IfcApproval::unsetApprovalStatus() {
    m_approvalStatus = Step::getUnset(getApprovalStatus());
}

bool IfcApproval::testApprovalStatus() const {
    return !Step::isUnset(getApprovalStatus());
}

IfcLabel IfcApproval::getApprovalLevel() {
    if (Step::BaseObject::inited()) {
        return m_approvalLevel;
    }
    else {
        return Step::getUnset(m_approvalLevel);
    }
}

const IfcLabel IfcApproval::getApprovalLevel() const {
    IfcApproval * deConstObject = const_cast< IfcApproval * > (this);
    return deConstObject->getApprovalLevel();
}

void IfcApproval::setApprovalLevel(const IfcLabel &value) {
    m_approvalLevel = value;
}

void IfcApproval::unsetApprovalLevel() {
    m_approvalLevel = Step::getUnset(getApprovalLevel());
}

bool IfcApproval::testApprovalLevel() const {
    return !Step::isUnset(getApprovalLevel());
}

IfcText IfcApproval::getApprovalQualifier() {
    if (Step::BaseObject::inited()) {
        return m_approvalQualifier;
    }
    else {
        return Step::getUnset(m_approvalQualifier);
    }
}

const IfcText IfcApproval::getApprovalQualifier() const {
    IfcApproval * deConstObject = const_cast< IfcApproval * > (this);
    return deConstObject->getApprovalQualifier();
}

void IfcApproval::setApprovalQualifier(const IfcText &value) {
    m_approvalQualifier = value;
}

void IfcApproval::unsetApprovalQualifier() {
    m_approvalQualifier = Step::getUnset(getApprovalQualifier());
}

bool IfcApproval::testApprovalQualifier() const {
    return !Step::isUnset(getApprovalQualifier());
}

IfcLabel IfcApproval::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcApproval::getName() const {
    IfcApproval * deConstObject = const_cast< IfcApproval * > (this);
    return deConstObject->getName();
}

void IfcApproval::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcApproval::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcApproval::testName() const {
    return !Step::isUnset(getName());
}

IfcIdentifier IfcApproval::getIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_identifier;
    }
    else {
        return Step::getUnset(m_identifier);
    }
}

const IfcIdentifier IfcApproval::getIdentifier() const {
    IfcApproval * deConstObject = const_cast< IfcApproval * > (this);
    return deConstObject->getIdentifier();
}

void IfcApproval::setIdentifier(const IfcIdentifier &value) {
    m_identifier = value;
}

void IfcApproval::unsetIdentifier() {
    m_identifier = Step::getUnset(getIdentifier());
}

bool IfcApproval::testIdentifier() const {
    return !Step::isUnset(getIdentifier());
}

Inverse_Set_IfcApprovalActorRelationship_0_n &IfcApproval::getActors() {
    if (Step::BaseObject::inited()) {
        return m_actors;
    }
    else {
        m_actors.setUnset(true);
        return m_actors;
    }
}

const Inverse_Set_IfcApprovalActorRelationship_0_n &IfcApproval::getActors() const {
    IfcApproval * deConstObject = const_cast< IfcApproval * > (this);
    return deConstObject->getActors();
}

bool IfcApproval::testActors() const {
    return !m_actors.isUnset();
}

Inverse_Set_IfcApprovalRelationship_0_n &IfcApproval::getIsRelatedWith() {
    if (Step::BaseObject::inited()) {
        return m_isRelatedWith;
    }
    else {
        m_isRelatedWith.setUnset(true);
        return m_isRelatedWith;
    }
}

const Inverse_Set_IfcApprovalRelationship_0_n &IfcApproval::getIsRelatedWith() const {
    IfcApproval * deConstObject = const_cast< IfcApproval * > (this);
    return deConstObject->getIsRelatedWith();
}

bool IfcApproval::testIsRelatedWith() const {
    return !m_isRelatedWith.isUnset();
}

Inverse_Set_IfcApprovalRelationship_0_n &IfcApproval::getRelates() {
    if (Step::BaseObject::inited()) {
        return m_relates;
    }
    else {
        m_relates.setUnset(true);
        return m_relates;
    }
}

const Inverse_Set_IfcApprovalRelationship_0_n &IfcApproval::getRelates() const {
    IfcApproval * deConstObject = const_cast< IfcApproval * > (this);
    return deConstObject->getRelates();
}

bool IfcApproval::testRelates() const {
    return !m_relates.isUnset();
}

bool IfcApproval::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_approvalDateTime = NULL;
    }
    else {
        m_approvalDateTime = new IfcDateTimeSelect;
        if (arg[0] == '#') {
            m_approvalDateTime->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_approvalStatus = Step::getUnset(m_approvalStatus);
    }
    else {
        m_approvalStatus = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_approvalLevel = Step::getUnset(m_approvalLevel);
    }
    else {
        m_approvalLevel = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_approvalQualifier = Step::getUnset(m_approvalQualifier);
    }
    else {
        m_approvalQualifier = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_identifier = Step::getUnset(m_identifier);
    }
    else {
        m_identifier = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcApprovalActorRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_actors.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_actors.insert(static_cast< IfcApprovalActorRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcApprovalRelationship::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_isRelatedWith.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isRelatedWith.insert(static_cast< IfcApprovalRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcApprovalRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_relates.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_relates.insert(static_cast< IfcApprovalRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcApproval::copy(const IfcApproval &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setDescription(obj.m_description);
    m_approvalDateTime = new IfcDateTimeSelect;
    m_approvalDateTime->copy(*(obj.m_approvalDateTime.get()), copyop);
    setApprovalStatus(obj.m_approvalStatus);
    setApprovalLevel(obj.m_approvalLevel);
    setApprovalQualifier(obj.m_approvalQualifier);
    setName(obj.m_name);
    setIdentifier(obj.m_identifier);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcApproval::s_type("IfcApproval");
