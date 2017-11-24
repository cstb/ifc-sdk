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



#include <ifc2x3/IfcPropertyConstraintRelationship.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcConstraint.h>
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

IfcPropertyConstraintRelationship::IfcPropertyConstraintRelationship(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_relatingConstraint = NULL;
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
}

IfcPropertyConstraintRelationship::~IfcPropertyConstraintRelationship() {
}

bool IfcPropertyConstraintRelationship::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPropertyConstraintRelationship(this);
}

const std::string &IfcPropertyConstraintRelationship::type() const {
    return IfcPropertyConstraintRelationship::s_type.getName();
}

const Step::ClassType &IfcPropertyConstraintRelationship::getClassType() {
    return IfcPropertyConstraintRelationship::s_type;
}

const Step::ClassType &IfcPropertyConstraintRelationship::getType() const {
    return IfcPropertyConstraintRelationship::s_type;
}

bool IfcPropertyConstraintRelationship::isOfType(const Step::ClassType &t) const {
    return IfcPropertyConstraintRelationship::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcConstraint *IfcPropertyConstraintRelationship::getRelatingConstraint() {
    if (Step::BaseObject::inited()) {
        return m_relatingConstraint.get();
    }
    else {
        return NULL;
    }
}

const IfcConstraint *IfcPropertyConstraintRelationship::getRelatingConstraint() const {
    IfcPropertyConstraintRelationship * deConstObject = const_cast< IfcPropertyConstraintRelationship * > (this);
    return deConstObject->getRelatingConstraint();
}

void IfcPropertyConstraintRelationship::setRelatingConstraint(const Step::RefPtr< IfcConstraint > &value) {
    if (m_relatingConstraint.valid()) {
        m_relatingConstraint->m_propertiesForConstraint.erase(this);
    }
    if (value.valid()) {
        value->m_propertiesForConstraint.insert(this);
    }
    m_relatingConstraint = value;
}

void IfcPropertyConstraintRelationship::unsetRelatingConstraint() {
    m_relatingConstraint = Step::getUnset(getRelatingConstraint());
}

bool IfcPropertyConstraintRelationship::testRelatingConstraint() const {
    return !Step::isUnset(getRelatingConstraint());
}

Set_IfcProperty_1_n &IfcPropertyConstraintRelationship::getRelatedProperties() {
    if (Step::BaseObject::inited()) {
        return m_relatedProperties;
    }
    else {
        m_relatedProperties.setUnset(true);
        return m_relatedProperties;
    }
}

const Set_IfcProperty_1_n &IfcPropertyConstraintRelationship::getRelatedProperties() const {
    IfcPropertyConstraintRelationship * deConstObject = const_cast< IfcPropertyConstraintRelationship * > (this);
    return deConstObject->getRelatedProperties();
}

void IfcPropertyConstraintRelationship::setRelatedProperties(const Set_IfcProperty_1_n &value) {
    m_relatedProperties = value;
}

void IfcPropertyConstraintRelationship::unsetRelatedProperties() {
    m_relatedProperties.clear();
    m_relatedProperties.setUnset(true);
}

bool IfcPropertyConstraintRelationship::testRelatedProperties() const {
    return !m_relatedProperties.isUnset();
}

IfcLabel IfcPropertyConstraintRelationship::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcPropertyConstraintRelationship::getName() const {
    IfcPropertyConstraintRelationship * deConstObject = const_cast< IfcPropertyConstraintRelationship * > (this);
    return deConstObject->getName();
}

void IfcPropertyConstraintRelationship::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcPropertyConstraintRelationship::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcPropertyConstraintRelationship::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcPropertyConstraintRelationship::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcPropertyConstraintRelationship::getDescription() const {
    IfcPropertyConstraintRelationship * deConstObject = const_cast< IfcPropertyConstraintRelationship * > (this);
    return deConstObject->getDescription();
}

void IfcPropertyConstraintRelationship::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcPropertyConstraintRelationship::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcPropertyConstraintRelationship::testDescription() const {
    return !Step::isUnset(getDescription());
}

bool IfcPropertyConstraintRelationship::init() {
    std::string arg;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingConstraint = NULL;
    }
    else {
        m_relatingConstraint = static_cast< IfcConstraint * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatedProperties.setUnset(true);
    }
    else {
        m_relatedProperties.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcProperty > attr2;
                attr2 = static_cast< IfcProperty * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_relatedProperties.insert(attr2);
            }
            else {
                break;
            }
        }
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

void IfcPropertyConstraintRelationship::copy(const IfcPropertyConstraintRelationship &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcProperty >, 1 >::const_iterator it_m_relatedProperties;
    Step::BaseEntity::copy(obj, copyop);
    setRelatingConstraint((IfcConstraint*)copyop(obj.m_relatingConstraint.get()));
    for (it_m_relatedProperties = obj.m_relatedProperties.begin(); it_m_relatedProperties != obj.m_relatedProperties.end(); ++it_m_relatedProperties) {
        Step::RefPtr< IfcProperty > copyTarget = (IfcProperty *) (copyop((*it_m_relatedProperties).get()));
        m_relatedProperties.insert(copyTarget.get());
    }
    setName(obj.m_name);
    setDescription(obj.m_description);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPropertyConstraintRelationship::s_type("IfcPropertyConstraintRelationship");
