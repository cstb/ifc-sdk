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



#include <ifc2x3/IfcTelecomAddress.h>

#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcAddress.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

IfcTelecomAddress::IfcTelecomAddress(Step::Id id, Step::SPFData *args) : IfcAddress(id, args) {
    m_telephoneNumbers.setUnset(true);
    m_facsimileNumbers.setUnset(true);
    m_pagerNumber = Step::getUnset(m_pagerNumber);
    m_electronicMailAddresses.setUnset(true);
    m_wWWHomePageURL = Step::getUnset(m_wWWHomePageURL);
}

IfcTelecomAddress::~IfcTelecomAddress() {
}

bool IfcTelecomAddress::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTelecomAddress(this);
}

const std::string &IfcTelecomAddress::type() const {
    return IfcTelecomAddress::s_type.getName();
}

const Step::ClassType &IfcTelecomAddress::getClassType() {
    return IfcTelecomAddress::s_type;
}

const Step::ClassType &IfcTelecomAddress::getType() const {
    return IfcTelecomAddress::s_type;
}

bool IfcTelecomAddress::isOfType(const Step::ClassType &t) const {
    return IfcTelecomAddress::s_type == t ? true : IfcAddress::isOfType(t);
}

List_IfcLabel_1_n &IfcTelecomAddress::getTelephoneNumbers() {
    if (Step::BaseObject::inited()) {
        return m_telephoneNumbers;
    }
    else {
        m_telephoneNumbers.setUnset(true);
        return m_telephoneNumbers;
    }
}

const List_IfcLabel_1_n &IfcTelecomAddress::getTelephoneNumbers() const {
    IfcTelecomAddress * deConstObject = const_cast< IfcTelecomAddress * > (this);
    return deConstObject->getTelephoneNumbers();
}

void IfcTelecomAddress::setTelephoneNumbers(const List_IfcLabel_1_n &value) {
    m_telephoneNumbers = value;
}

void IfcTelecomAddress::unsetTelephoneNumbers() {
    m_telephoneNumbers.clear();
    m_telephoneNumbers.setUnset(true);
}

bool IfcTelecomAddress::testTelephoneNumbers() const {
    return !m_telephoneNumbers.isUnset();
}

List_IfcLabel_1_n &IfcTelecomAddress::getFacsimileNumbers() {
    if (Step::BaseObject::inited()) {
        return m_facsimileNumbers;
    }
    else {
        m_facsimileNumbers.setUnset(true);
        return m_facsimileNumbers;
    }
}

const List_IfcLabel_1_n &IfcTelecomAddress::getFacsimileNumbers() const {
    IfcTelecomAddress * deConstObject = const_cast< IfcTelecomAddress * > (this);
    return deConstObject->getFacsimileNumbers();
}

void IfcTelecomAddress::setFacsimileNumbers(const List_IfcLabel_1_n &value) {
    m_facsimileNumbers = value;
}

void IfcTelecomAddress::unsetFacsimileNumbers() {
    m_facsimileNumbers.clear();
    m_facsimileNumbers.setUnset(true);
}

bool IfcTelecomAddress::testFacsimileNumbers() const {
    return !m_facsimileNumbers.isUnset();
}

IfcLabel IfcTelecomAddress::getPagerNumber() {
    if (Step::BaseObject::inited()) {
        return m_pagerNumber;
    }
    else {
        return Step::getUnset(m_pagerNumber);
    }
}

const IfcLabel IfcTelecomAddress::getPagerNumber() const {
    IfcTelecomAddress * deConstObject = const_cast< IfcTelecomAddress * > (this);
    return deConstObject->getPagerNumber();
}

void IfcTelecomAddress::setPagerNumber(const IfcLabel &value) {
    m_pagerNumber = value;
}

void IfcTelecomAddress::unsetPagerNumber() {
    m_pagerNumber = Step::getUnset(getPagerNumber());
}

bool IfcTelecomAddress::testPagerNumber() const {
    return !Step::isUnset(getPagerNumber());
}

List_IfcLabel_1_n &IfcTelecomAddress::getElectronicMailAddresses() {
    if (Step::BaseObject::inited()) {
        return m_electronicMailAddresses;
    }
    else {
        m_electronicMailAddresses.setUnset(true);
        return m_electronicMailAddresses;
    }
}

const List_IfcLabel_1_n &IfcTelecomAddress::getElectronicMailAddresses() const {
    IfcTelecomAddress * deConstObject = const_cast< IfcTelecomAddress * > (this);
    return deConstObject->getElectronicMailAddresses();
}

void IfcTelecomAddress::setElectronicMailAddresses(const List_IfcLabel_1_n &value) {
    m_electronicMailAddresses = value;
}

void IfcTelecomAddress::unsetElectronicMailAddresses() {
    m_electronicMailAddresses.clear();
    m_electronicMailAddresses.setUnset(true);
}

bool IfcTelecomAddress::testElectronicMailAddresses() const {
    return !m_electronicMailAddresses.isUnset();
}

IfcLabel IfcTelecomAddress::getWWWHomePageURL() {
    if (Step::BaseObject::inited()) {
        return m_wWWHomePageURL;
    }
    else {
        return Step::getUnset(m_wWWHomePageURL);
    }
}

const IfcLabel IfcTelecomAddress::getWWWHomePageURL() const {
    IfcTelecomAddress * deConstObject = const_cast< IfcTelecomAddress * > (this);
    return deConstObject->getWWWHomePageURL();
}

void IfcTelecomAddress::setWWWHomePageURL(const IfcLabel &value) {
    m_wWWHomePageURL = value;
}

void IfcTelecomAddress::unsetWWWHomePageURL() {
    m_wWWHomePageURL = Step::getUnset(getWWWHomePageURL());
}

bool IfcTelecomAddress::testWWWHomePageURL() const {
    return !Step::isUnset(getWWWHomePageURL());
}

bool IfcTelecomAddress::init() {
    bool status = IfcAddress::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_telephoneNumbers.setUnset(true);
    }
    else {
        m_telephoneNumbers.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::String::fromSPF(str1);
                m_telephoneNumbers.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_facsimileNumbers.setUnset(true);
    }
    else {
        m_facsimileNumbers.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::String::fromSPF(str1);
                m_facsimileNumbers.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_pagerNumber = Step::getUnset(m_pagerNumber);
    }
    else {
        m_pagerNumber = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_electronicMailAddresses.setUnset(true);
    }
    else {
        m_electronicMailAddresses.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::String::fromSPF(str1);
                m_electronicMailAddresses.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_wWWHomePageURL = Step::getUnset(m_wWWHomePageURL);
    }
    else {
        m_wWWHomePageURL = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcTelecomAddress::copy(const IfcTelecomAddress &obj, const CopyOp &copyop) {
    Step::List< IfcLabel, 1 >::const_iterator it_m_telephoneNumbers;
    Step::List< IfcLabel, 1 >::const_iterator it_m_facsimileNumbers;
    Step::List< IfcLabel, 1 >::const_iterator it_m_electronicMailAddresses;
    IfcAddress::copy(obj, copyop);
    for (it_m_telephoneNumbers = obj.m_telephoneNumbers.begin(); it_m_telephoneNumbers != obj.m_telephoneNumbers.end(); ++it_m_telephoneNumbers) {
        IfcLabel copyTarget = (*it_m_telephoneNumbers);
        m_telephoneNumbers.push_back(copyTarget);
    }
    for (it_m_facsimileNumbers = obj.m_facsimileNumbers.begin(); it_m_facsimileNumbers != obj.m_facsimileNumbers.end(); ++it_m_facsimileNumbers) {
        IfcLabel copyTarget = (*it_m_facsimileNumbers);
        m_facsimileNumbers.push_back(copyTarget);
    }
    setPagerNumber(obj.m_pagerNumber);
    for (it_m_electronicMailAddresses = obj.m_electronicMailAddresses.begin(); it_m_electronicMailAddresses != obj.m_electronicMailAddresses.end(); ++it_m_electronicMailAddresses) {
        IfcLabel copyTarget = (*it_m_electronicMailAddresses);
        m_electronicMailAddresses.push_back(copyTarget);
    }
    setWWWHomePageURL(obj.m_wWWHomePageURL);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcTelecomAddress::s_type("IfcTelecomAddress");
