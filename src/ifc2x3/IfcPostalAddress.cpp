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



#include <ifc2x3/IfcPostalAddress.h>

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

IfcPostalAddress::IfcPostalAddress(Step::Id id, Step::SPFData *args) : IfcAddress(id, args) {
    m_internalLocation = Step::getUnset(m_internalLocation);
    m_addressLines.setUnset(true);
    m_postalBox = Step::getUnset(m_postalBox);
    m_town = Step::getUnset(m_town);
    m_region = Step::getUnset(m_region);
    m_postalCode = Step::getUnset(m_postalCode);
    m_country = Step::getUnset(m_country);
}

IfcPostalAddress::~IfcPostalAddress() {
}

bool IfcPostalAddress::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPostalAddress(this);
}

const std::string &IfcPostalAddress::type() const {
    return IfcPostalAddress::s_type.getName();
}

const Step::ClassType &IfcPostalAddress::getClassType() {
    return IfcPostalAddress::s_type;
}

const Step::ClassType &IfcPostalAddress::getType() const {
    return IfcPostalAddress::s_type;
}

bool IfcPostalAddress::isOfType(const Step::ClassType &t) const {
    return IfcPostalAddress::s_type == t ? true : IfcAddress::isOfType(t);
}

IfcLabel IfcPostalAddress::getInternalLocation() {
    if (Step::BaseObject::inited()) {
        return m_internalLocation;
    }
    else {
        return Step::getUnset(m_internalLocation);
    }
}

const IfcLabel IfcPostalAddress::getInternalLocation() const {
    IfcPostalAddress * deConstObject = const_cast< IfcPostalAddress * > (this);
    return deConstObject->getInternalLocation();
}

void IfcPostalAddress::setInternalLocation(const IfcLabel &value) {
    m_internalLocation = value;
}

void IfcPostalAddress::unsetInternalLocation() {
    m_internalLocation = Step::getUnset(getInternalLocation());
}

bool IfcPostalAddress::testInternalLocation() const {
    return !Step::isUnset(getInternalLocation());
}

List_IfcLabel_1_n &IfcPostalAddress::getAddressLines() {
    if (Step::BaseObject::inited()) {
        return m_addressLines;
    }
    else {
        m_addressLines.setUnset(true);
        return m_addressLines;
    }
}

const List_IfcLabel_1_n &IfcPostalAddress::getAddressLines() const {
    IfcPostalAddress * deConstObject = const_cast< IfcPostalAddress * > (this);
    return deConstObject->getAddressLines();
}

void IfcPostalAddress::setAddressLines(const List_IfcLabel_1_n &value) {
    m_addressLines = value;
}

void IfcPostalAddress::unsetAddressLines() {
    m_addressLines.clear();
    m_addressLines.setUnset(true);
}

bool IfcPostalAddress::testAddressLines() const {
    return !m_addressLines.isUnset();
}

IfcLabel IfcPostalAddress::getPostalBox() {
    if (Step::BaseObject::inited()) {
        return m_postalBox;
    }
    else {
        return Step::getUnset(m_postalBox);
    }
}

const IfcLabel IfcPostalAddress::getPostalBox() const {
    IfcPostalAddress * deConstObject = const_cast< IfcPostalAddress * > (this);
    return deConstObject->getPostalBox();
}

void IfcPostalAddress::setPostalBox(const IfcLabel &value) {
    m_postalBox = value;
}

void IfcPostalAddress::unsetPostalBox() {
    m_postalBox = Step::getUnset(getPostalBox());
}

bool IfcPostalAddress::testPostalBox() const {
    return !Step::isUnset(getPostalBox());
}

IfcLabel IfcPostalAddress::getTown() {
    if (Step::BaseObject::inited()) {
        return m_town;
    }
    else {
        return Step::getUnset(m_town);
    }
}

const IfcLabel IfcPostalAddress::getTown() const {
    IfcPostalAddress * deConstObject = const_cast< IfcPostalAddress * > (this);
    return deConstObject->getTown();
}

void IfcPostalAddress::setTown(const IfcLabel &value) {
    m_town = value;
}

void IfcPostalAddress::unsetTown() {
    m_town = Step::getUnset(getTown());
}

bool IfcPostalAddress::testTown() const {
    return !Step::isUnset(getTown());
}

IfcLabel IfcPostalAddress::getRegion() {
    if (Step::BaseObject::inited()) {
        return m_region;
    }
    else {
        return Step::getUnset(m_region);
    }
}

const IfcLabel IfcPostalAddress::getRegion() const {
    IfcPostalAddress * deConstObject = const_cast< IfcPostalAddress * > (this);
    return deConstObject->getRegion();
}

void IfcPostalAddress::setRegion(const IfcLabel &value) {
    m_region = value;
}

void IfcPostalAddress::unsetRegion() {
    m_region = Step::getUnset(getRegion());
}

bool IfcPostalAddress::testRegion() const {
    return !Step::isUnset(getRegion());
}

IfcLabel IfcPostalAddress::getPostalCode() {
    if (Step::BaseObject::inited()) {
        return m_postalCode;
    }
    else {
        return Step::getUnset(m_postalCode);
    }
}

const IfcLabel IfcPostalAddress::getPostalCode() const {
    IfcPostalAddress * deConstObject = const_cast< IfcPostalAddress * > (this);
    return deConstObject->getPostalCode();
}

void IfcPostalAddress::setPostalCode(const IfcLabel &value) {
    m_postalCode = value;
}

void IfcPostalAddress::unsetPostalCode() {
    m_postalCode = Step::getUnset(getPostalCode());
}

bool IfcPostalAddress::testPostalCode() const {
    return !Step::isUnset(getPostalCode());
}

IfcLabel IfcPostalAddress::getCountry() {
    if (Step::BaseObject::inited()) {
        return m_country;
    }
    else {
        return Step::getUnset(m_country);
    }
}

const IfcLabel IfcPostalAddress::getCountry() const {
    IfcPostalAddress * deConstObject = const_cast< IfcPostalAddress * > (this);
    return deConstObject->getCountry();
}

void IfcPostalAddress::setCountry(const IfcLabel &value) {
    m_country = value;
}

void IfcPostalAddress::unsetCountry() {
    m_country = Step::getUnset(getCountry());
}

bool IfcPostalAddress::testCountry() const {
    return !Step::isUnset(getCountry());
}

bool IfcPostalAddress::init() {
    bool status = IfcAddress::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_internalLocation = Step::getUnset(m_internalLocation);
    }
    else {
        m_internalLocation = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_addressLines.setUnset(true);
    }
    else {
        m_addressLines.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                IfcLabel attr2;
                attr2 = Step::String::fromSPF(str1);
                m_addressLines.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_postalBox = Step::getUnset(m_postalBox);
    }
    else {
        m_postalBox = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_town = Step::getUnset(m_town);
    }
    else {
        m_town = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_region = Step::getUnset(m_region);
    }
    else {
        m_region = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_postalCode = Step::getUnset(m_postalCode);
    }
    else {
        m_postalCode = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_country = Step::getUnset(m_country);
    }
    else {
        m_country = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcPostalAddress::copy(const IfcPostalAddress &obj, const CopyOp &copyop) {
    Step::List< IfcLabel, 1 >::const_iterator it_m_addressLines;
    IfcAddress::copy(obj, copyop);
    setInternalLocation(obj.m_internalLocation);
    for (it_m_addressLines = obj.m_addressLines.begin(); it_m_addressLines != obj.m_addressLines.end(); ++it_m_addressLines) {
        IfcLabel copyTarget = (*it_m_addressLines);
        m_addressLines.push_back(copyTarget);
    }
    setPostalBox(obj.m_postalBox);
    setTown(obj.m_town);
    setRegion(obj.m_region);
    setPostalCode(obj.m_postalCode);
    setCountry(obj.m_country);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPostalAddress::s_type("IfcPostalAddress");
