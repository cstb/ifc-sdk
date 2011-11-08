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

#ifdef ENABLE_PRECOMPILED_HEADER
#include "precompiled.h"
#endif

#include "ifc2x3/IfcProperty.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcComplexProperty.h"
#include "ifc2x3/IfcPropertyDependencyRelationship.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/String.h>
#include <Step/logger.h>


#include <string>
#include <vector>

using namespace ifc2x3;

IfcProperty::IfcProperty(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
}

IfcProperty::~IfcProperty() {
}

bool IfcProperty::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcProperty(this);
}

const std::string &IfcProperty::type() const {
    return IfcProperty::s_type.getName();
}

const Step::ClassType &IfcProperty::getClassType() {
    return IfcProperty::s_type;
}

const Step::ClassType &IfcProperty::getType() const {
    return IfcProperty::s_type;
}

bool IfcProperty::isOfType(const Step::ClassType &t) const {
    return IfcProperty::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcProperty::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcIdentifier IfcProperty::getName() const {
    IfcProperty * deConstObject = const_cast< IfcProperty * > (this);
    return deConstObject->getName();
}

void IfcProperty::setName(const IfcIdentifier &value) {
    m_name = value;
}

void IfcProperty::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcProperty::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcProperty::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcProperty::getDescription() const {
    IfcProperty * deConstObject = const_cast< IfcProperty * > (this);
    return deConstObject->getDescription();
}

void IfcProperty::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcProperty::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcProperty::testDescription() const {
    return !Step::isUnset(getDescription());
}

Inverse_Set_IfcPropertyDependencyRelationship_0_n &IfcProperty::getPropertyForDependance() {
    if (Step::BaseObject::inited()) {
        return m_propertyForDependance;
    }
    else {
        m_propertyForDependance.setUnset(true);
        return m_propertyForDependance;
    }
}

const Inverse_Set_IfcPropertyDependencyRelationship_0_n &IfcProperty::getPropertyForDependance() const {
    IfcProperty * deConstObject = const_cast< IfcProperty * > (this);
    return deConstObject->getPropertyForDependance();
}

bool IfcProperty::testPropertyForDependance() const {
    return !Step::isUnset(getPropertyForDependance());
}

Inverse_Set_IfcPropertyDependencyRelationship_0_n &IfcProperty::getPropertyDependsOn() {
    if (Step::BaseObject::inited()) {
        return m_propertyDependsOn;
    }
    else {
        m_propertyDependsOn.setUnset(true);
        return m_propertyDependsOn;
    }
}

const Inverse_Set_IfcPropertyDependencyRelationship_0_n &IfcProperty::getPropertyDependsOn() const {
    IfcProperty * deConstObject = const_cast< IfcProperty * > (this);
    return deConstObject->getPropertyDependsOn();
}

bool IfcProperty::testPropertyDependsOn() const {
    return !Step::isUnset(getPropertyDependsOn());
}

Inverse_Set_IfcComplexProperty_0_1 &IfcProperty::getPartOfComplex() {
    if (Step::BaseObject::inited()) {
        return m_partOfComplex;
    }
    else {
        m_partOfComplex.setUnset(true);
        return m_partOfComplex;
    }
}

const Inverse_Set_IfcComplexProperty_0_1 &IfcProperty::getPartOfComplex() const {
    IfcProperty * deConstObject = const_cast< IfcProperty * > (this);
    return deConstObject->getPartOfComplex();
}

bool IfcProperty::testPartOfComplex() const {
    return !Step::isUnset(getPartOfComplex());
}

bool IfcProperty::init() {
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
    inverses = m_args->getInverses(IfcPropertyDependencyRelationship::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_propertyForDependance.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_propertyForDependance.insert(static_cast< IfcPropertyDependencyRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPropertyDependencyRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_propertyDependsOn.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_propertyDependsOn.insert(static_cast< IfcPropertyDependencyRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcComplexProperty::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_partOfComplex.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_partOfComplex.insert(static_cast< IfcComplexProperty * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcProperty::copy(const IfcProperty &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcProperty::s_type("IfcProperty");
