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



#include <ifc2x3/IfcPropertyDependencyRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcProperty.h>
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

IfcPropertyDependencyRelationship::IfcPropertyDependencyRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_dependingProperty = NULL;
    m_dependantProperty = NULL;
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_expression = Step::getUnset(m_expression);
}

IfcPropertyDependencyRelationship::~IfcPropertyDependencyRelationship() {
}

bool IfcPropertyDependencyRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPropertyDependencyRelationship(this);
}

const std::string &IfcPropertyDependencyRelationship::type() const {
    return IfcPropertyDependencyRelationship::s_type.getName();
}

const Step::ClassType &IfcPropertyDependencyRelationship::getClassType() {
    return IfcPropertyDependencyRelationship::s_type;
}

const Step::ClassType &IfcPropertyDependencyRelationship::getType() const {
    return IfcPropertyDependencyRelationship::s_type;
}

bool IfcPropertyDependencyRelationship::isOfType(const Step::ClassType &t) const {
    return IfcPropertyDependencyRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcProperty *IfcPropertyDependencyRelationship::getDependingProperty() {
    if (Step::BaseObject::inited()) {
        return m_dependingProperty.get();
    }
    else {
        return NULL;
    }
}

const IfcProperty *IfcPropertyDependencyRelationship::getDependingProperty() const {
    IfcPropertyDependencyRelationship * deConstObject = const_cast< IfcPropertyDependencyRelationship * > (this);
    return deConstObject->getDependingProperty();
}

void IfcPropertyDependencyRelationship::setDependingProperty(const Step::RefPtr< IfcProperty > &value) {
    if (m_dependingProperty.valid()) {
        m_dependingProperty->getPropertyForDependance().erase(this);
    }
    if (value.valid()) {
        value->getPropertyForDependance().insert(this);
    }
    m_dependingProperty = value;
}

void IfcPropertyDependencyRelationship::unsetDependingProperty() {
    m_dependingProperty = Step::getUnset(getDependingProperty());
}

bool IfcPropertyDependencyRelationship::testDependingProperty() const {
    return !Step::isUnset(getDependingProperty());
}

IfcProperty *IfcPropertyDependencyRelationship::getDependantProperty() {
    if (Step::BaseObject::inited()) {
        return m_dependantProperty.get();
    }
    else {
        return NULL;
    }
}

const IfcProperty *IfcPropertyDependencyRelationship::getDependantProperty() const {
    IfcPropertyDependencyRelationship * deConstObject = const_cast< IfcPropertyDependencyRelationship * > (this);
    return deConstObject->getDependantProperty();
}

void IfcPropertyDependencyRelationship::setDependantProperty(const Step::RefPtr< IfcProperty > &value) {
    if (m_dependantProperty.valid()) {
        m_dependantProperty->getPropertyDependsOn().erase(this);
    }
    if (value.valid()) {
        value->getPropertyDependsOn().insert(this);
    }
    m_dependantProperty = value;
}

void IfcPropertyDependencyRelationship::unsetDependantProperty() {
    m_dependantProperty = Step::getUnset(getDependantProperty());
}

bool IfcPropertyDependencyRelationship::testDependantProperty() const {
    return !Step::isUnset(getDependantProperty());
}

IfcLabel IfcPropertyDependencyRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcPropertyDependencyRelationship::getName() const {
    IfcPropertyDependencyRelationship * deConstObject = const_cast< IfcPropertyDependencyRelationship * > (this);
    return deConstObject->getName();
}

void IfcPropertyDependencyRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcPropertyDependencyRelationship::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcPropertyDependencyRelationship::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcPropertyDependencyRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcPropertyDependencyRelationship::getDescription() const {
    IfcPropertyDependencyRelationship * deConstObject = const_cast< IfcPropertyDependencyRelationship * > (this);
    return deConstObject->getDescription();
}

void IfcPropertyDependencyRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcPropertyDependencyRelationship::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcPropertyDependencyRelationship::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcText IfcPropertyDependencyRelationship::getExpression() {
    if (Step::BaseObject::inited()) {
        return m_expression;
    }
    else {
        return Step::getUnset(m_expression);
    }
}

const IfcText IfcPropertyDependencyRelationship::getExpression() const {
    IfcPropertyDependencyRelationship * deConstObject = const_cast< IfcPropertyDependencyRelationship * > (this);
    return deConstObject->getExpression();
}

void IfcPropertyDependencyRelationship::setExpression(const IfcText &value) {
    m_expression = value;
}

void IfcPropertyDependencyRelationship::unsetExpression() {
    m_expression = Step::getUnset(getExpression());
}

bool IfcPropertyDependencyRelationship::testExpression() const {
    return !Step::isUnset(getExpression());
}

bool IfcPropertyDependencyRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dependingProperty = NULL;
    }
    else {
        m_dependingProperty = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_dependantProperty = NULL;
    }
    else {
        m_dependantProperty = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(arg)));
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
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_expression = Step::getUnset(m_expression);
    }
    else {
        m_expression = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcPropertyDependencyRelationship::copy(const IfcPropertyDependencyRelationship &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setDependingProperty((IfcProperty*)copyop(obj.m_dependingProperty.get()));
    setDependantProperty((IfcProperty*)copyop(obj.m_dependantProperty.get()));
    setName(obj.m_name);
    setDescription(obj.m_description);
    setExpression(obj.m_expression);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPropertyDependencyRelationship::s_type("IfcPropertyDependencyRelationship");
