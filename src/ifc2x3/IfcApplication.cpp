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



#include <ifc2x3/IfcApplication.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcOrganization.h>
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

IfcApplication::IfcApplication(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_applicationDeveloper = NULL;
    m_version = Step::getUnset(m_version);
    m_applicationFullName = Step::getUnset(m_applicationFullName);
    m_applicationIdentifier = Step::getUnset(m_applicationIdentifier);
}

IfcApplication::~IfcApplication() {
}

bool IfcApplication::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcApplication(this);
}

const std::string &IfcApplication::type() const {
    return IfcApplication::s_type.getName();
}

const Step::ClassType &IfcApplication::getClassType() {
    return IfcApplication::s_type;
}

const Step::ClassType &IfcApplication::getType() const {
    return IfcApplication::s_type;
}

bool IfcApplication::isOfType(const Step::ClassType &t) const {
    return IfcApplication::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcOrganization *IfcApplication::getApplicationDeveloper() {
    if (Step::BaseObject::inited()) {
        return m_applicationDeveloper.get();
    }
    else {
        return NULL;
    }
}

const IfcOrganization *IfcApplication::getApplicationDeveloper() const {
    IfcApplication * deConstObject = const_cast< IfcApplication * > (this);
    return deConstObject->getApplicationDeveloper();
}

void IfcApplication::setApplicationDeveloper(const Step::RefPtr< IfcOrganization > &value) {
    m_applicationDeveloper = value;
}

void IfcApplication::unsetApplicationDeveloper() {
    m_applicationDeveloper = Step::getUnset(getApplicationDeveloper());
}

bool IfcApplication::testApplicationDeveloper() const {
    return !Step::isUnset(getApplicationDeveloper());
}

IfcLabel IfcApplication::getVersion() {
    if (Step::BaseObject::inited()) {
        return m_version;
    }
    else {
        return Step::getUnset(m_version);
    }
}

const IfcLabel IfcApplication::getVersion() const {
    IfcApplication * deConstObject = const_cast< IfcApplication * > (this);
    return deConstObject->getVersion();
}

void IfcApplication::setVersion(const IfcLabel &value) {
    m_version = value;
}

void IfcApplication::unsetVersion() {
    m_version = Step::getUnset(getVersion());
}

bool IfcApplication::testVersion() const {
    return !Step::isUnset(getVersion());
}

IfcLabel IfcApplication::getApplicationFullName() {
    if (Step::BaseObject::inited()) {
        return m_applicationFullName;
    }
    else {
        return Step::getUnset(m_applicationFullName);
    }
}

const IfcLabel IfcApplication::getApplicationFullName() const {
    IfcApplication * deConstObject = const_cast< IfcApplication * > (this);
    return deConstObject->getApplicationFullName();
}

void IfcApplication::setApplicationFullName(const IfcLabel &value) {
    m_applicationFullName = value;
}

void IfcApplication::unsetApplicationFullName() {
    m_applicationFullName = Step::getUnset(getApplicationFullName());
}

bool IfcApplication::testApplicationFullName() const {
    return !Step::isUnset(getApplicationFullName());
}

IfcIdentifier IfcApplication::getApplicationIdentifier() {
    if (Step::BaseObject::inited()) {
        return m_applicationIdentifier;
    }
    else {
        return Step::getUnset(m_applicationIdentifier);
    }
}

const IfcIdentifier IfcApplication::getApplicationIdentifier() const {
    IfcApplication * deConstObject = const_cast< IfcApplication * > (this);
    return deConstObject->getApplicationIdentifier();
}

void IfcApplication::setApplicationIdentifier(const IfcIdentifier &value) {
    m_applicationIdentifier = value;
}

void IfcApplication::unsetApplicationIdentifier() {
    m_applicationIdentifier = Step::getUnset(getApplicationIdentifier());
}

bool IfcApplication::testApplicationIdentifier() const {
    return !Step::isUnset(getApplicationIdentifier());
}

bool IfcApplication::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicationDeveloper = NULL;
    }
    else {
        m_applicationDeveloper = static_cast< IfcOrganization * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_version = Step::getUnset(m_version);
    }
    else {
        m_version = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicationFullName = Step::getUnset(m_applicationFullName);
    }
    else {
        m_applicationFullName = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicationIdentifier = Step::getUnset(m_applicationIdentifier);
    }
    else {
        m_applicationIdentifier = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcApplication::copy(const IfcApplication &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setApplicationDeveloper((IfcOrganization*)copyop(obj.m_applicationDeveloper.get()));
    setVersion(obj.m_version);
    setApplicationFullName(obj.m_applicationFullName);
    setApplicationIdentifier(obj.m_applicationIdentifier);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcApplication::s_type("IfcApplication");
