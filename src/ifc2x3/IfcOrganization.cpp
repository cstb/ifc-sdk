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



#include <ifc2x3/IfcOrganization.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/IfcOrganizationRelationship.h>
#include <ifc2x3/IfcPersonAndOrganization.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseCopyOp.h>
#include <Step/BaseEntity.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>
#include <vector>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcOrganization_Addresses_type::Inverted_IfcOrganization_Addresses_type():
    mOwner(0)
{
}

void Inverted_IfcOrganization_Addresses_type::setOwner(IfcOrganization *owner) {
    mOwner = owner;
}

void Inverted_IfcOrganization_Addresses_type::push_back(const Step::RefPtr< IfcAddress > &value) throw(std::out_of_range) {
    IfcAddress *inverse = const_cast< IfcAddress * > (value.get());
    List_IfcAddress_1_n::push_back(value);
    inverse->m_ofOrganization.insert(mOwner);
}

Inverted_IfcOrganization_Addresses_type::iterator Inverted_IfcOrganization_Addresses_type::erase(const Step::RefPtr< IfcAddress > &value) {
    IfcAddress *inverse = const_cast< IfcAddress * > (value.get());
    inverse->m_ofOrganization.erase(mOwner);
    return List_IfcAddress_1_n::erase(value);
}

void Inverted_IfcOrganization_Addresses_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcOrganization::IfcOrganization(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_id = Step::getUnset(m_id);
    m_name = Step::getUnset(m_name);
    m_description = Step::getUnset(m_description);
    m_roles.setUnset(true);
    m_addresses.setUnset(true);
    m_addresses.setOwner(this);
}

IfcOrganization::~IfcOrganization() {
}

bool IfcOrganization::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcOrganization(this);
}

const std::string &IfcOrganization::type() const {
    return IfcOrganization::s_type.getName();
}

const Step::ClassType &IfcOrganization::getClassType() {
    return IfcOrganization::s_type;
}

const Step::ClassType &IfcOrganization::getType() const {
    return IfcOrganization::s_type;
}

bool IfcOrganization::isOfType(const Step::ClassType &t) const {
    return IfcOrganization::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcOrganization::getId() {
    if (Step::BaseObject::inited()) {
        return m_id;
    }
    else {
        return Step::getUnset(m_id);
    }
}

const IfcIdentifier IfcOrganization::getId() const {
    IfcOrganization * deConstObject = const_cast< IfcOrganization * > (this);
    return deConstObject->getId();
}

void IfcOrganization::setId(const IfcIdentifier &value) {
    m_id = value;
}

void IfcOrganization::unsetId() {
    m_id = Step::getUnset(getId());
}

bool IfcOrganization::testId() const {
    return !Step::isUnset(getId());
}

IfcLabel IfcOrganization::getName() {
    if (Step::BaseObject::inited()) {
        return m_name;
    }
    else {
        return Step::getUnset(m_name);
    }
}

const IfcLabel IfcOrganization::getName() const {
    IfcOrganization * deConstObject = const_cast< IfcOrganization * > (this);
    return deConstObject->getName();
}

void IfcOrganization::setName(const IfcLabel &value) {
    m_name = value;
}

void IfcOrganization::unsetName() {
    m_name = Step::getUnset(getName());
}

bool IfcOrganization::testName() const {
    return !Step::isUnset(getName());
}

IfcText IfcOrganization::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcOrganization::getDescription() const {
    IfcOrganization * deConstObject = const_cast< IfcOrganization * > (this);
    return deConstObject->getDescription();
}

void IfcOrganization::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcOrganization::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcOrganization::testDescription() const {
    return !Step::isUnset(getDescription());
}

List_IfcActorRole_1_n &IfcOrganization::getRoles() {
    if (Step::BaseObject::inited()) {
        return m_roles;
    }
    else {
        m_roles.setUnset(true);
        return m_roles;
    }
}

const List_IfcActorRole_1_n &IfcOrganization::getRoles() const {
    IfcOrganization * deConstObject = const_cast< IfcOrganization * > (this);
    return deConstObject->getRoles();
}

void IfcOrganization::setRoles(const List_IfcActorRole_1_n &value) {
    m_roles = value;
}

void IfcOrganization::unsetRoles() {
    m_roles.clear();
    m_roles.setUnset(true);
}

bool IfcOrganization::testRoles() const {
    return !m_roles.isUnset();
}

List_IfcAddress_1_n &IfcOrganization::getAddresses() {
    if (Step::BaseObject::inited()) {
        return m_addresses;
    }
    else {
        m_addresses.setUnset(true);
        return m_addresses;
    }
}

const List_IfcAddress_1_n &IfcOrganization::getAddresses() const {
    IfcOrganization * deConstObject = const_cast< IfcOrganization * > (this);
    return deConstObject->getAddresses();
}

void IfcOrganization::unsetAddresses() {
    m_addresses.clear();
    m_addresses.setUnset(true);
}

bool IfcOrganization::testAddresses() const {
    return !m_addresses.isUnset();
}

Inverse_Set_IfcOrganizationRelationship_0_n &IfcOrganization::getIsRelatedBy() {
    if (Step::BaseObject::inited()) {
        return m_isRelatedBy;
    }
    else {
        m_isRelatedBy.setUnset(true);
        return m_isRelatedBy;
    }
}

const Inverse_Set_IfcOrganizationRelationship_0_n &IfcOrganization::getIsRelatedBy() const {
    IfcOrganization * deConstObject = const_cast< IfcOrganization * > (this);
    return deConstObject->getIsRelatedBy();
}

bool IfcOrganization::testIsRelatedBy() const {
    return !m_isRelatedBy.isUnset();
}

Inverse_Set_IfcOrganizationRelationship_0_n &IfcOrganization::getRelates() {
    if (Step::BaseObject::inited()) {
        return m_relates;
    }
    else {
        m_relates.setUnset(true);
        return m_relates;
    }
}

const Inverse_Set_IfcOrganizationRelationship_0_n &IfcOrganization::getRelates() const {
    IfcOrganization * deConstObject = const_cast< IfcOrganization * > (this);
    return deConstObject->getRelates();
}

bool IfcOrganization::testRelates() const {
    return !m_relates.isUnset();
}

Inverse_Set_IfcPersonAndOrganization_0_n &IfcOrganization::getEngages() {
    if (Step::BaseObject::inited()) {
        return m_engages;
    }
    else {
        m_engages.setUnset(true);
        return m_engages;
    }
}

const Inverse_Set_IfcPersonAndOrganization_0_n &IfcOrganization::getEngages() const {
    IfcOrganization * deConstObject = const_cast< IfcOrganization * > (this);
    return deConstObject->getEngages();
}

bool IfcOrganization::testEngages() const {
    return !m_engages.isUnset();
}

bool IfcOrganization::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_id = Step::getUnset(m_id);
    }
    else {
        m_id = Step::String::fromSPF(arg);
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
        m_roles.setUnset(true);
    }
    else {
        m_roles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcActorRole > attr2;
                attr2 = static_cast< IfcActorRole * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_roles.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_addresses.setUnset(true);
    }
    else {
        m_addresses.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcAddress > attr2;
                attr2 = static_cast< IfcAddress * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_addresses.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    inverses = m_args->getInverses(IfcOrganizationRelationship::getClassType(), 3);
    if (inverses) {
        unsigned int i;
        m_isRelatedBy.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isRelatedBy.insert(static_cast< IfcOrganizationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcOrganizationRelationship::getClassType(), 2);
    if (inverses) {
        unsigned int i;
        m_relates.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_relates.insert(static_cast< IfcOrganizationRelationship * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcPersonAndOrganization::getClassType(), 1);
    if (inverses) {
        unsigned int i;
        m_engages.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_engages.insert(static_cast< IfcPersonAndOrganization * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcOrganization::copy(const IfcOrganization &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcActorRole >, 1 >::const_iterator it_m_roles;
    Step::List< Step::RefPtr< IfcAddress >, 1 >::const_iterator it_m_addresses;
    Step::BaseEntity::copy(obj, copyop);
    setId(obj.m_id);
    setName(obj.m_name);
    setDescription(obj.m_description);
    for (it_m_roles = obj.m_roles.begin(); it_m_roles != obj.m_roles.end(); ++it_m_roles) {
        Step::RefPtr< IfcActorRole > copyTarget = (IfcActorRole *) (copyop((*it_m_roles).get()));
        m_roles.push_back(copyTarget.get());
    }
    for (it_m_addresses = obj.m_addresses.begin(); it_m_addresses != obj.m_addresses.end(); ++it_m_addresses) {
        Step::RefPtr< IfcAddress > copyTarget = (IfcAddress *) (copyop((*it_m_addresses).get()));
        m_addresses.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_EXPORT Step::ClassType IfcOrganization::s_type("IfcOrganization");
