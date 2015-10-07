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



#include <ifc2x3/IfcRoot.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcOwnerHistory.h>
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

IfcRoot::IfcRoot(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_globalId = Step::getUnset(m_globalId);
    m_ownerHistory = NULL;
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
}

IfcRoot::~IfcRoot() {
}

bool IfcRoot::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRoot(this);
}

const std::string &IfcRoot::type() const {
    return IfcRoot::s_type.getName();
}

const Step::ClassType &IfcRoot::getClassType() {
    return IfcRoot::s_type;
}

const Step::ClassType &IfcRoot::getType() const {
    return IfcRoot::s_type;
}

bool IfcRoot::isOfType(const Step::ClassType &t) const {
    return IfcRoot::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcGloballyUniqueId IfcRoot::getGlobalId() {
    if (Step::BaseObject::inited()) {
        return m_globalId;
    }
    else {
        return Step::getUnset(m_globalId);
    }
}

const IfcGloballyUniqueId IfcRoot::getGlobalId() const {
    IfcRoot * deConstObject = const_cast< IfcRoot * > (this);
    return deConstObject->getGlobalId();
}

void IfcRoot::setGlobalId(const IfcGloballyUniqueId &value) {
    m_globalId = value;
}

void IfcRoot::unsetGlobalId() {
    m_globalId = Step::getUnset(getGlobalId());
}

bool IfcRoot::testGlobalId() const {
    return !Step::isUnset(getGlobalId());
}

IfcOwnerHistory *IfcRoot::getOwnerHistory() {
    if (Step::BaseObject::inited()) {
        return m_ownerHistory.get();
    }
    else {
        return NULL;
    }
}

const IfcOwnerHistory *IfcRoot::getOwnerHistory() const {
    IfcRoot * deConstObject = const_cast< IfcRoot * > (this);
    return deConstObject->getOwnerHistory();
}

void IfcRoot::setOwnerHistory(const Step::RefPtr< IfcOwnerHistory > &value) {
    m_ownerHistory = value;
}

void IfcRoot::unsetOwnerHistory() {
    m_ownerHistory = Step::getUnset(getOwnerHistory());
}

bool IfcRoot::testOwnerHistory() const {
    return !Step::isUnset(getOwnerHistory());
}

IfcLabel IfcRoot::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcRoot::getName() const {
    IfcRoot * deConstObject = const_cast< IfcRoot * > (this);
    return deConstObject->getName();
}

void IfcRoot::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcRoot::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcRoot::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcRoot::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcRoot::getDescription() const {
    IfcRoot * deConstObject = const_cast< IfcRoot * > (this);
    return deConstObject->getDescription();
}

void IfcRoot::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcRoot::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcRoot::testDescription() const {
    return !Step::isUnset(getDescription());
}

bool IfcRoot::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_globalId = Step::getUnset(m_globalId);
    }
    else {
        m_globalId = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_ownerHistory = NULL;
    }
    else {
        m_ownerHistory = static_cast< IfcOwnerHistory * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
        m_description = Step::getUnset(m_description);
    }
    else {
        m_description = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcRoot::copy(const IfcRoot &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setGlobalId(obj.m_globalId);
    setOwnerHistory((IfcOwnerHistory*)copyop(obj.m_ownerHistory.get()));
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcRoot::s_type("IfcRoot");
