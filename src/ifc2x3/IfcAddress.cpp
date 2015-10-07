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



#include <ifc2x3/IfcAddress.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcOrganization.h>
#include <ifc2x3/IfcPerson.h>
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

IfcAddress::IfcAddress(Step::Id id, Step::SPFData *args) : Step::BaseEntity(id, args) {
    m_purpose = IfcAddressTypeEnum_UNSET;
    m_description = Step::getUnset(m_description);
    m_userDefinedPurpose = Step::getUnset(m_userDefinedPurpose);
}

IfcAddress::~IfcAddress() {
}

bool IfcAddress::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcAddress(this);
}

const std::string &IfcAddress::type() const {
    return IfcAddress::s_type.getName();
}

const Step::ClassType &IfcAddress::getClassType() {
    return IfcAddress::s_type;
}

const Step::ClassType &IfcAddress::getType() const {
    return IfcAddress::s_type;
}

bool IfcAddress::isOfType(const Step::ClassType &t) const {
    return IfcAddress::s_type == t ? true : Step::BaseObject::isOfType(t);
}

IfcAddressTypeEnum IfcAddress::getPurpose() {
    if (Step::BaseObject::inited()) {
        return m_purpose;
    }
    else {
        return IfcAddressTypeEnum_UNSET;
    }
}

const IfcAddressTypeEnum IfcAddress::getPurpose() const {
    IfcAddress * deConstObject = const_cast< IfcAddress * > (this);
    return deConstObject->getPurpose();
}

void IfcAddress::setPurpose(IfcAddressTypeEnum value) {
    m_purpose = value;
}

void IfcAddress::unsetPurpose() {
    m_purpose = IfcAddressTypeEnum_UNSET;
}

bool IfcAddress::testPurpose() const {
    return getPurpose() != IfcAddressTypeEnum_UNSET;
}

IfcText IfcAddress::getDescription() {
    if (Step::BaseObject::inited()) {
        return m_description;
    }
    else {
        return Step::getUnset(m_description);
    }
}

const IfcText IfcAddress::getDescription() const {
    IfcAddress * deConstObject = const_cast< IfcAddress * > (this);
    return deConstObject->getDescription();
}

void IfcAddress::setDescription(const IfcText &value) {
    m_description = value;
}

void IfcAddress::unsetDescription() {
    m_description = Step::getUnset(getDescription());
}

bool IfcAddress::testDescription() const {
    return !Step::isUnset(getDescription());
}

IfcLabel IfcAddress::getUserDefinedPurpose() {
    if (Step::BaseObject::inited()) {
        return m_userDefinedPurpose;
    }
    else {
        return Step::getUnset(m_userDefinedPurpose);
    }
}

const IfcLabel IfcAddress::getUserDefinedPurpose() const {
    IfcAddress * deConstObject = const_cast< IfcAddress * > (this);
    return deConstObject->getUserDefinedPurpose();
}

void IfcAddress::setUserDefinedPurpose(const IfcLabel &value) {
    m_userDefinedPurpose = value;
}

void IfcAddress::unsetUserDefinedPurpose() {
    m_userDefinedPurpose = Step::getUnset(getUserDefinedPurpose());
}

bool IfcAddress::testUserDefinedPurpose() const {
    return !Step::isUnset(getUserDefinedPurpose());
}

Inverse_Set_IfcPerson_0_n &IfcAddress::getOfPerson() {
    if (Step::BaseObject::inited()) {
        return m_ofPerson;
    }
    else {
        m_ofPerson.setUnset(true);
        return m_ofPerson;
    }
}

const Inverse_Set_IfcPerson_0_n &IfcAddress::getOfPerson() const {
    IfcAddress * deConstObject = const_cast< IfcAddress * > (this);
    return deConstObject->getOfPerson();
}

bool IfcAddress::testOfPerson() const {
    return !m_ofPerson.isUnset();
}

Inverse_Set_IfcOrganization_0_n &IfcAddress::getOfOrganization() {
    if (Step::BaseObject::inited()) {
        return m_ofOrganization;
    }
    else {
        m_ofOrganization.setUnset(true);
        return m_ofOrganization;
    }
}

const Inverse_Set_IfcOrganization_0_n &IfcAddress::getOfOrganization() const {
    IfcAddress * deConstObject = const_cast< IfcAddress * > (this);
    return deConstObject->getOfOrganization();
}

bool IfcAddress::testOfOrganization() const {
    return !m_ofOrganization.isUnset();
}

bool IfcAddress::init() {
    std::string arg;
    std::vector< Step::Id > *inverses;
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_purpose = IfcAddressTypeEnum_UNSET;
    }
    else {
        if (arg == ".OFFICE.") {
            m_purpose = IfcAddressTypeEnum_OFFICE;
        }
        else if (arg == ".SITE.") {
            m_purpose = IfcAddressTypeEnum_SITE;
        }
        else if (arg == ".HOME.") {
            m_purpose = IfcAddressTypeEnum_HOME;
        }
        else if (arg == ".DISTRIBUTIONPOINT.") {
            m_purpose = IfcAddressTypeEnum_DISTRIBUTIONPOINT;
        }
        else if (arg == ".USERDEFINED.") {
            m_purpose = IfcAddressTypeEnum_USERDEFINED;
        }
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
        m_userDefinedPurpose = Step::getUnset(m_userDefinedPurpose);
    }
    else {
        m_userDefinedPurpose = Step::String::fromSPF(arg);
    }
    inverses = m_args->getInverses(IfcPerson::getClassType(), 7);
    if (inverses) {
        unsigned int i;
        m_ofPerson.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_ofPerson.insert(static_cast< IfcPerson * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    inverses = m_args->getInverses(IfcOrganization::getClassType(), 4);
    if (inverses) {
        unsigned int i;
        m_ofOrganization.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_ofOrganization.insert(static_cast< IfcOrganization * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcAddress::copy(const IfcAddress &obj, const CopyOp &copyop) {
    Step::BaseEntity::copy(obj, copyop);
    setPurpose(obj.m_purpose);
    setDescription(obj.m_description);
    setUserDefinedPurpose(obj.m_userDefinedPurpose);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcAddress::s_type("IfcAddress");
