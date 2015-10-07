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



#include <ifc2x3/IfcMaterial.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcMaterialClassificationRelationship.h>
#include <ifc2x3/IfcMaterialDefinitionRepresentation.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/String.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcMaterial::IfcMaterial(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_name = Step::getUnset(m_name);
}

IfcMaterial::~IfcMaterial() {
}

bool IfcMaterial::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcMaterial(this);
}

const std::string &IfcMaterial::type() const {
    return IfcMaterial::s_type.getName();
}

const Step::ClassType &IfcMaterial::getClassType() {
    return IfcMaterial::s_type;
}

const Step::ClassType &IfcMaterial::getType() const {
    return IfcMaterial::s_type;
}

bool IfcMaterial::isOfType(const Step::ClassType &t) const {
    return IfcMaterial::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcLabel IfcMaterial::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcMaterial::getName() const {
    IfcMaterial * deConstObject = const_cast< IfcMaterial * > (this);
    return deConstObject->getName();
}

void IfcMaterial::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcMaterial::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcMaterial::testName() const {
    return !Step::isUnset(getName());
}

Inverse_Set_IfcMaterialDefinitionRepresentation_0_1 &IfcMaterial::getHasRepresentation() {
    if (Step::BaseObject::inited()) {
        return m_hasRepresentation;
    }
    else {
        m_hasRepresentation.setUnset(true);
        return m_hasRepresentation;
    }
}

const Inverse_Set_IfcMaterialDefinitionRepresentation_0_1 &IfcMaterial::getHasRepresentation() const {
    IfcMaterial * deConstObject = const_cast< IfcMaterial * > (this);
    return deConstObject->getHasRepresentation();
}

bool IfcMaterial::testHasRepresentation() const {
    return !m_hasRepresentation.isUnset();
}

Inverse_Set_IfcMaterialClassificationRelationship_0_1 &IfcMaterial::getClassifiedAs() {
    if (Step::BaseObject::inited()) {
        return m_classifiedAs;
    }
    else {
        m_classifiedAs.setUnset(true);
        return m_classifiedAs;
    }
}

const Inverse_Set_IfcMaterialClassificationRelationship_0_1 &IfcMaterial::getClassifiedAs() const {
    IfcMaterial * deConstObject = const_cast< IfcMaterial * > (this);
    return deConstObject->getClassifiedAs();
}

bool IfcMaterial::testClassifiedAs() const {
    return !m_classifiedAs.isUnset();
}

bool IfcMaterial::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_name = Step::getUnset(m_name);
    }
    else {
        m_name = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcMaterialDefinitionRepresentation::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_hasRepresentation.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_hasRepresentation.insert(static_cast< IfcMaterialDefinitionRepresentation * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcMaterialClassificationRelationship::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_classifiedAs.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_classifiedAs.insert(static_cast< IfcMaterialClassificationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcMaterial::copy(const IfcMaterial &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setName(obj.m_name);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcMaterial::s_type("IfcMaterial");
