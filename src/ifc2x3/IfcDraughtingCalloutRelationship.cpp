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



#include <ifc2x3/IfcDraughtingCalloutRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcDraughtingCallout.h>
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

IfcDraughtingCalloutRelationship::IfcDraughtingCalloutRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_relatingDraughtingCallout = NULL;
    m_relatedDraughtingCallout = NULL;
}

IfcDraughtingCalloutRelationship::~IfcDraughtingCalloutRelationship() {
}

bool IfcDraughtingCalloutRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcDraughtingCalloutRelationship(this);
}

const std::string &IfcDraughtingCalloutRelationship::type() const {
    return IfcDraughtingCalloutRelationship::s_type.getName();
}

const Step::ClassType &IfcDraughtingCalloutRelationship::getClassType() {
    return IfcDraughtingCalloutRelationship::s_type;
}

const Step::ClassType &IfcDraughtingCalloutRelationship::getType() const {
    return IfcDraughtingCalloutRelationship::s_type;
}

bool IfcDraughtingCalloutRelationship::isOfType(const Step::ClassType &t) const {
    return IfcDraughtingCalloutRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcDraughtingCalloutRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcDraughtingCalloutRelationship::getName() const {
    IfcDraughtingCalloutRelationship * deConstObject = const_cast< IfcDraughtingCalloutRelationship * > (this);
    return deConstObject->getName();
}

void IfcDraughtingCalloutRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcDraughtingCalloutRelationship::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcDraughtingCalloutRelationship::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcDraughtingCalloutRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcDraughtingCalloutRelationship::getDescription() const {
    IfcDraughtingCalloutRelationship * deConstObject = const_cast< IfcDraughtingCalloutRelationship * > (this);
    return deConstObject->getDescription();
}

void IfcDraughtingCalloutRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcDraughtingCalloutRelationship::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcDraughtingCalloutRelationship::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatingDraughtingCallout() {
    if (Step::BaseObject::inited()) {
        return m_relatingDraughtingCallout.get();
    }
    else {
        return NULL;
    }
}

const IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatingDraughtingCallout() const {
    IfcDraughtingCalloutRelationship * deConstObject = const_cast< IfcDraughtingCalloutRelationship * > (this);
    return deConstObject->getRelatingDraughtingCallout();
}

void IfcDraughtingCalloutRelationship::setRelatingDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value) {
    if (m_relatingDraughtingCallout.valid()) {
        m_relatingDraughtingCallout->m_isRelatedToCallout.erase(this);
    }
    if (value.valid()) {
        value->m_isRelatedToCallout.insert(this);
    }
    m_relatingDraughtingCallout = value;
}

void IfcDraughtingCalloutRelationship::unsetRelatingDraughtingCallout() {
    m_relatingDraughtingCallout = Step::getUnset(getRelatingDraughtingCallout());
}

bool IfcDraughtingCalloutRelationship::testRelatingDraughtingCallout() const {
    return !Step::isUnset(getRelatingDraughtingCallout());
}

IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatedDraughtingCallout() {
    if (Step::BaseObject::inited()) {
        return m_relatedDraughtingCallout.get();
    }
    else {
        return NULL;
    }
}

const IfcDraughtingCallout *IfcDraughtingCalloutRelationship::getRelatedDraughtingCallout() const {
    IfcDraughtingCalloutRelationship * deConstObject = const_cast< IfcDraughtingCalloutRelationship * > (this);
    return deConstObject->getRelatedDraughtingCallout();
}

void IfcDraughtingCalloutRelationship::setRelatedDraughtingCallout(const Step::RefPtr< IfcDraughtingCallout > &value) {
    if (m_relatedDraughtingCallout.valid()) {
        m_relatedDraughtingCallout->m_isRelatedFromCallout.erase(this);
    }
    if (value.valid()) {
        value->m_isRelatedFromCallout.insert(this);
    }
    m_relatedDraughtingCallout = value;
}

void IfcDraughtingCalloutRelationship::unsetRelatedDraughtingCallout() {
    m_relatedDraughtingCallout = Step::getUnset(getRelatedDraughtingCallout());
}

bool IfcDraughtingCalloutRelationship::testRelatedDraughtingCallout() const {
    return !Step::isUnset(getRelatedDraughtingCallout());
}

bool IfcDraughtingCalloutRelationship::init() {
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
        m_relatingDraughtingCallout = NULL;
    }
    else {
        m_relatingDraughtingCallout = static_cast< IfcDraughtingCallout * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedDraughtingCallout = NULL;
    }
    else {
        m_relatedDraughtingCallout = static_cast< IfcDraughtingCallout * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcDraughtingCalloutRelationship::copy(const IfcDraughtingCalloutRelationship &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    setRelatingDraughtingCallout((IfcDraughtingCallout*)copyop(obj.m_relatingDraughtingCallout.get()));
    setRelatedDraughtingCallout((IfcDraughtingCallout*)copyop(obj.m_relatedDraughtingCallout.get()));
    return;
}

IFC2X3_EXPORT Step::ClassType IfcDraughtingCalloutRelationship::s_type("IfcDraughtingCalloutRelationship");
