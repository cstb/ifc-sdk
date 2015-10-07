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



#include <ifc2x3/IfcApprovalActorRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcActorSelect.h>
#include <ifc2x3/IfcApproval.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>


#include <stdlib.h>
#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcApprovalActorRelationship::IfcApprovalActorRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_actor = NULL;
    m_approval = NULL;
    m_role = NULL;
}

IfcApprovalActorRelationship::~IfcApprovalActorRelationship() {
}

bool IfcApprovalActorRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcApprovalActorRelationship(this);
}

const std::string &IfcApprovalActorRelationship::type() const {
    return IfcApprovalActorRelationship::s_type.getName();
}

const Step::ClassType &IfcApprovalActorRelationship::getClassType() {
    return IfcApprovalActorRelationship::s_type;
}

const Step::ClassType &IfcApprovalActorRelationship::getType() const {
    return IfcApprovalActorRelationship::s_type;
}

bool IfcApprovalActorRelationship::isOfType(const Step::ClassType &t) const {
    return IfcApprovalActorRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcActorSelect *IfcApprovalActorRelationship::getActor() {
    if (Step::BaseObject::inited()) {
        return m_actor.get();
    }
    else {
        return NULL;
    }
}

const IfcActorSelect *IfcApprovalActorRelationship::getActor() const {
    IfcApprovalActorRelationship * deConstObject = const_cast< IfcApprovalActorRelationship * > (this);
    return deConstObject->getActor();
}

void IfcApprovalActorRelationship::setActor(const Step::RefPtr< IfcActorSelect > &value) {
    m_actor = value;
}

void IfcApprovalActorRelationship::unsetActor() {
    m_actor = Step::getUnset(getActor());
}

bool IfcApprovalActorRelationship::testActor() const {
    return !Step::isUnset(getActor());
}

IfcApproval *IfcApprovalActorRelationship::getApproval() {
    if (Step::BaseObject::inited()) {
        return m_approval.get();
    }
    else {
        return NULL;
    }
}

const IfcApproval *IfcApprovalActorRelationship::getApproval() const {
    IfcApprovalActorRelationship * deConstObject = const_cast< IfcApprovalActorRelationship * > (this);
    return deConstObject->getApproval();
}

void IfcApprovalActorRelationship::setApproval(const Step::RefPtr< IfcApproval > &value) {
    if (m_approval.valid()) {
        m_approval->m_actors.erase(this);
    }
    if (value.valid()) {
        value->m_actors.insert(this);
    }
    m_approval = value;
}

void IfcApprovalActorRelationship::unsetApproval() {
    m_approval = Step::getUnset(getApproval());
}

bool IfcApprovalActorRelationship::testApproval() const {
    return !Step::isUnset(getApproval());
}

IfcActorRole *IfcApprovalActorRelationship::getRole() {
    if (Step::BaseObject::inited()) {
        return m_role.get();
    }
    else {
        return NULL;
    }
}

const IfcActorRole *IfcApprovalActorRelationship::getRole() const {
    IfcApprovalActorRelationship * deConstObject = const_cast< IfcApprovalActorRelationship * > (this);
    return deConstObject->getRole();
}

void IfcApprovalActorRelationship::setRole(const Step::RefPtr< IfcActorRole > &value) {
    m_role = value;
}

void IfcApprovalActorRelationship::unsetRole() {
    m_role = Step::getUnset(getRole());
}

bool IfcApprovalActorRelationship::testRole() const {
    return !Step::isUnset(getRole());
}

bool IfcApprovalActorRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_actor = NULL;
    }
    else {
        m_actor = new IfcActorSelect;
        if (arg[0] == '#') {
            m_actor->set(m_expressDataSet->get((Step::Id)atol(arg.c_str() + 1)));
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
        m_approval = NULL;
    }
    else {
        m_approval = static_cast< IfcApproval * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_role = NULL;
    }
    else {
        m_role = static_cast< IfcActorRole * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcApprovalActorRelationship::copy(const IfcApprovalActorRelationship &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    m_actor = new IfcActorSelect;
    m_actor->copy(*(obj.m_actor.get()), copyop);
    setApproval((IfcApproval*)copyop(obj.m_approval.get()));
    setRole((IfcActorRole*)copyop(obj.m_role.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcApprovalActorRelationship::s_type("IfcApprovalActorRelationship");
