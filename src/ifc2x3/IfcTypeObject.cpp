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



#include <ifc2x3/IfcTypeObject.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcObjectDefinition.h>
#include <ifc2x3/IfcPropertySetDefinition.h>
#include <ifc2x3/IfcRelDefinesByType.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcTypeObject_HasPropertySets_type::Inverted_IfcTypeObject_HasPropertySets_type():
    mOwner(0)
{
}

void Inverted_IfcTypeObject_HasPropertySets_type::setOwner(IfcTypeObject *owner) {
    mOwner = owner;
}

void Inverted_IfcTypeObject_HasPropertySets_type::insert(const Step::RefPtr< IfcPropertySetDefinition > &value) throw(std::out_of_range) {
    IfcPropertySetDefinition *inverse = const_cast< IfcPropertySetDefinition * > (value.get());
    Set_IfcPropertySetDefinition_1_n::insert(value);
    inverse->m_definesType.insert(mOwner);
}

Inverted_IfcTypeObject_HasPropertySets_type::size_type Inverted_IfcTypeObject_HasPropertySets_type::erase(const Step::RefPtr< IfcPropertySetDefinition > &value) {
    IfcPropertySetDefinition *inverse = const_cast< IfcPropertySetDefinition * > (value.get());
    inverse->m_definesType.erase(mOwner);
    return Set_IfcPropertySetDefinition_1_n::erase(value);
}

void Inverted_IfcTypeObject_HasPropertySets_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcTypeObject::IfcTypeObject(Step::Id id, Step::SPFData *args) : IfcObjectDefinition(id, args) {
    m_applicableOccurrence = Step::getUnset(m_applicableOccurrence);
    m_hasPropertySets.setUnset(true);
    m_hasPropertySets.setOwner(this);
}

IfcTypeObject::~IfcTypeObject() {
}

bool IfcTypeObject::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTypeObject(this);
}

const std::string &IfcTypeObject::type() const {
    return IfcTypeObject::s_type.getName();
}

const Step::ClassType &IfcTypeObject::getClassType() {
    return IfcTypeObject::s_type;
}

const Step::ClassType &IfcTypeObject::getType() const {
    return IfcTypeObject::s_type;
}

bool IfcTypeObject::isOfType(const Step::ClassType &t) const {
    return IfcTypeObject::s_type == t ? true : IfcObjectDefinition::isOfType(t);
}

IfcLabel IfcTypeObject::getApplicableOccurrence() {
    if (Step::BaseObject::inited()) {
        return m_applicableOccurrence;
    }
    else {
        return Step::getUnset(m_applicableOccurrence);
    }
}

const IfcLabel IfcTypeObject::getApplicableOccurrence() const {
    IfcTypeObject * deConstObject = const_cast< IfcTypeObject * > (this);
    return deConstObject->getApplicableOccurrence();
}

void IfcTypeObject::setApplicableOccurrence(const IfcLabel &value) {
    m_applicableOccurrence = value;
}

void IfcTypeObject::unsetApplicableOccurrence() {
    m_applicableOccurrence = Step::getUnset(getApplicableOccurrence());
}

bool IfcTypeObject::testApplicableOccurrence() const {
    return !Step::isUnset(getApplicableOccurrence());
}

Set_IfcPropertySetDefinition_1_n &IfcTypeObject::getHasPropertySets() {
    if (Step::BaseObject::inited()) {
        return m_hasPropertySets;
    }
    else {
        m_hasPropertySets.setUnset(true);
        return m_hasPropertySets;
    }
}

const Set_IfcPropertySetDefinition_1_n &IfcTypeObject::getHasPropertySets() const {
    IfcTypeObject * deConstObject = const_cast< IfcTypeObject * > (this);
    return deConstObject->getHasPropertySets();
}

void IfcTypeObject::unsetHasPropertySets() {
    m_hasPropertySets.clear();
    m_hasPropertySets.setUnset(true);
}

bool IfcTypeObject::testHasPropertySets() const {
    return !m_hasPropertySets.isUnset();
}

Inverse_Set_IfcRelDefinesByType_0_1 &IfcTypeObject::getObjectTypeOf() {
    if (Step::BaseObject::inited()) {
        return m_objectTypeOf;
    }
    else {
        m_objectTypeOf.setUnset(true);
        return m_objectTypeOf;
    }
}

const Inverse_Set_IfcRelDefinesByType_0_1 &IfcTypeObject::getObjectTypeOf() const {
    IfcTypeObject * deConstObject = const_cast< IfcTypeObject * > (this);
    return deConstObject->getObjectTypeOf();
}

bool IfcTypeObject::testObjectTypeOf() const {
    return !m_objectTypeOf.isUnset();
}

bool IfcTypeObject::init() {
    bool status = IfcObjectDefinition::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_applicableOccurrence = Step::getUnset(m_applicableOccurrence);
    }
    else {
        m_applicableOccurrence = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hasPropertySets.setUnset(true);
    }
    else {
        m_hasPropertySets.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcPropertySetDefinition > attr2;
                attr2 = static_cast< IfcPropertySetDefinition * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_hasPropertySets.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    inverses = m_args->getInverses(IfcRelDefinesByType::getClassType(), 5);
    if (inverses) {
        unsigned int i;
        m_objectTypeOf.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_objectTypeOf.insert(static_cast< IfcRelDefinesByType * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcTypeObject::copy(const IfcTypeObject &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPropertySetDefinition >, 1 >::const_iterator it_m_hasPropertySets;
    IfcObjectDefinition::copy(obj, copyop);
    setApplicableOccurrence(obj.m_applicableOccurrence);
    for (it_m_hasPropertySets = obj.m_hasPropertySets.begin(); it_m_hasPropertySets != obj.m_hasPropertySets.end(); ++it_m_hasPropertySets) {
        Step::RefPtr< IfcPropertySetDefinition > copyTarget = (IfcPropertySetDefinition *) (copyop((*it_m_hasPropertySets).get()));
        m_hasPropertySets.insert(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTypeObject::s_type("IfcTypeObject");
