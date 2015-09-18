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



#include <ifc2x3/IfcPropertySetDefinition.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPropertyDefinition.h>
#include <ifc2x3/IfcRelDefinesByProperties.h>
#include <ifc2x3/IfcTypeObject.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

IfcPropertySetDefinition::IfcPropertySetDefinition(Step::Id id, Step::SPFData *args) : IfcPropertyDefinition(id, args) {
}

IfcPropertySetDefinition::~IfcPropertySetDefinition() {
}

bool IfcPropertySetDefinition::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPropertySetDefinition(this);
}

const std::string &IfcPropertySetDefinition::type() const {
    return IfcPropertySetDefinition::s_type.getName();
}

const Step::ClassType &IfcPropertySetDefinition::getClassType() {
    return IfcPropertySetDefinition::s_type;
}

const Step::ClassType &IfcPropertySetDefinition::getType() const {
    return IfcPropertySetDefinition::s_type;
}

bool IfcPropertySetDefinition::isOfType(const Step::ClassType &t) const {
    return IfcPropertySetDefinition::s_type == t ? true : IfcPropertyDefinition::isOfType(t);
}

Inverse_Set_IfcRelDefinesByProperties_0_1 &IfcPropertySetDefinition::getPropertyDefinitionOf() {
    if (Step::BaseObject::inited()) {
        return m_propertyDefinitionOf;
    }
    else {
        m_propertyDefinitionOf.setUnset(true);
        return m_propertyDefinitionOf;
    }
}

const Inverse_Set_IfcRelDefinesByProperties_0_1 &IfcPropertySetDefinition::getPropertyDefinitionOf() const {
    IfcPropertySetDefinition * deConstObject = const_cast< IfcPropertySetDefinition * > (this);
    return deConstObject->getPropertyDefinitionOf();
}

bool IfcPropertySetDefinition::testPropertyDefinitionOf() const {
    return !m_propertyDefinitionOf.isUnset();
}

Inverse_Set_IfcTypeObject_0_1 &IfcPropertySetDefinition::getDefinesType() {
    if (Step::BaseObject::inited()) {
        return m_definesType;
    }
    else {
        m_definesType.setUnset(true);
        return m_definesType;
    }
}

const Inverse_Set_IfcTypeObject_0_1 &IfcPropertySetDefinition::getDefinesType() const {
    IfcPropertySetDefinition * deConstObject = const_cast< IfcPropertySetDefinition * > (this);
    return deConstObject->getDefinesType();
}

bool IfcPropertySetDefinition::testDefinesType() const {
    return !m_definesType.isUnset();
}

bool IfcPropertySetDefinition::init() {
    bool status = IfcPropertyDefinition::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    inverses = m_args->getInverses(IfcRelDefinesByProperties::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_propertyDefinitionOf.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_propertyDefinitionOf.insert(static_cast< IfcRelDefinesByProperties * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcTypeObject::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_definesType.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_definesType.insert(static_cast< IfcTypeObject * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPropertySetDefinition::copy(const IfcPropertySetDefinition &obj, const CopyOp &copyop) {
    IfcPropertyDefinition::copy(obj, copyop);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPropertySetDefinition::s_type("IfcPropertySetDefinition");
