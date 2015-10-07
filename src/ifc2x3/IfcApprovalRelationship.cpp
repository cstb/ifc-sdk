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



#include <ifc2x3/IfcApprovalRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcApproval.h>
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

IfcApprovalRelationship::IfcApprovalRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relatedApproval = NULL;
    m_relatingApproval = NULL;
    m_description = Step::getUnset(m_description);
    m_name = Step::getUnset(m_name);
}

IfcApprovalRelationship::~IfcApprovalRelationship() {
}

bool IfcApprovalRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcApprovalRelationship(this);
}

const std::string &IfcApprovalRelationship::type() const {
    return IfcApprovalRelationship::s_type.getName();
}

const Step::ClassType &IfcApprovalRelationship::getClassType() {
    return IfcApprovalRelationship::s_type;
}

const Step::ClassType &IfcApprovalRelationship::getType() const {
    return IfcApprovalRelationship::s_type;
}

bool IfcApprovalRelationship::isOfType(const Step::ClassType &t) const {
    return IfcApprovalRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcApproval *IfcApprovalRelationship::getRelatedApproval() {
    if (Step::BaseObject::inited()) {
        return m_relatedApproval.get();
    }
    else {
        return NULL;
    }
}

const IfcApproval *IfcApprovalRelationship::getRelatedApproval() const {
    IfcApprovalRelationship * deConstObject = const_cast< IfcApprovalRelationship * > (this);
    return deConstObject->getRelatedApproval();
}

void IfcApprovalRelationship::setRelatedApproval(const Step::RefPtr< IfcApproval > &value) {
    if (m_relatedApproval.valid()) {
        m_relatedApproval->m_isRelatedWith.erase(this);
    }
    if (value.valid()) {
        value->m_isRelatedWith.insert(this);
    }
    m_relatedApproval = value;
}

void IfcApprovalRelationship::unsetRelatedApproval() {
    m_relatedApproval = Step::getUnset(getRelatedApproval());
}

bool IfcApprovalRelationship::testRelatedApproval() const {
    return !Step::isUnset(getRelatedApproval());
}

IfcApproval *IfcApprovalRelationship::getRelatingApproval() {
    if (Step::BaseObject::inited()) {
        return m_relatingApproval.get();
    }
    else {
        return NULL;
    }
}

const IfcApproval *IfcApprovalRelationship::getRelatingApproval() const {
    IfcApprovalRelationship * deConstObject = const_cast< IfcApprovalRelationship * > (this);
    return deConstObject->getRelatingApproval();
}

void IfcApprovalRelationship::setRelatingApproval(const Step::RefPtr< IfcApproval > &value) {
    if (m_relatingApproval.valid()) {
        m_relatingApproval->m_relates.erase(this);
    }
    if (value.valid()) {
        value->m_relates.insert(this);
    }
    m_relatingApproval = value;
}

void IfcApprovalRelationship::unsetRelatingApproval() {
    m_relatingApproval = Step::getUnset(getRelatingApproval());
}

bool IfcApprovalRelationship::testRelatingApproval() const {
    return !Step::isUnset(getRelatingApproval());
}

IfcText IfcApprovalRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcApprovalRelationship::getDescription() const {
    IfcApprovalRelationship * deConstObject = const_cast< IfcApprovalRelationship * > (this);
    return deConstObject->getDescription();
}

void IfcApprovalRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcApprovalRelationship::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcApprovalRelationship::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcLabel IfcApprovalRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcApprovalRelationship::getName() const {
    IfcApprovalRelationship * deConstObject = const_cast< IfcApprovalRelationship * > (this);
    return deConstObject->getName();
}

void IfcApprovalRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcApprovalRelationship::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcApprovalRelationship::testName() const {
    return !Step::isUnset(getName());
}

bool IfcApprovalRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedApproval = NULL;
    }
    else {
        m_relatedApproval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingApproval = NULL;
    }
    else {
        m_relatingApproval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcApprovalRelationship::copy(const IfcApprovalRelationship &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setRelatedApproval((IfcApproval*)copyop(obj.m_relatedApproval.get()));
    setRelatingApproval((IfcApproval*)copyop(obj.m_relatingApproval.get()));
    setDescription(obj.m_description);
    setName(obj.m_name);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcApprovalRelationship::s_type("IfcApprovalRelationship");
