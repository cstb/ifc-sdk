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



#include <ifc2x3/IfcPerson.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcActorRole.h>
#include <ifc2x3/IfcAddress.h>
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

Inverted_IfcPerson_Addresses_type::Inverted_IfcPerson_Addresses_type():
    mOwner(0)
{
}

void Inverted_IfcPerson_Addresses_type::setOwner(IfcPerson *owner) {
    mOwner = owner;
}

void Inverted_IfcPerson_Addresses_type::push_back(const Step::RefPtr< IfcAddress > &value) throw(std::out_of_range) {
    IfcAddress *inverse = const_cast< IfcAddress * > (value.get());
    List_IfcAddress_1_n::push_back(value);
    inverse->m_ofPerson.insert(mOwner);
}

Inverted_IfcPerson_Addresses_type::iterator Inverted_IfcPerson_Addresses_type::erase(const Step::RefPtr< IfcAddress > &value) {
    IfcAddress *inverse = const_cast< IfcAddress * > (value.get());
    inverse->m_ofPerson.erase(mOwner);
    return List_IfcAddress_1_n::erase(value);
}

void Inverted_IfcPerson_Addresses_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcPerson::IfcPerson(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_id = Step::getUnset(m_id);
    m_familyName = Step::getUnset(m_familyName);
    m_givenName = Step::getUnset(m_givenName);
    m_middleNames.setUnset(true);
    m_prefixTitles.setUnset(true);
    m_suffixTitles.setUnset(true);
    m_roles.setUnset(true);
    m_addresses.setUnset(true);
    m_addresses.setOwner(this);
}

IfcPerson::~IfcPerson() {
}

bool IfcPerson::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPerson(this);
}

const std::string &IfcPerson::type() const {
    return IfcPerson::s_type.getName();
}

const Step::ClassType &IfcPerson::getClassType() {
    return IfcPerson::s_type;
}

const Step::ClassType &IfcPerson::getType() const {
    return IfcPerson::s_type;
}

bool IfcPerson::isOfType(const Step::ClassType &t) const {
    return IfcPerson::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcIdentifier IfcPerson::getId() {
    if (Step::BaseObject::inited()) {
        return m_id;
    }
    else {
        return Step::getUnset(m_id);
    }
}

const IfcIdentifier IfcPerson::getId() const {
    IfcPerson * deConstObject = const_cast< IfcPerson * > (this);
    return deConstObject->getId();
}

void IfcPerson::setId(const IfcIdentifier &value) {
    m_id = value;
}

void IfcPerson::unsetId() {
    m_id = Step::getUnset(getId());
}

bool IfcPerson::testId() const {
    return !Step::isUnset(getId());
}

IfcLabel IfcPerson::getFamilyName() {
    if (Step::BaseObject::inited()) {
        return m_familyName;
    }
    else {
        return Step::getUnset(m_familyName);
    }
}

const IfcLabel IfcPerson::getFamilyName() const {
    IfcPerson * deConstObject = const_cast< IfcPerson * > (this);
    return deConstObject->getFamilyName();
}

void IfcPerson::setFamilyName(const IfcLabel &value) {
    m_familyName = value;
}

void IfcPerson::unsetFamilyName() {
    m_familyName = Step::getUnset(getFamilyName());
}

bool IfcPerson::testFamilyName() const {
    return !Step::isUnset(getFamilyName());
}

IfcLabel IfcPerson::getGivenName() {
    if (Step::BaseObject::inited()) {
        return m_givenName;
    }
    else {
        return Step::getUnset(m_givenName);
    }
}

const IfcLabel IfcPerson::getGivenName() const {
    IfcPerson * deConstObject = const_cast< IfcPerson * > (this);
    return deConstObject->getGivenName();
}

void IfcPerson::setGivenName(const IfcLabel &value) {
    m_givenName = value;
}

void IfcPerson::unsetGivenName() {
    m_givenName = Step::getUnset(getGivenName());
}

bool IfcPerson::testGivenName() const {
    return !Step::isUnset(getGivenName());
}

List_IfcLabel_1_n &IfcPerson::getMiddleNames() {
    if (Step::BaseObject::inited()) {
        return m_middleNames;
    }
    else {
        m_middleNames.setUnset(true);
        return m_middleNames;
    }
}

const List_IfcLabel_1_n &IfcPerson::getMiddleNames() const {
    IfcPerson * deConstObject = const_cast< IfcPerson * > (this);
    return deConstObject->getMiddleNames();
}

void IfcPerson::setMiddleNames(const List_IfcLabel_1_n &value) {
    m_middleNames = value;
}

void IfcPerson::unsetMiddleNames() {
    m_middleNames.clear();
    m_middleNames.setUnset(true);
}

bool IfcPerson::testMiddleNames() const {
    return !m_middleNames.isUnset();
}

List_IfcLabel_1_n &IfcPerson::getPrefixTitles() {
    if (Step::BaseObject::inited()) {
        return m_prefixTitles;
    }
    else {
        m_prefixTitles.setUnset(true);
        return m_prefixTitles;
    }
}

const List_IfcLabel_1_n &IfcPerson::getPrefixTitles() const {
    IfcPerson * deConstObject = const_cast< IfcPerson * > (this);
    return deConstObject->getPrefixTitles();
}

void IfcPerson::setPrefixTitles(const List_IfcLabel_1_n &value) {
    m_prefixTitles = value;
}

void IfcPerson::unsetPrefixTitles() {
    m_prefixTitles.clear();
    m_prefixTitles.setUnset(true);
}

bool IfcPerson::testPrefixTitles() const {
    return !m_prefixTitles.isUnset();
}

List_IfcLabel_1_n &IfcPerson::getSuffixTitles() {
    if (Step::BaseObject::inited()) {
        return m_suffixTitles;
    }
    else {
        m_suffixTitles.setUnset(true);
        return m_suffixTitles;
    }
}

const List_IfcLabel_1_n &IfcPerson::getSuffixTitles() const {
    IfcPerson * deConstObject = const_cast< IfcPerson * > (this);
    return deConstObject->getSuffixTitles();
}

void IfcPerson::setSuffixTitles(const List_IfcLabel_1_n &value) {
    m_suffixTitles = value;
}

void IfcPerson::unsetSuffixTitles() {
    m_suffixTitles.clear();
    m_suffixTitles.setUnset(true);
}

bool IfcPerson::testSuffixTitles() const {
    return !m_suffixTitles.isUnset();
}

List_IfcActorRole_1_n &IfcPerson::getRoles() {
    if (Step::BaseObject::inited()) {
        return m_roles;
    }
    else {
        m_roles.setUnset(true);
        return m_roles;
    }
}

const List_IfcActorRole_1_n &IfcPerson::getRoles() const {
    IfcPerson * deConstObject = const_cast< IfcPerson * > (this);
    return deConstObject->getRoles();
}

void IfcPerson::setRoles(const List_IfcActorRole_1_n &value) {
    m_roles = value;
}

void IfcPerson::unsetRoles() {
    m_roles.clear();
    m_roles.setUnset(true);
}

bool IfcPerson::testRoles() const {
    return !m_roles.isUnset();
}

List_IfcAddress_1_n &IfcPerson::getAddresses() {
    if (Step::BaseObject::inited()) {
        return m_addresses;
    }
    else {
        m_addresses.setUnset(true);
        return m_addresses;
    }
}

const List_IfcAddress_1_n &IfcPerson::getAddresses() const {
    IfcPerson * deConstObject = const_cast< IfcPerson * > (this);
    return deConstObject->getAddresses();
}

void IfcPerson::unsetAddresses() {
    m_addresses.clear();
    m_addresses.setUnset(true);
}

bool IfcPerson::testAddresses() const {
    return !m_addresses.isUnset();
}

Inverse_Set_IfcPersonAndOrganization_0_n &IfcPerson::getEngagedIn() {
    if (Step::BaseObject::inited()) {
        return m_engagedIn;
    }
    else {
        m_engagedIn.setUnset(true);
        return m_engagedIn;
    }
}

const Inverse_Set_IfcPersonAndOrganization_0_n &IfcPerson::getEngagedIn() const {
    IfcPerson * deConstObject = const_cast< IfcPerson * > (this);
    return deConstObject->getEngagedIn();
}

bool IfcPerson::testEngagedIn() const {
    return !m_engagedIn.isUnset();
}

bool IfcPerson::init() {
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
        m_familyName = Step::getUnset(m_familyName);
    }
    else {
        m_familyName = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_givenName = Step::getUnset(m_givenName);
    }
    else {
        m_givenName = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_middleNames.setUnset(true);
    }
    else {
        m_middleNames.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::String::fromSPF(str1);
                m_middleNames.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_prefixTitles.setUnset(true);
    }
    else {
        m_prefixTitles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::String::fromSPF(str1);
                m_prefixTitles.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_suffixTitles.setUnset(true);
    }
    else {
        m_suffixTitles.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::String::fromSPF(str1);
                m_suffixTitles.push_back(attr2);
            }
            else {
                break;
            }
        }
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
    inverses = m_args->getInverses(IfcPersonAndOrganization::getClassType(), 0);
    if (inverses) {
        unsigned int i;
        m_engagedIn.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_engagedIn.insert(static_cast< IfcPersonAndOrganization * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcPerson::copy(const IfcPerson &obj, const CopyOp &copyop) {
    Step::List< IfcLabel, 1 >::const_iterator it_m_middleNames;
    Step::List< IfcLabel, 1 >::const_iterator it_m_prefixTitles;
    Step::List< IfcLabel, 1 >::const_iterator it_m_suffixTitles;
    Step::List< Step::RefPtr< IfcActorRole >, 1 >::const_iterator it_m_roles;
    Step::List< Step::RefPtr< IfcAddress >, 1 >::const_iterator it_m_addresses;
    Step::BaseEntity::copy(obj, copyop);
    setId(obj.m_id);
    setFamilyName(obj.m_familyName);
    setGivenName(obj.m_givenName);
    for (it_m_middleNames = obj.m_middleNames.begin(); it_m_middleNames != obj.m_middleNames.end(); ++it_m_middleNames) {
        IfcLabel copyTarget = (*it_m_middleNames);
        m_middleNames.push_back(copyTarget);
    }
    for (it_m_prefixTitles = obj.m_prefixTitles.begin(); it_m_prefixTitles != obj.m_prefixTitles.end(); ++it_m_prefixTitles) {
        IfcLabel copyTarget = (*it_m_prefixTitles);
        m_prefixTitles.push_back(copyTarget);
    }
    for (it_m_suffixTitles = obj.m_suffixTitles.begin(); it_m_suffixTitles != obj.m_suffixTitles.end(); ++it_m_suffixTitles) {
        IfcLabel copyTarget = (*it_m_suffixTitles);
        m_suffixTitles.push_back(copyTarget);
    }
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

IFC2X3_EXPORT Step::ClassType IfcPerson::s_type("IfcPerson");
