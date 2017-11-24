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



#include <ifc2x3/IfcPhysicalComplexQuantity.h>


#include <ifc2x3/CopyOp.h>
#include <ifc2x3/IfcPhysicalQuantity.h>
#include <ifc2x3/Visitor.h>
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>


#include <string>

#include "precompiled.h"

using namespace ifc2x3;

Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::Inverted_IfcPhysicalComplexQuantity_HasQuantities_type():
    mOwner(0)
{
}

void Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::setOwner(IfcPhysicalComplexQuantity *owner) {
    mOwner = owner;
}

void Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::insert(const Step::RefPtr< IfcPhysicalQuantity > &value) throw(std::out_of_range) {
    IfcPhysicalQuantity *inverse = const_cast< IfcPhysicalQuantity * > (value.get());
    Set_IfcPhysicalQuantity_1_n::insert(value);
    inverse->m_partOfComplex.insert(mOwner);
}

Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::size_type Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::erase(const Step::RefPtr< IfcPhysicalQuantity > &value) {
    IfcPhysicalQuantity *inverse = const_cast< IfcPhysicalQuantity * > (value.get());
    inverse->m_partOfComplex.erase(mOwner);
    return Set_IfcPhysicalQuantity_1_n::erase(value);
}

void Inverted_IfcPhysicalComplexQuantity_HasQuantities_type::clear() {
    while (size()) {
        erase(*begin());
    }
}

IfcPhysicalComplexQuantity::IfcPhysicalComplexQuantity(Step::Id id, Step::SPFData *args) : IfcPhysicalQuantity(id, args) {
    m_hasQuantities.setOwner(this);
    m_discrimination = Step::getUnset(m_discrimination);
    m_quality = Step::getUnset(m_quality);
    m_usage = Step::getUnset(m_usage);
}

IfcPhysicalComplexQuantity::~IfcPhysicalComplexQuantity() {
}

bool IfcPhysicalComplexQuantity::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPhysicalComplexQuantity(this);
}

const std::string &IfcPhysicalComplexQuantity::type() const {
    return IfcPhysicalComplexQuantity::s_type.getName();
}

const Step::ClassType &IfcPhysicalComplexQuantity::getClassType() {
    return IfcPhysicalComplexQuantity::s_type;
}

const Step::ClassType &IfcPhysicalComplexQuantity::getType() const {
    return IfcPhysicalComplexQuantity::s_type;
}

bool IfcPhysicalComplexQuantity::isOfType(const Step::ClassType &t) const {
    return IfcPhysicalComplexQuantity::s_type == t ? true : IfcPhysicalQuantity::isOfType(t);
}

Set_IfcPhysicalQuantity_1_n &IfcPhysicalComplexQuantity::getHasQuantities() {
    if (Step::BaseObject::inited()) {
        return m_hasQuantities;
    }
    else {
        m_hasQuantities.setUnset(true);
        return m_hasQuantities;
    }
}

const Set_IfcPhysicalQuantity_1_n &IfcPhysicalComplexQuantity::getHasQuantities() const {
    IfcPhysicalComplexQuantity * deConstObject = const_cast< IfcPhysicalComplexQuantity * > (this);
    return deConstObject->getHasQuantities();
}

void IfcPhysicalComplexQuantity::unsetHasQuantities() {
    m_hasQuantities.clear();
    m_hasQuantities.setUnset(true);
}

bool IfcPhysicalComplexQuantity::testHasQuantities() const {
    return !m_hasQuantities.isUnset();
}

IfcLabel IfcPhysicalComplexQuantity::getDiscrimination() {
    if (Step::BaseObject::inited()) {
        return m_discrimination;
    }
    else {
        return Step::getUnset(m_discrimination);
    }
}

const IfcLabel IfcPhysicalComplexQuantity::getDiscrimination() const {
    IfcPhysicalComplexQuantity * deConstObject = const_cast< IfcPhysicalComplexQuantity * > (this);
    return deConstObject->getDiscrimination();
}

void IfcPhysicalComplexQuantity::setDiscrimination(const IfcLabel &value) {
    m_discrimination = value;
}

void IfcPhysicalComplexQuantity::unsetDiscrimination() {
    m_discrimination = Step::getUnset(getDiscrimination());
}

bool IfcPhysicalComplexQuantity::testDiscrimination() const {
    return !Step::isUnset(getDiscrimination());
}

IfcLabel IfcPhysicalComplexQuantity::getQuality() {
    if (Step::BaseObject::inited()) {
        return m_quality;
    }
    else {
        return Step::getUnset(m_quality);
    }
}

const IfcLabel IfcPhysicalComplexQuantity::getQuality() const {
    IfcPhysicalComplexQuantity * deConstObject = const_cast< IfcPhysicalComplexQuantity * > (this);
    return deConstObject->getQuality();
}

void IfcPhysicalComplexQuantity::setQuality(const IfcLabel &value) {
    m_quality = value;
}

void IfcPhysicalComplexQuantity::unsetQuality() {
    m_quality = Step::getUnset(getQuality());
}

bool IfcPhysicalComplexQuantity::testQuality() const {
    return !Step::isUnset(getQuality());
}

IfcLabel IfcPhysicalComplexQuantity::getUsage() {
    if (Step::BaseObject::inited()) {
        return m_usage;
    }
    else {
        return Step::getUnset(m_usage);
    }
}

const IfcLabel IfcPhysicalComplexQuantity::getUsage() const {
    IfcPhysicalComplexQuantity * deConstObject = const_cast< IfcPhysicalComplexQuantity * > (this);
    return deConstObject->getUsage();
}

void IfcPhysicalComplexQuantity::setUsage(const IfcLabel &value) {
    m_usage = value;
}

void IfcPhysicalComplexQuantity::unsetUsage() {
    m_usage = Step::getUnset(getUsage());
}

bool IfcPhysicalComplexQuantity::testUsage() const {
    return !Step::isUnset(getUsage());
}

bool IfcPhysicalComplexQuantity::init() {
    bool status = IfcPhysicalQuantity::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_hasQuantities.setUnset(true);
    }
    else {
        m_hasQuantities.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcPhysicalQuantity > attr2;
                attr2 = static_cast< IfcPhysicalQuantity * > (m_expressDataSet->get(Step::getIdParam(str1)));
                if (attr2.valid()) m_hasQuantities.insert(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_discrimination = Step::getUnset(m_discrimination);
    }
    else {
        m_discrimination = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_quality = Step::getUnset(m_quality);
    }
    else {
        m_quality = Step::String::fromSPF(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_usage = Step::getUnset(m_usage);
    }
    else {
        m_usage = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcPhysicalComplexQuantity::copy(const IfcPhysicalComplexQuantity &obj, const CopyOp &copyop) {
    Step::Set< Step::RefPtr< IfcPhysicalQuantity >, 1 >::const_iterator it_m_hasQuantities;
    IfcPhysicalQuantity::copy(obj, copyop);
    for (it_m_hasQuantities = obj.m_hasQuantities.begin(); it_m_hasQuantities != obj.m_hasQuantities.end(); ++it_m_hasQuantities) {
        Step::RefPtr< IfcPhysicalQuantity > copyTarget = (IfcPhysicalQuantity *) (copyop((*it_m_hasQuantities).get()));
        m_hasQuantities.insert(copyTarget.get());
    }
    setDiscrimination(obj.m_discrimination);
    setQuality(obj.m_quality);
    setUsage(obj.m_usage);
    return;
}

IFC2X3_EXPORT Step::ClassType IfcPhysicalComplexQuantity::s_type("IfcPhysicalComplexQuantity");
